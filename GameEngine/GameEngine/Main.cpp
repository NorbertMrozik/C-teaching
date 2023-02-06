#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "Input.h"
#include "Screen.h"

bool isGameRunning = true;
Screen screen;
Input input;

int main(int argc, char* argv[])
{
	// Initialize 
	screen.Initialize();
	screen.CreateWindow();

	// Loading image
	SDL_Surface* imageData = nullptr;
		
	imageData = IMG_Load("../Textures/background.jpg");

	if (!imageData)
	{
		std::cout << "Error loading image." << std::endl;
	}

	SDL_Texture* texture = nullptr;
	texture = SDL_CreateTextureFromSurface(screen.GetRenderer(), imageData);

	if (!texture)
	{
		std::cout << "Error generating texture from raw image." << std::endl;
	}
	SDL_FreeSurface(imageData);
	//Main loop ======================================================================================================
	while (isGameRunning)
	{
		//Clear the frame buffer
		screen.Clear();

		//Render great things...
		input.Update();
		//input.TrackMousePosition();

		// 1600 x 800
		SDL_Point centrePoint = { 0, 0 };

		SDL_Rect src = { 0, 0, 1600, 800 };
		SDL_Rect dst = { 0, 0, 1280, 720 };

		SDL_RenderCopyEx(screen.GetRenderer(), texture, &src, &dst, 0.0, &centrePoint, SDL_FLIP_NONE);

		//Swap the frame buffer	
		screen.RenderScreen();
		if (input.IsXPressed())
		{
			std::cout << "X got pressed." << std::endl;
			isGameRunning = false;
		}
	}

	//Shutdown =====================================================================================================
	screen.Shutdown();
	return 0;
}
#include <iostream>
#include <string>
#include <SDL.h>

bool isGameRunning = true;
SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;


int main(int argc, char* argv[])
{
	int errorCode = SDL_Init(SDL_INIT_EVERYTHING);
	
	if (errorCode == -1)
	{
		std::cout << "SDL did not initialize." << std::endl;
		system("pause");
		return 0;
	}

	window = SDL_CreateWindow("SDL Game Engine", //window title
		SDL_WINDOWPOS_CENTERED, //x pos
		SDL_WINDOWPOS_CENTERED, //y pos
		1280, 720, //resolution
		0); //flag

	if (!window)
	{
		std::cout << "Error creating window" << std::endl;
		system("pause");
		return 0;
	}

	renderer = SDL_CreateRenderer(window, // the pointer to the window handle (create this first!)
		-1, //Let SDL find the first available GPU driver
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC); //Combo for GPU rendering and Vsync

	if (!renderer)
	{
		std::cout << "Rendered could not be created." << std::endl;
		system("pause");
		return 0;
	}

	//Main loop ======================================================================================================
	
	while (isGameRunning)
	{
		//Clear the frame buffer
		SDL_RenderClear(renderer);

		//Render great things...
		//Swap the frame buffer	
		SDL_RenderPresent(renderer);
	}

	//Shutdown =====================================================================================================

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
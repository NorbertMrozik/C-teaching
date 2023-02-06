#include "Screen.h"
#include <iostream>

SDL_Renderer* Screen::GetRenderer() const
{
	return renderer;
}

void Screen::Initialize()
{
	int errorCode = SDL_Init(SDL_INIT_EVERYTHING);

	if (errorCode == -1)
	{
		std::cout << "SDL did not initialize." << std::endl;
		system("pause");
		return;
	}
}

void Screen::CreateWindow()
{
	window = SDL_CreateWindow("SDL Game Engine", //window title
		SDL_WINDOWPOS_CENTERED, //x pos
		SDL_WINDOWPOS_CENTERED, //y pos
		1280, 720, //resolution
		0); //flag
	if (!window)
	{
		std::cout << "Error creating window" << std::endl;
		system("pause");
		return;
	}
	renderer = SDL_CreateRenderer(window, // the pointer to the window handle (create this first!)
		-1, //Let SDL find the first available GPU driver
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC); //Combo for GPU rendering and Vsync

	if (!renderer)
	{
		std::cout << "Rendered could not be created." << std::endl;
		system("pause");
		return;
	}
}

void Screen::Clear()
{
	SDL_RenderClear(renderer);
}

void Screen::RenderScreen()
{
	//SDL_SetRenderDrawColor(renderer, 119, 172, 162, 255);
	SDL_RenderPresent(renderer);
}

void Screen::Shutdown()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

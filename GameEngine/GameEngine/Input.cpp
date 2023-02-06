#include <iostream>
#include <SDL.h>
#include "Input.h"


SDL_Event events;
bool isXPressed = false;

void Input::Update()
{
	while (SDL_PollEvent(&events))
	{
		if (events.type == SDL_MOUSEBUTTONDOWN)
		{
			if (events.button.button == SDL_BUTTON_LEFT)
			{
				std::cout << "Mouse left button clicked" << std::endl;
			}
			if (events.button.button == SDL_BUTTON_MIDDLE)
			{
				std::cout << "Mouse middle button clicked" << std::endl;
			}
			if (events.button.button == SDL_BUTTON_RIGHT)
			{
				std::cout << "Mouse right button clicked" << std::endl;
			}
		}
		if (events.type == SDL_KEYDOWN)
		{
			if (events.key.keysym.sym == SDLK_w)
			{
				std::cout << "Character walks forward." << std::endl;
			}
			if (events.key.keysym.sym == SDLK_a)
			{
				std::cout << "Character walks to the left." << std::endl;
			}
			if (events.key.keysym.sym == SDLK_s)
			{
				std::cout << "Character walks backwards." << std::endl;
			}
			if (events.key.keysym.sym == SDLK_d)
			{
				std::cout << "Character walks to the right." << std::endl;
			}
		}
		if (events.type == SDL_WINDOWEVENT)
		{
			if (events.window.event == SDL_WINDOWEVENT_CLOSE)
			{
				isXPressed = true;
			}
		}
	}
}

void Input::TrackMousePosition()
{
	SDL_GetMouseState(&mousePosition.x, &mousePosition.y);
	std::cout << "Current mouse position is: " << mousePosition.x << ", " << mousePosition.y << std::endl;

}

bool Input::IsXPressed()
{
	return isXPressed;
}


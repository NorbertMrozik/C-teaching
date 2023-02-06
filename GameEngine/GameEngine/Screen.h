#pragma once
#include <SDL.h>

class Screen
{
public:

	SDL_Renderer* GetRenderer() const;
	void Initialize();
	void CreateWindow();
	void Clear();
	void RenderScreen();
	void Shutdown();
private:
	SDL_Renderer* renderer = nullptr;
	SDL_Window* window = nullptr;


};


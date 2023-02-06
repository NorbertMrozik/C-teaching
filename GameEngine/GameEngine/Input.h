#pragma once
#include "Vector.h"

class Input
{

public:
	//behaviours - member functions
	void Update();
	void TrackMousePosition();
	bool IsXPressed();

private:
	//state - data members

	Vector mousePosition;

};


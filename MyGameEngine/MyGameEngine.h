#pragma once

#include <chrono>

#include "types.h"
#include "Camera.h"

class MyGameEngine
{
public:

	enum class RenderModes {RELEASE, DEBUG};

	Camera camera;

	void step(std::chrono::duration<double> dt);
	void render(RenderModes renderMode);

	vec3 positionCube = { 0, 0, 0 }, rotationCube = { 0, 0, 0 }, scaleCube = {1, 1, 1};
};


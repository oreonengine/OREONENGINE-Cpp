#include "pch.h"
#include <iostream>
#include "core\coreEngine.h"

int main()
{
	CoreEngine coreEngine = CoreEngine();
	coreEngine.init();
	coreEngine.start();
}
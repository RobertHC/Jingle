#pragma once
#include "Core.h"

namespace Jingle { // defining the namespace (think std, but better)

	class JINGLE_API Application // By using the JINGLE_API macro we don't have to type out declspec every time
	{

	public:
		Application(); // generic constructor - doesn't do a damn thing
		virtual ~Application(); // virtual - it's defined somewhere else ("Push the responsibility on someone else" - Grant)
		void Run();
	};

	//To be defined in CLIENT, so any application we make will have to figure it out.
	Application* CreateApplication();

}
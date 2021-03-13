#pragma once

#include "Core.h"

namespace Crumble {

	class CRUMBLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in client
	Application* CreateApplication();
}


#include "Application.h"

#include "Crumble/Events/ApplicationEvent.h"
#include "Crumble/Log.h"

namespace Crumble {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		CR_TRACE(e);

		while (true);
	}

}
#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Crumble::Application* Crumble::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Crumble::CreateApplication();
	app->Run();
	delete app;

}

#endif
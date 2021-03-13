#include <Crumble.h>

class Sandbox : public Crumble::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Crumble::Application* Crumble::CreateApplication()
{
	return new Sandbox();
}
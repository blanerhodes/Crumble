#include <Crumble.h>


class ExampleLayer : public Crumble::Layer 
{
public:
	ExampleLayer() : Layer("Example") {}

	void OnUpdate() override
	{
		CR_INFO("ExampleLayer::Update");
	}

	void OnEvent(Crumble::Event& event) override
	{
		CR_TRACE("{0}", event);
	}

};

class Sandbox : public Crumble::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Crumble::Application* Crumble::CreateApplication()
{
	return new Sandbox();
}
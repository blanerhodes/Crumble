#include <Crumble.h>


class ExampleLayer : public Crumble::Layer 
{
public:
	ExampleLayer() : Layer("Example") {}

	void OnUpdate() override
	{
		if (Crumble::Input::IsKeyPressed(CR_KEY_TAB))
			CR_INFO("Tab key pressed");
	}

	void OnEvent(Crumble::Event& event) override
	{
		//CR_TRACE("{0}", event);
	}

};

class Sandbox : public Crumble::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Crumble::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Crumble::Application* Crumble::CreateApplication()
{
	return new Sandbox();
}
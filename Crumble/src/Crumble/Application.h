#pragma once

#include "Core.h"

#include "Window.h"
#include "Crumble/LayerStack.h"
#include "Events/Event.h"
#include "Crumble/Events/ApplicationEvent.h"
#include "Crumble/ImGui/ImGuiLayer.h"

namespace Crumble {

	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWindow() { return *m_Window; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;

		static Application* s_Instance;
	};

	//Defined in client
	Application* CreateApplication();
}


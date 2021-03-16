#pragma once

#include "Crumble/Layer.h"
#include "Crumble/Events/ApplicationEvent.h"
#include "Crumble/Events/KeyEvent.h"
#include "Crumble/Events/MouseEvent.h"

namespace Crumble {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;
		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};
}
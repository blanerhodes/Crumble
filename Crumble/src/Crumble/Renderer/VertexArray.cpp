#include "crpch.h"
#include "VertexArray.h"
#include "Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"


namespace Crumble {

	VertexArray* VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:   CR_CORE_ASSERT(false, "RendererAPI::None isn't currently supported"); return nullptr;
		case RendererAPI::API::OpenGL: return new OpenGLVertexArray();
		}

		CR_CORE_ASSERT(false, "Unknown renderer api");
		return nullptr;
	}
}
#include "crpch.h"
#include "Buffer.h"
#include "Renderer.h"
#include "Platform/OpenGL/OpenGLBuffer.h"

namespace Crumble {

	VertexBuffer* VertexBuffer::Create(float* vertices, uint32_t size)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:   CR_CORE_ASSERT(false, "RendererAPI::None isn't currently supported"); return nullptr;
		case RendererAPI::API::OpenGL: return new OpenGLVertexBuffer(vertices, size);
		}

		CR_CORE_ASSERT(false, "Unknown renderer api");
		return nullptr;
	}

	IndexBuffer* IndexBuffer::Create(uint32_t* indices, uint32_t size)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:   CR_CORE_ASSERT(false, "RendererAPI::None isn't currently supported"); return nullptr;
		case RendererAPI::API::OpenGL: return new OpenGLIndexBuffer(indices, size);
		}

		CR_CORE_ASSERT(false, "Unknown renderer api");
		return nullptr;
	}
}

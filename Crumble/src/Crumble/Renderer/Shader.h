#pragma once

#include <string>

namespace Crumble {

	class Shader
	{
	public:
		Shader(const std::string& vertexXrc, const std::string& fragmentSrc);
		~Shader();

		void Bind() const;
		void Unbind() const;
	private:
		uint32_t m_RendererID;
	};
}
#pragma once

#include "Core.h"

namespace JobsGamez {

	class JG_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();

}



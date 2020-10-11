#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern JobsGamez::Application* JobsGamez::CreateApplication();

	int main(int argc, char** argv) {
		auto app = JobsGamez::CreateApplication();
		app->Run();
		delete app;
	}

#endif

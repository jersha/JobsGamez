#pragma once

#ifdef JG_PLATFORM_WINDOWS

extern JobsGamez::Application* JobsGamez::CreateApplication();

int main(int argc, char** argv) {
	JobsGamez::Log::Init();
	JG_CORE_WARN("Initialized Log!");
	int a = 10;
	JG_CORE_INFO("Hello! var={0}", a);

	auto app = JobsGamez::CreateApplication();
	app->Run();
	delete app;
}

#endif

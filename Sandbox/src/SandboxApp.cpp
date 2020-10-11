#include "JobsGamez.h"

class Sandbox : public JobsGamez::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

JobsGamez::Application* JobsGamez::CreateApplication() {
	return new Sandbox();
}
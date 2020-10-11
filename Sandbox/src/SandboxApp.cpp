#include "JobsGamez.h"

class Sandbox : public JobsGamez::Application
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

JobsGamez::Application* JobsGamez::CreateApplication() {
	return new Sandbox;
}
#include "Core.h"

Core& Core::getObject()
{
	if (object == nullptr)
		throw "no defenition";
	else
		return *object;
}
Core::Core(int param) {
	this->param = param;
}
void Core::init(int param)
{
	if (object != nullptr)
		throw "there is already a defenition";
	else
		object= new Core(param);
}

void Core::work()
{
	puts("i am working");
}
Core* Core::object = nullptr;
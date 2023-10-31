#pragma once
#include<iostream>
class Core
{
	int param;
	static Core* object;
public:
	static Core& getObject();
	static void init(int param);
	void work();
private:

	Core(int param);
	void operator=(const Core& otherObject) = delete;
	Core(const Core& otherObject) = delete;
};



// MMPlayer.cpp: 定义应用程序的入口点。
//
#include <iostream>
#include <chrono>
#include <thread>
#include "MMThread/MMThread.h"

class MyMMThread :public MMThread
{
public:
	virtual void run()
	{
		std::cout << "MyMMThread" << std::endl;
	}
};
int main()
{
	MyMMThread t;
	t.start();

	std::this_thread::sleep_for(std::chrono::seconds(2));
	return 0;
}

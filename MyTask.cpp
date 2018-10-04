#include "MyTask.h"
#include <thread>
#include <iostream>
MyTask::MyTask()
{
}


MyTask::~MyTask()
{
}
void MyTask::setdata(int d)
{
	data_ = d;
}
void MyTask::Run()
{
	//将Task类中的虚函数变成实际可以运行的Run函数
	std::cout << "Hello I am "<<data_ << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
}
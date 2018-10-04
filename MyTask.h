#pragma once
#include "Task.h"
//MyTask继承Task类，增加了任务数据这个属性，并且重载了操作符'<'
class MyTask :public Task
{
	friend bool operator<(MyTask  &lv,MyTask &rv)
	{
		return lv.priority_ < rv.priority_;
	}
public:
	MyTask();
	~MyTask();
	virtual void Run();
	void setdata(int d);
private:
	int data_;
};


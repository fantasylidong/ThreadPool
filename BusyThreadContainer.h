#pragma once
#include <list>


class MyThread;//声明

class BusyThreadContainer
{
	
public:
	BusyThreadContainer();//工作线程容器
	~BusyThreadContainer();
	void push(MyThread *m);
	std::list<MyThread*>::size_type size();
	void erase(MyThread *m);//清除某个特定线程

private:
	std::list<MyThread*> busy_thread_container_;
	typedef std::list<MyThread*> Container;
	typedef Container::iterator Iterator;
};


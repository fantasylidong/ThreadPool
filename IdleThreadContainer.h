#pragma once

#include <vector>

class MyThread;
class MyThreadPool;
class IdleThreadContainer
{
	
public:
	IdleThreadContainer();
	~IdleThreadContainer();
	std::vector<MyThread*>::size_type size();
	void push(MyThread *m);//将一个线程放回空闲容器中
	void assign(int n,MyThreadPool* m);	//创建n个线程与线程池m相关联的线程放入空闲容器中
	MyThread* top();
	void pop();
	void erase(MyThread *m);//删除一个指定的线程
private:
	std::vector<MyThread*> idle_thread_container_;
	typedef std::vector<MyThread*> Container;
	typedef Container::iterator Iterator;
};


#pragma once

#include <thread>
#include <mutex>
#include "Task.h"
#include "MyThread.h"
#include "BusyThreadContainer.h"
#include "IdleThreadContainer.h"
#include "TaskContainer.h"

class MyThread;

class MyThreadPool
{
public:
	
	MyThreadPool(){}
	MyThreadPool(int number);//构造MyThreadPool，创建包含number个线程的空闲容器
	~MyThreadPool();
	void AddTask(Task *Task,int priority);//添加一个优先级为priority的任务到任务容器中
	void AddIdleThread(int n);//在创建n个空闲线程到空闲容器中
	void RemoveThreadFromBusy(MyThread *myThread);//将一个线程从工作容器中删除，并移回空闲容器中
	void Start();//判断是否有空闲线程，如有将任务从从任务容器中提出，放入空闲容器中，等待执行
	void EndMyThreadPool();//结束线程池的运行
private:
	BusyThreadContainer busy_thread_container_;
	IdleThreadContainer idle_thread_container_;
	bool issurvive_;//判断线程池是否alive
	TaskContainer task_container_;
	std::thread thread_this_;
	std::mutex busy_mutex_;
	std::mutex idle_mutex_;
	std::mutex task_mutex_;
	int number_of_thread_;
};

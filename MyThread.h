#pragma once

#include "Task.h"
#include <thread>


class MyThreadPool;
class Task;
class MyThread
{
	friend bool operator==(MyThread my1, MyThread my2);
	friend bool operator!=(MyThread my1, MyThread my2);
public:
	MyThread(MyThreadPool *pool); //����һ��MyThread���󣬽��Լ���ָ�����̳߳����������
	void Assign(Task *Task);//��һ����������߳����������
	void Run();//������Task��Run������ͬʱ��Task��Run�����������Լ��ӹ��������ƻؿ�������
	void StartThread();//ִ���̵߳�Run��������ִ����Task��Run����
	int getthreadid();
	void setisdetach(bool isdetach);	//�����߳������е�ʱ����join����detach��
private:
	MyThreadPool *mythreadpool_;
	static int  s_threadnumber;
	bool isdetach_;
	Task *task_;
	int threadid_;
	std::thread thread_;
};





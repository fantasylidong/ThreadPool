#include "TaskContainer.h"

//任务容器的操作函数
TaskContainer::TaskContainer()
{
}


TaskContainer::~TaskContainer()
{
}
void TaskContainer::push(Task* t)
{
	task_container_.push(t);
}
Task* TaskContainer::top()
{
	return task_container_.top();
}
void TaskContainer::pop()
{
	task_container_.pop();
}
std::priority_queue<Task*>::size_type  TaskContainer::size()
{
	return task_container_.size();
}
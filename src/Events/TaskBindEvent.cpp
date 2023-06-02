#include "TaskBindEvent.h"

namespace events
{
    TaskBindEvent::TaskBindEvent(const std::function<void()>& task)
        : IEvent(EventType::TaskBind)
        , task_(task)
    {
    }

    void TaskBindEvent::execute()
    {
        if (task_) task_();
    }
}
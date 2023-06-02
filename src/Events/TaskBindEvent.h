#pragma once
#include "IEvent.h"

#include <functional>

namespace events
{
    class TaskBindEvent : public IEvent
    {
    public:
        TaskBindEvent(const std::function<void()>& task);
    protected:
        virtual void execute() override;
    private:
        std::function<void()> task_;
    };
}
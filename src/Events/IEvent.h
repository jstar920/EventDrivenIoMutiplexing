#pragma once
#include "EventType.h"
namespace events
{
    class IEvent
    {
    public:
        EventType type {EventType::Normal};
    public:
        IEvent() = delete;
        IEvent(EventType type) : type(type) {}
        virtual ~IEvent() = default;
        virtual void execute() = 0;
    };

}

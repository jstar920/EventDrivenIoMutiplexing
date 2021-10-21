#ifndef _RawEvent_H_
#define _RawEvent_H_
#include <functional>

struct RawEvent
{
    void* event;
    std::function<void(void*)> executor;
}

#endif

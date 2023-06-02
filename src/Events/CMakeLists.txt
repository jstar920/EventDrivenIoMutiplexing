file (GLOB EVENTS_HEADERS "*.h")
file (GLOB EVENTS_SOURCES "*.cpp")

message(STATUS "header files:" ${EVENTS_HEADERS})
message(STATUS "source files:" ${EVENTS_SOURCES})

source_group("headers" FILES ${EVENTS_HEADERS})
source_group("sources" FILES ${EVENTS_SOURCES})

include_directories (.)

add_library(events SHARED ${EVENTS_HEADERS} ${EVENTS_SOURCES})
add_library(events_static STATIC ${EVENTS_HEADERS} ${EVENTS_SOURCES})

set_property(TARGET events PROPERTY FOLDER "libraries")

#set_target_properties(events PROPERTIES RUNTIME_OUTPUT_DIRECTORY %{PROJECT_BINARY_DIR}/bin)

install (TARGETS events
         RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install
         LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/_install
)

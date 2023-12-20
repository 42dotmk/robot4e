add_library(robot4e_hal_library INTERFACE)
target_include_directories(robot4e_hal_library INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
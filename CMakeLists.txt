cmake_minimum_required(VERSION 3.16)
project(SynthCreator LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(UNIX)
    find_package(X11 REQUIRED)
endif(UNIX)

add_subdirectory(submodules/glfw)

add_executable(SynthCreator
        main.cpp

        glad/src/glad.c

        submodules/imgui/imgui.cpp
        submodules/imgui/imgui_demo.cpp
        submodules/imgui/imgui_widgets.cpp
        submodules/imgui/imgui_tables.cpp
        submodules/imgui/imgui_draw.cpp
        submodules/imgui/backends/imgui_impl_opengl3.cpp
        submodules/imgui/backends/imgui_impl_glfw.cpp
)

add_subdirectory(src/rendering_backend)
add_subdirectory(src/ui)

target_compile_options(SynthCreator PRIVATE
        $<$<CXX_COMPILER_ID:GNU,Clang>:-Werror>
        $<$<CXX_COMPILER_ID:MSVC>:/WX>
)

target_link_libraries(SynthCreator PUBLIC
        glfw
        ${X11_LIBRARIES}
)

target_include_directories(SynthCreator PUBLIC
        include

        glad/include
        submodules/glfw/include
        submodules/imgui
)
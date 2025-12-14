
if(UNIX)
    find_package(X11 REQUIRED)

endif(UNIX)

add_library(RenderingBackend STATIC
        AppWindow.cpp
        ../../glad/src/glad.c
        ../../include/rendering_backend/AppWindow.h

        ../../submodules/imgui/imgui.cpp
        ../../submodules/imgui/imgui_draw.cpp
        ../../submodules/imgui/imgui_tables.cpp
        ../../submodules/imgui/imgui_widgets.cpp
        ../../submodules/imgui/imgui_demo.cpp
        ../../submodules/imgui/backends/imgui_impl_glfw.cpp
        ../../submodules/imgui/backends/imgui_impl_opengl3.cpp
)

target_compile_options(RenderingBackend PRIVATE
        $<$<CXX_COMPILER_ID:GNU,Clang>:-Werror>
        $<$<CXX_COMPILER_ID:MSVC>:/WX>
)

target_include_directories(RenderingBackend PUBLIC
        ${CMAKE_SOURCE_DIR}/include
        ../../submodules/glfw/include
        ../../submodules/imgui
        ../../glad/include
)

target_link_libraries(RenderingBackend PUBLIC
        glfw
        ${X11_LIBRARIES}
)
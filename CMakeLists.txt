cmake_minimum_required(VERSION 3.16)
project(SynthCreator LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(submodules/glfw)
add_subdirectory(src/rendering_backend)

add_executable(SynthCreator main.cpp)

target_compile_options(SynthCreator PRIVATE
        $<$<CXX_COMPILER_ID:GNU,Clang>:-Werror>
        $<$<CXX_COMPILER_ID:MSVC>:/WX>
)

target_link_libraries(SynthCreator PUBLIC
        glfw
        RenderingBackend
)

target_include_directories(SynthCreator PUBLIC
        include

        glad/include

        submodules/glfw/include
)
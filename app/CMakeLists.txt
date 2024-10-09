# Create a library from the src.cpp file
add_library(PID_lib
  # list of source cpp files:
  src.cpp
)

target_include_directories(PID_lib PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(shell-app
  main.cpp
)

target_link_libraries(shell-app PID_lib)
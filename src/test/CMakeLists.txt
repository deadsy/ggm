cmake_minimum_required(VERSION 3.13.1)

add_executable(ggm_test
  log.c
  linux.c
  main.c
)

target_link_libraries(ggm_test
  ggm)

target_compile_options(ggm_test PRIVATE
	-Wall
  -Wextra
  -Wstrict-prototypes
  -Wno-unused-parameter
  -Werror
)

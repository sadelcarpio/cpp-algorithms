project(Algorithms)
cmake_minimum_required(VERSION 3.22)
set(CMAKE_EXE_LINKER_FLAGS "-static")
FILE(GLOB_RECURSE sources "utils/*.cpp" "utils/*.hpp")
add_executable(bubble_sort cap_2/bubble_sort.cpp ${sources})
add_executable(insertion_sort cap_2/insertion_sort.cpp ${sources})
add_executable(merge_sort cap_2/merge_sort.cpp ${sources})
add_executable(ejercicios_1 cap_2/ejercicios_1.cpp ${sources})
add_executable(inversions cap_2/inversions.cpp ${sources})
add_executable(selection_sort cap_2/selection_sort.cpp ${sources})
add_executable(references cpp/references.cpp)
add_executable(templates cpp/templates.cpp)
add_executable(better_than_average codewars/better_than_average.cpp ${sources})
add_executable(bmi codewars/bmi.cpp)
add_executable(words_to_array codewars/words_to_array.cpp ${sources})
add_executable(total_points codewars/total_points.cpp)
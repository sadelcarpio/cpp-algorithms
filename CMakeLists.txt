cmake_minimum_required(VERSION 3.22)
project(Algorithms)
set(CMAKE_EXE_LINKER_FLAGS "-static")
FILE(GLOB_RECURSE sources "utils/*.cpp" "utils/*.hpp")
add_subdirectory(Google_tests)

# getting-started-sorting-algorithms
add_executable(bubble_sort 1-foundations/getting-started-sorting-algorithms/bubble_sort.cpp ${sources})
add_executable(insertion_sort 1-foundations/getting-started-sorting-algorithms/insertion_sort.cpp ${sources})
add_executable(merge_sort 1-foundations/getting-started-sorting-algorithms/merge_sort.cpp ${sources})
add_executable(ejercicios_1 1-foundations/getting-started-sorting-algorithms/ejercicios_1.cpp ${sources})
add_executable(inversions 1-foundations/getting-started-sorting-algorithms/inversions.cpp ${sources})
add_executable(selection_sort 1-foundations/getting-started-sorting-algorithms/selection_sort.cpp ${sources})

# cpp
add_executable(references cpp/references.cpp)
add_executable(templates cpp/templates.cpp)

# codewars
add_executable(better_than_average codewars/better_than_average.cpp ${sources})
add_executable(bmi codewars/bmi.cpp)
add_executable(words_to_array codewars/words_to_array.cpp ${sources})
add_executable(total_points codewars/total_points.cpp)
add_executable(magnets codewars/magnet_particles_in_boxes.cpp)
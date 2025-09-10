# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Lesson3_Classes_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Lesson3_Classes_autogen.dir/ParseCache.txt"
  "Lesson3_Classes_autogen"
  )
endif()

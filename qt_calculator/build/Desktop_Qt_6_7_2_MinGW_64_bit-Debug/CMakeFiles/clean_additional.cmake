# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qtcrashcourse_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qtcrashcourse_autogen.dir\\ParseCache.txt"
  "qtcrashcourse_autogen"
  )
endif()

# CMakeLists.txt
# 
# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.10)

# set the project name
project(Report03 C)

# build static and dynamic library
add_library(libcalcEuclideanDistance STATIC func1.c)
add_library(libcalcManhattanDistance SHARED func2.c)

# add the executable
# 下のlink libraryで，libcalcEuclideanDistanceとlibcalcManhattanDistanceをリンクすることになるので，
# ここで，
# add_executable(report03 report03.c func1.c func2.c)
# とする必要は無い．
add_executable(report03 report03.c)

# link library
target_link_libraries(report03 libcalcEuclideanDistance libcalcManhattanDistance m)

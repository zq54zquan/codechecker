add_executable (a.out test.cpp util.cpp difftool.cpp codecheck.cpp strcheck.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -std=c++11 -stdlib=libc++")
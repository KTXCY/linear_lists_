cmake_minimum_required(VERSION 3.28)
project(linear_lists_)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_executable(test01 SqList/SqList.c;SqList/SqList.h;SqList/test01.c)

add_executable(test02 LinkList/Linklist.c;LinkList/Linklist.h;LinkList/test02.c)
add_executable(test03 CirLinkList/test03.c;CirLinkList/CirLinkList.c;CirLinkList/CirLinkList.h)
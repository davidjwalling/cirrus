cmake_minimum_required(VERSION 3.10)
project(cirrus LANGUAGES C)
if(CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    include(GNUInstallDirs)
endif()
if(CMAKE_C_COMPILER_ID MATCHES "MSVC")
    add_definitions(
        -D_WIN32_WINNT_0x0601
        -DNOMINMAX
        -DVC_EXTRALEAN
        -DWIN32_LEAN_AND_MEAN
        -D_CRT_SECURE_NO_WARNINGS
        -D_SCL_SECURE_NO_WARNINGS
        -D_WINSOCK_DEPRECATED_NO_WARNINGS
    )
endif()
set (CIRRUS_SRCS
    cirrus.c
    driver.c
)
add_executable(cirrus ${CIRRUS_SRCS})
install (TARGETS cirrus
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

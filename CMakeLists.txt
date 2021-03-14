project(cmake-playground)

add_executable(foo foo.cc)

if (STRIP)
    set_target_properties(foo PROPERTIES LINK_FLAGS_RELEASE -s)
endif()

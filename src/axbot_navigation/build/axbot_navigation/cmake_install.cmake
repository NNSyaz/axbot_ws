# Install script for directory: /media/roboserver/DATA/axbot_ws/src/axbot_navigation

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
<<<<<<< HEAD
  set(CMAKE_INSTALL_PREFIX "/media/roboserver/DATA/axbot_ws/install/axbot_navigation")
=======
  set(CMAKE_INSTALL_PREFIX "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/install/axbot_navigation")
>>>>>>> 84994c6 (Correction)
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE DIRECTORY FILES
    "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/config"
    "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/launch"
    "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/maps"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/axbot_navigation")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/axbot_navigation")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/axbot_navigation")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/axbot_navigation")
>>>>>>> 84994c6 (Correction)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/ament_prefix_path.dsv")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/ament_prefix_path.dsv")
>>>>>>> 84994c6 (Correction)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/packages/axbot_navigation")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/environment" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_index/share/ament_index/resource_index/packages/axbot_navigation")
>>>>>>> 84994c6 (Correction)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation/cmake" TYPE FILE FILES
<<<<<<< HEAD
    "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_core/axbot_navigationConfig.cmake"
    "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/ament_cmake_core/axbot_navigationConfig-version.cmake"
=======
    "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_core/axbot_navigationConfig.cmake"
    "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/ament_cmake_core/axbot_navigationConfig-version.cmake"
>>>>>>> 84994c6 (Correction)
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/axbot_navigation" TYPE FILE FILES "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/media/roboserver/DATA/axbot_ws/build/axbot_navigation/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/media/roboserver/DATA/axbot_ws/src/axbot_navigation/build/axbot_navigation/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 84994c6 (Correction)
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

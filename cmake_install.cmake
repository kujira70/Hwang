# Install script for directory: C:/Dev/HWang/2012/Code

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ContinuousControl")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Dev/HWang/2012VS2008/application/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/ann/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/backconstraints/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/controller/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/cuda/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/dataexport/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/datamgmt/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/dynamics/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/embed/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/gp/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/gpcm/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/gui/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/kernels/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/action/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/optimization/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/pointsampler/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/priors/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/shaders/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/synthesis/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/tasks/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/util/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/utilities/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/latentprior/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/qpbo/cmake_install.cmake")
  include("C:/Dev/HWang/2012VS2008/Libraries/nlopt-2.2.4/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Dev/HWang/2012VS2008/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

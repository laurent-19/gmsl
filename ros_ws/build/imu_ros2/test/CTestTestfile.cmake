# CMake generated Testfile for 
# Source directory: /home/laurus/workspace/gmsl/ros_ws/src/imu-ros2/test
# Build directory: /home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(imu_ros2_test_node "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test_results/imu_ros2_test/imu_ros2_test_node.gtest.xml" "--package-name" "imu_ros2_test" "--output-file" "/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/ament_cmake_gtest/imu_ros2_test_node.txt" "--command" "/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test/imu_ros2_test_node" "--gtest_output=xml:/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test_results/imu_ros2_test/imu_ros2_test_node.gtest.xml")
set_tests_properties(imu_ros2_test_node PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test/imu_ros2_test_node" TIMEOUT "60" WORKING_DIRECTORY "/home/laurus/workspace/gmsl/ros_ws/build/imu_ros2/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/laurus/workspace/gmsl/ros_ws/src/imu-ros2/test/CMakeLists.txt;120;ament_add_gtest;/home/laurus/workspace/gmsl/ros_ws/src/imu-ros2/test/CMakeLists.txt;0;")
subdirs("../gtest")

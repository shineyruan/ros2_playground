# ros2_playground
A playground holding small toy examples for getting started with ROS 2.

Tested with:
- Ubuntu 20.04 LTS
- ROS Foxy

## Software Requirement
Install ROS 2 Foxy and Colcon with:
```bash
sudo apt install ros-foxy-desktop python3-colcon-common-extensions
```

## Building
Create a workspace with 
```bash
mkdir -p ~/ros2_starter_ws/src
```

Clone the current repo into src folder:
```bash
cd ~/ros2_starter_ws/src
git clone https://github.com/shineyruan/ros2_playground.git
```

Build the current repo with [Colcon](https://colcon.readthedocs.io/en/released/index.html)
```bash
colcon build
```

## Usage
1. **ROS 2 C++ talker and listener** (message communication).
```bash
source install/setup.bash
ros2 run cpp_talker_listener cpp_talker_node
```
In another terminal:
```bash
source install/setup.bash
ros2 run cpp_talker_listener cpp_listener_node
```

## References
* [Colcon](https://colcon.readthedocs.io/en/released/index.html)
* [ROS 2 Documentation: Foxy](https://docs.ros.org/en/foxy/index.html)


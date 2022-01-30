#include <chrono>
#include <rclcpp/rclcpp.hpp>

#include "cpp_service_client/srv/add_three_ints.hpp"

using namespace std::chrono_literals;

int main(int argc, char const *argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("cpp_client");

  if (argc != 4) {
    RCLCPP_ERROR(node->get_logger(), "Usage: client X Y Z");
  }

  return 0;
}

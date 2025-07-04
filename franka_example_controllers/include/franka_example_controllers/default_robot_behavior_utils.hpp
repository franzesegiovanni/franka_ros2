// Copyright (c) 2023 Franka Robotics GmbH
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <franka_msgs/srv/set_full_collision_behavior.hpp>

namespace DefaultRobotBehavior {

inline franka_msgs::srv::SetFullCollisionBehavior::Request::SharedPtr
getDefaultCollisionBehaviorRequest() {
  auto request = std::make_shared<franka_msgs::srv::SetFullCollisionBehavior::Request>();

request->lower_torque_thresholds_nominal = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->upper_torque_thresholds_nominal = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->lower_torque_thresholds_acceleration = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->upper_torque_thresholds_acceleration = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->lower_force_thresholds_nominal = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->upper_force_thresholds_nominal = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->lower_force_thresholds_acceleration = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0};
request->upper_force_thresholds_acceleration = {
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0};

  return request;
}

}  // namespace DefaultRobotBehavior

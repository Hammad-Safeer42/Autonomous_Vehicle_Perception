# Perception Autonomous Vehicle

Welcome to the Perception for Autonomous Vehicle repository!

## Overview

This repository contains code for the perception module of an autonomous vehicle. We utilize the ZED camera for depth estimation, which simplifies the process by outputting depth point cloud data in a topic. Additionally, we integrate YOLOv8, trained on a dataset of over 25,000 images containing traffic cones, for cone detection.

## Requirements

The code has been tested on the following setup:

- **Hardware**: ZED2i camera (For setup instructions, refer to [ZED Camera Documentation](#))
- **Operating System**: Ubuntu 20.04 (May also work on 22.04)
- **ROS Version**: ROS2 Galactic (Possibly compatible with Humble and Foxy, although not yet tested)
- **Dependencies**: 
  - [Ultralytics Library](https://github.com/ultralytics/yolov8) for YOLOv8 (Install using `pip install yolov8`)
  - For more information about YOLOv8, refer to [YOLOv8 Documentation][https://blog.roboflow.com/how-to-train-yolov8-on-a-custom-dataset/#the-yolov8-cli]
  - Other dependencies will be installed when cloning the repository. In case of installation errors, please install them manually:
    - angus_depth_image_transport
    - eufs_msgs
    - image_transport_plugins
    - vision_opencv
    - image_common

----------------------------------------------------------------

## Getting Started

Ensure that you have all the requirements satisfied before proceeding.

### Clone the Repository

`git clone https://github.com/Hammad-Safeer42/Autonomous_Vehicle_Perception.git`


##  Build
Navigate to the cloned repository directory and build using Colcon:


`cd <repository_directory>`

`colcon build`


If all steps have been successful up to this point then proceed with the following:


`Start the ZED camera.`

`Run the Preprocessor node.`

`Run the Depth viewer node.`

###  Contributions
Contributions to enhance the functionality, efficiency, or compatibility of this perception module are welcome. Please refer to the contribution guidelines for more information.

###  License
This project is licensed under the MIT License. Feel free to use and modify the code according to your requirements.

### TESTING VIDEOS:

[![Watch the video](https://img.youtube.com/vi/kP4jntZd6t8/0.jpg)](https://youtube.com/shorts/kP4jntZd6t8?feature=share)


[![Watch the video](https://img.youtube.com/vi/LiHm2GMEMIE/0.jpg)](https://youtu.be/LiHm2GMEMIE)




# BallDetection
Tennis Ball detection via HSV boundaries
### Overview
Project submitted to AI Hackathon (http://www.e2festa.kr/event01.asp)
![AI Hackathon](./image/Capture.PNG)
Our goal was to load a Public WiFi router on a drone, and implement computer vision technology to let the drone find the best fit place to service Public WiFi. Through providing flexible distribution of Public WiFi, we seek to improve the poor Public WiFi performance in concentrated regions(e.g. outdoor concert, city plaza and so on).
### Usage
This project will be implemented in a camera, which will be loaded on a drone, along with a WiFi router.
Since it is a merely a concept blueprint of the original goal, camera will detect tennisballs instead of actual human beings.
### Methodology/Approach
1. Take frame from given video
2. Detect object that fits the calibrated HSV boundaries
(can add new boundaries by adding new conditions in Object.cpp)
### Environment
OS version: Windows 10 Home 64-bit
IDE: Microsoft Visual Studio Enterprise 2019 16.0.0 Preview 1.0
Programming Language: C++
Additional Dependencies: opencv_3.4.3

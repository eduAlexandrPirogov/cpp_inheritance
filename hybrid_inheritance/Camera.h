#pragma once
#include <iostream>

class Camera
{
   public:
       Camera();
       void takePicture();
   protected:
};

Camera::Camera()
{
   std::cout << "Camera's picture\n";
};

void Camera::takePicture()
{
   std::cout << "Camera made a greate picture!\n";
};

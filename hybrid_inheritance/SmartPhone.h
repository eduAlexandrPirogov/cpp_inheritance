#pragma once
#include <iostream>
#include "MusicDevice.h"
#include "Camera.h"

class SmartPhone : public Camera, public MusicDevice
{
    public:
        SmartPhone();
};

SmartPhone::SmartPhone()
{
   std::cout << "SmartPhone's constructor\n";
};

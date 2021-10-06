#pragma once
#include <iostream>

class MusicDevice
{
    public:
        MusicDevice();
        void playMusic();
    protected:
};

MusicDevice::MusicDevice()
{
   std::cout << "MusicDevice's constructor\n";
};

void MusicDevice::playMusic()
{
   std::cout << "Music is playing now\n";
};

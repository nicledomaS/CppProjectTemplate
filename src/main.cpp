#include "GpioChip.h"
#include "Gpio.h"

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#include <linux/gpio.h>
#include <sys/ioctl.h>

#include <chrono>
#include <thread>
#include <iostream>

constexpr auto DeviceName = "/dev/gpiochip1";

int main (int argc, char** argv)
{
    std::cout << "Start program" << std::endl;

    auto chip = std::make_shared<gpio_dev::GpioChip>(DeviceName, "GpioProto");
    gpio_dev::Gpio gpio_0(0, chip);
    gpio_dev::Gpio gpio_1(1, chip);

    bool check = false;

    while(true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        auto value_0 = gpio_0.value();
        auto value_1 = gpio_1.value();

        std::cout << "Current value_0: " << std::to_string(value_0) << std::endl;
        std::cout << "Current value_1: " << std::to_string(value_1) << std::endl;

        gpio_0.setValue(check ? 1 : 0);
        gpio_1.setValue(check ? 0 : 1);

        check = !check;
    }

    return 0;
}
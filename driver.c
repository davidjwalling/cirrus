#include "driver.h"

int DriverStart(DRIVER* driver, int argc, char* argv[])
{
    (void)driver;
    (void)argc;
    (void)argv;
    return driver_ok;
}

void DriverStop(DRIVER* driver)
{
    (void)driver;
}
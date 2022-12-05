#pragma once

enum {
    driver_ok = 0
};

typedef struct driver
{
    int app_error;
} DRIVER;

int DriverStart(DRIVER* driver, int argc, char* argv[]);
void DriverStop(DRIVER* driver);

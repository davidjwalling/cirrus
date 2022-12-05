#include "cirrus.h"
#include "driver.h"

#include <stdio.h> /* fgets, stdin */
#include <string.h> /* strcmp */

/*  
//  We leverage __stdcall on 32-bit compilations, which pops arguments from the
//  stack prior to return. This is not applicable to 64-bit, however, which use
//  registers for argument addressing. Some entry points do require an explicit
//  __cdecl on 32-bit for correct linkage.
*/

int __cdecl main(int argc, char* argv[])
{
    DRIVER driver = { 0 };
    if (driver_ok == DriverStart(&driver, argc, argv)) {
        char line[81];
        while (fgets(line, sizeof line, stdin) && strcmp(cirrus_exit, line));
        DriverStop(&driver);
    }
    return driver.app_error;
}

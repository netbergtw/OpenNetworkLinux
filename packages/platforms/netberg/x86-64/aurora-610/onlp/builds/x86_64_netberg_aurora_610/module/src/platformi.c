
#include <onlp/platformi/base.h>
#include "platform_lib.h"

const char*
onlp_platformi_get(void)
{
    return "x86-64-netberg-aurora-610-r0";
}

int
onlp_platformi_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_manage_fans(void)
{
    /*Ensure switch manager is working*/
    PLATFORM_HWMON_DIAG_LOCK;
    return ONLP_STATUS_E_UNSUPPORTED;
}

int
onlp_platformi_manage_leds(void)
{
    /*Ensure switch manager is working*/
    PLATFORM_HWMON_DIAG_LOCK;
    return ONLP_STATUS_E_UNSUPPORTED;
}

#include <zephyr.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>
#include <drivers/sensor.h>
#include <drivers/eeprom.h>
#include <stdio.h>
#include <logging/log.h>

#include <stdio.h>

LOG_MODULE_REGISTER(main);

void main(void)
{
	while (1) {
		k_msleep(1000);
		LOG_INF(".");
	}
}

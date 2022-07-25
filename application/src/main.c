#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main);

int main(void) {
  while (1) {
    k_msleep(1000);
    LOG_INF(".");
  }

  return 0;
}

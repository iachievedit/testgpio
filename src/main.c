#include <stdio.h>
#include <time.h>
#include <metal/gpio.h>

#define DIG_PIN_2  18
#define DIG_PIN_3  19
#define DIG_PIN_4  20
#define DIG_PIN_5  21
#define DIG_PIN_6  22
#define DIG_PIN_7  23

#define DIG_PIN_14 8
#define DIG_PIN_15 9
#define DIG_PIN_16 10
#define DIG_PIN_17 11
#define DIG_PIN_18 12
#define DIG_PIN_19 13


void delayForSeconds(unsigned seconds) {
	time_t timeout;
	timeout = time(NULL) + seconds;

  while (timeout > time(NULL));
}

int main(void) {

  struct metal_gpio* gpio_device = metal_gpio_get_device(0);
  if (!gpio_device) {
    printf("Unable to obtain GPIO device\n");
    return -1;
  }

  

  metal_gpio_enable_output(gpio_device, DIG_PIN_2);
  metal_gpio_enable_output(gpio_device, DIG_PIN_3);
  metal_gpio_enable_output(gpio_device, DIG_PIN_4);
  metal_gpio_enable_output(gpio_device, DIG_PIN_5);
  metal_gpio_enable_output(gpio_device, DIG_PIN_6);
  metal_gpio_enable_output(gpio_device, DIG_PIN_7);
  metal_gpio_enable_output(gpio_device, DIG_PIN_15);
  metal_gpio_enable_output(gpio_device, DIG_PIN_16);
    //metal_gpio_enable_output(gpio_device, DIG_PIN_17);
    //metal_gpio_enable_output(gpio_device, DIG_PIN_18);
    //metal_gpio_enable_output(gpio_device, DIG_PIN_19);
    
    metal_gpio_set_pin(gpio_device, DIG_PIN_2, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_3, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_4, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_5, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_6, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_7, 1);

    metal_gpio_set_pin(gpio_device, DIG_PIN_15, 1);
    metal_gpio_set_pin(gpio_device, DIG_PIN_16, 1);
    //metal_gpio_set_pin(gpio_device, DIG_PIN_17, 1);
    //metal_gpio_set_pin(gpio_device, DIG_PIN_18, 1);
    //metal_gpio_set_pin(gpio_device, DIG_PIN_19, 1);
    

  printf("Pins set\n");

  return 0;


}
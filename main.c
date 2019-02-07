#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

static void gpio_setup(void) {
    // Enable GPIOC clock.
    rcc_periph_clock_enable(RCC_GPIOC);

    // Set PC13 to 'output push-pull'.
    gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_2_MHZ,
                  GPIO_CNF_OUTPUT_PUSHPULL, GPIO13);
}

int main(void) {
    uint32_t i;

    gpio_setup();

    /* Blink the LED (PA5) on the board. */
    while (1) {
        /* Using API function gpio_toggle(): */
        gpio_toggle(GPIOC, GPIO13); /* LED on/off */
        for (i = 0; i < 80000; i++) /* Wait a bit. */
                __asm__("nop");
    }
}

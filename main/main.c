#include <stdio.h>
#include <esp_log.h>
#include <ssd1306.h>

void app_main(void)
{
    init_ssd1306();

    while(1)
    {   
        ssd1306_print_str(18, 0, "Hello!", false);
        ssd1306_print_str(18, 17, "soy", false);
        ssd1306_print_str(28, 27, "Nath", false);
        ssd1306_print_str(38, 37, "MR7", false);
        ssd1306_print_str(28, 47, "Exitos", false);

        ssd1306_display();
        vTaskDelay(3000 / portTICK_PERIOD_MS);
    }
}
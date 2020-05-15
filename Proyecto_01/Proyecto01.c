#include <windows.h>
#include "uframework.h"

int main()
{
    initialize("Proyecto_01", 1200, 680, false);

    bool simplificador_de_codigo_01 = true;

    create_sprite("s_floor01", 1);
    add_frame_to_sprite("s_floor01", "Imagenes/Floor01.png");
    float floor01_size = 40;
    float xfloor01 = 0;
    float yfloor01 = 680;

    if (simplificador_de_codigo_01 = true)
        {
            ///Nivel 01.

            while (xfloor01 < 1200)
                {
                    add_object(xfloor01, yfloor01 - floor01_size, floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            while (xfloor01 < 1200)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 17), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            while (yfloor01 > -40)
                {
                    add_object(xfloor01, yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 - floor01_size;
            }
            yfloor01 = 680;

            while (yfloor01 > -40)
                {
                    add_object(xfloor01 + (floor01_size * 29), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 - floor01_size;
            }
            yfloor01 = 680;

            while (yfloor01 > -40)
                {
                    add_object(xfloor01 + (floor01_size * 3), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 - floor01_size;
            }
            yfloor01 = 680;
    }


    while(!is_window_closed())
        {
            Sleep(20);
    }
}

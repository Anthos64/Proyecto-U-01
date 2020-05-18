#include <windows.h>
#include "uframework.h"
#include <stdio.h>

int main()
{
    initialize("Proyecto_01", 1200, 680, false);

    bool simplificador_de_codigo__nivel_01 = true, simplificador_de_codigo__objetos, simplificador_de_codigo__numeros = true;



    create_sprite("s_temporizador", 1);
    add_frame_to_sprite("s_temporizador", "Imagenes/Interfaz/Temporizador_02.png");
    float temporizador_xsize = 320;
    float temporizador_ysize = 80;
    float xtemporizador = 0;
    float ytemporizador = 0;



    create_sprite("s_floor01", 1);
    add_frame_to_sprite("s_floor01", "Imagenes/Fondo/Floor01.png");
    float floor01_size = 40;
    float xfloor01 = 0;
    float yfloor01 = 680;

    if (simplificador_de_codigo__numeros = true)
        {
            create_sprite("s_00", 1);
            add_frame_to_sprite("s_00", "Imagenes/Interfaz/Numeros/00.png");
            float size00 = 80;
            float x00 = 135;
            float y00 = 0;

            add_indexed_object("o_00", x00 - (size00 * 2), y00, size00 * 3, size00, "s_00");

            create_sprite("s_01", 1);
            add_frame_to_sprite("s_01", "Imagenes/Interfaz/Numeros/01.png");
            float size01 = 80;
            float x01 = 15;
            float y01 = 0;

            add_indexed_object("o_01", x01, y01, size01 * 3, size01, "s_01");

            create_sprite("s_02", 1);
            add_frame_to_sprite("s_02", "Imagenes/Interfaz/Numeros/02.png");
            float size02 = 80;
            float x02 = 70;
            float y02 = 0;

            add_indexed_object("o_02", x02, y02, size02 * 3, size02, "s_02");

            create_sprite("s_03", 1);
            add_frame_to_sprite("s_03", "Imagenes/Interfaz/Numeros/03.png");
            float size03 = 80;
            float x03 = 105;
            float y03 = 0;

            add_indexed_object("o_03", x03, y03, size03 * 3, size03, "s_03");


    }

    if (simplificador_de_codigo__nivel_01 = true)
        {
            ///Nivel 01.

            while (xfloor01 < 1120)
                {
                    add_object(xfloor01, yfloor01 - floor01_size, floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            while (xfloor01 < 1120)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 15), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            while (yfloor01 > 40)
                {
                    add_object(xfloor01, yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 - floor01_size;
            }
            yfloor01 = 680;

            while (yfloor01 > 40)
                {
                    add_object(xfloor01 + (floor01_size * 27), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 - floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 3), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 4), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 5), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 8), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 9), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 18), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 19), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 22), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 23), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 200;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 24), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 120;
            while (yfloor01 < 280)
                {
                    add_object(xfloor01 + (floor01_size * 15), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 120;
            while (yfloor01 < 280)
                {
                    add_object(xfloor01 + (floor01_size * 12), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 280;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 12), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            yfloor01 = 280;
            while (yfloor01 < 360)
                {
                    add_object(xfloor01 + (floor01_size * 15), yfloor01, floor01_size, floor01_size, "s_floor01");
                    yfloor01 = yfloor01 + floor01_size;
            }
            yfloor01 = 680;

            xfloor01 = 120;
            while (xfloor01 < 240)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 5), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 120;
            while (xfloor01 < 240)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 6), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 320;
            while (xfloor01 < 520)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 5), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 320;
            while (xfloor01 < 520)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 6), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 600;
            while (xfloor01 < 800)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 6), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 600;
            while (xfloor01 < 800)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 5), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 880;
            while (xfloor01 < 1000)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 5), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 880;
            while (xfloor01 < 1000)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 6), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 440;
            while (xfloor01 < 520)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 2), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 440;
            while (xfloor01 < 520)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 3), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 440;
            while (xfloor01 < 520)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 4), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 600;
            while (xfloor01 < 680)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 2), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 600;
            while (xfloor01 < 680)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 3), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;

            xfloor01 = 600;
            while (xfloor01 < 680)
                {
                    add_object(xfloor01, yfloor01 - (floor01_size * 4), floor01_size, floor01_size, "s_floor01");
                    xfloor01 = xfloor01 + floor01_size;
            }
            xfloor01 = 0;
    }

    if (simplificador_de_codigo__objetos = true)
        {
            create_sprite("s_discovered_key", 1);
            add_frame_to_sprite("s_discovered_key", "Imagenes/Objetos/Llave_descubierto.png");

            create_sprite("s_not_discovered_key", 1);
            add_frame_to_sprite("s_not_discovered_key", "Imagenes/Objetos/Llave_no_descubierto.png");
            float key_size = 80;
            float xkey = 1120;
            float ykey = 100;

            add_indexed_object("o_key", xkey, ykey, key_size, key_size, "s_not_discovered_key");


            create_sprite("s_discovered_pocket_watch", 1);
            add_frame_to_sprite("s_discovered_pocket_watch", "Imagenes/Objetos/Reloj_descubierto.png");

            create_sprite("s_not_discovered_pocket_watch", 1);
            add_frame_to_sprite("s_not_discovered_pocket_watch", "Imagenes/Objetos/Reloj_no_descubierto.png");
            float watch_size = 80;
            float xwatch = 1120;
            float ywatch = 220;

            add_indexed_object("o_watch", xwatch, ywatch, watch_size, watch_size, "s_not_discovered_pocket_watch");


            create_sprite("s_discovered_boots", 1);
            add_frame_to_sprite("s_discovered_boots", "Imagenes/Objetos/Bota_descubierto.png");

            create_sprite("s_not_discovered_boots", 1);
            add_frame_to_sprite("s_not_discovered_boots", "Imagenes/Objetos/Bota_no_descubierto.png");
            float boot_size = 80;
            float xboot = 1120;
            float yboot = 340;

            add_indexed_object("o_boot", xboot, yboot, boot_size, boot_size, "s_not_discovered_boots");


            create_sprite("s_discovered_mechanical_glove", 1);
            add_frame_to_sprite("s_discovered_mechanical_glove", "Imagenes/Objetos/Guante_descubierto.png");

            create_sprite("s_not_discovered_mechanical_glove", 1);
            add_frame_to_sprite("s_not_discovered_mechanical_glove", "Imagenes/Objetos/Guante_no_descubierto.png");
            float glove_size = 80;
            float xglove = 1120;
            float yglove = 460;

            add_indexed_object("o_glove", xglove, yglove, glove_size, glove_size, "s_not_discovered_mechanical_glove");


            create_sprite("s_discovered_machine_heart", 1);
            add_frame_to_sprite("s_discovered_machine_heart", "Imagenes/Objetos/Corazon_descubierto.png");

            create_sprite("s_not_discovered_machine_heart", 1);
            add_frame_to_sprite("s_not_discovered_machine_heart", "Imagenes/Objetos/Corazon_no_descubierto.png");
            float heart_size = 80;
            float xheart = 1120;
            float yheart = 580;

            add_indexed_object("o_heart", xheart, yheart, heart_size, heart_size, "s_not_discovered_machine_heart");
    }



            create_sprite("s_player", 1);
            add_frame_to_sprite("s_player", "Imagenes/Alba/Alba_standing.png");
            float a_size = 160;
            float xalba = 0;
            float xalba2 = xalba + a_size;
            float yalba = 40;
            float yalba2 = yalba2 + a_size;

            create_sprite("cheer_player", 5);
            add_frame_to_sprite("cheer_player", "Imagenes/Alba/Alba_cheering2.png");
            add_frame_to_sprite("cheer_player", "Imagenes/Alba/Alba_cheering1.png");
            add_frame_to_sprite("cheer_player", "Imagenes/Alba/Alba_cheering2.png");
            add_frame_to_sprite("cheer_player", "Imagenes/Alba/Alba_cheering3.png");

            create_sprite("waking_player_right", 10);
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking1.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking2.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking3.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking4.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking5.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking6.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking7.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking6.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking5.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking4.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking3.png");
            add_frame_to_sprite("waking_player_right", "Imagenes/Alba/Alba_walking2.png");

            create_sprite("waking_player_left", 10);
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL1.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL2.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL3.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL4.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL5.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL6.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL7.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL6.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL5.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL4.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL3.png");
            add_frame_to_sprite("waking_player_left", "Imagenes/Alba/Alba_walkingL2.png");


            create_sprite("s_scavenger", 5);
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger01_P1W1.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger02_P2W2.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger03_P3W3.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger04_P1W4.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger05_P2W5.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger06_P3W6.png");
            add_frame_to_sprite("s_scavenger", "Imagenes/Enemigos/Scavenger/Scavenger07_P1W7.png");


            float sca_size = 160;
            float xscavenger = 480;
            float yscavenger = 80;






    add_indexed_object("o_scavenger", xscavenger, yscavenger, sca_size, sca_size, "s_scavenger");
    add_indexed_object("o_alba", xalba, yalba, a_size, a_size, "s_player");
    add_indexed_object("o_temporizador", xtemporizador, ytemporizador, temporizador_xsize, temporizador_ysize, "s_temporizador");


    while(!is_window_closed())
        {

            bool ks_up = is_key_pressed("w");
            bool ks_down = is_key_pressed("s");

            if (ks_up == true){
                set_indexed_object_origin("o_scavenger", xscavenger, yscavenger);
                yscavenger = yscavenger - 5;
            }

            if (ks_down == true){
                set_indexed_object_origin("o_scavenger", xscavenger, yscavenger);
                yscavenger = yscavenger + 5;
            }


            bool k_left = is_key_pressed("left");
            bool k_right = is_key_pressed("right");
            bool k_up = is_key_pressed("up");
            bool k_down = is_key_pressed("down");
            bool k_pause = is_key_pressed("g");


            if (k_pause == true)
                {
                    k_left = false;
                }


            if (k_left == true)
                {
                    set_indexed_object_sprite("o_alba", "waking_player_left");
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }
            if (k_right == true)
                {
                    set_indexed_object_sprite("o_alba", "waking_player_right");
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }
            if (k_up == true)
                    {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }
            if (k_down == true)
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
            }
            if ((k_right == false) && (k_left == false))
                set_indexed_object_sprite("o_alba", "s_player");





            if (xalba2 > 1140){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }

            if (xalba < -20){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }
            if (yalba < 35){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
            }
            if (yalba > 480){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }


            if ((xalba < 260 && yalba < 270) && (yalba > 40 && xalba2 > 376))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }
            if ((xalba < 340 && yalba < 270) && (yalba > 40 && xalba2 > 460))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }
            if ((yalba > 38 && xalba2 > 380) && (xalba < 335 && yalba < 270))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }
            if ((yalba < 275 && yalba > 100) && (xalba2 > 380 && xalba < 335)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
            }


            if ((yalba < 275 && xalba2 > 745) && (xalba > 630 && yalba > 100 && xalba < 740)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
             }
             if ((yalba > 38 && xalba2 > 745) && (xalba > 630 && yalba < 100 && xalba < 740)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }
             if ((yalba > 38 && xalba2 > 670) && (xalba > 615 && yalba < 270 && xalba < 735)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }
             if ((yalba > 38 && xalba2 > 650) && (xalba > 615 && yalba < 270 && xalba < 743)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }


            if ((xalba < 175 && yalba < 270) && (yalba > 40 && xalba2 > 175))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }
            if ((xalba < 180 && yalba < 270) && (yalba > 40 && xalba2 > 200))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }
            if ((yalba > 38 && xalba2 > 180) && (xalba < 175 && yalba < 270))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }
            if ((yalba < 275 && yalba > 100) && (xalba2 > 180 && xalba < 175)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
            }


            if ((xalba < 175 && yalba < 430) && (yalba > 280 && xalba2 > 175))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba - 3;
                    xalba2 = xalba2 - 3;
            }
            if ((xalba < 180 && yalba < 430) && (yalba > 280 && xalba2 > 200))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    xalba = xalba + 3;
                    xalba2 = xalba2 + 3;
            }
            if ((yalba > 278&& xalba2 > 180) && (xalba < 175 && yalba < 430))
                {
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba - 3;
                    yalba2 = yalba2 - 3;
            }
            if ((yalba < 435 && yalba > 340) && (xalba2 > 180 && xalba < 175)){
                    set_indexed_object_origin("o_alba", xalba, yalba);
                    yalba = yalba + 3;
                    yalba2 = yalba2 + 3;
            }



            Sleep(20);
    }
}

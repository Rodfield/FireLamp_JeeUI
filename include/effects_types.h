/*
Copyright © 2020 Dmytro Korniienko (kDn)
JeeUI2 lib used under MIT License Copyright (c) 2019 Marsel Akhkamov

    This file is part of FireLamp_JeeUI.

    FireLamp_JeeUI is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FireLamp_JeeUI is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FireLamp_JeeUI.  If not, see <https://www.gnu.org/licenses/>.

  (Этот файл — часть FireLamp_JeeUI.

   FireLamp_JeeUI - свободная программа: вы можете перераспространять ее и/или
   изменять ее на условиях Стандартной общественной лицензии GNU в том виде,
   в каком она была опубликована Фондом свободного программного обеспечения;
   либо версии 3 лицензии, либо (по вашему выбору) любой более поздней
   версии.

   FireLamp_JeeUI распространяется в надежде, что она будет полезной,
   но БЕЗО ВСЯКИХ ГАРАНТИЙ; даже без неявной гарантии ТОВАРНОГО ВИДА
   или ПРИГОДНОСТИ ДЛЯ ОПРЕДЕЛЕННЫХ ЦЕЛЕЙ. Подробнее см. в Стандартной
   общественной лицензии GNU.

   Вы должны были получить копию Стандартной общественной лицензии GNU
   вместе с этой программой. Если это не так, см.
   <https://www.gnu.org/licenses/>.)
*/

#ifndef __EFFECTS_TYPES_H
#define __EFFECTS_TYPES_H

#include "config.h"


/*
 * Aurora: https://github.com/pixelmatix/aurora
 * Copyright (c) 2014 Jason Coon
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

typedef enum : uint8_t {ST_BASE=0,ST_END, ST_IDX, ST_AB, ST_AB2, ST_MIC} SORT_TYPE; // виды сортировки

static const char PGidxtemplate[] PROGMEM  = "%s{\"nb\":%d,\"fl\":%d}";

/** набор служебных текстовых констант (не для локализации)
 */
static const char TCONST_0000[] PROGMEM = "effects";
static const char TCONST_0001[] PROGMEM = "pTime";
static const char TCONST_0002[] PROGMEM = "pMem";
static const char TCONST_0003[] PROGMEM = "lamptext";
static const char TCONST_0004[] PROGMEM = "settings";
static const char TCONST_0005[] PROGMEM = "set_effect";
static const char TCONST_0006[] PROGMEM = "eff_sel";
static const char TCONST_0007[] PROGMEM = "eff_fav";
static const char TCONST_0008[] PROGMEM = "gray";
static const char TCONST_0009[] PROGMEM = "copy";
static const char TCONST_000A[] PROGMEM = "del*";
static const char TCONST_000B[] PROGMEM = "makeidx";
static const char TCONST_000C[] PROGMEM = "red";
static const char TCONST_000D[] PROGMEM = "black";
static const char TCONST_000E[] PROGMEM = "AUX";
static const char TCONST_000F[] PROGMEM = "effects_config";
static const char TCONST_0010[] PROGMEM = "effListConf";
static const char TCONST_0011[] PROGMEM = "effects_param";
static const char TCONST_0012[] PROGMEM = "bright";
static const char TCONST_0013[] PROGMEM = "speed";
static const char TCONST_0014[] PROGMEM = "scale";
static const char TCONST_0015[] PROGMEM = "dynCtrl";
static const char TCONST_0016[] PROGMEM = "effList";
static const char TCONST_0017[] PROGMEM = "nofade";
static const char TCONST_0018[] PROGMEM = "GlobBRI";
static const char TCONST_0019[] PROGMEM = "flags";
static const char TCONST_001A[] PROGMEM = "ONflag";
static const char TCONST_001B[] PROGMEM = "Demo";
static const char TCONST_001C[] PROGMEM = "GBR";
static const char TCONST_001D[] PROGMEM = "Events";
static const char TCONST_001E[] PROGMEM = "Mic";
static const char TCONST_001F[] PROGMEM = "Btn";
static const char TCONST_0020[] PROGMEM = "show_flags";
static const char TCONST_0021[] PROGMEM = "mode";
static const char TCONST_0022[] PROGMEM = "eff_prev";
static const char TCONST_0023[] PROGMEM = "eff_next";
static const char TCONST_0024[] PROGMEM = "#708090";
static const char TCONST_0025[] PROGMEM = "#5f9ea0";
static const char TCONST_0026[] PROGMEM = "DTimer";
static const char TCONST_0027[] PROGMEM = "OTA";
static const char TCONST_0028[] PROGMEM = "lamp_config";
static const char TCONST_0029[] PROGMEM = "edit_lamp_config";
static const char TCONST_002A[] PROGMEM = "fileName";
static const char TCONST_002B[] PROGMEM = "/backup/idx";
static const char TCONST_002C[] PROGMEM = "/backup/idx/";
static const char TCONST_002D[] PROGMEM = "load";
static const char TCONST_002E[] PROGMEM = "save";
static const char TCONST_002F[] PROGMEM = "green";
static const char TCONST_0030[] PROGMEM = "add_lamp_config";
static const char TCONST_0031[] PROGMEM = "/backup/glb/";
static const char TCONST_0032[] PROGMEM = "/backup/evn/";
static const char TCONST_0033[] PROGMEM = "/backup/btn/";
static const char TCONST_0034[] PROGMEM = "textsend";
static const char TCONST_0035[] PROGMEM = "msg";
static const char TCONST_0036[] PROGMEM = "txtColor";
static const char TCONST_0037[] PROGMEM = "settings_mic";
static const char TCONST_0038[] PROGMEM = "set_mic";
static const char TCONST_0039[] PROGMEM = "micScale";
static const char TCONST_003A[] PROGMEM = "micNoise";
static const char TCONST_003B[] PROGMEM = "micnRdcLvl";
static const char TCONST_003C[] PROGMEM = "mic_cal";
static const char TCONST_003D[] PROGMEM = "settings_wifi";
static const char TCONST_003E[] PROGMEM = "set_wifi";
static const char TCONST_003F[] PROGMEM = "hostname";
static const char TCONST_0040[] PROGMEM = "wcssid";
static const char TCONST_0041[] PROGMEM = "wcpass";
static const char TCONST_0042[] PROGMEM = "set_wifiAP";
static const char TCONST_0043[] PROGMEM = "APonly";
static const char TCONST_0044[] PROGMEM = "APpwd";
static const char TCONST_0045[] PROGMEM = "set_mqtt";
static const char TCONST_0046[] PROGMEM = "m_host";
static const char TCONST_0047[] PROGMEM = "m_port";
static const char TCONST_0048[] PROGMEM = "m_user";
static const char TCONST_0049[] PROGMEM = "m_pass";
static const char TCONST_004A[] PROGMEM = "mqtt_int";
static const char TCONST_004B[] PROGMEM = "set_other";
static const char TCONST_004C[] PROGMEM = "MIRR_H";
static const char TCONST_004D[] PROGMEM = "MIRR_V";
static const char TCONST_004E[] PROGMEM = "isFaderON";
static const char TCONST_004F[] PROGMEM = "DRand";
static const char TCONST_0050[] PROGMEM = "effSort";
static const char TCONST_0051[] PROGMEM = "txtSpeed";
static const char TCONST_0052[] PROGMEM = "txtOf";
static const char TCONST_0053[] PROGMEM = "perTime";
static const char TCONST_0054[] PROGMEM = "ny_period";
static const char TCONST_0055[] PROGMEM = "ny_unix";
static const char TCONST_0056[] PROGMEM = "set_time";
static const char TCONST_0057[] PROGMEM = "TZSET";
static const char TCONST_0058[] PROGMEM = "userntp";
static const char TCONST_0059[] PROGMEM = "setdatetime";
static const char TCONST_005A[] PROGMEM = "update";
static const char TCONST_005B[] PROGMEM = "blue";
static const char TCONST_005C[] PROGMEM = "show_event";
static const char TCONST_005D[] PROGMEM = "event_conf";
static const char TCONST_005E[] PROGMEM = "eventList";
static const char TCONST_005F[] PROGMEM = "edit";
static const char TCONST_0060[] PROGMEM = "enabled";
static const char TCONST_0061[] PROGMEM = "d1";
static const char TCONST_0062[] PROGMEM = "d2";
static const char TCONST_0063[] PROGMEM = "d3";
static const char TCONST_0064[] PROGMEM = "d4";
static const char TCONST_0065[] PROGMEM = "d5";
static const char TCONST_0066[] PROGMEM = "d6";
static const char TCONST_0067[] PROGMEM = "d7";
static const char TCONST_0068[] PROGMEM = "evList";
static const char TCONST_0069[] PROGMEM = "repeat";
static const char TCONST_006A[] PROGMEM = "stopat";
static const char TCONST_006B[] PROGMEM = "tmEvent";
static const char TCONST_006C[] PROGMEM = "set_event";
static const char TCONST_006D[] PROGMEM = "show_button";
static const char TCONST_006E[] PROGMEM = "butt_conf";
static const char TCONST_006F[] PROGMEM = "buttList";
static const char TCONST_0070[] PROGMEM = "on";
static const char TCONST_0071[] PROGMEM = "hold";
static const char TCONST_0072[] PROGMEM = "onetime";
static const char TCONST_0073[] PROGMEM = "clicks";
static const char TCONST_0074[] PROGMEM = "bactList";
static const char TCONST_0075[] PROGMEM = "set_butt";
static const char TCONST_0076[] PROGMEM = "show_butt";
static const char TCONST_0077[] PROGMEM = "show_time";
static const char TCONST_0078[] PROGMEM = "show_wifi";
static const char TCONST_0079[] PROGMEM = "show_mic";
static const char TCONST_007A[] PROGMEM = "show_other";
static const char TCONST_007B[] PROGMEM = "m_pref";
static const char TCONST_007C[] PROGMEM = "#ffffff";
static const char TCONST_007D[] PROGMEM = "1609459200";
static const char TCONST_007E[] PROGMEM = "main";
static const char TCONST_007F[] PROGMEM = "dynCtrl*";
static const char TCONST_0080[] PROGMEM = "STA";
static const char TCONST_0081[] PROGMEM = "off";
static const char TCONST_0082[] PROGMEM = "effect";
static const char TCONST_0083[] PROGMEM = "move_next";
static const char TCONST_0084[] PROGMEM = "move_prev";
static const char TCONST_0085[] PROGMEM = "move_rnd";
static const char TCONST_0086[] PROGMEM = "reboot";
static const char TCONST_0087[] PROGMEM = "alarm";
static const char TCONST_0088[] PROGMEM = "aux_on";
static const char TCONST_0089[] PROGMEM = "aux_off";
static const char TCONST_008A[] PROGMEM = "aux_toggle";
static const char TCONST_008B[] PROGMEM = "embui/pub/";
static const char TCONST_008C[] PROGMEM = "pin";
static const char TCONST_008D[] PROGMEM = "act";
static const char TCONST_008E[] PROGMEM = "isClearing";
static const char TCONST_008F[] PROGMEM = "pUptime";
static const char TCONST_0090[] PROGMEM = "numInList";
static const char TCONST_0091[] PROGMEM = "effHasMic";
static const char TCONST_0092[] PROGMEM = "effname";
static const char TCONST_0093[] PROGMEM = "delEffCfg";
static const char TCONST_0094[] PROGMEM = "syslampFlags";
static const char TCONST_0095[] PROGMEM = "debug";
static const char TCONST_0096[] PROGMEM = "isShowSysMenu";
static const char TCONST_0097[] PROGMEM = "PINB"; // пин кнопки
static const char TCONST_0098[] PROGMEM = "CLmt"; // лимит тока
static const char TCONST_0099[] PROGMEM = "sysSettings";
static const char TCONST_009A[] PROGMEM = "ESPsysSettings";
static const char TCONST_009B[] PROGMEM = "PINMP3RX";
static const char TCONST_009C[] PROGMEM = "PINMP3TX";
static const char TCONST_009D[] PROGMEM = "isOnMP3";
static const char TCONST_009E[] PROGMEM = "showName";
static const char TCONST_009F[] PROGMEM = "show_mp3";
static const char TCONST_00A0[] PROGMEM = "set_mp3";
static const char TCONST_00A1[] PROGMEM = "settings_mp3";
static const char TCONST_00A2[] PROGMEM = "mp3volume";
static const char TCONST_00A3[] PROGMEM = "playTime";
static const char TCONST_00A4[] PROGMEM = "playName";
static const char TCONST_00A5[] PROGMEM = "playEffect";
static const char TCONST_00A6[] PROGMEM = "alarmSound";
static const char TCONST_00A7[] PROGMEM = "eqSetings";
static const char TCONST_00A8[] PROGMEM = "playMP3";
static const char TCONST_00A9[] PROGMEM = "mp3count";
static const char TCONST_00AA[] PROGMEM = "demo";
static const char TCONST_00AB[] PROGMEM = "soundfile";
static const char TCONST_00AC[] PROGMEM = "embui/get/";
static const char TCONST_00AD[] PROGMEM = "state";
static const char TCONST_00AE[] PROGMEM = "eff_config";
static const char TCONST_00AF[] PROGMEM = "limitAlarmVolume";
static const char TCONST_00B0[] PROGMEM = "delfromlist";
static const char TCONST_00B1[] PROGMEM = "delall";
static const char TCONST_00B2[] PROGMEM = "delCfg";
static const char TCONST_00B3[] PROGMEM = "orange";
static const char TCONST_00B4[] PROGMEM = "gbright";
static const char TCONST_00B5[] PROGMEM = "bparam";
static const char TCONST_00B6[] PROGMEM = "delete";
static const char TCONST_00B7[] PROGMEM = "warning";
static const char TCONST_00B8[] PROGMEM = "devicedatetime";
static const char TCONST_00B9[] PROGMEM = "text_config";
static const char TCONST_00BA[] PROGMEM = "edit_text_config";
static const char TCONST_00BB[] PROGMEM = "alarmP";
static const char TCONST_00BC[] PROGMEM = "alarmT";
static const char TCONST_00BD[] PROGMEM = "alarmPT";
static const char TCONST_00BE[] PROGMEM = "";
static const char TCONST_00BF[] PROGMEM = "";
static const char TCONST_00C0[] PROGMEM = "";

static const char TCONST_FFFE[] PROGMEM = "false";
static const char TCONST_FFFF[] PROGMEM = "true";

typedef enum : uint8_t {
EFF_NONE = (0U),                              // Специальный служебный эффект, не комментировать и индекс не менять константу!
EFF_WHITE_COLOR,                              // Белый свет
EFF_COLORS,                                   // Смена цвета
EFF_RAINBOW_2D,                               // Радуга универсальная
EFF_SPARKLES,                                 // Конфетти
EFF_NONE01,                                   // Снегопад
EFF_SNOWSTORMSTARFALL,                        // Метель + Звездопад
EFF_MATRIX,                                   // Матрица
EFF_LIGHTERS,                                 // Светлячки
EFF_LIGHTER_TRACES,                           // Светлячки со шлейфом
EFF_CUBE,                                     // Блуждающий кубик
EFF_PULSE,                                    // Пульс
EFF_EVERYTHINGFALL,                           // Водо/огне/лава/радуга/хренопад
EFF_FIRE,                                     // Огонь
EFF_PAINTBALL,                                // Пейнтбол
EFF_3DNOISE,                                  // 3D-шум
EFF_CELL,                                     // Клеточки
EFF_F_LYING,                                  // Геометрический вальс
EFF_T_LEND,                                   // Тикси Ленд
EFF_LDIRKO,                                   // LDIRKO Ленд 
EFF_OSCIL,                                    // Осцилятор 
EFF_WRAIN,                                    // Тест алгоритма Дождя с ветром (с) kostyamat
EFF_NONE07,                                   // пусто
EFF_NONE08,                                   // пусто
EFF_BBALS,                                    // Прыгающие мячики
EFF_SINUSOID3,                                // Синусоид 3
EFF_METABALLS,                                // Метасферы
EFF_SPIRO,                                    // Спираль
EFF_RAINBOWCOMET,                             // Радужная комета
EFF_RAINBOWCOMET3,                            // 3 кометы
EFF_PRIZMATA,                                 // Призмата
EFF_FLOCK,                                    // Стая и Хищник
EFF_SWIRL,                                    // Водоворот
EFF_DRIFT,                                    // Дрифт
EFF_POPCORN,                                  // Попкорн
EFF_TWINKLES,                                 // Мерцание
EFF_RADAR,                                    // Радар
EFF_WAVES,                                    // Волны
EFF_FIRE2012,                                 // Огонь 2012
EFF_NONE02,                                   // Дождь
EFF_NONE03,                                   // Дождь за окном...
EFF_DNA,                                      // ДНК
EFF_FIRE2018,                                 // Огонь 2018
EFF_RINGS,                                    // Кодовый замок
EFF_CUBE2,                                    // Куб 2D
EFF_SMOKE,                                    // Дым
EFF_PICASSO,                                  // Пикассо
EFF_PICASSO2,                                 // Пикассо2
EFF_PICASSO3,                                 // Пикассо3
EFF_LEAPERS,                                  // Прыгуны
EFF_WHIRL,                                    // Вихри
EFF_STAR,                                     // Звезды
EFF_AQUARIUM,                                 // Аквариум
EFF_FIREWORKS,                                // Фейерверк
EFF_PACIFIC,                                  // Тихий Океан
EFF_MUNCH,                                    // Вышиванка
EFF_NOISE,                                    // Цветной шум
EFF_BUTTERFLY,                                // Мотыльки
EFF_SHADOWS,                                  // Тени
EFF_PATTERNS,                                 // Узоры
EFF_ARROWS,                                   // Стрелки
EFF_NBALLS,                                   // Дикие шарики
EFF_ATTRACT,                                  // Притяжение
EFF_SNAKE,                                    // Змейки by kDn
EFF_NEXUS,                                    // Nexus
EFF_FLINE,                                    // Парящий огонь
EFF_FFIRE,                                    // Северное сияние
EFF_FLSNAKE,                                  // Радужный Змей
EFF_FLOWER,                                   // Цветение
EFF_TEST,                                     //  (Тест)
EFF_SMOKEBALLS,                               // Дымовые шашки stepko
EFF_PICASSO4,                                 // Меташары
EFF_LIQUIDLAMP,                               // Лаваламп 
EFF_TIME = (253U)                             // Часы (служебный, смещаем в конец)
#ifdef MIC_EFFECTS
,EFF_FREQ = (254U)                            // Частотный анализатор (служебный, смещаем в конец)
,EFF_OSC = (255U)                             // Осциллограф
#endif
} EFF_ENUM;

/** набор указателей на строки с именами эффектов
 * индекс элемента массива составляет id из EFF_ENUM
 * вместо несуществующих эффектов ставим указатель на 0-ю пустышку
 */
static const char* const T_EFFNAMEID[] PROGMEM = {
  TEFF_000, TEFF_001, TEFF_002, TEFF_003, TEFF_004, TEFF_000, TEFF_006, TEFF_007, TEFF_008, TEFF_009, TEFF_010, TEFF_011, TEFF_012, TEFF_013, TEFF_014, TEFF_015, // 0-15
  TEFF_016, TEFF_017, TEFF_018, TEFF_019, TEFF_020, TEFF_021, TEFF_000, TEFF_000, TEFF_024, TEFF_025, TEFF_026, TEFF_027, TEFF_028, TEFF_029, TEFF_030, TEFF_031, // 16-31
  TEFF_032, TEFF_033, TEFF_034, TEFF_035, TEFF_036, TEFF_037, TEFF_038, TEFF_000, TEFF_000, TEFF_041, TEFF_042, TEFF_043, TEFF_044, TEFF_045, TEFF_046, TEFF_047, // 32 - 47
  TEFF_048, TEFF_049, TEFF_050, TEFF_051, TEFF_052, TEFF_053, TEFF_054, TEFF_055, TEFF_056, TEFF_057, TEFF_058, TEFF_059, TEFF_060, TEFF_061, TEFF_062, TEFF_063, // 48 - 63
  TEFF_064, TEFF_065, TEFF_066, TEFF_067, TEFF_068, TEFF_069, TEFF_070, TEFF_071, TEFF_072, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 64 - 79
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 80 - 95
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 96 - 111
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 112 - 127
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 128 - 143
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 144 - 159
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 160 - 175
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 176 - 191
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 192 - 207
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 208 - 223
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, // 224 - 39
  TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_000, TEFF_253, TEFF_254, TEFF_255  // 240 - 255
};

/**
 *  массив с версиями эффектов, порядковый номер элемента массива
 *  соответсвует ENUM эффекта
 *  парный номер версии означает, что у эффекта есть поддержка микрофона
 *  непарный - нет. 127 вариантов версий "должно хватить всем" (с) Джобс
 *  Не хочу создавать дополнительные массивы и лайеры существующих - kostyamat
 */
static const uint8_t T_EFFVER[] PROGMEM = {
  1, 2, 4, 2, 2, 0, 5, 1, 5, 5, 3, 4, 3, 7, 3, 6, // 0-15
  1, 3, 1, 5, 1, 5, 0, 0, 5, 1, 1, 5, 3, 1, 3, 3, // 16-31
  3, 3, 3, 5, 5, 1, 2, 0, 0, 7, 2, 3, 5, 5, 1, 1, // 32 - 47
  3, 4, 4, 4, 2, 5, 3, 2, 3, 3, 4, 7, 3, 3, 5, 4, // 48 - 63
  3, 1, 1, 1, 2, 3, 5, 3, 3, 0, 0, 0, 0, 0, 0, 0, // 64 - 79
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 80 - 95
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 96 - 111
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 112 - 127
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 128 - 143
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 144 - 159
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 160 - 175
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 176 - 191
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 192 - 207
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 208 - 223
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 224 - 239
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 4, // 240 - 255
};


// младшие 4 бита отдаются на выбор контрола, что даст 16 различных типов контроллов
// старшие 4 бита используются как набор управляющих кодов, к примеру - отображать при включенном микрофоне, при выключенном и т.д., тоже 16 вариантов
typedef enum : uint8_t {ALWAYS=0,ISMICON,ISMICOFF,HIDE} CONTROL_CASE; // старшие 4 бита
typedef enum : uint8_t {RANGE=0,EDIT,CHECKBOX} CONTROL_TYPE; // младшие 4 бита


/** набор указателей на строки с UI-конфигом для эффектов по-умолчанию
 * индекс элемента массива составляет id из EFF_ENUM
 * вместо несуществующих эффектов или эффектов с дефолтными ползунками ставим указатель на базовый конфиг
 * не обязательно каждому эффекту лепить свой конфиг, можно ставить указатели на эффекты с похожими контролами
 */
static const char* const T_EFFUICFG[] PROGMEM = {
  E_DEFUI, E_WHITE_CFG, E_COLORS_CFG, E_DEFMICUI_CFG, E_SPARCLES_CFG, E_SNOW_CFG, E_STARFAIL_CFG, E_MATRIX, E_LIGHTERS_CFG, E_LIGHT2_CFG, E_CUBE_CFG, E_PULS_CFG, E_4PAL_CFG, E_NFIRE_CFG, E_2_CFG, E_PALMICUI_CFG, // 0-15
  E_2_CFG, E_FLYING, E_TLAND, E_LLEND, E_3PAL_CFG, E_WRAIN, E_DEFUI, E_DEFUI, E_BBALLS_CFG, E_DEFUI, E_DEFUI, E_3PAL_CFG, E_COM_CFG, E_DEFUI, E_PRIZMATA_CFG, E_FLOCK_CFG, // 16-31
  E_3PAL_CFG, E_DRIFT_CFG, E_POPCORN_CFG, E_3PAL255_CFG, E_RADAR255_CFG, E_WAVES_CFG, E_F2012_MIC_CFG, E_DEFUI, E_DEFUI, E_DNA_CFG, E_F2018_CFG, E_CLOCK, E_CUBE2D_CFG, E_SMOKE_CFG, E_DEFUI, E_DEFUI, // 32 - 47
  E_DEFUI, E_LEAPERS_CFG, E_3PAL_MIC_CFG, E_3PAL_MIC_CFG, E_AQUARIUM_CFG, E_FWORK_CFG, E_2_CFG, E_MUNCH_CFG, E_3PAL_CFG, E_BUTTERFLY_CFG, E_SHAD_CFG, E_PATT_CFG, E_ARR_CFG, E_NBAL_CFG, E_ATTRACT_CFG, E_SNAKE_CFG, // 48 - 63
  E_NEXUS, E_DEFUI, E_DEFUI, E_DEFUI, E_2_MIC_CFG, E_TEST_CFG, E_SMOKEBALLS, E_MBL_CFG, E_LIQLAM_CFG, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 64 - 79
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 80 - 95
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 96 - 111
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 112 - 127
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 128 - 143
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 144 - 159
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 160 - 175
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 176 - 191
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 192 - 207
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 208 - 223
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, // 224 - 39
  E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_DEFUI, E_3PAL_CFG, E_FREQ_CFG, E_OSC_CFG  // 240 - 255
};

/**
 * константы/определения
 */
#define MAP_SIN 1
#define MAP_COS 0
#define MOVE_X 1
#define MOVE_Y 0
#define MIN_RANGE 1     // заложим дейфан пока нет динамических ползунков
#define MAX_RANGE 255   // заложим дейфан пока нет динамических ползунков

/**
 * типы/определения для палитр
 */
typedef const TProgmemRGBPalette16 PGMPalette;
#define FASTLED_PALETTS_COUNT 22

/**
 * Набор палитр в дополнение к тем что идут с FastLED
 * новые палитры добавляем в алфавитном порядке
 */
static const TProgmemRGBPalette16 HeatColors2_p FL_PROGMEM = {    0x000000, 0x330000, 0x660000, 0x990000, 0xCC0000, 0xFF0000, 0xFF3300, 0xFF6600, 0xFF9900, 0xFFCC00, 0xFFFF00, 0xFFFF33, 0xFFFF66, 0xFFFF99, 0xFFFFCC, 0xFFFFFF};
static const TProgmemRGBPalette16 WoodFireColors_p FL_PROGMEM = {CRGB::Black, 0x330e00, 0x661c00, 0x992900, 0xcc3700, CRGB::OrangeRed, 0xff5800, 0xff6b00, 0xff7f00, 0xff9200, CRGB::Orange, 0xffaf00, 0xffb900, 0xffc300, 0xffcd00, CRGB::Gold};             //* Orange
static const TProgmemRGBPalette16 NormalFire_p FL_PROGMEM = {CRGB::Black, 0x330000, 0x660000, 0x990000, 0xcc0000, CRGB::Red, 0xff0c00, 0xff1800, 0xff2400, 0xff3000, 0xff3c00, 0xff4800, 0xff5400, 0xff6000, 0xff6c00, 0xff7800};                             // пытаюсь сделать что-то более приличное
static const TProgmemRGBPalette16 NormalFire2_p FL_PROGMEM = {CRGB::Black, 0x560000, 0x6b0000, 0x820000, 0x9a0011, CRGB::FireBrick, 0xc22520, 0xd12a1c, 0xe12f17, 0xf0350f, 0xff3c00, 0xff6400, 0xff8300, 0xffa000, 0xffba00, 0xffd400};                      // пытаюсь сделать что-то более приличное
static const TProgmemRGBPalette16 LithiumFireColors_p FL_PROGMEM = {CRGB::Black, 0x240707, 0x470e0e, 0x6b1414, 0x8e1b1b, CRGB::FireBrick, 0xc14244, 0xd16166, 0xe08187, 0xf0a0a9, CRGB::Pink, 0xff9ec0, 0xff7bb5, 0xff59a9, 0xff369e, CRGB::DeepPink};        //* Red
static const TProgmemRGBPalette16 SodiumFireColors_p FL_PROGMEM = {CRGB::Black, 0x332100, 0x664200, 0x996300, 0xcc8400, CRGB::Orange, 0xffaf00, 0xffb900, 0xffc300, 0xffcd00, CRGB::Gold, 0xf8cd06, 0xf0c30d, 0xe9b913, 0xe1af1a, CRGB::Goldenrod};           //* Yellow
static const TProgmemRGBPalette16 CopperFireColors_p FL_PROGMEM = {CRGB::Black, 0x001a00, 0x003300, 0x004d00, 0x006600, CRGB::Green, 0x239909, 0x45b313, 0x68cc1c, 0x8ae626, CRGB::GreenYellow, 0x94f530, 0x7ceb30, 0x63e131, 0x4bd731, CRGB::LimeGreen};     //* Green
static const TProgmemRGBPalette16 AlcoholFireColors_p FL_PROGMEM = {CRGB::Black, 0x000033, 0x000066, 0x000099, 0x0000cc, CRGB::Blue, 0x0026ff, 0x004cff, 0x0073ff, 0x0099ff, CRGB::DeepSkyBlue, 0x1bc2fe, 0x36c5fd, 0x51c8fc, 0x6ccbfb, CRGB::LightSkyBlue};  //* Blue
static const TProgmemRGBPalette16 RubidiumFireColors_p FL_PROGMEM = {CRGB::Black, 0x0f001a, 0x1e0034, 0x2d004e, 0x3c0068, CRGB::Indigo, CRGB::Indigo, CRGB::Indigo, CRGB::Indigo, CRGB::Indigo, CRGB::Indigo, 0x3c0084, 0x2d0086, 0x1e0087, 0x0f0089, CRGB::DarkBlue};        //* Indigo
static const TProgmemRGBPalette16 PotassiumFireColors_p FL_PROGMEM = {CRGB::Black, 0x0f001a, 0x1e0034, 0x2d004e, 0x3c0068, CRGB::Indigo, 0x591694, 0x682da6, 0x7643b7, 0x855ac9, CRGB::MediumPurple, 0xa95ecd, 0xbe4bbe, 0xd439b0, 0xe926a1, CRGB::DeepPink}; //* Violet
static const TProgmemRGBPalette16 WaterfallColors_p FL_PROGMEM = {0x000000, 0x060707, 0x101110, 0x151717, 0x1C1D22, 0x242A28, 0x363B3A, 0x313634, 0x505552, 0x6B6C70, 0x98A4A1, 0xC1C2C1, 0xCACECF, 0xCDDEDD, 0xDEDFE0, 0xB2BAB9};        //* Orange
static const TProgmemRGBPalette16 ZeebraColors_p FL_PROGMEM = {CRGB::White, CRGB::Black, CRGB::Black, CRGB::Black, CRGB::White, CRGB::Black, CRGB::Black, CRGB::Black, CRGB::White, CRGB::Black, CRGB::Black, CRGB::Black, CRGB::White, CRGB::Black, CRGB::Black, CRGB::Black};
// Добавил "белую" палитру для "Огонь 2012", в самом конце 4-го ползунка, огонь горит белым цветом, - красиво для белой динамической подсветки
static const TProgmemRGBPalette16 WhiteBlackColors_p FL_PROGMEM = {CRGB::Black, CRGB::Gray, CRGB::White, CRGB::WhiteSmoke};
// stepko нашел и перерисовал палитры в https://colorswall.com/
static const TProgmemRGBPalette16 AcidColors_p FL_PROGMEM = {0xffff00, 0xd2b328, 0xd25228, 0x711323, 0x6c000c, 0x5a0c00, 0x6d373a, 0xaa5a62, 0x604564, 0x313164, 0x332765, 0x3a2465, 0x4b1665, 0x4b0069, 0x31004c, 0x200046};
static const TProgmemRGBPalette16 StepkosColors_p FL_PROGMEM = {0x0000ff, 0x0f00f0, 0x1e00e1, 0x2d00d2, 0x3c00c3, 0x4b00b4, 0x5a00a5, 0x690096, 0x780087, 0x870078, 0x9600cd, 0xa50050, 0xb40041, 0xc30032, 0xd20023, 0xe10014};
static const TProgmemRGBPalette16 AutumnColors_p FL_PROGMEM = {0xbc2300, 0xc84416, 0xdc642c, 0xe69664, 0xfbb979, 0xca503d, 0x882c1c, 0x9a3631, 0xa9624e, 0xcc9762, 0xdcc0b5, 0xc1a29f, 0x826468, 0x4a3334, 0x231a1a, 0x161113};
static const TProgmemRGBPalette16 NeonColors_p FL_PROGMEM = {0x00b1d0, 0x0f93ec, 0x3572ff, 0x4157ff, 0x6162ff, 0x686cff, 0x7473ff, 0x8689e5, 0x9e9dc6, 0x9694ac, 0x979b9b, 0x888b8c, 0x767680, 0x596160, 0x6c736f, 0x7b7359};
static const TProgmemRGBPalette16 EveningColors_p FL_PROGMEM = {0x1e0443, 0x6d0081, 0x8200ac, 0x8200ac, 0x8200ac, 0x8200ac, 0x8200ac, 0x8200ac, 0x7900a1, 0x820055, 0xc80000, 0xe57b00, 0xff9d5a, 0xc58b32, 0xd8d400, 0xffff00};
static const TProgmemRGBPalette16 OrangeColors_p FL_PROGMEM = {0xffff00, 0xfff100, 0xffe100, 0xffd100, 0xffc100, 0xffb100, 0xffa100, 0xff9100, 0xff8100, 0xff7100, 0xff6100, 0xff5100, 0xff4100, 0xff3100, 0xff2100, 0xff1100};

#if  576U < (WIDTH * HEIGHT)
  #define BIGMATRIX
#endif

// Еще одно представление высоты и ширины матрицы, часто встречаеться последнее время
#define LED_ROWS HEIGHT
#define LED_COLS WIDTH

// И еще одно представление высоты и ширины матрицы, часто встречаеться последнее время
#define NUM_ROWS HEIGHT
#define NUM_COLS WIDTH

// ==== Константы для эффектов ====

// Эффекты на базе "3D Noise"
#define NOISE_SCALE_AMP  (58UL)    // амплификатор шкалы (влияет на машстаб "пятен" эффекта, большие пятна выглядят красивее чем куча мелких)
#define NOISE_SCALE_ADD  (8UL)     // корректор шкалы


#define BALLS_AMOUNT           (7U)                 // максимальное количество "шариков"
#define LIGHTERS_AM            (32U)                // светлячки
#define NUM_LAYERS             (1U)                 // The coordinates for 3 16-bit noise spaces.
#define NUM_LAYERS2            (2U)                 // The coordinates for 3 16-bit noise spaces.
#define AVAILABLE_BOID_COUNT   (10U)                // стая, кол-во птиц

// ***** RAINBOW COMET / РАДУЖНАЯ КОМЕТА *****
#define e_com_TAILSPEED             (500)         // скорость смещения хвоста
#define e_com_BLUR                  (24U)         // размытие хвоста
#define e_com_3DCOLORSPEED          (5U)          // скорость случайного изменения цвета (0й - режим)

// ------------- светлячки со шлейфом -------------
//#define BALLS_AMOUNT          (7U)                          // максимальное количество "шариков"
#define CLEAR_PATH            (1U)                          // очищать путь
#define TRACK_STEP            (70U)                         // длина хвоста шарика (чем больше цифра, тем хвост короче)

// ------------- блуждающий кубик -------------
#define RANDOM_COLOR          (1U)                          // случайный цвет при отскоке

// --------------------------- эффект мячики ----------------------
#define bballsMaxNUM_BALLS     (WIDTH)                // максимальное количество мячиков прикручено при адаптации для бегунка Масштаб
#define bballsGRAVITY          (-9.7f)              // Downward (negative) acceleration of gravity in m/s^2
#define bballsH0               (2)                 // Starting height, in meters, of the ball (strip length)
#define bballsVImpact0         (EffectMath::sqrt(-2 * bballsGRAVITY * bballsH0))

// ------------- метель -------------
#define SNOW_DENSE            (60U)                         // плотность снега
#define SNOW_TAIL_STEP        (100U)                        // длина хвоста
#define SNOW_SATURATION       (0U)                          // насыщенность (от 0 до 255)

// ------------- звездопад -------------
#define STAR_DENSE            (60U)                         // плотность комет
#define STAR_TAIL_STEP        (100U)                        // длина хвоста кометы
#define STAR_SATURATION       (150U)                        // насыщенность кометы (от 0 до 255)

// ============= DRIFT / ДРИФТ ===============
// v1.0 - Updating for GuverLamp v1.7 by SottNick 12.04.2020
// v1.1 - +dither, +phase shifting by PalPalych 12.04.2020
// https://github.com/pixelmatix/aurora/blob/master/PatternIncrementalDrift.h
#define CENTER_max  max(WIDTH / 2, HEIGHT / 2) // Наибольшее значение центра
#define WIDTH_steps  256U / WIDTH   // диапазон значений приходящихся на 1 пиксель ширины матрицы
#define HEIGHT_steps 256U / HEIGHT // диапазон значений приходящихся на 1 пиксель высоты матрицы



template <class T>
class Vector2 {
public:
    T x, y;

    Vector2() :x(0), y(0) {}
    Vector2(T x, T y) : x(x), y(y) {}
    Vector2(const Vector2& v) : x(v.x), y(v.y) {}

    Vector2& operator=(const Vector2& v) {
        x = v.x;
        y = v.y;
        return *this;
    }

    bool isEmpty() {
        return x == 0 && y == 0;
    }

    bool operator==(Vector2& v) {
        return x == v.x && y == v.y;
    }

    bool operator!=(Vector2& v) {
        return !(x == y);
    }

    Vector2 operator+(Vector2& v) {
        return Vector2(x + v.x, y + v.y);
    }
    Vector2 operator-(Vector2& v) {
        return Vector2(x - v.x, y - v.y);
    }

    Vector2& operator+=(Vector2& v) {
        x += v.x;
        y += v.y;
        return *this;
    }
    Vector2& operator-=(Vector2& v) {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    Vector2 operator+(double s) {
        return Vector2(x + s, y + s);
    }
    Vector2 operator-(double s) {
        return Vector2(x - s, y - s);
    }
    Vector2 operator*(double s) {
        return Vector2(x * s, y * s);
    }
    Vector2 operator/(double s) {
        return Vector2(x / s, y / s);
    }

    Vector2& operator+=(double s) {
        x += s;
        y += s;
        return *this;
    }
    Vector2& operator-=(double s) {
        x -= s;
        y -= s;
        return *this;
    }
    Vector2& operator*=(double s) {
        x *= s;
        y *= s;
        return *this;
    }
    Vector2& operator/=(double s) {
        x /= s;
        y /= s;
        return *this;
    }

    void set(T x, T y) {
        this->x = x;
        this->y = y;
    }

    void rotate(double deg) {
        double theta = deg / 180.0 * M_PI;
        double c = cos(theta);
        double s = sin(theta);
        double tx = x * c - y * s;
        double ty = x * s + y * c;
        x = tx;
        y = ty;
    }

    Vector2& normalize() {
        if (length() == 0) return *this;
        *this *= (1.0 / length());
        return *this;
    }

    float dist(Vector2 v) const {
        Vector2 d(v.x - x, v.y - y);
        return d.length();
    }
    float length() const {
        return sqrt(x * x + y * y);
    }

    float mag() const {
        return length();
    }

    float magSq() {
        return (x * x + y * y);
    }

    void truncate(double length) {
        double angle = atan2f(y, x);
        x = length * cos(angle);
        y = length * sin(angle);
    }

    Vector2 ortho() const {
        return Vector2(y, -x);
    }

    static float dot(Vector2 v1, Vector2 v2) {
        return v1.x * v2.x + v1.y * v2.y;
    }
    static float cross(Vector2 v1, Vector2 v2) {
        return (v1.x * v2.y) - (v1.y * v2.x);
    }

    void limit(float max) {
        if (magSq() > max*max) {
            normalize();
            *this *= max;
        }
    }
};

typedef Vector2<float> PVector;

// Flocking
// Daniel Shiffman <http://www.shiffman.net>
// The Nature of Code, Spring 2009

// Boid class
// Methods for Separation, Cohesion, Alignment added

class Boid {
  public:

    PVector location;
    PVector velocity;
    PVector acceleration;
    float maxforce;    // Maximum steering force
    float maxspeed;    // Maximum speed

    float desiredseparation = 4;
    float neighbordist = 8;
    byte colorIndex = 0;
    float mass;

    boolean enabled = true;

    Boid() {}

    Boid(float x, float y) {
      acceleration = PVector(0, 0);
      velocity = PVector(randomf(), randomf());
      location = PVector(x, y);
      maxspeed = 1.5;
      maxforce = 0.05;
    }

    static float randomf() {
      return mapfloat(random(0, 255), 0, 255, -.5, .5);
    }

    static float mapfloat(float x, float in_min, float in_max, float out_min, float out_max) {
      return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    }

    void run(Boid boids [], uint8_t boidCount) {
      flock(boids, boidCount);
      update();
      // wrapAroundBorders();
      // render();
    }

    // Method to update location
    void update() {
      // Update velocity
      velocity += acceleration;
      // Limit speed
      velocity.limit(maxspeed);
      location += velocity;
      // Reset acceleration to 0 each cycle
      acceleration *= 0;
    }

    void applyForce(PVector force) {
      // We could add mass here if we want A = F / M
      acceleration += force;
    }

    void repelForce(PVector obstacle, float radius) {
      //Force that drives boid away from obstacle.

      PVector futPos = location + velocity; //Calculate future position for more effective behavior.
      PVector dist = obstacle - futPos;
      float d = dist.mag();

      if (d <= radius) {
        PVector repelVec = location - obstacle;
        repelVec.normalize();
        if (d != 0) { //Don't divide by zero.
          // float scale = 1.0 / d; //The closer to the obstacle, the stronger the force.
          repelVec.normalize();
          repelVec *= (maxforce * 7);
          if (repelVec.mag() < 0) { //Don't let the boids turn around to avoid the obstacle.
            repelVec.y = 0;
          }
        }
        applyForce(repelVec);
      }
    }

    // We accumulate a new acceleration each time based on three rules
    void flock(Boid boids [], uint8_t boidCount) {
      PVector sep = separate(boids, boidCount);   // Separation
      PVector ali = align(boids, boidCount);      // Alignment
      PVector coh = cohesion(boids, boidCount);   // Cohesion
      // Arbitrarily weight these forces
      sep *= 1.5;
      ali *= 1.0;
      coh *= 1.0;
      // Add the force vectors to acceleration
      applyForce(sep);
      applyForce(ali);
      applyForce(coh);
    }

    // Separation
    // Method checks for nearby boids and steers away
    PVector separate(Boid boids [], uint8_t boidCount) {
      PVector steer = PVector(0, 0);
      int count = 0;
      // For every boid in the system, check if it's too close
      for (int i = 0; i < boidCount; i++) {
        Boid other = boids[i];
        if (!other.enabled)
          continue;
        float d = location.dist(other.location);
        // If the distance is greater than 0 and less than an arbitrary amount (0 when you are yourself)
        if ((d > 0) && (d < desiredseparation)) {
          // Calculate vector pointing away from neighbor
          PVector diff = location - other.location;
          diff.normalize();
          diff /= d;        // Weight by distance
          steer += diff;
          count++;            // Keep track of how many
        }
      }
      // Average -- divide by how many
      if (count > 0) {
        steer /= (float) count;
      }

      // As long as the vector is greater than 0
      if (steer.mag() > 0) {
        // Implement Reynolds: Steering = Desired - Velocity
        steer.normalize();
        steer *= maxspeed;
        steer -= velocity;
        steer.limit(maxforce);
      }
      return steer;
    }

    // Alignment
    // For every nearby boid in the system, calculate the average velocity
    PVector align(Boid boids [], uint8_t boidCount) {
      PVector sum = PVector(0, 0);
      int count = 0;
      for (int i = 0; i < boidCount; i++) {
        Boid other = boids[i];
        if (!other.enabled)
          continue;
        float d = location.dist(other.location);
        if ((d > 0) && (d < neighbordist)) {
          sum += other.velocity;
          count++;
        }
      }
      if (count > 0) {
        sum /= (float) count;
        sum.normalize();
        sum *= maxspeed;
        PVector steer = sum - velocity;
        steer.limit(maxforce);
        return steer;
      }
      else {
        return PVector(0, 0);
      }
    }

    // Cohesion
    // For the average location (i.e. center) of all nearby boids, calculate steering vector towards that location
    PVector cohesion(Boid boids [], uint8_t boidCount) {
      PVector sum = PVector(0, 0);   // Start with empty vector to accumulate all locations
      int count = 0;
      for (int i = 0; i < boidCount; i++) {
        Boid other = boids[i];
        if (!other.enabled)
          continue;
        float d = location.dist(other.location);
        if ((d > 0) && (d < neighbordist)) {
          sum += other.location; // Add location
          count++;
        }
      }
      if (count > 0) {
        sum /= count;
        return seek(sum);  // Steer towards the location
      }
      else {
        return PVector(0, 0);
      }
    }

    // A method that calculates and applies a steering force towards a target
    // STEER = DESIRED MINUS VELOCITY
    PVector seek(PVector target) {
      PVector desired = target - location;  // A vector pointing from the location to the target
      // Normalize desired and scale to maximum speed
      desired.normalize();
      desired *= maxspeed;
      // Steering = Desired minus Velocity
      PVector steer = desired - velocity;
      steer.limit(maxforce);  // Limit to maximum steering force
      return steer;
    }

    // A method that calculates a steering force towards a target
    // STEER = DESIRED MINUS VELOCITY
    void arrive(PVector target) {
      PVector desired = target - location;  // A vector pointing from the location to the target
      float d = desired.mag();
      // Normalize desired and scale with arbitrary damping within 100 pixels
      desired.normalize();
      if (d < 4) {
        float m = map(d, 0, 100, 0, maxspeed);
        desired *= m;
      }
      else {
        desired *= maxspeed;
      }

      // Steering = Desired minus Velocity
      PVector steer = desired - velocity;
      steer.limit(maxforce);  // Limit to maximum steering force
      applyForce(steer);
      //Serial.println(d);
    }

    void wrapAroundBorders() {
      if (location.x < 0) location.x = WIDTH - 1;
      if (location.y < 0) location.y = HEIGHT - 1;
      if (location.x >= WIDTH) location.x = 0;
      if (location.y >= HEIGHT) location.y = 0;
    }

    void avoidBorders() {
      PVector desired = velocity;

      if (location.x < 8) desired = PVector(maxspeed, velocity.y);
      if (location.x >= WIDTH - 8) desired = PVector(-maxspeed, velocity.y);
      if (location.y < 8) desired = PVector(velocity.x, maxspeed);
      if (location.y >= HEIGHT - 8) desired = PVector(velocity.x, -maxspeed);

      if (desired != velocity) {
        PVector steer = desired - velocity;
        steer.limit(maxforce);
        applyForce(steer);
      }

      if (location.x < 0) location.x = 0;
      if (location.y < 0) location.y = 0;
      if (location.x >= WIDTH) location.x = WIDTH - 1;
      if (location.y >= HEIGHT) location.y = HEIGHT - 1;
    }

    bool bounceOffBorders(float bounce) {
      bool bounced = false;

      if (location.x >= WIDTH) {
        location.x = WIDTH - 1;
        velocity.x *= -bounce;
        bounced = true;
      }
      else if (location.x < 0) {
        location.x = 0;
        velocity.x *= -bounce;
        bounced = true;
      }

      if (location.y >= HEIGHT) {
        location.y = HEIGHT - 1;
        velocity.y *= -bounce;
        bounced = true;
      }
      else if (location.y < 0) {
        location.y = 0;
        velocity.y *= -bounce;
        bounced = true;
      }

      return bounced;
    }

    void render() {
      // // Draw a triangle rotated in the direction of velocity
      // float theta = velocity.heading2D() + radians(90);
      // fill(175);
      // stroke(0);
      // pushMatrix();
      // translate(location.x,location.y);
      // rotate(theta);
      // beginShape(TRIANGLES);
      // vertex(0, -r*2);
      // vertex(-r, r*2);
      // vertex(r, r*2);
      // endShape();
      // popMatrix();
      // backgroundLayer.drawPixel(location.x, location.y, CRGB::Blue);
    }
};

// ------------------------------ ЭФФЕКТ КУБИК 2D ----------------------
// (c) SottNick
// refactored by Vortigont
#define CUBE2D_MAX_SIZE 7       // максимальный размер обрабатываемых квадратов (AxA)
#define CUBE2D_PAUSE_FRAMES 20   // число кадров паузы между трансформациями
#endif

// ----------- Эффект "Аквариум" (с) SottNick
static const byte aquariumGIF[32][32] PROGMEM =
{
    {0x00, 0x00, 0x00, 0x00, 0x34, 0x8f, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x89, 0xe1, 0x77, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x37, 0x9b, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x7f, 0xdd, 0x77, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x37, 0x94, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x88, 0x78, 0x7a, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x4a, 0x71, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x17, 0x38, 0x87, 0x62, 0x00, 0x21, 0x67, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x77, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x20, 0x1b, 0x19, 0x46, 0x2e, 0x00, 0x00, 0x3e, 0x73, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x02, 0x55, 0xc7, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x1f, 0x07, 0x00, 0x00, 0x02, 0x14, 0x00, 0x00, 0x1a, 0xa6, 0x8f, 0x4c, 0x22, 0x04, 0x00, 0x00, 0x00},
    {0x0d, 0x20, 0x62, 0xb3, 0xc8, 0x97, 0x47, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x47, 0x74, 0x6a, 0x70, 0x77, 0x6c, 0x4d, 0x29, 0x11},
    {0x7b, 0x95, 0x9b, 0x60, 0x31, 0x42, 0x61, 0x67, 0x5d, 0x28, 0x00, 0x00, 0x02, 0x23, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x59, 0x4a, 0x3e, 0x0e, 0x01, 0x0a, 0x27, 0x4d, 0x6a, 0x79, 0x7c},
    {0xc5, 0xb1, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x69, 0x82, 0x44, 0x0f, 0x2e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0xb6, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x25, 0x6c},
    {0x82, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x82, 0x83, 0x79, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc2, 0x83, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e},
    {0x5e, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xab, 0xec, 0x8f, 0x31, 0x21, 0x28, 0x39, 0x59, 0xa2, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x5d, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xed, 0xb9, 0x7d, 0x6e, 0x6d, 0x65, 0x55, 0x43, 0x66, 0x5e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x5c, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x99, 0x3d, 0x1d, 0x18, 0x10, 0x02, 0x00, 0x00, 0x13, 0x5a, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x56, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x83, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x50, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x4d, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x98, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x41, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0xb4, 0x97, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x54, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x31, 0x61, 0x07, 0x00, 0x00, 0x00, 0x00, 0x12, 0x5b, 0x90, 0x77, 0x60, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x38, 0x78, 0x2d, 0x00, 0x00, 0x0b, 0x43, 0x7e, 0x79, 0x35, 0x06, 0x0d, 0x35, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x54, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x70, 0xc3, 0x96, 0x48, 0x4d, 0x79, 0x81, 0x4c, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x2f, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x7b, 0x54, 0x2f, 0x27, 0x22, 0x1f, 0x30},
    {0xbf, 0xc9, 0xa6, 0xad, 0xae, 0x72, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x33, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0xa3, 0xac, 0x81, 0x7a, 0x78, 0x78, 0x8e},
    {0x92, 0x5a, 0x22, 0x5b, 0x83, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x35, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x74, 0x71, 0x3a, 0x27, 0x27, 0x2d, 0x37, 0x61},
    {0x46, 0x18, 0x00, 0x00, 0x4d, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x34, 0x07, 0x00, 0x00, 0x00, 0x00, 0x26, 0x62, 0x51, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0x2f, 0x09, 0x00, 0x00, 0x32, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x33, 0x03, 0x00, 0x04, 0x30, 0x50, 0x3a, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
    {0x2f, 0x0d, 0x00, 0x00, 0x1e, 0x48, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x3b, 0x22, 0x3d, 0x39, 0x1e, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03},
    {0x46, 0x1f, 0x00, 0x00, 0x0f, 0x4f, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x65, 0x6c, 0x2f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
    {0x74, 0x5f, 0x10, 0x00, 0x16, 0x69, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19},
    {0x4b, 0x42, 0x3a, 0x39, 0x5b, 0x91, 0x6f, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x5b, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x4e},
    {0x00, 0x00, 0x09, 0x2e, 0x79, 0x81, 0x75, 0x72, 0x53, 0x43, 0x3d, 0x37, 0x2f, 0x29, 0x24, 0x1e, 0x20, 0x4e, 0x7b, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x2f, 0x3f, 0x1f},
    {0x00, 0x00, 0x00, 0x00, 0x37, 0x65, 0x60, 0x81, 0x72, 0x67, 0x69, 0x6b, 0x6d, 0x6f, 0x6f, 0x6c, 0x71, 0x98, 0xb2, 0x55, 0x17, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3e, 0x30, 0x06, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x11, 0x6c, 0x75, 0x32, 0x0a, 0x08, 0x0a, 0x0d, 0x12, 0x18, 0x1f, 0x24, 0x2d, 0x4a, 0x8e, 0x93, 0x4a, 0x16, 0x00, 0x00, 0x00, 0x16, 0x36, 0x39, 0x16, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x0e, 0x7d, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x88, 0x9c, 0x45, 0x11, 0x18, 0x32, 0x3a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x1f, 0x84, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0xb1, 0xa5, 0x60, 0x46, 0x26, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

#define CAUSTICS_BR                     (100U)                // яркость бликов в процентах (от чистого белого света)

// ----------- Эффект "Звезды" адаптация SottNick
#define CENTER_DRIFT_SPEED 6U         // скорость перемещения плавающего центра возникновения звёзд
#define STAR_BLENDER 128U             // хз что это

//---------- Эффект "Фейерверк" адаптация kostyamat
//https://gist.github.com/jasoncoon/0cccc5ba7ab108c0a373

#define MODEL_BORDER (HEIGHT - 4U)  // как далеко за экран может вылетить снаряд, если снаряд вылетает за экран, то всышка белого света (не особо логично)
#define MODEL_WIDTH  (MODEL_BORDER + WIDTH  + MODEL_BORDER) // не трогать, - матиматика
#define MODEL_HEIGHT (MODEL_BORDER + HEIGHT + MODEL_BORDER) // -//-
#define PIXEL_X_OFFSET ((MODEL_WIDTH  - WIDTH ) / 2) // -//-
#define PIXEL_Y_OFFSET ((MODEL_HEIGHT - HEIGHT) / 2) // -//-

#define SPARK 8U // максимальное количество снарядов
#define NUM_SPARKS WIDTH // количество разлитающихся питард (частей снаряда)
const saccum78 gGravity = 10;
const fract8  gBounce = 127;
const fract8  gDrag = 255;

typedef struct _DOTS_STORE {
    accum88 gBurstx;
    accum88 gBursty;
    saccum78 gBurstxv;
    saccum78 gBurstyv;
    CRGB gBurstcolor;
    bool gSkyburst = false;
} DOTS_STORE;

class Dot {    // класс для создания снарядов и питард
private:
  CRGB empty = CRGB(0,0,0);
public:
  byte    show;
  byte    theType;
  accum88 x;
  accum88 y;
  saccum78 xv;
  saccum78 yv;
  accum88 r;
  CRGB color;

  Dot() {
    show = 0;
    theType = 0;
    x =  0;
    y =  0;
    xv = 0;
    yv = 0;
    r  = 0;
    color.setRGB( 0, 0, 0);
  }

  void Draw(CRGB *leds);
  void Move(DOTS_STORE &store, bool Flashing);
  void GroundLaunch(DOTS_STORE &store);
  void Skyburst( accum88 basex, accum88 basey, saccum78 basedv, CRGB& basecolor, uint8_t dim);
  CRGB &piXY(CRGB *leds, byte x, byte y);

  int16_t scale15by8_local( int16_t i, fract8 _scale )
  {
    int16_t result;
    result = (int32_t)((int32_t)i * _scale) / 256;
    return result;
  };

  void screenscale(accum88 a, byte N, byte &screen, byte &screenerr)
  {
    byte ia = a >> 8;
    screen = scale8(ia, N);
    byte m = screen * (256 / N);
    screenerr = (ia - m) * scale8(255, N);
    return;
  };
};

// ------------ Эффект "Тихий Океан"
//  "Pacifica" перенос кода kostyamat
//  Gentle, blue-green ocean waves.
//  December 2019, Mark Kriegsman and Mary Corey March.
//  For Dan.
// https://raw.githubusercontent.com/FastLED/FastLED/master/examples/Pacifica/Pacifica.ino
static const TProgmemRGBPalette16 pacifica_palette_1 FL_PROGMEM =
    { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117,
      0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x14554B, 0x28AA50 };
static const TProgmemRGBPalette16 pacifica_palette_2 FL_PROGMEM =
    { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117,
      0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x0C5F52, 0x19BE5F };
static const TProgmemRGBPalette16 pacifica_palette_3 FL_PROGMEM =
    { 0x000208, 0x00030E, 0x000514, 0x00061A, 0x000820, 0x000927, 0x000B2D, 0x000C33,
      0x000E39, 0x001040, 0x001450, 0x001860, 0x001C70, 0x002080, 0x1040BF, 0x2060FF };

// ---- Эффект "Мотыльки"
// (с) Сотнег, https://community.alexgyver.ru/threads/wifi-lampa-budilnik-obsuzhdenie-proekta.1411/post-49262
#define BUTTERFLY_MAX_COUNT           (64U) // максимальное количество мотыльков
#define BUTTERFLY_FIX_COUNT           (28U) // количество мотыльков для режима, конда бегунок Масштаб регулирует цвет

//------------ Эффект "Змеиный Остров"
#define SNAKE_LENGTH  (HEIGHT / 2U)
#define SNAKE2_LENGTH (HEIGHT / 2U + WIDTH / 4U)
#define MAX_SNAKES    (16U) 


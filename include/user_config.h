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

#ifndef __USER_CONFIG_H
#define __USER_CONFIG_H

// Все пользовательские настройки находятся здесь.
// В первую очередь будут использоваться настройки из этого файла
// В случае отсутствия какой-либо системной настройки в этом файле будет применено значение по-умолчанию из системного файла config.h

//#define LAMP_DEBUG                                          // режим отладки, можно также включать в platformio.ini

//-----------------------------------
#define ESP_USE_BUTTON                                      // если строка не закомментирована, должна быть подключена кнопка (иначе ESP может регистрировать "фантомные" нажатия и некорректно устанавливать яркость)
//#define DEBUG_TELNET_OUTPUT  (true)                         // true - отладочные сообщения будут выводиться в telnet вместо Serial порта (для удалённой отладки без подключения usb кабелем)
//#define USE_FTP                                             // доступ к SPIFFS по FTP, логин/пароль: esp8266
#define OTA                                                 // Обновление по ОТА
//#define MIC_EFFECTS                                         // Включить использование микрофона для эффектов

#define MIC_PIN               (A0)                          // пин для микрофона, ESP8266 Analog Pin ADC0 = A0
#define LAMP_PIN              (D3)                          // пин ленты (D3)
#define BTN_PIN               (D2)                          // пин кнопки (D2)

#define MOSFET_PIN            (D1)                          // пин MOSFET транзистора   (D1) - может быть использован для управления питанием матрицы/ленты
#define ALARM_PIN             (D0)                          // пин состояния будильника (D0) - может быть использован для управления каким-либо внешним устройством на время работы будильника
#define MOSFET_LEVEL          (HIGH)                        // логический уровень, в который будет установлен пин MOSFET_PIN, когда матрица включена - HIGH или LOW
#define ALARM_LEVEL           (HIGH)                        // логический уровень, в который будет установлен пин ALARM_PIN, когда "рассвет"/будильник включен

#define WIDTH                 (16U)                         // ширина матрицы
#define HEIGHT                (16U)                         // высота матрицы

#define COLOR_ORDER           (GRB)                         // порядок цветов на ленте. Если цвет отображается некорректно - меняйте. Начать можно с RGB

#define MATRIX_TYPE           (0U)                          // тип матрицы: 0 - зигзаг, 1 - параллельная
#define CONNECTION_ANGLE      (1U)                          // угол подключения: 0 - левый нижний, 1 - левый верхний, 2 - правый верхний, 3 - правый нижний
#define STRIP_DIRECTION       (3U)                          // направление ленты из угла: 0 - вправо, 1 - вверх, 2 - влево, 3 - вниз
                                                            // при неправильной настройке матрицы вы получите предупреждение "Wrong matrix parameters! Set to default"
                                                            // шпаргалка по настройке матрицы здесь! https://alexgyver.ru/matrix_guide/
#define SEGMENTS              (1U)                          // диодов в одном "пикселе" (для создания матрицы из кусков ленты)

#define BRIGHTNESS            (255U)                        // стандартная максимальная яркость (0-255), чем меньше значение, тем меньше максимально возможная яркость
#define CURRENT_LIMIT         (2000U)                       // лимит по току в миллиамперах, автоматически управляет яркостью (пожалей свой блок питания!) 0 - выключить лимит

// настройка кнопки, если разрешена
#ifdef ESP_USE_BUTTON
#define PULL_MODE             (LOW_PULL)                    // подтяжка кнопки к нулю (для сенсорных кнопок на TP223) - LOW_PULL, подтяжка кнопки к питанию (для механических кнопок НО, на массу) - HIGH_PULL
// #define BUTTON_STEP_TIMEOUT   (75U)                         // каждые BUTTON_STEP_TIMEOUT мс будет генерироваться событие удержания кнопки (для регулировки яркости)
// #define BUTTON_CLICK_TIMEOUT  (500U)                        // максимальное время между нажатиями кнопки в мс, до достижения которого считается серия последовательных нажатий
// #define BUTTON_TIMEOUT        (500U)                        // с какого момента начинает считаться, что кнопка удерживается в мс
#endif

// Если что-то закомментировано, то будут использоваться настройки по-умолчанию из системного файла config.h
// Полезно для случаев, когда вы не знаете что за параметр и хотите оставить как есть, не меняя

#define TIME_SYNC_INTERVAL    (60*60*1000)                  // интервал синхронизации времени, 60*60*1000 => раз в час
#define NTPADDRESS            ("europe.pool.ntp.org")       // сервер времени для NTP (альтернативный метод), можно также попробовать "ntp2.colocall.net, pool.ntp.org, europe.pool.ntp.org" и т.д.

#define VERTGAUGE             (1U)                          // вертикальный/горизонтальный(1/0) индикатор, закомментировано - отключен (дефолтное поведение в config.h - отключен)
// #define NUMHOLD_TIME          (3000U)                       // время запоминания последней комбинации яркости/скорости/масштаба в мс

// #define FADERTIMEOUT          (1000U)                       // длительность всего фейдера в мс (плавное затухание эффекта при смене в DEMO)
// #define FADERSTEPTIME         (50U)                         // длительность шага фейдера, мс

// #define RANDOM_DEMO           (1)                           // 0,1 - последовательный (0)/рандомный (1) выбор режима демо
// #define DEMO_TIMEOUT          (33)                          // время в секундах для смены режима DEMO
// #define USELEDBUF                                           // буфер под эффекты, можно закомментировать, в случае если нужно сэкономить память, но будут артефакты обработки
// #define EFFECTS_RUN_TIMER     (16U)                         // период обработки эффектов - при 10 это 10мс, т.е. 1000/10 = 100 раз в секунду, при 20 = 50 раз в секунду, желательно использовать диапазон 10...40

// #define TEXT_OFFSET           (4U)                          // высота, на которой бежит текст (от низа матрицы)
// #define LET_WIDTH             (5U)                          // ширина буквы шрифта
// #define LET_HEIGHT            (8U)                          // высота буквы шрифта
// #define LET_SPACE             (1U)                          // пропуск между символами (кол-во пикселей)
// #define LETTER_COLOR          (CRGB::White)                 // цвет букв по умолчанию
// #define DEFAULT_TEXT_SPEED    (100U)                        // скорость движения текста, в миллисекундах - меньше == быстрее
// #define FADETOBLACKVALUE      (222U)                        // степень затенения фона под текстом, до 255, чем больше число - тем больше затенение.

// // --- РАССВЕТ -------------------------
// #define DAWN_BRIGHT           (200U)                        // максимальная яркость рассвета (0-255)
// #define DAWN_TIMEOUT          (1U)                          // сколько рассвет светит после времени будильника, минут
#define PRINT_ALARM_TIME                                    // нужен ли вывод времени для будильника (дефолтное поведение в config.h - вывод времени отключен)

#ifdef MIC_EFFECTS
//#define FAST_ADC_READ                                        // микрофон, использовать полный диапазон звуковых частот, если закомментировано, то будет до 5кГц, но сэкономит память и проще обсчитать...
#endif

#endif

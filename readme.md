# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

The seller provides files that work with Via and Vial

This version
- Num lock indication
- layer indication
- turn off the backlight when putting into sleep mode or turning off the computer

- Version vial-num_kp - digital block on the right (Num button - second in the top row (B1)).
- Version vial-num_kp-A1 - digital block on the left (Num button - first in the top row (A1)).

.hex examples for uploading firmware using QMK Toolbox
- Version of the digital block on the right (Num lock - B1) - winry_winry25tf_rgb_vial-num_kp.hex
- version of the digital block on the left (Num lock - A1) - winry_winry25tf_rgb_vial-num_kp-A1.hex

Attention !!!
Compiling for Vial broke macros in Via

Video example - https://youtu.be/CNF1vn-M7WM

Продавец предоставляет файлы работающие с Via и Vial

Эта версия
- индикация Num lock
- индикация слоя 
- выключение подсветки при переводе в спящий режим или выключении компьютера

- Версия vial-num_kp - цифровой блок справа (кнопка Num - вторая в верхнем ряду (B1)).
- Версия vial-num_kp-A1 - цифровой блок слева (кнопка Num - первая в верхнем ряду (A1)).


Примеры .hex для заливки прошивки используя QMK Toolbox
- Версия цифровой блок справа (Num lock - B1) - winry_winry25tf_rgb_vial-num_kp.hex
- версия цифровой блок слева (Num lock - A1) - winry_winry25tf_rgb_vial-num_kp-A1.hex

Внимание !!!
Компиляция для Vial сломала работу макросов в Via

Keyboard from
* [SpiderIsland on AliExpress(reseller)](https://a.aliexpress.com/_dVJsSpR). Seller provides [kbfirmware](https://kbfirmware.com/) JSON config that was converted to QMK.


* Keyboard Maintainer: [andrzejressel](https://github.com/andrzejressel)
* Hardware Availability: 
https://aliexpress.com/item/1005001523579896.html
https://world.taobao.com/item/599731303104.htm

Make example for this keyboard (after setting up your build environment):

    make winry/winry25tf/rgb:default
    make winry/winry25tf/rgb:vial-num_kp
    make winry/winry25tf/rgb:vial-num_kp-A1

**Reset Key**: Located on the other side of the keyboard.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

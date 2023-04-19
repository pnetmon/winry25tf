# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

Description in Russian ( Описание на русском ) - readme-ru.md

The file Winry25T_via.json from the seller contained "name": "Winry25T", "vendorId": "0xF1F1", "productId": "0x0025"

The seller provides files that work with Via and Vial

This version
- Num lock indication
- layer indication
- turn off the backlight when putting into sleep mode or turning off the computer

Video example - https://youtu.be/Lm8n4Wwc1ok

.hex examples for uploading firmware using QMK Toolbox

VIA  to configure keys and macros https://usevia.app/#/
* VIA - via-...hex (https://github.com/qmk/qmk_firmware) 

Vial to configure keys and macros https://get.vial.today/
* Vial - vial-....hex (https://github.com/vial-kb/vial-qmk) (Attention !!! Compiling for Vial broke macros in Via)

where
- version of the digital block on the right (Num lock - B1) - ...num_kp.hex
- version of the digital block on the left (Num lock - A1) - ...num_kp-A1.hex

To install hex files, you need to (it is not necessary to install QMK itself)
QMK Toolboox for uploading (it is also necessary to install drivers) https://github.com/qmk/qmk_toolbox
(clear EEPROM)

Keyboard from
* [SpiderIsland on AliExpress(reseller)](https://a.aliexpress.com/_dVJsSpR). Seller provides [kbfirmware](https://kbfirmware.com/) JSON config that was converted to QMK.


* Keyboard Maintainer: [andrzejressel](https://github.com/andrzejressel)
* Hardware Availability: 
https://aliexpress.com/item/1005001523579896.html
https://world.taobao.com/item/599731303104.htm

Make example for this keyboard (after setting up your build environment):

    make winry/winry25tf/rgb:default
    make winry/winry25tf/rgb:vial-num_kp

**Reset Key**: Located on the other side of the keyboard.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

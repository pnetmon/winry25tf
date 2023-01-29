# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

The file Winry25T_via.json from the seller contained "name": "Winry25T", "vendorId": "0xF1F1", "productId": "0x0025"

Description in Russian ( Описание на русском ) - readme-ru.md

The seller provides files that work with Via and Vial

This version
- Num lock indication
- layer indication
- turn off the backlight when putting into sleep mode or turning off the computer

Video example - https://youtu.be/CNF1vn-M7WM

Attention !!!
Compiling for Vial broke macros in Via

.hex examples for uploading firmware using QMK Toolbox
- version of the digital block on the right (Num lock - B1) - winry_winry25tf_rgb_vial-num_kp.hex
- version of the digital block on the left (Num lock - A1) - winry_winry25tf_rgb_vial-num_kp-A1.hex

To install hex files, you need to (it is not necessary to install QMK itself)
1) QMK Toolboox for uploading (it is also necessary to install drivers) https://github.com/qmk/qmk_toolbox
2) Vial to configure keys and macros https://get.vial.today/

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

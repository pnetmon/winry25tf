# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

Больше информации на английском языке.

Файл Winry25T_via.json от продавца содержал "name": "Winry25T", "vendorId": "0xF1F1", "productId": "0x0025"

Продавец предоставляет файлы работающие с Via и Vial

Эта версия
- индикация Num lock
- индикация слоя 
- выключение подсветки при переводе в спящий режим или выключении компьютера

Видео с примером работы - https://youtu.be/CNF1vn-M7WM

Внимание !!!
Компиляция для Vial сломала работу макросов в Via

Примеры .hex для заливки прошивки используя QMK Toolbox:
- версия цифровой блок справа (Num lock - B1) - winry_winry25tf_rgb_vial-num_kp.hex
- версия цифровой блок слева (Num lock - A1) - winry_winry25tf_rgb_vial-num_kp-A1.hex

Для установки hex файлов необходимо (нет необходимости устанавливаться сам QMK)
1) QMK Toolboox для  заливки (так же необходимо поставить драйвера) https://github.com/qmk/qmk_toolbox
2) Vial для настройки клавиш и макросов https://get.vial.today/

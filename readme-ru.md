# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

Больше информации на английском языке.

Файл Winry25T_via.json от продавца содержал "name": "Winry25T", "vendorId": "0xF1F1", "productId": "0x0025"

Продавец предоставляет файлы работающие с Via и Vial

Эта версия
- индикация Num lock
- индикация слоя 
- выключение подсветки при переводе в спящий режим или выключении компьютера

Видео с примером работы - https://youtu.be/Lm8n4Wwc1ok

Примеры .hex для заливки прошивки используя QMK Toolbox:
- Выбери что будет использоваться VIA или Vial и где будут цифры: слева или справа.

VIA
- для настройки клавиш и макросов https://usevia.app/#/
- файл via-....hex
- JSON файл - via_json\via_V3_Winry25T.json

Vial
- для настройки клавиш и макросов https://get.vial.today/
- файл vial-....hex
- версия для vial некорректно работает c VIA

где
- версия цифровой блок справа (Num lock - B1) - ...-num_kp.hex
- версия цифровой блок слева (Num lock - A1) - ...-num_kp-A1.hex

Для установки hex файлов необходимо (QMK для этого устанавливать не нужно)
QMK Toolboox для  заливки (так же необходимо поставить драйвера) https://github.com/qmk/qmk_toolbox
Желательно перед заливкой сделать clear EEPROM.

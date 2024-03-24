
NKRO_ENABLE        = yes
OLED_ENABLE        = yes
OLED_DRIVER        = ssd1306
LTO_ENABLE         = yes
VIA_ENABLE         = no
MOUSEKEY_ENABLE = no       # Mouse keys

COMMAND_ENABLE = no

WPM_ENABLE = no
#DEBOUNCE_TYPE =  asym_eager_defer_pk
DEBOUNCE_TYPE =  sym_defer_pr
CAPS_WORD_ENABLE = yes
OLED_TIMEOUT=5000
UNICODE_ENABLE = yes
MIDI_ENABLE = no
AUTO_SHIFT_ENABLE = no

#POINTING_DEVICE_ENABLE = yes
#POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes
GB_MATRIX_DRIVER = ws2812
#WS2812_DRIVER = vendor

NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE= no       # Enable keyboard backlight functionality

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow

POINTING_DEVICE_DRIVER = pimoroni_trackball
POINTING_DEVICE_ENABLE = no
PIMORONI_TRACKBALL_ENABLE = yes


#undef SEND_STRING
#define SEND_STRING(string) send_string_with_delay_P(PSTR(string), 0)
//============================ TAP DANCE =========================================
void equalsequals(tap_dance_state_t *state, void *user_data) {
  char* str="=";
  if (state->count == 2) {
    // Reset the keyboard if you tap the key more than three times
        str="==";
  }
  if (state->count == 3) {
    // Reset the keyboard if you tap the key more than three times
        str="===";
  }
  send_string_with_delay(str,0);
  reset_tap_dance (state);
}

void exclequals(tap_dance_state_t *state, void *user_data) {
  char* str="!";
  if (state->count == 2) {
    // Reset the keyboard if you tap the key more than three times
        str="!=";
  }
  if (state->count == 3) {
    // Reset the keyboard if you tap the key more than three times
        str="!==";
  }
  send_string_with_delay(str,0);
  reset_tap_dance (state);
}

void gtequals(tap_dance_state_t *state, void *user_data) {
  char* str=">";
  if (state->count == 2) {
    // Reset the keyboard if you tap the key more than three times
        str=">=";
  }
  send_string_with_delay(str,0);
  reset_tap_dance (state);
}

void ltequals(tap_dance_state_t *state, void *user_data) {
  char* str="<";
  if (state->count == 2) {
    // Reset the keyboard if you tap the key more than three times
        str="<=";
  }
  send_string_with_delay(str,0);
  reset_tap_dance (state);
}



enum {
  TD_F1 = 0,
  TD_F2,
  TD_F3,
  TD_F4,
  TD_F5,
  TD_F6,
  TD_F7,
  TD_F8,
  TD_F9,
  TD_F10,
  TD_F11,
  TD_F12,
  TD_EQEQ,
  TD_EXEQ,
  TD_LTEQ,
  TD_GTEQ,
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_F1]  = ACTION_TAP_DANCE_DOUBLE(KC_UNDO,KC_F1),
  [TD_F2]  = ACTION_TAP_DANCE_DOUBLE(KC_CUT,KC_F2),
  [TD_F3]  = ACTION_TAP_DANCE_DOUBLE(KC_COPY,KC_F3),
  [TD_F4]  = ACTION_TAP_DANCE_DOUBLE(KC_PASTE,KC_F4),
  [TD_F5]  = ACTION_TAP_DANCE_DOUBLE(KC_TAB,KC_F5),
  [TD_F6]  = ACTION_TAP_DANCE_DOUBLE(KC_INS,KC_F6),
  [TD_F7]  = ACTION_TAP_DANCE_DOUBLE(KC_DEL,KC_F7),
  [TD_F8]  = ACTION_TAP_DANCE_DOUBLE(KC_NO,KC_F8),
  [TD_F9]  = ACTION_TAP_DANCE_DOUBLE(KC_NO,KC_F1),
  [TD_F10]  = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_F10),
  [TD_F11]  = ACTION_TAP_DANCE_DOUBLE(RCTL(KC_A), KC_F11),
  [TD_F12]  = ACTION_TAP_DANCE_DOUBLE(KC_NO, KC_F12),
  [TD_EQEQ] = ACTION_TAP_DANCE_FN(equalsequals),
  [TD_EXEQ] = ACTION_TAP_DANCE_FN(exclequals),
  [TD_LTEQ] = ACTION_TAP_DANCE_FN(ltequals),
  [TD_GTEQ] = ACTION_TAP_DANCE_FN(gtequals),
};

#define T_UNDO  TD(TD_F1)
#define T_CUT   TD(TD_F2)
#define T_COPY  TD(TD_F3)
#define T_PASTE TD(TD_F4)
#define T_TAB TD(TD_F5)
#define T_INS TD(TD_F6)
#define T_DEL TD(TD_F7)
#define T8_NO TD(TD_F8)
#define T9_NO TD(TD_F9)
#define T10_NO TD(TD_F10)
#define T_SELA TD(TD_F11)
#define T12_NO TD(TD_F12)
#define T_EQL TD(TD_EQEQ)
#define T_EXLM TD(TD_EXEQ)
#define T_GT TD(TD_GTEQ)
#define T_LT TD(TD_LTEQ)
#define T_CC TD(TD_CC)
#define T_QC TD(TD_QC)


#define KC_CCEDIL RALT_T(LSFT_T(KC_COMMA))



SRC += hyezo.c

KEY_OVERRIDE_ENABLE = yes
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
LEADER_ENABLE = yes
REPEAT_KEY_ENABLE = yes

COMBO_ENABLE = no
MOUSEKEY_ENABLE = no

ifeq ($(strip $(KEY_OVERRIDE_ENABLE)), yes)
  SRC += features/overrides.c
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	INTROSPECTION_KEYMAP_C = features/tapdances.c
endif

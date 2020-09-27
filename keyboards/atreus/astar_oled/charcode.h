#ifndef __CHARCODE_H_
#define __CHARCODE_H_

#define CH_FROWN 0x01
#define CH_SMILE 0x02
#define CH_HEART 0x03
#define CH_DIAM  0x04
#define CH_CLUB  0x05
#define CH_SPADE 0x06
#define CH_FCIR  0x07
#define CH_FCIRI 0x08
#define CH_CIRC  0x09
#define CH_CIRCI 0x0A
#define CH_MALE  0x0B
#define CH_FEM   0x0C
#define CH_NOTE  0x0D
#define CH_NOTES 0x0E
#define CH_STAR  0x0F
#define CH_TRIRT 0x10
#define CH_TRILT 0x11
#define CH_UPDN2 0x12
#define CH_WARN  0x13
#define CH_PARA  0x14
#define CH_SECT  0x15
#define CH_SPC   0x16
#define CH_UPDN  0x17
#define CH_UP    0x18
#define CH_DOWN  0x19
#define CH_RGHT  0x1A
#define CH_LEFT  0x1B
// #define CH_????? 0x1C
// #define CH_????? 0x1D
#define CH_TRIUP 0x1E
#define CH_TRIDN 0x1F

#define CH_BLANK 0x20
#define CH_EXLM  0x21
#define CH_DBLQT 0x22
#define CH_HASH  0x23
#define CH_DLR   0x24
#define CH_PCT   0x25
#define CH_AMPR  0x26
#define CH_QUOT  0x27
#define CH_LPRN  0x28
#define CH_RPRN  0x29
#define CH_ASTR  0x2A
#define CH_PLUS  0x2B
#define CH_COMM  0x2C
#define CH_MINS  0x2D
#define CH_DOT   0x2E
#define CH_SLSH  0x2F
#define CH_0     0x30
#define CH_1     0x31
#define CH_2     0x32
#define CH_3     0x33
#define CH_4     0x34
#define CH_5     0x35
#define CH_6     0x36
#define CH_7     0x37
#define CH_8     0x38
#define CH_9     0x39
#define CH_COLON 0x3A
#define CH_SCLN  0x3B
#define CH_LT    0x3C
#define CH_EQL   0x3D
#define CH_GT    0x3E
#define CH_QSTN  0x3F

#define CH_AT    0x40
#define CH_A_CAP 0x41
#define CH_B_CAP 0x42
#define CH_C_CAP 0x43
#define CH_D_CAP 0x44
#define CH_E_CAP 0x45
#define CH_F_CAP 0x46
#define CH_G_CAP 0x47
#define CH_H_CAP 0x48
#define CH_I_CAP 0x49
#define CH_J_CAP 0x4A
#define CH_K_CAP 0x4B
#define CH_L_CAP 0x4C
#define CH_M_CAP 0x4D
#define CH_N_CAP 0x4E
#define CH_O_CAP 0x4F
#define CH_P_CAP 0x50
#define CH_Q_CAP 0x51
#define CH_R_CAP 0x52
#define CH_S_CAP 0x53
#define CH_T_CAP 0x54
#define CH_U_CAP 0x55
#define CH_V_CAP 0x56
#define CH_W_CAP 0x57
#define CH_X_CAP 0x58
#define CH_Y_CAP 0x59
#define CH_Z_CAP 0x5A
#define CH_LBRC  0x5B
#define CH_BSLS  0x5C
#define CH_RBRC  0x5D
#define CH_CARET 0x5E
#define CH_UNDSC 0x5F

#define CH_GRV   0x60
#define CH_A     0x61
#define CH_B     0x62
#define CH_C     0x63
#define CH_D     0x64
#define CH_E     0x65
#define CH_F     0x66
#define CH_G     0x67
#define CH_H     0x68
#define CH_I     0x69
#define CH_J     0x6A
#define CH_K     0x6B
#define CH_L     0x6C
#define CH_M     0x6D
#define CH_N     0x6E
#define CH_O     0x6F
#define CH_P     0x70
#define CH_Q     0x71
#define CH_R     0x72
#define CH_S     0x73
#define CH_T     0x74
#define CH_U     0x75
#define CH_V     0x76
#define CH_W     0x77
#define CH_X     0x78
#define CH_Y     0x79
#define CH_Z     0x7A
#define CH_LCBR  0x7B
#define CH_PIPE  0x7C
#define CH_RCBR  0x7D
#define CH_TILDE 0x7E
#define CH_HOME2 0x7F

#define CH_F1    0x80
#define CH_F2    0x81
#define CH_F3    0x82
#define CH_F4    0x83
#define CH_F5    0x84
#define CH_F6    0x85
#define CH_F7    0x86
#define CH_F8    0x87
#define CH_F9    0x88
#define CH_F10   0x89
#define CH_F11   0x8A
#define CH_F12   0x8B

#define CH_ESC   0xA0
#define CH_TAB   0xA1
#define CH_CMD   0xA2
#define CH_SHIFT 0xA3
#define CH_BSPC  0xA4
#define CH_DEL   0xA5
#define CH_PAUS  0xA6
#define CH_PSCR  0xA7
#define CH_SLCK  0xA8
#define CH_ENT   0xA9
#define CH_INS   0xAA
#define CH_RESET 0xAB

#define CH_BD_VV 0xC0
#define CH_BD_XX 0xC1
#define CH_BD_HH 0xC2
#define CH_BD_VL 0xC3
#define CH_BD_VR 0xC4
#define CH_BD_XL 0xC5
#define CH_BD_XR 0xC6
#define CH_HOME  0xC7
#define CH_END   0xC8
#define CH_PGUP  0xC9
#define CH_PGDN  0xCA

// key aliases
#define CH_LGUI  CH_CLUB
#define CH_LSFT  CH_SHIFT
#define CH_RAISE CH_TRIUP
#define CH_LOWER CH_TRIDN
#define CH_TRNS  CH_BLANK
#define CH_NO    CH_BLANK
#define CH_VOLU  CH_NOTES
#define CH_VOLD  CH_NOTE


// add borders
#define LAYOUT_COLS ((MATRIX_ROWS*2-1)*((MATRIX_COLS-1)*2+1)+1)
#define LAYOUT_CH( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
) \
{ \
	k00, CH_BD_VV, k01, CH_BD_VV, k02, CH_BD_VV, k03, CH_BD_VV, k04, CH_BD_VL, CH_BLANK, CH_BD_VR,      \
    k05, CH_BD_VV, k06, CH_BD_VV, k07, CH_BD_VV, k08, CH_BD_VV, k09,                                    \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XL, CH_BLANK, CH_BD_XR, \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH,           \
	k10, CH_BD_VV, k11, CH_BD_VV, k12, CH_BD_VV, k13, CH_BD_VV, k14, CH_BD_VL, CH_BLANK, CH_BD_VR,      \
    k15, CH_BD_VV, k16, CH_BD_VV, k17, CH_BD_VV, k18, CH_BD_VV, k19,                                    \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XL, CH_BLANK, CH_BD_XR, \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH,           \
	k20, CH_BD_VV, k21, CH_BD_VV, k22, CH_BD_VV, k23, CH_BD_VV, k24, CH_BD_VL, CH_BLANK, CH_BD_VR,      \
    k25, CH_BD_VV, k26, CH_BD_VV, k27, CH_BD_VV, k28, CH_BD_VV, k29,                                    \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XL, CH_BLANK, CH_BD_XR, \
    CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH, CH_BD_XX, CH_BD_HH,           \
	k30, CH_BD_VV, k31, CH_BD_VV, k32, CH_BD_VV, k33, CH_BD_VV, k34, CH_BD_VL, CH_BLANK, CH_BD_VR,      \
    k35, CH_BD_VV, k36, CH_BD_VV, k37, CH_BD_VV, k38, CH_BD_VV, k39,                                    \
    0x00 \
}

#endif // __CHARCODE_H_

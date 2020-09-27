/* Copyright 2020 Kevin Retzke
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define ACH_FROWN 0x01
#define ACH_SMILE 0x02
#define ACH_HEART 0x03
#define ACH_DIAM  0x04
#define ACH_CLUB  0x05
#define ACH_SPADE 0x06
#define ACH_FCIR  0x07
#define ACH_FCIRI 0x08
#define ACH_CIRC  0x09
#define ACH_CIRCI 0x0A
#define ACH_MALE  0x0B
#define ACH_FEM   0x0C
// 0x0D is carriage return, DO NOT USE
#define ACH_NOTES 0x0E
#define ACH_STAR  0x0F
#define ACH_TRIRT 0x10
#define ACH_TRILT 0x11
#define ACH_UPDN  0x12
#define ACH_WARN  0x13
#define ACH_PARA  0x14
#define ACH_SECT  0x15
#define ACH_UNDR  0x16
#define ACH_SLCK  0x17
#define ACH_UP    0x18
#define ACH_DOWN  0x19
#define ACH_RGHT  0x1A
#define ACH_LEFT  0x1B
#define ACH_SPC   0x1C
#define ACH_NEQL  0x1D // ???
#define ACH_TRIUP 0x1E // ???
#define ACH_TRIDN 0x1F // ???

#define ACH_BLANK 0x20
#define ACH_EXLM  0x21
#define ACH_DBLQT 0x22
#define ACH_HASH  0x23
#define ACH_DLR   0x24
#define ACH_PCT   0x25
#define ACH_AMPR  0x26
#define ACH_QUOT  0x27
#define ACH_LPRN  0x28
#define ACH_RPRN  0x29
#define ACH_ASTR  0x2A
#define ACH_PLUS  0x2B
#define ACH_COMM  0x2C
#define ACH_MINS  0x2D
#define ACH_DOT   0x2E
#define ACH_SLSH  0x2F
#define ACH_0     0x30
#define ACH_1     0x31
#define ACH_2     0x32
#define ACH_3     0x33
#define ACH_4     0x34
#define ACH_5     0x35
#define ACH_6     0x36
#define ACH_7     0x37
#define ACH_8     0x38
#define ACH_9     0x39
#define ACH_COLON 0x3A
#define ACH_SCLN  0x3B
#define ACH_LT    0x3C
#define ACH_EQL   0x3D
#define ACH_GT    0x3E
#define ACH_QSTN  0x3F

#define ACH_AT    0x40
#define ACH_A_CAP 0x41
#define ACH_B_CAP 0x42
#define ACH_C_CAP 0x43
#define ACH_D_CAP 0x44
#define ACH_E_CAP 0x45
#define ACH_F_CAP 0x46
#define ACH_G_CAP 0x47
#define ACH_H_CAP 0x48
#define ACH_I_CAP 0x49
#define ACH_J_CAP 0x4A
#define ACH_K_CAP 0x4B
#define ACH_L_CAP 0x4C
#define ACH_M_CAP 0x4D
#define ACH_N_CAP 0x4E
#define ACH_O_CAP 0x4F
#define ACH_P_CAP 0x50
#define ACH_Q_CAP 0x51
#define ACH_R_CAP 0x52
#define ACH_S_CAP 0x53
#define ACH_T_CAP 0x54
#define ACH_U_CAP 0x55
#define ACH_V_CAP 0x56
#define ACH_W_CAP 0x57
#define ACH_X_CAP 0x58
#define ACH_Y_CAP 0x59
#define ACH_Z_CAP 0x5A
#define ACH_LBRC  0x5B
#define ACH_BSLS  0x5C
#define ACH_RBRC  0x5D
#define ACH_CARET 0x5E
#define ACH_UNDSC 0x5F

#define ACH_GRV   0x60
#define ACH_A     0x61
#define ACH_B     0x62
#define ACH_C     0x63
#define ACH_D     0x64
#define ACH_E     0x65
#define ACH_F     0x66
#define ACH_G     0x67
#define ACH_H     0x68
#define ACH_I     0x69
#define ACH_J     0x6A
#define ACH_K     0x6B
#define ACH_L     0x6C
#define ACH_M     0x6D
#define ACH_N     0x6E
#define ACH_O     0x6F
#define ACH_P     0x70
#define ACH_Q     0x71
#define ACH_R     0x72
#define ACH_S     0x73
#define ACH_T     0x74
#define ACH_U     0x75
#define ACH_V     0x76
#define ACH_W     0x77
#define ACH_X     0x78
#define ACH_Y     0x79
#define ACH_Z     0x7A
#define ACH_LCBR  0x7B
#define ACH_PIPE  0x7C
#define ACH_RCBR  0x7D
#define ACH_TILDE 0x7E
#define ACH_HOME2 0x7F

#define ACH_F1    0x80
#define ACH_F2    0x81
#define ACH_F3    0x82
#define ACH_F4    0x83
#define ACH_F5    0x84
#define ACH_F6    0x85
#define ACH_F7    0x86
#define ACH_F8    0x87
#define ACH_F9    0x88
#define ACH_F10   0x89
#define ACH_F11   0x8A
#define ACH_F12   0x8B

#define ACH_ESC   0xA0
#define ACH_TAB   0xA1
#define ACH_CMD   0xA2
#define ACH_SHIFT 0xA3
#define ACH_BSPC  0xA4
#define ACH_DEL   0xA5
#define ACH_PAUS  0xA6
#define ACH_PSCR  0xA7
#define ACH_NOTE  0xA8
#define ACH_ENT   0xA9
#define ACH_INS   0xAA
#define ACH_RESET 0xAB

#define ACH_BD_VV 0xC0
#define ACH_BD_XX 0xC1
#define ACH_BD_HH 0xC2
#define ACH_BD_VL 0xC3
#define ACH_BD_VR 0xC4
#define ACH_BD_XL 0xC5
#define ACH_BD_XR 0xC6
#define ACH_HOME  0xC7
#define ACH_END   0xC8
#define ACH_PGUP  0xC9
#define ACH_PGDN  0xCA

// key aliases
#define ACH_LGUI  ACH_CLUB
#define ACH_LSFT  ACH_SHIFT
#define ACH_RAISE ACH_TRIUP
#define ACH_LOWER ACH_TRIDN
#define ACH_TRNS  ACH_BLANK
#define ACH_NO    ACH_BLANK
#define ACH_VOLU  ACH_NOTES
#define ACH_VOLD  ACH_NOTE


// add borders
#define LAYOUT_COLS ((MATRIX_ROWS*2-1)*((MATRIX_COLS-1)*2+1)+1)
#define LAYOUT_ACH( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
) \
{ \
	k00, ACH_BD_VV, k01, ACH_BD_VV, k02, ACH_BD_VV, k03, ACH_BD_VV, k04, ACH_BD_VL, ACH_BLANK, ACH_BD_VR,      \
    k05, ACH_BD_VV, k06, ACH_BD_VV, k07, ACH_BD_VV, k08, ACH_BD_VV, k09,                                    \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XL, ACH_BLANK, ACH_BD_XR, \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH,           \
	k10, ACH_BD_VV, k11, ACH_BD_VV, k12, ACH_BD_VV, k13, ACH_BD_VV, k14, ACH_BD_VL, ACH_BLANK, ACH_BD_VR,      \
    k15, ACH_BD_VV, k16, ACH_BD_VV, k17, ACH_BD_VV, k18, ACH_BD_VV, k19,                                    \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XL, ACH_BLANK, ACH_BD_XR, \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH,           \
	k20, ACH_BD_VV, k21, ACH_BD_VV, k22, ACH_BD_VV, k23, ACH_BD_VV, k24, ACH_BD_VL, ACH_BLANK, ACH_BD_VR,      \
    k25, ACH_BD_VV, k26, ACH_BD_VV, k27, ACH_BD_VV, k28, ACH_BD_VV, k29,                                    \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XL, ACH_BLANK, ACH_BD_XR, \
    ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH, ACH_BD_XX, ACH_BD_HH,           \
	k30, ACH_BD_VV, k31, ACH_BD_VV, k32, ACH_BD_VV, k33, ACH_BD_VV, k34, ACH_BD_VL, ACH_BLANK, ACH_BD_VR,      \
    k35, ACH_BD_VV, k36, ACH_BD_VV, k37, ACH_BD_VV, k38, ACH_BD_VV, k39,                                    \
    0x00 \
}

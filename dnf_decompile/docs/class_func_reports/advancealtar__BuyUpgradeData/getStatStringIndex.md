# getStatStringIndex

`_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE`

`advancealtar::BuyUpgradeData::getStatStringIndex(advancealtar::FieldType::T) const`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a3106` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a3106  _ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE
#           advancealtar::BuyUpgradeData::getStatStringIndex(advancealtar::FieldType::T) const
# range [0x088a3106, 0x088a3321]
088a3106 +0x000:  push   %ebp
088a3107 +0x001:  mov    %esp,%ebp
088a3109 +0x003:  push   %edi
088a310a +0x004:  push   %esi
088a310b +0x005:  push   %ebx
088a310c +0x006:  sub    $0x1c,%esp
088a310f +0x009:  mov    0x8(%ebp),%ebx
088a3112 +0x00c:  mov    %ebx,%eax
088a3114 +0x00e:  mov    %eax,(%esp)
088a3117 +0x011:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a311c +0x016:  mov    0x10(%ebp),%eax
088a311f +0x019:  sub    $0xa,%eax
088a3122 +0x01c:  cmp    $0xe,%eax
088a3125 +0x01f:  ja     088a3312 <+0x20c>
088a312b +0x025:  mov    &data#75b48753(.rodata)(,%eax,4),%eax
088a3132 +0x02c:  jmp    *%eax
088a3134 +0x02e:  movl   $&_ZL14gUnicodeBuffer+0x7044,(%esp)
088a313b +0x035:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3140 +0x03a:  mov    %ebx,%edx
088a3142 +0x03c:  mov    %eax,0x4(%esp)
088a3146 +0x040:  mov    %edx,(%esp)
088a3149 +0x043:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a314e +0x048:  jmp    088a32f6 <+0x1f0>
088a3153 +0x04d:  movl   $&_ZL14gUnicodeBuffer+0x7045,(%esp)
088a315a +0x054:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a315f +0x059:  mov    %ebx,%edx
088a3161 +0x05b:  mov    %eax,0x4(%esp)
088a3165 +0x05f:  mov    %edx,(%esp)
088a3168 +0x062:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a316d +0x067:  jmp    088a32f6 <+0x1f0>
088a3172 +0x06c:  movl   $&_ZL14gUnicodeBuffer+0x7047,(%esp)
088a3179 +0x073:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a317e +0x078:  mov    %ebx,%edx
088a3180 +0x07a:  mov    %eax,0x4(%esp)
088a3184 +0x07e:  mov    %edx,(%esp)
088a3187 +0x081:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a318c +0x086:  jmp    088a32f6 <+0x1f0>
088a3191 +0x08b:  movl   $&_ZL14gUnicodeBuffer+0x7048,(%esp)
088a3198 +0x092:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a319d +0x097:  mov    %ebx,%edx
088a319f +0x099:  mov    %eax,0x4(%esp)
088a31a3 +0x09d:  mov    %edx,(%esp)
088a31a6 +0x0a0:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a31ab +0x0a5:  jmp    088a32f6 <+0x1f0>
088a31b0 +0x0aa:  movl   $&_ZL14gUnicodeBuffer+0x7049,(%esp)
088a31b7 +0x0b1:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a31bc +0x0b6:  mov    %ebx,%edx
088a31be +0x0b8:  mov    %eax,0x4(%esp)
088a31c2 +0x0bc:  mov    %edx,(%esp)
088a31c5 +0x0bf:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a31ca +0x0c4:  jmp    088a32f6 <+0x1f0>
088a31cf +0x0c9:  movl   $&_ZL14gUnicodeBuffer+0x704a,(%esp)
088a31d6 +0x0d0:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a31db +0x0d5:  mov    %ebx,%edx
088a31dd +0x0d7:  mov    %eax,0x4(%esp)
088a31e1 +0x0db:  mov    %edx,(%esp)
088a31e4 +0x0de:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a31e9 +0x0e3:  jmp    088a32f6 <+0x1f0>
088a31ee +0x0e8:  movl   $&_ZL14gUnicodeBuffer+0x7063,(%esp)
088a31f5 +0x0ef:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a31fa +0x0f4:  mov    %ebx,%edx
088a31fc +0x0f6:  mov    %eax,0x4(%esp)
088a3200 +0x0fa:  mov    %edx,(%esp)
088a3203 +0x0fd:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a3208 +0x102:  jmp    088a32f6 <+0x1f0>
088a320d +0x107:  movl   $&_ZL14gUnicodeBuffer+0x7064,(%esp)
088a3214 +0x10e:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3219 +0x113:  mov    %ebx,%edx
088a321b +0x115:  mov    %eax,0x4(%esp)
088a321f +0x119:  mov    %edx,(%esp)
088a3222 +0x11c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a3227 +0x121:  jmp    088a32f6 <+0x1f0>
088a322c +0x126:  movl   $&_ZL14gUnicodeBuffer+0x7065,(%esp)
088a3233 +0x12d:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3238 +0x132:  mov    %ebx,%edx
088a323a +0x134:  mov    %eax,0x4(%esp)
088a323e +0x138:  mov    %edx,(%esp)
088a3241 +0x13b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a3246 +0x140:  jmp    088a32f6 <+0x1f0>
088a324b +0x145:  movl   $&_ZL14gUnicodeBuffer+0x7066,(%esp)
088a3252 +0x14c:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3257 +0x151:  mov    %ebx,%edx
088a3259 +0x153:  mov    %eax,0x4(%esp)
088a325d +0x157:  mov    %edx,(%esp)
088a3260 +0x15a:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a3265 +0x15f:  jmp    088a32f6 <+0x1f0>
088a326a +0x164:  movl   $&_ZL14gUnicodeBuffer+0x7067,(%esp)
088a3271 +0x16b:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3276 +0x170:  mov    %ebx,%edx
088a3278 +0x172:  mov    %eax,0x4(%esp)
088a327c +0x176:  mov    %edx,(%esp)
088a327f +0x179:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a3284 +0x17e:  jmp    088a32f6 <+0x1f0>
088a3286 +0x180:  movl   $&_ZL14gUnicodeBuffer+0x706a,(%esp)
088a328d +0x187:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a3292 +0x18c:  mov    %ebx,%edx
088a3294 +0x18e:  mov    %eax,0x4(%esp)
088a3298 +0x192:  mov    %edx,(%esp)
088a329b +0x195:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a32a0 +0x19a:  jmp    088a32f6 <+0x1f0>
088a32a2 +0x19c:  movl   $&_ZL14gUnicodeBuffer+0x7046,(%esp)
088a32a9 +0x1a3:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a32ae +0x1a8:  mov    %ebx,%edx
088a32b0 +0x1aa:  mov    %eax,0x4(%esp)
088a32b4 +0x1ae:  mov    %edx,(%esp)
088a32b7 +0x1b1:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a32bc +0x1b6:  jmp    088a32f6 <+0x1f0>
088a32be +0x1b8:  movl   $&_ZL14gUnicodeBuffer+0x7069,(%esp)
088a32c5 +0x1bf:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a32ca +0x1c4:  mov    %ebx,%edx
088a32cc +0x1c6:  mov    %eax,0x4(%esp)
088a32d0 +0x1ca:  mov    %edx,(%esp)
088a32d3 +0x1cd:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a32d8 +0x1d2:  jmp    088a32f6 <+0x1f0>
088a32da +0x1d4:  movl   $&_ZL14gUnicodeBuffer+0x706a,(%esp)
088a32e1 +0x1db:  call   08ac35f8 <_ZN14CStringManager6getStrEi>  ; CStringManager::getStr(int)
088a32e6 +0x1e0:  mov    %ebx,%edx
088a32e8 +0x1e2:  mov    %eax,0x4(%esp)
088a32ec +0x1e6:  mov    %edx,(%esp)
088a32ef +0x1e9:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
088a32f4 +0x1ee:  jmp    088a3313 <+0x20d>
088a32f6 +0x1f0:  jmp    088a3313 <+0x20d>
088a32f8 +0x1f2:  mov    %edx,%esi
088a32fa +0x1f4:  mov    %eax,%edi
088a32fc +0x1f6:  mov    %ebx,%eax
088a32fe +0x1f8:  mov    %eax,(%esp)
088a3301 +0x1fb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a3306 +0x200:  mov    %edi,%eax
088a3308 +0x202:  mov    %esi,%edx
088a330a +0x204:  mov    %eax,(%esp)
088a330d +0x207:  call   08ae3750 <_Unwind_Resume>
088a3312 +0x20c:  nop
088a3313 +0x20d:  mov    %ebx,%eax
088a3315 +0x20f:  mov    %ebx,%eax
088a3317 +0x211:  add    $0x1c,%esp
088a331a +0x214:  pop    %ebx
088a331b +0x215:  pop    %esi
088a331c +0x216:  pop    %edi
088a331d +0x217:  pop    %ebp
088a331e +0x218:  ret    $0x4
088a3321 +0x21b:  nop
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getStatStringIndex @ 0x88a3106

/* advancealtar::BuyUpgradeData::getStatStringIndex(advancealtar::FieldType::T) const */

string * advancealtar::BuyUpgradeData::getStatStringIndex
                   (string *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  std::string::string(param_1);
  switch(param_3) {
  case 10:
                    /* try { // try from 088a313b to 088a32f3 has its CatchHandler @ 088a32f8 */
    pcVar1 = (char *)CStringManager::getStr(0x11570);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xb:
    pcVar1 = (char *)CStringManager::getStr(0x11571);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xc:
    pcVar1 = (char *)CStringManager::getStr(0x11573);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xd:
    pcVar1 = (char *)CStringManager::getStr(0x11574);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xe:
    pcVar1 = (char *)CStringManager::getStr(0x11575);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xf:
    pcVar1 = (char *)CStringManager::getStr(0x11576);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x10:
    pcVar1 = (char *)CStringManager::getStr(0x1158f);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x11:
    pcVar1 = (char *)CStringManager::getStr(0x11590);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x12:
    pcVar1 = (char *)CStringManager::getStr(0x11591);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x13:
    pcVar1 = (char *)CStringManager::getStr(0x11592);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x14:
    pcVar1 = (char *)CStringManager::getStr(0x11593);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x15:
    pcVar1 = (char *)CStringManager::getStr(0x11596);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x16:
    pcVar1 = (char *)CStringManager::getStr(0x11572);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x17:
    pcVar1 = (char *)CStringManager::getStr(0x11595);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x18:
    pcVar1 = (char *)CStringManager::getStr(0x11596);
    std::string::operator=(param_1,pcVar1);
  }
  return param_1;
}
```

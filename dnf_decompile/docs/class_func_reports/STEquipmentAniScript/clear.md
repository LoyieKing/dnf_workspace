# clear

`_ZN20STEquipmentAniScript5clearEv`

`STEquipmentAniScript::clear()`

| 类 | 地址 |
|---|---|
| `STEquipmentAniScript` | `0x0898ce62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898ce62  _ZN20STEquipmentAniScript5clearEv
#           STEquipmentAniScript::clear()
# range [0x0898ce62, 0x0898d03d]
0898ce62 +0x000:  push   %ebp
0898ce63 +0x001:  mov    %esp,%ebp
0898ce65 +0x003:  sub    $0x28,%esp
0898ce68 +0x006:  mov    0x8(%ebp),%eax
0898ce6b +0x009:  movl   $0x0,(%eax)
0898ce71 +0x00f:  mov    0x8(%ebp),%eax
0898ce74 +0x012:  add    $0x4,%eax
0898ce77 +0x015:  movl   $"",0x4(%esp)
0898ce7f +0x01d:  mov    %eax,(%esp)
0898ce82 +0x020:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ce87 +0x025:  mov    0x8(%ebp),%eax
0898ce8a +0x028:  add    $0x8,%eax
0898ce8d +0x02b:  movl   $"",0x4(%esp)
0898ce95 +0x033:  mov    %eax,(%esp)
0898ce98 +0x036:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ce9d +0x03b:  mov    0x8(%ebp),%eax
0898cea0 +0x03e:  add    $0xc,%eax
0898cea3 +0x041:  movl   $"",0x4(%esp)
0898ceab +0x049:  mov    %eax,(%esp)
0898ceae +0x04c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ceb3 +0x051:  movl   $0x0,-0xc(%ebp)
0898ceba +0x058:  movl   $0x0,-0xc(%ebp)
0898cec1 +0x05f:  jmp    0898cee3 <+0x81>
0898cec3 +0x061:  mov    -0xc(%ebp),%eax
0898cec6 +0x064:  add    $0x4,%eax
0898cec9 +0x067:  shl    $0x2,%eax
0898cecc +0x06a:  add    0x8(%ebp),%eax
0898cecf +0x06d:  movl   $"",0x4(%esp)
0898ced7 +0x075:  mov    %eax,(%esp)
0898ceda +0x078:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cedf +0x07d:  addl   $0x1,-0xc(%ebp)
0898cee3 +0x081:  cmpl   $0x1,-0xc(%ebp)
0898cee7 +0x085:  setle  %al
0898ceea +0x088:  test   %al,%al
0898ceec +0x08a:  jne    0898cec3 <+0x61>
0898ceee +0x08c:  mov    0x8(%ebp),%eax
0898cef1 +0x08f:  add    $0x18,%eax
0898cef4 +0x092:  movl   $"",0x4(%esp)
0898cefc +0x09a:  mov    %eax,(%esp)
0898ceff +0x09d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf04 +0x0a2:  mov    0x8(%ebp),%eax
0898cf07 +0x0a5:  add    $0x1c,%eax
0898cf0a +0x0a8:  movl   $"",0x4(%esp)
0898cf12 +0x0b0:  mov    %eax,(%esp)
0898cf15 +0x0b3:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf1a +0x0b8:  mov    0x8(%ebp),%eax
0898cf1d +0x0bb:  add    $0x20,%eax
0898cf20 +0x0be:  movl   $"",0x4(%esp)
0898cf28 +0x0c6:  mov    %eax,(%esp)
0898cf2b +0x0c9:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf30 +0x0ce:  mov    0x8(%ebp),%eax
0898cf33 +0x0d1:  add    $0x24,%eax
0898cf36 +0x0d4:  movl   $"",0x4(%esp)
0898cf3e +0x0dc:  mov    %eax,(%esp)
0898cf41 +0x0df:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf46 +0x0e4:  mov    0x8(%ebp),%eax
0898cf49 +0x0e7:  add    $0x28,%eax
0898cf4c +0x0ea:  movl   $"",0x4(%esp)
0898cf54 +0x0f2:  mov    %eax,(%esp)
0898cf57 +0x0f5:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf5c +0x0fa:  movl   $0x0,-0xc(%ebp)
0898cf63 +0x101:  jmp    0898cfa7 <+0x145>
0898cf65 +0x103:  mov    -0xc(%ebp),%eax
0898cf68 +0x106:  add    $0x8,%eax
0898cf6b +0x109:  shl    $0x2,%eax
0898cf6e +0x10c:  add    0x8(%ebp),%eax
0898cf71 +0x10f:  add    $0xc,%eax
0898cf74 +0x112:  movl   $"",0x4(%esp)
0898cf7c +0x11a:  mov    %eax,(%esp)
0898cf7f +0x11d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cf84 +0x122:  mov    -0xc(%ebp),%eax
0898cf87 +0x125:  add    $0xc,%eax
0898cf8a +0x128:  shl    $0x2,%eax
0898cf8d +0x12b:  add    0x8(%ebp),%eax
0898cf90 +0x12e:  add    $0xc,%eax
0898cf93 +0x131:  movl   $"",0x4(%esp)
0898cf9b +0x139:  mov    %eax,(%esp)
0898cf9e +0x13c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cfa3 +0x141:  addl   $0x1,-0xc(%ebp)
0898cfa7 +0x145:  cmpl   $0x3,-0xc(%ebp)
0898cfab +0x149:  setle  %al
0898cfae +0x14c:  test   %al,%al
0898cfb0 +0x14e:  jne    0898cf65 <+0x103>
0898cfb2 +0x150:  mov    0x8(%ebp),%eax
0898cfb5 +0x153:  add    $0x4c,%eax
0898cfb8 +0x156:  movl   $"",0x4(%esp)
0898cfc0 +0x15e:  mov    %eax,(%esp)
0898cfc3 +0x161:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cfc8 +0x166:  mov    0x8(%ebp),%eax
0898cfcb +0x169:  add    $0x50,%eax
0898cfce +0x16c:  movl   $"",0x4(%esp)
0898cfd6 +0x174:  mov    %eax,(%esp)
0898cfd9 +0x177:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cfde +0x17c:  mov    0x8(%ebp),%eax
0898cfe1 +0x17f:  add    $0x54,%eax
0898cfe4 +0x182:  movl   $"",0x4(%esp)
0898cfec +0x18a:  mov    %eax,(%esp)
0898cfef +0x18d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898cff4 +0x192:  mov    0x8(%ebp),%eax
0898cff7 +0x195:  add    $0x58,%eax
0898cffa +0x198:  movl   $"",0x4(%esp)
0898d002 +0x1a0:  mov    %eax,(%esp)
0898d005 +0x1a3:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d00a +0x1a8:  mov    0x8(%ebp),%eax
0898d00d +0x1ab:  add    $0x64,%eax
0898d010 +0x1ae:  mov    %eax,(%esp)
0898d013 +0x1b1:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898d018 +0x1b6:  mov    0x8(%ebp),%eax
0898d01b +0x1b9:  add    $0x70,%eax
0898d01e +0x1bc:  mov    %eax,(%esp)
0898d021 +0x1bf:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898d026 +0x1c4:  mov    0x8(%ebp),%eax
0898d029 +0x1c7:  add    $0x60,%eax
0898d02c +0x1ca:  movl   $"",0x4(%esp)
0898d034 +0x1d2:  mov    %eax,(%esp)
0898d037 +0x1d5:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d03c +0x1da:  leave
0898d03d +0x1db:  ret
```

## 反编译 C

```c
// STEquipmentAniScript::clear @ 0x898ce62

/* STEquipmentAniScript::clear() */

void __thiscall STEquipmentAniScript::clear(STEquipmentAniScript *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  std::string::operator=((string *)(this + 0xc),"");
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    std::string::operator=((string *)(this + (local_10 + 4) * 4),"");
  }
  std::string::operator=((string *)(this + 0x18),"");
  std::string::operator=((string *)(this + 0x1c),"");
  std::string::operator=((string *)(this + 0x20),"");
  std::string::operator=((string *)(this + 0x24),"");
  std::string::operator=((string *)(this + 0x28),"");
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::string::operator=((string *)(this + (local_10 + 8) * 4 + 0xc),"");
    std::string::operator=((string *)(this + (local_10 + 0xc) * 4 + 0xc),"");
  }
  std::string::operator=((string *)(this + 0x4c),"");
  std::string::operator=((string *)(this + 0x50),"");
  std::string::operator=((string *)(this + 0x54),"");
  std::string::operator=((string *)(this + 0x58),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 100));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::string::operator=((string *)(this + 0x60),"");
  return;
}
```

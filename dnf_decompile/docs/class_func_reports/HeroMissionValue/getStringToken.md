# getStringToken

`_ZN16HeroMissionValue14getStringTokenERSs`

`HeroMissionValue::getStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `HeroMissionValue` | `0x08164bca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164bca  _ZN16HeroMissionValue14getStringTokenERSs
#           HeroMissionValue::getStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08164bca, 0x08164d67]
08164bca +0x000:  push   %ebp
08164bcb +0x001:  mov    %esp,%ebp
08164bcd +0x003:  push   %esi
08164bce +0x004:  push   %ebx
08164bcf +0x005:  sub    $0xd0,%esp
08164bd5 +0x00b:  movl   $0x8,0x4(%esp)
08164bdd +0x013:  movl   $0x10,(%esp)
08164be4 +0x01a:  call   081681bb <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1c>  ; global constructors keyed to HeroMissionValue::clear()+0x1c
08164be9 +0x01f:  mov    %eax,0x4(%esp)
08164bed +0x023:  lea    -0xc8(%ebp),%eax
08164bf3 +0x029:  mov    %eax,(%esp)
08164bf6 +0x02c:  call   08701420 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xcbb4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xcbb4
08164bfb +0x031:  mov    0xc(%ebp),%eax
08164bfe +0x034:  mov    %eax,(%esp)
08164c01 +0x037:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08164c06 +0x03c:  test   %eax,%eax
08164c08 +0x03e:  setne  %al
08164c0b +0x041:  test   %al,%al
08164c0d +0x043:  je     08164c28 <+0x5e>
08164c0f +0x045:  movl   $0x2c,0x4(%esp)
08164c17 +0x04d:  lea    -0xc8(%ebp),%eax
08164c1d +0x053:  add    $0x8,%eax
08164c20 +0x056:  mov    %eax,(%esp)
08164c23 +0x059:  call   086fd370 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04
08164c28 +0x05e:  mov    0x8(%ebp),%eax
08164c2b +0x061:  movzwl 0x4(%eax),%eax
08164c2f +0x065:  movzwl %ax,%ebx
08164c32 +0x068:  mov    0x8(%ebp),%eax
08164c35 +0x06b:  mov    (%eax),%eax
08164c37 +0x06d:  mov    %eax,0x4(%esp)
08164c3b +0x071:  lea    -0xc8(%ebp),%eax
08164c41 +0x077:  add    $0x8,%eax
08164c44 +0x07a:  mov    %eax,(%esp)
08164c47 +0x07d:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
08164c4c +0x082:  movl   $0x20,0x4(%esp)
08164c54 +0x08a:  mov    %eax,(%esp)
08164c57 +0x08d:  call   086fd370 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04
08164c5c +0x092:  mov    %ebx,0x4(%esp)
08164c60 +0x096:  mov    %eax,(%esp)
08164c63 +0x099:  call   086ffe10 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4
08164c68 +0x09e:  movl   $0x20,0x4(%esp)
08164c70 +0x0a6:  mov    %eax,(%esp)
08164c73 +0x0a9:  call   086fd370 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04
08164c78 +0x0ae:  mov    0x8(%ebp),%eax
08164c7b +0x0b1:  movzwl 0x8(%eax),%eax
08164c7f +0x0b5:  movzwl %ax,%ebx
08164c82 +0x0b8:  mov    0x8(%ebp),%eax
08164c85 +0x0bb:  movzwl 0xa(%eax),%eax
08164c89 +0x0bf:  movzwl %ax,%esi
08164c8c +0x0c2:  mov    0x8(%ebp),%eax
08164c8f +0x0c5:  movzwl 0x6(%eax),%eax
08164c93 +0x0c9:  movzwl %ax,%eax
08164c96 +0x0cc:  mov    %eax,0x4(%esp)
08164c9a +0x0d0:  lea    -0xc8(%ebp),%eax
08164ca0 +0x0d6:  add    $0x8,%eax
08164ca3 +0x0d9:  mov    %eax,(%esp)
08164ca6 +0x0dc:  call   086ffe10 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4
08164cab +0x0e1:  movl   $0x20,0x4(%esp)
08164cb3 +0x0e9:  mov    %eax,(%esp)
08164cb6 +0x0ec:  call   086fd370 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04
08164cbb +0x0f1:  mov    %esi,0x4(%esp)
08164cbf +0x0f5:  mov    %eax,(%esp)
08164cc2 +0x0f8:  call   086ffe10 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4
08164cc7 +0x0fd:  movl   $0x20,0x4(%esp)
08164ccf +0x105:  mov    %eax,(%esp)
08164cd2 +0x108:  call   086fd370 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8b04
08164cd7 +0x10d:  mov    %ebx,0x4(%esp)
08164cdb +0x111:  mov    %eax,(%esp)
08164cde +0x114:  call   086ffe10 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4
08164ce3 +0x119:  lea    -0xc(%ebp),%eax
08164ce6 +0x11c:  lea    -0xc8(%ebp),%edx
08164cec +0x122:  mov    %edx,0x4(%esp)
08164cf0 +0x126:  mov    %eax,(%esp)
08164cf3 +0x129:  call   08704950 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4
08164cf8 +0x12e:  sub    $0x4,%esp
08164cfb +0x131:  lea    -0xc(%ebp),%eax
08164cfe +0x134:  mov    %eax,0x4(%esp)
08164d02 +0x138:  mov    0xc(%ebp),%eax
08164d05 +0x13b:  mov    %eax,(%esp)
08164d08 +0x13e:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
08164d0d +0x143:  jmp    08164d24 <+0x15a>
08164d0f +0x145:  mov    %edx,%ebx
08164d11 +0x147:  mov    %eax,%esi
08164d13 +0x149:  lea    -0xc(%ebp),%eax
08164d16 +0x14c:  mov    %eax,(%esp)
08164d19 +0x14f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08164d1e +0x154:  mov    %esi,%eax
08164d20 +0x156:  mov    %ebx,%edx
08164d22 +0x158:  jmp    08164d31 <+0x167>
08164d24 +0x15a:  lea    -0xc(%ebp),%eax
08164d27 +0x15d:  mov    %eax,(%esp)
08164d2a +0x160:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08164d2f +0x165:  jmp    08164d4f <+0x185>
08164d31 +0x167:  mov    %edx,%ebx
08164d33 +0x169:  mov    %eax,%esi
08164d35 +0x16b:  lea    -0xc8(%ebp),%eax
08164d3b +0x171:  mov    %eax,(%esp)
08164d3e +0x174:  call   08703dc0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554
08164d43 +0x179:  mov    %esi,%eax
08164d45 +0x17b:  mov    %ebx,%edx
08164d47 +0x17d:  mov    %eax,(%esp)
08164d4a +0x180:  call   08ae3750 <_Unwind_Resume>
08164d4f +0x185:  lea    -0xc8(%ebp),%eax
08164d55 +0x18b:  mov    %eax,(%esp)
08164d58 +0x18e:  call   08703dc0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554
08164d5d +0x193:  lea    -0x8(%ebp),%esp
08164d60 +0x196:  add    $0x0,%esp
08164d63 +0x199:  pop    %ebx
08164d64 +0x19a:  pop    %esi
08164d65 +0x19b:  pop    %ebp
08164d66 +0x19c:  ret
08164d67 +0x19d:  nop
```

## 反编译 C

```c
// HeroMissionValue::getStringToken @ 0x8164bca

/* HeroMissionValue::getStringToken(std::string&) */

void __thiscall HeroMissionValue::getStringToken(HeroMissionValue *this,string *param_1)

{
  ushort uVar1;
  ushort uVar2;
  _Ios_Openmode _Var3;
  int iVar4;
  ostream *poVar5;
  stringstream local_cc [8];
  ostream aoStack_c4 [180];
  string local_10 [4];
  
  _Var3 = std::operator|(_S_out,_S_in);
  std::stringstream::stringstream(local_cc,_Var3);
                    /* try { // try from 08164c01 to 08164cf7 has its CatchHandler @ 08164d31 */
  iVar4 = std::string::length((string *)param_1);
  if (iVar4 != 0) {
    std::operator<<(aoStack_c4,',');
  }
  uVar1 = *(ushort *)(this + 4);
  poVar5 = (ostream *)std::ostream::operator<<(aoStack_c4,*(int *)this);
  poVar5 = std::operator<<(poVar5,' ');
  poVar5 = (ostream *)std::ostream::operator<<(poVar5,uVar1);
  std::operator<<(poVar5,' ');
  uVar1 = *(ushort *)(this + 8);
  uVar2 = *(ushort *)(this + 10);
  poVar5 = (ostream *)std::ostream::operator<<(aoStack_c4,*(ushort *)(this + 6));
  poVar5 = std::operator<<(poVar5,' ');
  poVar5 = (ostream *)std::ostream::operator<<(poVar5,uVar2);
  poVar5 = std::operator<<(poVar5,' ');
  std::ostream::operator<<(poVar5,uVar1);
  std::stringstream::str();
                    /* try { // try from 08164d08 to 08164d0c has its CatchHandler @ 08164d0f */
  std::string::append((string *)param_1,local_10);
                    /* try { // try from 08164d2a to 08164d2e has its CatchHandler @ 08164d31 */
  std::string::~string(local_10);
  std::stringstream::~stringstream(local_cc);
  return;
}
```

# EquipmentAniInfoScript

`_ZN22EquipmentAniInfoScriptC1Ev`

`EquipmentAniInfoScript::EquipmentAniInfoScript()`

| 类 | 地址 |
|---|---|
| `EquipmentAniInfoScript` | `0x0898d03e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d03e  _ZN22EquipmentAniInfoScriptC1Ev
#           EquipmentAniInfoScript::EquipmentAniInfoScript()
# range [0x0898d03e, 0x0898d141]
0898d03e +0x000:  push   %ebp
0898d03f +0x001:  mov    %esp,%ebp
0898d041 +0x003:  push   %esi
0898d042 +0x004:  push   %ebx
0898d043 +0x005:  sub    $0x10,%esp
0898d046 +0x008:  mov    0x8(%ebp),%eax
0898d049 +0x00b:  mov    %eax,(%esp)
0898d04c +0x00e:  call   089c524e <_GLOBAL__I_g_npcNameVector+0x2629>  ; global constructors keyed to g_npcNameVector+0x2629
0898d051 +0x013:  mov    0x8(%ebp),%eax
0898d054 +0x016:  add    $0x18,%eax
0898d057 +0x019:  mov    %eax,(%esp)
0898d05a +0x01c:  call   089c524e <_GLOBAL__I_g_npcNameVector+0x2629>  ; global constructors keyed to g_npcNameVector+0x2629
0898d05f +0x021:  mov    0x8(%ebp),%eax
0898d062 +0x024:  add    $0x40,%eax
0898d065 +0x027:  mov    %eax,(%esp)
0898d068 +0x02a:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898d06d +0x02f:  mov    0x8(%ebp),%eax
0898d070 +0x032:  add    $0x4c,%eax
0898d073 +0x035:  mov    %eax,(%esp)
0898d076 +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d07b +0x03d:  mov    0x8(%ebp),%eax
0898d07e +0x040:  add    $0x50,%eax
0898d081 +0x043:  mov    %eax,(%esp)
0898d084 +0x046:  call   089c52c0 <_GLOBAL__I_g_npcNameVector+0x269b>  ; global constructors keyed to g_npcNameVector+0x269b
0898d089 +0x04b:  mov    0x8(%ebp),%eax
0898d08c +0x04e:  add    $0x5c,%eax
0898d08f +0x051:  mov    %eax,(%esp)
0898d092 +0x054:  call   089c5332 <_GLOBAL__I_g_npcNameVector+0x270d>  ; global constructors keyed to g_npcNameVector+0x270d
0898d097 +0x059:  mov    0x8(%ebp),%eax
0898d09a +0x05c:  mov    %eax,(%esp)
0898d09d +0x05f:  call   0898d142 <_ZN22EquipmentAniInfoScript5clearEv>  ; EquipmentAniInfoScript::clear()
0898d0a2 +0x064:  jmp    0898d13a <+0xfc>
0898d0a7 +0x069:  mov    %edx,%ebx
0898d0a9 +0x06b:  mov    %eax,%esi
0898d0ab +0x06d:  mov    0x8(%ebp),%eax
0898d0ae +0x070:  add    $0x5c,%eax
0898d0b1 +0x073:  mov    %eax,(%esp)
0898d0b4 +0x076:  call   089c5346 <_GLOBAL__I_g_npcNameVector+0x2721>  ; global constructors keyed to g_npcNameVector+0x2721
0898d0b9 +0x07b:  mov    %esi,%eax
0898d0bb +0x07d:  mov    %ebx,%edx
0898d0bd +0x07f:  jmp    0898d0bf <+0x81>
0898d0bf +0x081:  mov    %edx,%ebx
0898d0c1 +0x083:  mov    %eax,%esi
0898d0c3 +0x085:  mov    0x8(%ebp),%eax
0898d0c6 +0x088:  add    $0x50,%eax
0898d0c9 +0x08b:  mov    %eax,(%esp)
0898d0cc +0x08e:  call   089c52d4 <_GLOBAL__I_g_npcNameVector+0x26af>  ; global constructors keyed to g_npcNameVector+0x26af
0898d0d1 +0x093:  mov    %esi,%eax
0898d0d3 +0x095:  mov    %ebx,%edx
0898d0d5 +0x097:  jmp    0898d0d7 <+0x99>
0898d0d7 +0x099:  mov    %edx,%ebx
0898d0d9 +0x09b:  mov    %eax,%esi
0898d0db +0x09d:  mov    0x8(%ebp),%eax
0898d0de +0x0a0:  add    $0x4c,%eax
0898d0e1 +0x0a3:  mov    %eax,(%esp)
0898d0e4 +0x0a6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d0e9 +0x0ab:  mov    %esi,%eax
0898d0eb +0x0ad:  mov    %ebx,%edx
0898d0ed +0x0af:  jmp    0898d0ef <+0xb1>
0898d0ef +0x0b1:  mov    %edx,%ebx
0898d0f1 +0x0b3:  mov    %eax,%esi
0898d0f3 +0x0b5:  mov    0x8(%ebp),%eax
0898d0f6 +0x0b8:  add    $0x40,%eax
0898d0f9 +0x0bb:  mov    %eax,(%esp)
0898d0fc +0x0be:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898d101 +0x0c3:  mov    %esi,%eax
0898d103 +0x0c5:  mov    %ebx,%edx
0898d105 +0x0c7:  jmp    0898d107 <+0xc9>
0898d107 +0x0c9:  mov    %edx,%ebx
0898d109 +0x0cb:  mov    %eax,%esi
0898d10b +0x0cd:  mov    0x8(%ebp),%eax
0898d10e +0x0d0:  add    $0x18,%eax
0898d111 +0x0d3:  mov    %eax,(%esp)
0898d114 +0x0d6:  call   089c5262 <_GLOBAL__I_g_npcNameVector+0x263d>  ; global constructors keyed to g_npcNameVector+0x263d
0898d119 +0x0db:  mov    %esi,%eax
0898d11b +0x0dd:  mov    %ebx,%edx
0898d11d +0x0df:  jmp    0898d11f <+0xe1>
0898d11f +0x0e1:  mov    %edx,%ebx
0898d121 +0x0e3:  mov    %eax,%esi
0898d123 +0x0e5:  mov    0x8(%ebp),%eax
0898d126 +0x0e8:  mov    %eax,(%esp)
0898d129 +0x0eb:  call   089c5262 <_GLOBAL__I_g_npcNameVector+0x263d>  ; global constructors keyed to g_npcNameVector+0x263d
0898d12e +0x0f0:  mov    %esi,%eax
0898d130 +0x0f2:  mov    %ebx,%edx
0898d132 +0x0f4:  mov    %eax,(%esp)
0898d135 +0x0f7:  call   08ae3750 <_Unwind_Resume>
0898d13a +0x0fc:  add    $0x10,%esp
0898d13d +0x0ff:  pop    %ebx
0898d13e +0x100:  pop    %esi
0898d13f +0x101:  pop    %ebp
0898d140 +0x102:  ret
0898d141 +0x103:  nop
```

## 反编译 C

```c
// EquipmentAniInfoScript::EquipmentAniInfoScript @ 0x898d03e

/* EquipmentAniInfoScript::EquipmentAniInfoScript() */

void __thiscall EquipmentAniInfoScript::EquipmentAniInfoScript(EquipmentAniInfoScript *this)

{
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::vector
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)this);
                    /* try { // try from 0898d05a to 0898d05e has its CatchHandler @ 0898d11f */
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::vector
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)(this + 0x18));
                    /* try { // try from 0898d068 to 0898d06c has its CatchHandler @ 0898d107 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
                    /* try { // try from 0898d076 to 0898d07a has its CatchHandler @ 0898d0ef */
  std::string::string((string *)(this + 0x4c));
                    /* try { // try from 0898d084 to 0898d088 has its CatchHandler @ 0898d0d7 */
  std::vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>>::vector
            ((vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>> *)(this + 0x50));
                    /* try { // try from 0898d092 to 0898d096 has its CatchHandler @ 0898d0bf */
  std::
  vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
  ::vector((vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
            *)(this + 0x5c));
                    /* try { // try from 0898d09d to 0898d0a1 has its CatchHandler @ 0898d0a7 */
  clear(this);
  return;
}
```

# importSkillDataUpVector

`_ZN13StrikerScript23importSkillDataUpVectorEv`

`StrikerScript::importSkillDataUpVector()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e4d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e4d6  _ZN13StrikerScript23importSkillDataUpVectorEv
#           StrikerScript::importSkillDataUpVector()
# range [0x08a9e4d6, 0x08a9e5cb]
08a9e4d6 +0x00:  push   %ebp
08a9e4d7 +0x01:  mov    %esp,%ebp
08a9e4d9 +0x03:  push   %esi
08a9e4da +0x04:  push   %ebx
08a9e4db +0x05:  sub    $0x30,%esp
08a9e4de +0x08:  lea    -0xc(%ebp),%eax
08a9e4e1 +0x0b:  mov    %eax,(%esp)
08a9e4e4 +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a9e4e9 +0x13:  mov    0x8(%ebp),%eax
08a9e4ec +0x16:  add    $0x40,%eax
08a9e4ef +0x19:  mov    %eax,(%esp)
08a9e4f2 +0x1c:  call   08a9f4be <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x7d1>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x7d1
08a9e4f7 +0x21:  movl   $0x1,0x4(%esp)
08a9e4ff +0x29:  lea    -0xc(%ebp),%eax
08a9e502 +0x2c:  mov    %eax,(%esp)
08a9e505 +0x2f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a9e50a +0x34:  xor    $0x1,%eax
08a9e50d +0x37:  test   %al,%al
08a9e50f +0x39:  jne    08a9e59f <+0xc9>
08a9e515 +0x3f:  movl   $"[level]",0x4(%esp)
08a9e51d +0x47:  lea    -0xc(%ebp),%eax
08a9e520 +0x4a:  mov    %eax,(%esp)
08a9e523 +0x4d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a9e528 +0x52:  test   %al,%al
08a9e52a +0x54:  je     08a9e5a2 <+0xcc>
08a9e52c +0x56:  lea    -0x20(%ebp),%eax
08a9e52f +0x59:  mov    %eax,(%esp)
08a9e532 +0x5c:  call   08a9ed4a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x5d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x5d
08a9e537 +0x61:  movl   $0x0,(%esp)
08a9e53e +0x68:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e543 +0x6d:  mov    %eax,-0x20(%ebp)
08a9e546 +0x70:  movl   $0x0,(%esp)
08a9e54d +0x77:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e552 +0x7c:  mov    %eax,-0x1c(%ebp)
08a9e555 +0x7f:  lea    -0x20(%ebp),%eax
08a9e558 +0x82:  add    $0x8,%eax
08a9e55b +0x85:  mov    %eax,(%esp)
08a9e55e +0x88:  call   088c049c <_Z17importSkillDataUpRSt6vectorI20EquipmentSkillDataUpSaIS0_EE>  ; importSkillDataUp(std::vector<EquipmentSkillDataUp, std::allocator<EquipmentSkillDataUp> >&)
08a9e563 +0x8d:  mov    0x8(%ebp),%eax
08a9e566 +0x90:  lea    0x40(%eax),%edx
08a9e569 +0x93:  lea    -0x20(%ebp),%eax
08a9e56c +0x96:  mov    %eax,0x4(%esp)
08a9e570 +0x9a:  mov    %edx,(%esp)
08a9e573 +0x9d:  call   08a9f4da <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x7ed>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x7ed
08a9e578 +0xa2:  jmp    08a9e58f <+0xb9>
08a9e57a +0xa4:  mov    %edx,%ebx
08a9e57c +0xa6:  mov    %eax,%esi
08a9e57e +0xa8:  lea    -0x20(%ebp),%eax
08a9e581 +0xab:  mov    %eax,(%esp)
08a9e584 +0xae:  call   08a9ed60 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x73>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x73
08a9e589 +0xb3:  mov    %esi,%eax
08a9e58b +0xb5:  mov    %ebx,%edx
08a9e58d +0xb7:  jmp    08a9e5b5 <+0xdf>
08a9e58f +0xb9:  lea    -0x20(%ebp),%eax
08a9e592 +0xbc:  mov    %eax,(%esp)
08a9e595 +0xbf:  call   08a9ed60 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x73>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x73
08a9e59a +0xc4:  jmp    08a9e4f7 <+0x21>
08a9e59f +0xc9:  nop
08a9e5a0 +0xca:  jmp    08a9e5a3 <+0xcd>
08a9e5a2 +0xcc:  nop
08a9e5a3 +0xcd:  lea    -0xc(%ebp),%eax
08a9e5a6 +0xd0:  mov    %eax,(%esp)
08a9e5a9 +0xd3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e5ae +0xd8:  add    $0x30,%esp
08a9e5b1 +0xdb:  pop    %ebx
08a9e5b2 +0xdc:  pop    %esi
08a9e5b3 +0xdd:  pop    %ebp
08a9e5b4 +0xde:  ret
08a9e5b5 +0xdf:  mov    %edx,%ebx
08a9e5b7 +0xe1:  mov    %eax,%esi
08a9e5b9 +0xe3:  lea    -0xc(%ebp),%eax
08a9e5bc +0xe6:  mov    %eax,(%esp)
08a9e5bf +0xe9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e5c4 +0xee:  mov    %esi,%eax
08a9e5c6 +0xf0:  mov    %ebx,%edx
08a9e5c8 +0xf2:  mov    %eax,(%esp)
08a9e5cb +0xf5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// StrikerScript::importSkillDataUpVector @ 0x8a9e4d6

/* StrikerScript::importSkillDataUpVector() */

void __thiscall StrikerScript::importSkillDataUpVector(StrikerScript *this)

{
  char cVar1;
  bool bVar2;
  undefined4 local_24;
  undefined4 local_20;
  vector avStack_1c [12];
  string local_10;
  
  std::string::string((string *)&local_10);
                    /* try { // try from 08a9e4f2 to 08a9e536 has its CatchHandler @ 08a9e5b5 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::clear
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
  while ((cVar1 = ScanType((string *)&local_10,true), cVar1 == '\x01' &&
         (bVar2 = std::operator==(&local_10,"[level]"), bVar2))) {
    StrikerSkillDataUp::StrikerSkillDataUp((StrikerSkillDataUp *)&local_24);
                    /* try { // try from 08a9e53e to 08a9e577 has its CatchHandler @ 08a9e57a */
    local_24 = ScanInt((bool *)0x0);
    local_20 = ScanInt((bool *)0x0);
    importSkillDataUp(avStack_1c);
    std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::push_back
              ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40),
               (StrikerSkillDataUp *)&local_24);
                    /* try { // try from 08a9e595 to 08a9e599 has its CatchHandler @ 08a9e5b5 */
    StrikerSkillDataUp::~StrikerSkillDataUp((StrikerSkillDataUp *)&local_24);
  }
  std::string::~string((string *)&local_10);
  return;
}
```

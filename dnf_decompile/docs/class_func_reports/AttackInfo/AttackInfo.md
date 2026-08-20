# AttackInfo

`_ZN10AttackInfoC1Ev`

`AttackInfo::AttackInfo()`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x0889037c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889037c  _ZN10AttackInfoC1Ev
#           AttackInfo::AttackInfo()
# range [0x0889037c, 0x088904b7]
0889037c +0x000:  push   %ebp
0889037d +0x001:  mov    %esp,%ebp
0889037f +0x003:  push   %edi
08890380 +0x004:  push   %esi
08890381 +0x005:  push   %ebx
08890382 +0x006:  sub    $0x2c,%esp
08890385 +0x009:  mov    0x8(%ebp),%eax
08890388 +0x00c:  add    $0x4c,%eax
0889038b +0x00f:  mov    %eax,(%esp)
0889038e +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08890393 +0x017:  mov    0x8(%ebp),%eax
08890396 +0x01a:  add    $0xa4,%eax
0889039b +0x01f:  mov    %eax,(%esp)
0889039e +0x022:  call   08890db0 <_ZN10AttackInfo13getAttackTypeERSs+0x4ea>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4ea
088903a3 +0x027:  mov    0x8(%ebp),%eax
088903a6 +0x02a:  lea    0xf8(%eax),%esi
088903ac +0x030:  mov    %esi,%edi
088903ae +0x032:  mov    $0x2,%ebx
088903b3 +0x037:  jmp    088903c3 <+0x47>
088903b5 +0x039:  mov    %edi,(%esp)
088903b8 +0x03c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088903bd +0x041:  add    $0xc,%edi
088903c0 +0x044:  sub    $0x1,%ebx
088903c3 +0x047:  cmp    $0xffffffff,%ebx
088903c6 +0x04a:  setne  %al
088903c9 +0x04d:  test   %al,%al
088903cb +0x04f:  jne    088903b5 <+0x39>
088903cd +0x051:  jmp    08890405 <+0x89>
088903cf +0x053:  mov    %edx,%edi
088903d1 +0x055:  mov    %eax,-0x1c(%ebp)
088903d4 +0x058:  test   %esi,%esi
088903d6 +0x05a:  je     088903fe <+0x82>
088903d8 +0x05c:  mov    $0x2,%eax
088903dd +0x061:  sub    %ebx,%eax
088903df +0x063:  mov    %eax,%edx
088903e1 +0x065:  mov    %edx,%eax
088903e3 +0x067:  add    %eax,%eax
088903e5 +0x069:  add    %edx,%eax
088903e7 +0x06b:  shl    $0x2,%eax
088903ea +0x06e:  lea    (%esi,%eax,1),%ebx
088903ed +0x071:  cmp    %esi,%ebx
088903ef +0x073:  je     088903fe <+0x82>
088903f1 +0x075:  sub    $0xc,%ebx
088903f4 +0x078:  mov    %ebx,(%esp)
088903f7 +0x07b:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088903fc +0x080:  jmp    088903ed <+0x71>
088903fe +0x082:  mov    -0x1c(%ebp),%eax
08890401 +0x085:  mov    %edi,%edx
08890403 +0x087:  jmp    08890477 <+0xfb>
08890405 +0x089:  mov    0x8(%ebp),%eax
08890408 +0x08c:  add    $0x128,%eax
0889040d +0x091:  mov    %eax,(%esp)
08890410 +0x094:  call   08890dc4 <_ZN10AttackInfo13getAttackTypeERSs+0x4fe>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4fe
08890415 +0x099:  mov    0x8(%ebp),%eax
08890418 +0x09c:  mov    %eax,(%esp)
0889041b +0x09f:  call   088904b8 <_ZN10AttackInfo5clearEv>  ; AttackInfo::clear()
08890420 +0x0a4:  jmp    088904af <+0x133>
08890425 +0x0a9:  mov    %edx,%ebx
08890427 +0x0ab:  mov    %eax,%esi
08890429 +0x0ad:  mov    0x8(%ebp),%eax
0889042c +0x0b0:  add    $0x128,%eax
08890431 +0x0b5:  mov    %eax,(%esp)
08890434 +0x0b8:  call   08342ca2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4d6f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4d6f
08890439 +0x0bd:  mov    %esi,%eax
0889043b +0x0bf:  mov    %ebx,%edx
0889043d +0x0c1:  jmp    0889043f <+0xc3>
0889043f +0x0c3:  mov    %edx,%esi
08890441 +0x0c5:  mov    %eax,%edi
08890443 +0x0c7:  mov    0x8(%ebp),%eax
08890446 +0x0ca:  add    $0xf8,%eax
0889044b +0x0cf:  test   %eax,%eax
0889044d +0x0d1:  je     08890473 <+0xf7>
0889044f +0x0d3:  mov    0x8(%ebp),%eax
08890452 +0x0d6:  add    $0xf8,%eax
08890457 +0x0db:  lea    0x24(%eax),%ebx
0889045a +0x0de:  mov    0x8(%ebp),%eax
0889045d +0x0e1:  add    $0xf8,%eax
08890462 +0x0e6:  cmp    %eax,%ebx
08890464 +0x0e8:  je     08890473 <+0xf7>
08890466 +0x0ea:  sub    $0xc,%ebx
08890469 +0x0ed:  mov    %ebx,(%esp)
0889046c +0x0f0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08890471 +0x0f5:  jmp    0889045a <+0xde>
08890473 +0x0f7:  mov    %edi,%eax
08890475 +0x0f9:  mov    %esi,%edx
08890477 +0x0fb:  mov    %edx,%ebx
08890479 +0x0fd:  mov    %eax,%esi
0889047b +0x0ff:  mov    0x8(%ebp),%eax
0889047e +0x102:  add    $0xa4,%eax
08890483 +0x107:  mov    %eax,(%esp)
08890486 +0x10a:  call   083415ce <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x369b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x369b
0889048b +0x10f:  mov    %esi,%eax
0889048d +0x111:  mov    %ebx,%edx
0889048f +0x113:  jmp    08890491 <+0x115>
08890491 +0x115:  mov    %edx,%ebx
08890493 +0x117:  mov    %eax,%esi
08890495 +0x119:  mov    0x8(%ebp),%eax
08890498 +0x11c:  add    $0x4c,%eax
0889049b +0x11f:  mov    %eax,(%esp)
0889049e +0x122:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088904a3 +0x127:  mov    %esi,%eax
088904a5 +0x129:  mov    %ebx,%edx
088904a7 +0x12b:  mov    %eax,(%esp)
088904aa +0x12e:  call   08ae3750 <_Unwind_Resume>
088904af +0x133:  add    $0x2c,%esp
088904b2 +0x136:  pop    %ebx
088904b3 +0x137:  pop    %esi
088904b4 +0x138:  pop    %edi
088904b5 +0x139:  pop    %ebp
088904b6 +0x13a:  ret
088904b7 +0x13b:  nop
```

## 反编译 C

```c
// AttackInfo::AttackInfo @ 0x889037c

/* AttackInfo::AttackInfo() */

void __thiscall AttackInfo::AttackInfo(AttackInfo *this)

{
  int iVar1;
  vector<int,std::allocator<int>> *this_00;
  
  std::string::string((string *)(this + 0x4c));
                    /* try { // try from 0889039e to 088903a2 has its CatchHandler @ 08890491 */
  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::set
            ((set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> *)(this + 0xa4)
            );
  this_00 = (vector<int,std::allocator<int>> *)(this + 0xf8);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088903b8 to 088903bc has its CatchHandler @ 088903cf */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 08890410 to 08890414 has its CatchHandler @ 0889043f */
  std::vector<CatchObjectInfo,std::allocator<CatchObjectInfo>>::vector
            ((vector<CatchObjectInfo,std::allocator<CatchObjectInfo>> *)(this + 0x128));
                    /* try { // try from 0889041b to 0889041f has its CatchHandler @ 08890425 */
  clear(this);
  return;
}
```

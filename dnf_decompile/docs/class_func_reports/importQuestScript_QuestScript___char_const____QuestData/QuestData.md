# QuestData

`_ZZ17importQuestScriptP11QuestScriptPKcEN9QuestDataC1Ev`

`importQuestScript(QuestScript*, char const*)::QuestData::QuestData()`

| 类 | 地址 |
|---|---|
| `importQuestScript(QuestScript*, char const*)::QuestData` | `0x08a616fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a616fe  _ZZ17importQuestScriptP11QuestScriptPKcEN9QuestDataC1Ev
#           importQuestScript(QuestScript*, char const*)::QuestData::QuestData()
# range [0x08a616fe, 0x08a617a5]
08a616fe +0x00:  push   %ebp
08a616ff +0x01:  mov    %esp,%ebp
08a61701 +0x03:  push   %esi
08a61702 +0x04:  push   %ebx
08a61703 +0x05:  sub    $0x10,%esp
08a61706 +0x08:  mov    0x8(%ebp),%eax
08a61709 +0x0b:  mov    %eax,(%esp)
08a6170c +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a61711 +0x13:  mov    0x8(%ebp),%eax
08a61714 +0x16:  add    $0x4,%eax
08a61717 +0x19:  mov    %eax,(%esp)
08a6171a +0x1c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a6171f +0x21:  mov    0x8(%ebp),%eax
08a61722 +0x24:  add    $0x20,%eax
08a61725 +0x27:  mov    %eax,(%esp)
08a61728 +0x2a:  call   08383696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13136
08a6172d +0x2f:  mov    0x8(%ebp),%eax
08a61730 +0x32:  movl   $0x0,0x14(%eax)
08a61737 +0x39:  mov    0x8(%ebp),%eax
08a6173a +0x3c:  movl   $0x0,0x10(%eax)
08a61741 +0x43:  mov    0x8(%ebp),%eax
08a61744 +0x46:  movb   $0x0,0x18(%eax)
08a61748 +0x4a:  mov    0x8(%ebp),%eax
08a6174b +0x4d:  movb   $0x0,0x19(%eax)
08a6174f +0x51:  mov    0x8(%ebp),%eax
08a61752 +0x54:  movb   $0x0,0x1a(%eax)
08a61756 +0x58:  mov    0x8(%ebp),%eax
08a61759 +0x5b:  movb   $0x0,0x1b(%eax)
08a6175d +0x5f:  mov    0x8(%ebp),%eax
08a61760 +0x62:  movb   $0x0,0x1c(%eax)
08a61764 +0x66:  mov    0x8(%ebp),%eax
08a61767 +0x69:  movb   $0x0,0x2c(%eax)
08a6176b +0x6d:  add    $0x10,%esp
08a6176e +0x70:  pop    %ebx
08a6176f +0x71:  pop    %esi
08a61770 +0x72:  pop    %ebp
08a61771 +0x73:  ret
08a61772 +0x74:  mov    %edx,%ebx
08a61774 +0x76:  mov    %eax,%esi
08a61776 +0x78:  mov    0x8(%ebp),%eax
08a61779 +0x7b:  add    $0x4,%eax
08a6177c +0x7e:  mov    %eax,(%esp)
08a6177f +0x81:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a61784 +0x86:  mov    %esi,%eax
08a61786 +0x88:  mov    %ebx,%edx
08a61788 +0x8a:  jmp    08a6178a <+0x8c>
08a6178a +0x8c:  mov    %edx,%ebx
08a6178c +0x8e:  mov    %eax,%esi
08a6178e +0x90:  mov    0x8(%ebp),%eax
08a61791 +0x93:  mov    %eax,(%esp)
08a61794 +0x96:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a61799 +0x9b:  mov    %esi,%eax
08a6179b +0x9d:  mov    %ebx,%edx
08a6179d +0x9f:  mov    %eax,(%esp)
08a617a0 +0xa2:  call   08ae3750 <_Unwind_Resume>
08a617a5 +0xa7:  nop
```

## 反编译 C

```c
// <global>::importQuestScript @ 0x8a616fe

/* QuestData() */

void __thiscall importQuestScript(QuestScript*,char_const*)::QuestData::QuestData(QuestData *this)

{
  std::string::string((string *)this);
                    /* try { // try from 08a6171a to 08a6171e has its CatchHandler @ 08a6178a */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 4));
                    /* try { // try from 08a61728 to 08a6172c has its CatchHandler @ 08a61772 */
  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::vector
            ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x20));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x18] = (QuestData)0x0;
  this[0x19] = (QuestData)0x0;
  this[0x1a] = (QuestData)0x0;
  this[0x1b] = (QuestData)0x0;
  this[0x1c] = (QuestData)0x0;
  this[0x2c] = (QuestData)0x0;
  return;
}
```

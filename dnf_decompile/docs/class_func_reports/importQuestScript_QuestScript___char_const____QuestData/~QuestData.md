# ~QuestData

`_ZZ17importQuestScriptP11QuestScriptPKcEN9QuestDataD1Ev`

`importQuestScript(QuestScript*, char const*)::QuestData::~QuestData()`

| 类 | 地址 |
|---|---|
| `importQuestScript(QuestScript*, char const*)::QuestData` | `0x08a617a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a617a6  _ZZ17importQuestScriptP11QuestScriptPKcEN9QuestDataD1Ev
#           importQuestScript(QuestScript*, char const*)::QuestData::~QuestData()
# range [0x08a617a6, 0x08a61812]
08a617a6 +0x00:  push   %ebp
08a617a7 +0x01:  mov    %esp,%ebp
08a617a9 +0x03:  push   %esi
08a617aa +0x04:  push   %ebx
08a617ab +0x05:  sub    $0x10,%esp
08a617ae +0x08:  mov    0x8(%ebp),%eax
08a617b1 +0x0b:  add    $0x20,%eax
08a617b4 +0x0e:  mov    %eax,(%esp)
08a617b7 +0x11:  call   083836aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1314a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1314a
08a617bc +0x16:  jmp    08a617d6 <+0x30>
08a617be +0x18:  mov    %edx,%ebx
08a617c0 +0x1a:  mov    %eax,%esi
08a617c2 +0x1c:  mov    0x8(%ebp),%eax
08a617c5 +0x1f:  add    $0x4,%eax
08a617c8 +0x22:  mov    %eax,(%esp)
08a617cb +0x25:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a617d0 +0x2a:  mov    %esi,%eax
08a617d2 +0x2c:  mov    %ebx,%edx
08a617d4 +0x2e:  jmp    08a617e6 <+0x40>
08a617d6 +0x30:  mov    0x8(%ebp),%eax
08a617d9 +0x33:  add    $0x4,%eax
08a617dc +0x36:  mov    %eax,(%esp)
08a617df +0x39:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a617e4 +0x3e:  jmp    08a61801 <+0x5b>
08a617e6 +0x40:  mov    %edx,%ebx
08a617e8 +0x42:  mov    %eax,%esi
08a617ea +0x44:  mov    0x8(%ebp),%eax
08a617ed +0x47:  mov    %eax,(%esp)
08a617f0 +0x4a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a617f5 +0x4f:  mov    %esi,%eax
08a617f7 +0x51:  mov    %ebx,%edx
08a617f9 +0x53:  mov    %eax,(%esp)
08a617fc +0x56:  call   08ae3750 <_Unwind_Resume>
08a61801 +0x5b:  mov    0x8(%ebp),%eax
08a61804 +0x5e:  mov    %eax,(%esp)
08a61807 +0x61:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6180c +0x66:  add    $0x10,%esp
08a6180f +0x69:  pop    %ebx
08a61810 +0x6a:  pop    %esi
08a61811 +0x6b:  pop    %ebp
08a61812 +0x6c:  ret
```

## 反编译 C

```c
// <global>::importQuestScript @ 0x8a617a6

/* ~QuestData() */

void __thiscall importQuestScript(QuestScript*,char_const*)::QuestData::~QuestData(QuestData *this)

{
                    /* try { // try from 08a617b7 to 08a617bb has its CatchHandler @ 08a617be */
  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::~vector
            ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x20));
                    /* try { // try from 08a617df to 08a617e3 has its CatchHandler @ 08a617e6 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 4));
  std::string::~string((string *)this);
  return;
}
```

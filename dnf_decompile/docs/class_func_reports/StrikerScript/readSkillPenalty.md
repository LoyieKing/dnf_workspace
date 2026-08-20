# readSkillPenalty

`_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE`

`StrikerScript::readSkillPenalty(std::vector<TagSkillPenalty, std::allocator<TagSkillPenalty> >&)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e6cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e6cc  _ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE
#           StrikerScript::readSkillPenalty(std::vector<TagSkillPenalty, std::allocator<TagSkillPenalty> >&)
# range [0x08a9e6cc, 0x08a9e79b]
08a9e6cc +0x00:  push   %ebp
08a9e6cd +0x01:  mov    %esp,%ebp
08a9e6cf +0x03:  push   %esi
08a9e6d0 +0x04:  push   %ebx
08a9e6d1 +0x05:  sub    $0x30,%esp
08a9e6d4 +0x08:  movb   $0x1,-0x9(%ebp)
08a9e6d8 +0x0c:  lea    -0x1c(%ebp),%eax
08a9e6db +0x0f:  mov    %eax,(%esp)
08a9e6de +0x12:  call   08a9d768 <_ZN15TagSkillPenaltyC1Ev>  ; TagSkillPenalty::TagSkillPenalty()
08a9e6e3 +0x17:  lea    -0x9(%ebp),%eax
08a9e6e6 +0x1a:  mov    %eax,(%esp)
08a9e6e9 +0x1d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e6ee +0x22:  mov    %eax,-0x1c(%ebp)
08a9e6f1 +0x25:  movzbl -0x9(%ebp),%eax
08a9e6f5 +0x29:  xor    $0x1,%eax
08a9e6f8 +0x2c:  test   %al,%al
08a9e6fa +0x2e:  jne    08a9e794 <+0xc8>
08a9e700 +0x34:  movl   $0x0,(%esp)
08a9e707 +0x3b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e70c +0x40:  mov    %eax,-0x18(%ebp)
08a9e70f +0x43:  lea    -0x20(%ebp),%eax
08a9e712 +0x46:  mov    %eax,(%esp)
08a9e715 +0x49:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a9e71a +0x4e:  lea    -0x20(%ebp),%eax
08a9e71d +0x51:  mov    %eax,(%esp)
08a9e720 +0x54:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a9e725 +0x59:  movl   $"%",0x4(%esp)
08a9e72d +0x61:  lea    -0x20(%ebp),%eax
08a9e730 +0x64:  mov    %eax,(%esp)
08a9e733 +0x67:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a9e738 +0x6c:  test   %al,%al
08a9e73a +0x6e:  je     08a9e742 <+0x76>
08a9e73c +0x70:  movb   $0x1,-0x14(%ebp)
08a9e740 +0x74:  jmp    08a9e746 <+0x7a>
08a9e742 +0x76:  movb   $0x0,-0x14(%ebp)
08a9e746 +0x7a:  movl   $0x0,(%esp)
08a9e74d +0x81:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e752 +0x86:  mov    %eax,-0x10(%ebp)
08a9e755 +0x89:  lea    -0x1c(%ebp),%eax
08a9e758 +0x8c:  mov    %eax,0x4(%esp)
08a9e75c +0x90:  mov    0xc(%ebp),%eax
08a9e75f +0x93:  mov    %eax,(%esp)
08a9e762 +0x96:  call   08a9f5fa <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x90d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x90d
08a9e767 +0x9b:  jmp    08a9e784 <+0xb8>
08a9e769 +0x9d:  mov    %edx,%ebx
08a9e76b +0x9f:  mov    %eax,%esi
08a9e76d +0xa1:  lea    -0x20(%ebp),%eax
08a9e770 +0xa4:  mov    %eax,(%esp)
08a9e773 +0xa7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e778 +0xac:  mov    %esi,%eax
08a9e77a +0xae:  mov    %ebx,%edx
08a9e77c +0xb0:  mov    %eax,(%esp)
08a9e77f +0xb3:  call   08ae3750 <_Unwind_Resume>
08a9e784 +0xb8:  lea    -0x20(%ebp),%eax
08a9e787 +0xbb:  mov    %eax,(%esp)
08a9e78a +0xbe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e78f +0xc3:  jmp    08a9e6d4 <+0x8>
08a9e794 +0xc8:  nop
08a9e795 +0xc9:  add    $0x30,%esp
08a9e798 +0xcc:  pop    %ebx
08a9e799 +0xcd:  pop    %esi
08a9e79a +0xce:  pop    %ebp
08a9e79b +0xcf:  ret
```

## 反编译 C

```c
// StrikerScript::readSkillPenalty @ 0x8a9e6cc

/* StrikerScript::readSkillPenalty(std::vector<TagSkillPenalty, std::allocator<TagSkillPenalty> >&)
    */

void __thiscall StrikerScript::readSkillPenalty(StrikerScript *this,vector *param_1)

{
  string local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  bool local_d;
  
  while( true ) {
    local_d = true;
    TagSkillPenalty::TagSkillPenalty((TagSkillPenalty *)&local_20);
    local_20 = ScanInt(&local_d);
    if (local_d != true) break;
    local_1c = ScanInt((bool *)0x0);
    std::string::string((string *)&local_24);
                    /* try { // try from 08a9e720 to 08a9e766 has its CatchHandler @ 08a9e769 */
    ScanStr((string *)&local_24);
    local_18 = std::operator==(&local_24,"%");
    local_14 = ScanInt((bool *)0x0);
    std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::push_back
              ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)param_1,
               (TagSkillPenalty *)&local_20);
    std::string::~string((string *)&local_24);
  }
  return;
}
```

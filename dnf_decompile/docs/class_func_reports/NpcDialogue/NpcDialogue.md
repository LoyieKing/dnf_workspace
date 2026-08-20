# NpcDialogue

`_ZN11NpcDialogueC1Ev`

`NpcDialogue::NpcDialogue()`

| 类 | 地址 |
|---|---|
| `NpcDialogue` | `0x089fb688` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb688  _ZN11NpcDialogueC1Ev
#           NpcDialogue::NpcDialogue()
# range [0x089fb688, 0x089fb71b]
089fb688 +0x00:  push   %ebp
089fb689 +0x01:  mov    %esp,%ebp
089fb68b +0x03:  push   %esi
089fb68c +0x04:  push   %ebx
089fb68d +0x05:  sub    $0x10,%esp
089fb690 +0x08:  mov    0x8(%ebp),%eax
089fb693 +0x0b:  add    $0xc,%eax
089fb696 +0x0e:  mov    %eax,(%esp)
089fb699 +0x11:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb69e +0x16:  mov    0x8(%ebp),%eax
089fb6a1 +0x19:  add    $0x10,%eax
089fb6a4 +0x1c:  mov    %eax,(%esp)
089fb6a7 +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb6ac +0x24:  mov    0x8(%ebp),%eax
089fb6af +0x27:  add    $0x14,%eax
089fb6b2 +0x2a:  mov    %eax,(%esp)
089fb6b5 +0x2d:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
089fb6ba +0x32:  mov    0x8(%ebp),%eax
089fb6bd +0x35:  mov    %eax,(%esp)
089fb6c0 +0x38:  call   089fb71c <_ZN11NpcDialogue5clearEv>  ; NpcDialogue::clear()
089fb6c5 +0x3d:  jmp    089fb715 <+0x8d>
089fb6c7 +0x3f:  mov    %edx,%ebx
089fb6c9 +0x41:  mov    %eax,%esi
089fb6cb +0x43:  mov    0x8(%ebp),%eax
089fb6ce +0x46:  add    $0x14,%eax
089fb6d1 +0x49:  mov    %eax,(%esp)
089fb6d4 +0x4c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089fb6d9 +0x51:  mov    %esi,%eax
089fb6db +0x53:  mov    %ebx,%edx
089fb6dd +0x55:  jmp    089fb6df <+0x57>
089fb6df +0x57:  mov    %edx,%ebx
089fb6e1 +0x59:  mov    %eax,%esi
089fb6e3 +0x5b:  mov    0x8(%ebp),%eax
089fb6e6 +0x5e:  add    $0x10,%eax
089fb6e9 +0x61:  mov    %eax,(%esp)
089fb6ec +0x64:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fb6f1 +0x69:  mov    %esi,%eax
089fb6f3 +0x6b:  mov    %ebx,%edx
089fb6f5 +0x6d:  jmp    089fb6f7 <+0x6f>
089fb6f7 +0x6f:  mov    %edx,%ebx
089fb6f9 +0x71:  mov    %eax,%esi
089fb6fb +0x73:  mov    0x8(%ebp),%eax
089fb6fe +0x76:  add    $0xc,%eax
089fb701 +0x79:  mov    %eax,(%esp)
089fb704 +0x7c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fb709 +0x81:  mov    %esi,%eax
089fb70b +0x83:  mov    %ebx,%edx
089fb70d +0x85:  mov    %eax,(%esp)
089fb710 +0x88:  call   08ae3750 <_Unwind_Resume>
089fb715 +0x8d:  add    $0x10,%esp
089fb718 +0x90:  pop    %ebx
089fb719 +0x91:  pop    %esi
089fb71a +0x92:  pop    %ebp
089fb71b +0x93:  ret
```

## 反编译 C

```c
// NpcDialogue::NpcDialogue @ 0x89fb688

/* NpcDialogue::NpcDialogue() */

void __thiscall NpcDialogue::NpcDialogue(NpcDialogue *this)

{
  std::string::string((string *)(this + 0xc));
                    /* try { // try from 089fb6a7 to 089fb6ab has its CatchHandler @ 089fb6f7 */
  std::string::string((string *)(this + 0x10));
                    /* try { // try from 089fb6b5 to 089fb6b9 has its CatchHandler @ 089fb6df */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x14));
                    /* try { // try from 089fb6c0 to 089fb6c4 has its CatchHandler @ 089fb6c7 */
  clear(this);
  return;
}
```

# getNextMoviePath

`_ZN12NpcMovieData16getNextMoviePathEv`

`NpcMovieData::getNextMoviePath()`

| 类 | 地址 |
|---|---|
| `NpcMovieData` | `0x089fb7ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb7ee  _ZN12NpcMovieData16getNextMoviePathEv
#           NpcMovieData::getNextMoviePath()
# range [0x089fb7ee, 0x089fb8b5]
089fb7ee +0x00:  push   %ebp
089fb7ef +0x01:  mov    %esp,%ebp
089fb7f1 +0x03:  push   %edi
089fb7f2 +0x04:  push   %esi
089fb7f3 +0x05:  push   %ebx
089fb7f4 +0x06:  sub    $0x2c,%esp
089fb7f7 +0x09:  mov    0x8(%ebp),%ebx
089fb7fa +0x0c:  mov    %ebx,%eax
089fb7fc +0x0e:  mov    %eax,(%esp)
089fb7ff +0x11:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
089fb804 +0x16:  mov    0xc(%ebp),%eax
089fb807 +0x19:  mov    %eax,(%esp)
089fb80a +0x1c:  call   08a014b2 <_GLOBAL__I_g_npcScriptBaseDirectory+0xb44>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb44
089fb80f +0x21:  test   %al,%al
089fb811 +0x23:  jne    089fb8a3 <+0xb5>
089fb817 +0x29:  mov    0xc(%ebp),%eax
089fb81a +0x2c:  mov    %eax,(%esp)
089fb81d +0x2f:  call   08a014d2 <_GLOBAL__I_g_npcScriptBaseDirectory+0xb64>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb64
089fb822 +0x34:  mov    %eax,%edx
089fb824 +0x36:  mov    0xc(%ebp),%eax
089fb827 +0x39:  mov    0x28(%eax),%eax
089fb82a +0x3c:  cmp    %eax,%edx
089fb82c +0x3e:  setg   %al
089fb82f +0x41:  test   %al,%al
089fb831 +0x43:  je     089fb8a6 <+0xb8>
089fb833 +0x45:  mov    0xc(%ebp),%eax
089fb836 +0x48:  mov    0x28(%eax),%eax
089fb839 +0x4b:  mov    %eax,%edx
089fb83b +0x4d:  mov    0xc(%ebp),%eax
089fb83e +0x50:  mov    %edx,0x4(%esp)
089fb842 +0x54:  mov    %eax,(%esp)
089fb845 +0x57:  call   08a014f2 <_GLOBAL__I_g_npcScriptBaseDirectory+0xb84>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb84
089fb84a +0x5c:  mov    %ebx,%edx
089fb84c +0x5e:  mov    %eax,0x4(%esp)
089fb850 +0x62:  mov    %edx,(%esp)
089fb853 +0x65:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
089fb858 +0x6a:  mov    0xc(%ebp),%eax
089fb85b +0x6d:  mov    0x28(%eax),%eax
089fb85e +0x70:  add    $0x1,%eax
089fb861 +0x73:  mov    %eax,%esi
089fb863 +0x75:  mov    0xc(%ebp),%eax
089fb866 +0x78:  mov    %eax,(%esp)
089fb869 +0x7b:  call   08a014d2 <_GLOBAL__I_g_npcScriptBaseDirectory+0xb64>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb64
089fb86e +0x80:  mov    %eax,-0x1c(%ebp)
089fb871 +0x83:  mov    %esi,%eax
089fb873 +0x85:  mov    $0x0,%edx
089fb878 +0x8a:  divl   -0x1c(%ebp)
089fb87b +0x8d:  mov    %edx,%ecx
089fb87d +0x8f:  mov    %ecx,%eax
089fb87f +0x91:  mov    %eax,%edx
089fb881 +0x93:  mov    0xc(%ebp),%eax
089fb884 +0x96:  mov    %edx,0x28(%eax)
089fb887 +0x99:  jmp    089fb8a7 <+0xb9>
089fb889 +0x9b:  mov    %edx,%esi
089fb88b +0x9d:  mov    %eax,%edi
089fb88d +0x9f:  mov    %ebx,%eax
089fb88f +0xa1:  mov    %eax,(%esp)
089fb892 +0xa4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089fb897 +0xa9:  mov    %edi,%eax
089fb899 +0xab:  mov    %esi,%edx
089fb89b +0xad:  mov    %eax,(%esp)
089fb89e +0xb0:  call   08ae3750 <_Unwind_Resume>
089fb8a3 +0xb5:  nop
089fb8a4 +0xb6:  jmp    089fb8a7 <+0xb9>
089fb8a6 +0xb8:  nop
089fb8a7 +0xb9:  mov    %ebx,%eax
089fb8a9 +0xbb:  mov    %ebx,%eax
089fb8ab +0xbd:  add    $0x2c,%esp
089fb8ae +0xc0:  pop    %ebx
089fb8af +0xc1:  pop    %esi
089fb8b0 +0xc2:  pop    %edi
089fb8b1 +0xc3:  pop    %ebp
089fb8b2 +0xc4:  ret    $0x4
089fb8b5 +0xc7:  nop
```

## 反编译 C

```c
// NpcMovieData::getNextMoviePath @ 0x89fb7ee

/* NpcMovieData::getNextMoviePath() */

string * NpcMovieData::getNextMoviePath(void)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  uint uVar4;
  string *in_stack_00000004;
  deque<std::string,std::allocator<std::string>> *in_stack_00000008;
  
  std::string::string(in_stack_00000004);
                    /* try { // try from 089fb80a to 089fb86d has its CatchHandler @ 089fb889 */
  cVar1 = std::deque<std::string,std::allocator<std::string>>::empty(in_stack_00000008);
  if ((cVar1 == '\0') &&
     (iVar2 = std::deque<std::string,std::allocator<std::string>>::size(in_stack_00000008),
     *(int *)(in_stack_00000008 + 0x28) < iVar2)) {
    psVar3 = (string *)
             std::deque<std::string,std::allocator<std::string>>::operator[]
                       ((uint)in_stack_00000008);
    std::string::operator=(in_stack_00000004,psVar3);
    iVar2 = *(int *)(in_stack_00000008 + 0x28);
    uVar4 = std::deque<std::string,std::allocator<std::string>>::size(in_stack_00000008);
    *(uint *)(in_stack_00000008 + 0x28) = (iVar2 + 1U) % uVar4;
  }
  return in_stack_00000004;
}
```

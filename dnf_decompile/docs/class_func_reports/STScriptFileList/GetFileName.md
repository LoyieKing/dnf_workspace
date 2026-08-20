# GetFileName

`_ZNK16STScriptFileList11GetFileNameEi`

`STScriptFileList::GetFileName(int) const`

| 类 | 地址 |
|---|---|
| `STScriptFileList` | `0x088bad4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088bad4e  _ZNK16STScriptFileList11GetFileNameEi
#           STScriptFileList::GetFileName(int) const
# range [0x088bad4e, 0x088badb9]
088bad4e +0x00:  push   %ebp
088bad4f +0x01:  mov    %esp,%ebp
088bad51 +0x03:  sub    $0x28,%esp
088bad54 +0x06:  mov    0x8(%ebp),%edx
088bad57 +0x09:  lea    -0x10(%ebp),%eax
088bad5a +0x0c:  lea    0xc(%ebp),%ecx
088bad5d +0x0f:  mov    %ecx,0x8(%esp)
088bad61 +0x13:  mov    %edx,0x4(%esp)
088bad65 +0x17:  mov    %eax,(%esp)
088bad68 +0x1a:  call   080c6e28 <_GLOBAL__I_g_ServerString_+0x393>  ; global constructors keyed to g_ServerString_+0x393
088bad6d +0x1f:  sub    $0x4,%esp
088bad70 +0x22:  mov    0x8(%ebp),%edx
088bad73 +0x25:  lea    -0xc(%ebp),%eax
088bad76 +0x28:  mov    %edx,0x4(%esp)
088bad7a +0x2c:  mov    %eax,(%esp)
088bad7d +0x2f:  call   080c6e54 <_GLOBAL__I_g_ServerString_+0x3bf>  ; global constructors keyed to g_ServerString_+0x3bf
088bad82 +0x34:  sub    $0x4,%esp
088bad85 +0x37:  lea    -0xc(%ebp),%eax
088bad88 +0x3a:  mov    %eax,0x4(%esp)
088bad8c +0x3e:  lea    -0x10(%ebp),%eax
088bad8f +0x41:  mov    %eax,(%esp)
088bad92 +0x44:  call   080c7c7e <_GLOBAL__I_g_ServerString_+0x11e9>  ; global constructors keyed to g_ServerString_+0x11e9
088bad97 +0x49:  test   %al,%al
088bad99 +0x4b:  je     088bada2 <+0x54>
088bad9b +0x4d:  mov    $0x0,%eax
088bada0 +0x52:  jmp    088badb8 <+0x6a>
088bada2 +0x54:  lea    -0x10(%ebp),%eax
088bada5 +0x57:  mov    %eax,(%esp)
088bada8 +0x5a:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
088badad +0x5f:  add    $0x4,%eax
088badb0 +0x62:  mov    %eax,(%esp)
088badb3 +0x65:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088badb8 +0x6a:  leave
088badb9 +0x6b:  ret
```

## 反编译 C

```c
// STScriptFileList::GetFileName @ 0x88bad4e

/* STScriptFileList::GetFileName(int) const */

undefined4 STScriptFileList::GetFileName(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [12]
  ;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_14);
    uVar2 = std::string::c_str((string *)(iVar3 + 4));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

# isCloseString

`_ZN10script_tag13isCloseStringERSs`

`script_tag::isCloseString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `script_tag` | `0x08a0c8b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a0c8b2  _ZN10script_tag13isCloseStringERSs
#           script_tag::isCloseString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08a0c8b2, 0x08a0c8f9]
08a0c8b2 +0x00:  push   %ebp
08a0c8b3 +0x01:  mov    %esp,%ebp
08a0c8b5 +0x03:  sub    $0x28,%esp
08a0c8b8 +0x06:  movb   $0x0,-0x9(%ebp)
08a0c8bc +0x0a:  mov    0x8(%ebp),%eax
08a0c8bf +0x0d:  mov    %eax,(%esp)
08a0c8c2 +0x10:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08a0c8c7 +0x15:  cmp    $0x2,%eax
08a0c8ca +0x18:  seta   %al
08a0c8cd +0x1b:  test   %al,%al
08a0c8cf +0x1d:  je     08a0c8f4 <+0x42>
08a0c8d1 +0x1f:  movl   $0x1,0x4(%esp)
08a0c8d9 +0x27:  mov    0x8(%ebp),%eax
08a0c8dc +0x2a:  mov    %eax,(%esp)
08a0c8df +0x2d:  call   08708e70 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a80
08a0c8e4 +0x32:  movzbl (%eax),%eax
08a0c8e7 +0x35:  cmp    $0x2f,%al
08a0c8e9 +0x37:  sete   %al
08a0c8ec +0x3a:  test   %al,%al
08a0c8ee +0x3c:  je     08a0c8f4 <+0x42>
08a0c8f0 +0x3e:  movb   $0x1,-0x9(%ebp)
08a0c8f4 +0x42:  movzbl -0x9(%ebp),%eax
08a0c8f8 +0x46:  leave
08a0c8f9 +0x47:  ret
```

## 反编译 C

```c
// script_tag::isCloseString @ 0x8a0c8b2

/* script_tag::isCloseString(std::string&) */

undefined1 script_tag::isCloseString(string *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined1 local_d;
  
  local_d = 0;
  uVar1 = std::string::size(param_1);
  if (2 < uVar1) {
    pcVar2 = (char *)std::string::at(param_1,1);
    if (*pcVar2 == '/') {
      local_d = 1;
    }
  }
  return local_d;
}
```

# isTypeString

`_ZN10script_tag12isTypeStringERSs`

`script_tag::isTypeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `script_tag` | `0x08a0c8fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a0c8fa  _ZN10script_tag12isTypeStringERSs
#           script_tag::isTypeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08a0c8fa, 0x08a0c941]
08a0c8fa +0x00:  push   %ebp
08a0c8fb +0x01:  mov    %esp,%ebp
08a0c8fd +0x03:  sub    $0x28,%esp
08a0c900 +0x06:  movb   $0x0,-0x9(%ebp)
08a0c904 +0x0a:  mov    0x8(%ebp),%eax
08a0c907 +0x0d:  mov    %eax,(%esp)
08a0c90a +0x10:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08a0c90f +0x15:  cmp    $0x1,%eax
08a0c912 +0x18:  seta   %al
08a0c915 +0x1b:  test   %al,%al
08a0c917 +0x1d:  je     08a0c93c <+0x42>
08a0c919 +0x1f:  movl   $0x0,0x4(%esp)
08a0c921 +0x27:  mov    0x8(%ebp),%eax
08a0c924 +0x2a:  mov    %eax,(%esp)
08a0c927 +0x2d:  call   08708e70 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a80
08a0c92c +0x32:  movzbl (%eax),%eax
08a0c92f +0x35:  cmp    $0x5b,%al
08a0c931 +0x37:  sete   %al
08a0c934 +0x3a:  test   %al,%al
08a0c936 +0x3c:  je     08a0c93c <+0x42>
08a0c938 +0x3e:  movb   $0x1,-0x9(%ebp)
08a0c93c +0x42:  movzbl -0x9(%ebp),%eax
08a0c940 +0x46:  leave
08a0c941 +0x47:  ret
```

## 反编译 C

```c
// script_tag::isTypeString @ 0x8a0c8fa

/* script_tag::isTypeString(std::string&) */

undefined1 script_tag::isTypeString(string *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined1 local_d;
  
  local_d = 0;
  uVar1 = std::string::size(param_1);
  if (1 < uVar1) {
    pcVar2 = (char *)std::string::at(param_1,0);
    if (*pcVar2 == '[') {
      local_d = 1;
    }
  }
  return local_d;
}
```

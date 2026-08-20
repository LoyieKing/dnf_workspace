# do_get

`_ZNKSt8messagesIcE6do_getEiiiRKSs`

`std::messages<char>::do_get(int, int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const`

| 类 | 地址 |
|---|---|
| `std::messages<char>` | `0x0871fa10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fa10  _ZNKSt8messagesIcE6do_getEiiiRKSs
#           std::messages<char>::do_get(int, int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
# range [0x0871fa10, 0x0871fa7f]
0871fa10 +0x00:  push   %ebp
0871fa11 +0x01:  mov    %esp,%ebp
0871fa13 +0x03:  sub    $0x38,%esp
0871fa16 +0x06:  mov    0xc(%ebp),%eax
0871fa19 +0x09:  mov    %ebx,-0xc(%ebp)
0871fa1c +0x0c:  mov    0x8(%ebp),%ebx
0871fa1f +0x0f:  mov    %esi,-0x8(%ebp)
0871fa22 +0x12:  mov    %edi,-0x4(%ebp)
0871fa25 +0x15:  mov    0x8(%eax),%eax
0871fa28 +0x18:  mov    %eax,(%esp)
0871fa2b +0x1b:  call   0807de70 <_init+0x768>
0871fa30 +0x20:  mov    %eax,%edi
0871fa32 +0x22:  mov    0x1c(%ebp),%eax
0871fa35 +0x25:  mov    (%eax),%eax
0871fa37 +0x27:  mov    %eax,(%esp)
0871fa3a +0x2a:  call   0807d840 <_init+0x138>
0871fa3f +0x2f:  mov    %edi,(%esp)
0871fa42 +0x32:  mov    %eax,%esi
0871fa44 +0x34:  call   0807de70 <_init+0x768>
0871fa49 +0x39:  lea    -0x19(%ebp),%eax
0871fa4c +0x3c:  mov    %eax,0x8(%esp)
0871fa50 +0x40:  mov    %esi,0x4(%esp)
0871fa54 +0x44:  mov    %ebx,(%esp)
0871fa57 +0x47:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0871fa5c +0x4c:  mov    %ebx,%eax
0871fa5e +0x4e:  mov    -0x8(%ebp),%esi
0871fa61 +0x51:  mov    -0xc(%ebp),%ebx
0871fa64 +0x54:  mov    -0x4(%ebp),%edi
0871fa67 +0x57:  mov    %ebp,%esp
0871fa69 +0x59:  pop    %ebp
0871fa6a +0x5a:  ret    $0x4
0871fa6d +0x5d:  mov    %eax,(%esp)
0871fa70 +0x60:  call   08ae3750 <_Unwind_Resume>
0871fa75 +0x65:  nop
0871fa76 +0x66:  nop
0871fa77 +0x67:  nop
0871fa78 +0x68:  nop
0871fa79 +0x69:  nop
0871fa7a +0x6a:  nop
0871fa7b +0x6b:  nop
0871fa7c +0x6c:  nop
0871fa7d +0x6d:  nop
0871fa7e +0x6e:  nop
0871fa7f +0x6f:  nop
```

## 反编译 C

```c
// std::messages<char>::do_get @ 0x871fa10

/* std::messages<char>::do_get(int, int, int, std::string const&) const */

int std::messages<char>::do_get(int param_1,int param_2,int param_3,string *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *in_stack_00000018;
  allocator local_1d [13];
  
  uVar1 = __uselocale(*(undefined4 *)(param_2 + 8));
  pcVar2 = (char *)gettext(*in_stack_00000018);
  __uselocale(uVar1);
                    /* try { // try from 0871fa57 to 0871fa5b has its CatchHandler @ 0871fa6d */
  string::string((string *)param_1,pcVar2,local_1d);
  return param_1;
}
```

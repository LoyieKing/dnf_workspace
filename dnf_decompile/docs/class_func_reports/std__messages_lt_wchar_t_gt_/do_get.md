# do_get

`_ZNKSt8messagesIwE6do_getEiiiRKSbIwSt11char_traitsIwESaIwEE`

`std::messages<wchar_t>::do_get(int, int, int, std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&) const`

| 类 | 地址 |
|---|---|
| `std::messages<wchar_t>` | `0x0871f9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f9c0  _ZNKSt8messagesIwE6do_getEiiiRKSbIwSt11char_traitsIwESaIwEE
#           std::messages<wchar_t>::do_get(int, int, int, std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&) const
# range [0x0871f9c0, 0x0871fa0f]
0871f9c0 +0x00:  push   %ebp
0871f9c1 +0x01:  mov    %esp,%ebp
0871f9c3 +0x03:  sub    $0x18,%esp
0871f9c6 +0x06:  mov    0xc(%ebp),%eax
0871f9c9 +0x09:  mov    %ebx,-0x8(%ebp)
0871f9cc +0x0c:  mov    0x8(%ebp),%ebx
0871f9cf +0x0f:  mov    %esi,-0x4(%ebp)
0871f9d2 +0x12:  mov    0x8(%eax),%eax
0871f9d5 +0x15:  mov    %eax,(%esp)
0871f9d8 +0x18:  call   0807de70 <_init+0x768>
0871f9dd +0x1d:  mov    %eax,%esi
0871f9df +0x1f:  mov    0x1c(%ebp),%eax
0871f9e2 +0x22:  mov    (%eax),%eax
0871f9e4 +0x24:  mov    %eax,(%esp)
0871f9e7 +0x27:  call   0807d840 <_init+0x138>
0871f9ec +0x2c:  mov    %esi,(%esp)
0871f9ef +0x2f:  call   0807de70 <_init+0x768>
0871f9f4 +0x34:  mov    %ebx,%eax
0871f9f6 +0x36:  movl   $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE+0xc,(%ebx)
0871f9fc +0x3c:  mov    -0x8(%ebp),%ebx
0871f9ff +0x3f:  mov    -0x4(%ebp),%esi
0871fa02 +0x42:  mov    %ebp,%esp
0871fa04 +0x44:  pop    %ebp
0871fa05 +0x45:  ret    $0x4
0871fa08 +0x48:  nop
0871fa09 +0x49:  nop
0871fa0a +0x4a:  nop
0871fa0b +0x4b:  nop
0871fa0c +0x4c:  nop
0871fa0d +0x4d:  nop
0871fa0e +0x4e:  nop
0871fa0f +0x4f:  nop
```

## 反编译 C

```c
// std::messages<wchar_t>::do_get @ 0x871f9c0

/* std::messages<wchar_t>::do_get(int, int, int, std::wstring const&) const */

int std::messages<wchar_t>::do_get(int param_1,int param_2,int param_3,wstring *param_4)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000018;
  
  uVar1 = __uselocale(*(undefined4 *)(param_2 + 8));
  gettext(*in_stack_00000018);
  __uselocale(uVar1);
  *(undefined **)param_1 = &DAT_0948cd9c;
  return param_1;
}
```

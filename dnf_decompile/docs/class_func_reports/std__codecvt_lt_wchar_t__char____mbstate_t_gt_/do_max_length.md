# do_max_length

`_ZNKSt7codecvtIwc11__mbstate_tE13do_max_lengthEv`

`std::codecvt<wchar_t, char, __mbstate_t>::do_max_length() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x0871f650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f650  _ZNKSt7codecvtIwc11__mbstate_tE13do_max_lengthEv
#           std::codecvt<wchar_t, char, __mbstate_t>::do_max_length() const
# range [0x0871f650, 0x0871f68f]
0871f650 +0x00:  push   %ebp
0871f651 +0x01:  mov    %esp,%ebp
0871f653 +0x03:  sub    $0x18,%esp
0871f656 +0x06:  mov    0x8(%ebp),%eax
0871f659 +0x09:  mov    %ebx,-0x8(%ebp)
0871f65c +0x0c:  mov    %esi,-0x4(%ebp)
0871f65f +0x0f:  mov    0x8(%eax),%eax
0871f662 +0x12:  mov    %eax,(%esp)
0871f665 +0x15:  call   0807de70 <_init+0x768>
0871f66a +0x1a:  mov    %eax,%esi
0871f66c +0x1c:  call   0807dd20 <_init+0x618>
0871f671 +0x21:  mov    %esi,(%esp)
0871f674 +0x24:  mov    %eax,%ebx
0871f676 +0x26:  call   0807de70 <_init+0x768>
0871f67b +0x2b:  mov    %ebx,%eax
0871f67d +0x2d:  mov    -0x4(%ebp),%esi
0871f680 +0x30:  mov    -0x8(%ebp),%ebx
0871f683 +0x33:  mov    %ebp,%esp
0871f685 +0x35:  pop    %ebp
0871f686 +0x36:  ret
0871f687 +0x37:  nop
0871f688 +0x38:  nop
0871f689 +0x39:  nop
0871f68a +0x3a:  nop
0871f68b +0x3b:  nop
0871f68c +0x3c:  nop
0871f68d +0x3d:  nop
0871f68e +0x3e:  nop
0871f68f +0x3f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x871f650

/* std::codecvt<wchar_t, char, __mbstate_t>::do_max_length() const */

size_t __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_max_length(codecvt<wchar_t,char,__mbstate_t> *this)

{
  undefined4 uVar1;
  size_t sVar2;
  
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  sVar2 = __ctype_get_mb_cur_max();
  __uselocale(uVar1);
  return sVar2;
}
```

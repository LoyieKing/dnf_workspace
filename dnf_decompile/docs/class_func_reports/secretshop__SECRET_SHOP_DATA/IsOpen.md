# IsOpen

`_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv`

`secretshop::SECRET_SHOP_DATA::IsOpen()`

| 类 | 地址 |
|---|---|
| `secretshop::SECRET_SHOP_DATA` | `0x08ab150c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab150c  _ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv
#           secretshop::SECRET_SHOP_DATA::IsOpen()
# range [0x08ab150c, 0x08ab1531]
08ab150c +0x00:  push   %ebp
08ab150d +0x01:  mov    %esp,%ebp
08ab150f +0x03:  mov    0x8(%ebp),%eax
08ab1512 +0x06:  mov    (%eax),%eax
08ab1514 +0x08:  test   %eax,%eax
08ab1516 +0x0a:  je     08ab152b <+0x1f>
08ab1518 +0x0c:  mov    0x8(%ebp),%eax
08ab151b +0x0f:  mov    (%eax),%eax
08ab151d +0x11:  cmp    $0x3e8,%eax
08ab1522 +0x16:  je     08ab152b <+0x1f>
08ab1524 +0x18:  mov    $0x1,%eax
08ab1529 +0x1d:  jmp    08ab1530 <+0x24>
08ab152b +0x1f:  mov    $0x0,%eax
08ab1530 +0x24:  pop    %ebp
08ab1531 +0x25:  ret
```

## 反编译 C

```c
// secretshop::SECRET_SHOP_DATA::IsOpen @ 0x8ab150c

/* secretshop::SECRET_SHOP_DATA::IsOpen() */

undefined4 __thiscall secretshop::SECRET_SHOP_DATA::IsOpen(SECRET_SHOP_DATA *this)

{
  undefined4 uVar1;
  
  if ((*(int *)this == 0) || (*(int *)this == 1000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

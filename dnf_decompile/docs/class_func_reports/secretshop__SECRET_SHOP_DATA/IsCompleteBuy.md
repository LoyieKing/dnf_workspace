# IsCompleteBuy

`_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv`

`secretshop::SECRET_SHOP_DATA::IsCompleteBuy()`

| 类 | 地址 |
|---|---|
| `secretshop::SECRET_SHOP_DATA` | `0x08ab155a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab155a  _ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv
#           secretshop::SECRET_SHOP_DATA::IsCompleteBuy()
# range [0x08ab155a, 0x08ab1594]
08ab155a +0x00:  push   %ebp
08ab155b +0x01:  mov    %esp,%ebp
08ab155d +0x03:  sub    $0x10,%esp
08ab1560 +0x06:  movl   $0x0,-0x4(%ebp)
08ab1567 +0x0d:  jmp    08ab1583 <+0x29>
08ab1569 +0x0f:  mov    -0x4(%ebp),%eax
08ab156c +0x12:  mov    0x8(%ebp),%edx
08ab156f +0x15:  movzbl 0x74(%edx,%eax,1),%eax
08ab1574 +0x1a:  test   %al,%al
08ab1576 +0x1c:  je     08ab157f <+0x25>
08ab1578 +0x1e:  mov    $0x0,%eax
08ab157d +0x23:  jmp    08ab1593 <+0x39>
08ab157f +0x25:  addl   $0x1,-0x4(%ebp)
08ab1583 +0x29:  cmpl   $0x3,-0x4(%ebp)
08ab1587 +0x2d:  setle  %al
08ab158a +0x30:  test   %al,%al
08ab158c +0x32:  jne    08ab1569 <+0xf>
08ab158e +0x34:  mov    $0x1,%eax
08ab1593 +0x39:  leave
08ab1594 +0x3a:  ret
```

## 反编译 C

```c
// secretshop::SECRET_SHOP_DATA::IsCompleteBuy @ 0x8ab155a

/* secretshop::SECRET_SHOP_DATA::IsCompleteBuy() */

undefined4 __thiscall secretshop::SECRET_SHOP_DATA::IsCompleteBuy(SECRET_SHOP_DATA *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (this[local_8 + 0x74] != (SECRET_SHOP_DATA)0x0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```

# SetBuying

`_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib`

`secretshop::SECRET_SHOP_DATA::SetBuying(int, bool)`

| 类 | 地址 |
|---|---|
| `secretshop::SECRET_SHOP_DATA` | `0x08ab1532` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab1532  _ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib
#           secretshop::SECRET_SHOP_DATA::SetBuying(int, bool)
# range [0x08ab1532, 0x08ab1559]
08ab1532 +0x00:  push   %ebp
08ab1533 +0x01:  mov    %esp,%ebp
08ab1535 +0x03:  sub    $0x4,%esp
08ab1538 +0x06:  mov    0x10(%ebp),%eax
08ab153b +0x09:  mov    %al,-0x4(%ebp)
08ab153e +0x0c:  cmpl   $0x0,0xc(%ebp)
08ab1542 +0x10:  js     08ab1558 <+0x26>
08ab1544 +0x12:  cmpl   $0x3,0xc(%ebp)
08ab1548 +0x16:  jg     08ab1558 <+0x26>
08ab154a +0x18:  mov    0xc(%ebp),%eax
08ab154d +0x1b:  mov    0x8(%ebp),%edx
08ab1550 +0x1e:  movzbl -0x4(%ebp),%ecx
08ab1554 +0x22:  mov    %cl,0x74(%edx,%eax,1)
08ab1558 +0x26:  leave
08ab1559 +0x27:  ret
```

## 反编译 C

```c
// secretshop::SECRET_SHOP_DATA::SetBuying @ 0x8ab1532

/* secretshop::SECRET_SHOP_DATA::SetBuying(int, bool) */

void __thiscall
secretshop::SECRET_SHOP_DATA::SetBuying(SECRET_SHOP_DATA *this,int param_1,bool param_2)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    this[param_1 + 0x74] = (SECRET_SHOP_DATA)param_2;
  }
  return;
}
```

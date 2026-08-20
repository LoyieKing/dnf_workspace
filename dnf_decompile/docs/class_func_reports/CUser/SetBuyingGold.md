# SetBuyingGold

`_ZN5CUser13SetBuyingGoldEb`

`CUser::SetBuyingGold(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692a08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692a08  _ZN5CUser13SetBuyingGoldEb
#           CUser::SetBuyingGold(bool)
# range [0x08692a08, 0x08692a23]
08692a08 +0x00:  push   %ebp
08692a09 +0x01:  mov    %esp,%ebp
08692a0b +0x03:  sub    $0x4,%esp
08692a0e +0x06:  mov    0xc(%ebp),%eax
08692a11 +0x09:  mov    %al,-0x4(%ebp)
08692a14 +0x0c:  mov    0x8(%ebp),%eax
08692a17 +0x0f:  movzbl -0x4(%ebp),%edx
08692a1b +0x13:  mov    %dl,0x8ead8(%eax)
08692a21 +0x19:  leave
08692a22 +0x1a:  ret
08692a23 +0x1b:  nop
```

## 反编译 C

```c
// CUser::SetBuyingGold @ 0x8692a08

/* CUser::SetBuyingGold(bool) */

void __thiscall CUser::SetBuyingGold(CUser *this,bool param_1)

{
  this[0x8ead8] = (CUser)param_1;
  return;
}
```

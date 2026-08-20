# SetTradePunishOverThirtyDays

`_ZN5CUser28SetTradePunishOverThirtyDaysEb`

`CUser::SetTradePunishOverThirtyDays(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689850  _ZN5CUser28SetTradePunishOverThirtyDaysEb
#           CUser::SetTradePunishOverThirtyDays(bool)
# range [0x08689850, 0x0868987f]
08689850 +0x00:  push   %ebp
08689851 +0x01:  mov    %esp,%ebp
08689853 +0x03:  sub    $0x28,%esp
08689856 +0x06:  mov    0xc(%ebp),%eax
08689859 +0x09:  mov    %al,-0xc(%ebp)
0868985c +0x0c:  movzbl -0xc(%ebp),%eax
08689860 +0x10:  mov    %eax,0x4(%esp)
08689864 +0x14:  movl   $" CUser::SetTradePunishOverThirtydays(%c) \n",(%esp)
0868986b +0x1b:  call   0807db60 <_init+0x458>
08689870 +0x20:  mov    0x8(%ebp),%eax
08689873 +0x23:  movzbl -0xc(%ebp),%edx
08689877 +0x27:  mov    %dl,0x7962c(%eax)
0868987d +0x2d:  leave
0868987e +0x2e:  ret
0868987f +0x2f:  nop
```

## 反编译 C

```c
// CUser::SetTradePunishOverThirtyDays @ 0x8689850

/* CUser::SetTradePunishOverThirtyDays(bool) */

void __thiscall CUser::SetTradePunishOverThirtyDays(CUser *this,bool param_1)

{
  printf(" CUser::SetTradePunishOverThirtydays(%c) \n",(uint)param_1);
  this[0x7962c] = (CUser)param_1;
  return;
}
```

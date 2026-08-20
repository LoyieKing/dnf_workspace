# SendNotiSetDurability

`_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEv`

`CAutoMarketConditionsControl::SendNotiSetDurability()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f85a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f85a8  _ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEv
#           CAutoMarketConditionsControl::SendNotiSetDurability()
# range [0x082f85a8, 0x082f85e9]
082f85a8 +0x00:  push   %ebp
082f85a9 +0x01:  mov    %esp,%ebp
082f85ab +0x03:  sub    $0x28,%esp
082f85ae +0x06:  mov    0x8(%ebp),%eax
082f85b1 +0x09:  fldl   0x43c(%eax)
082f85b7 +0x0f:  fldl   &data#a2821b98(.rodata)
082f85bd +0x15:  fmulp  %st,%st(1)
082f85bf +0x17:  fnstcw -0xa(%ebp)
082f85c2 +0x1a:  movzwl -0xa(%ebp),%eax
082f85c6 +0x1e:  mov    $0xc,%ah
082f85c8 +0x20:  mov    %ax,-0xc(%ebp)
082f85cc +0x24:  fldcw  -0xc(%ebp)
082f85cf +0x27:  fistpl -0x10(%ebp)
082f85d2 +0x2a:  fldcw  -0xa(%ebp)
082f85d5 +0x2d:  mov    -0x10(%ebp),%eax
082f85d8 +0x30:  mov    %eax,0x4(%esp)
082f85dc +0x34:  mov    0x8(%ebp),%eax
082f85df +0x37:  mov    %eax,(%esp)
082f85e2 +0x3a:  call   082f8540 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEi>  ; CAutoMarketConditionsControl::SendNotiSetDurability(int)
082f85e7 +0x3f:  leave
082f85e8 +0x40:  ret
082f85e9 +0x41:  nop
```

## 反编译 C

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f85a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::SendNotiSetDurability() */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability(CAutoMarketConditionsControl *this)

{
  SendNotiSetDurability(this,(int)ROUND(_DAT_08c1fc58 * *(double *)(this + 0x43c)));
  return;
}
```

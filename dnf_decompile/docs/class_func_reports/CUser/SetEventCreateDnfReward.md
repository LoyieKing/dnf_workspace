# SetEventCreateDnfReward

`_ZN5CUser23SetEventCreateDnfRewardEb`

`CUser::SetEventCreateDnfReward(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08693198` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08693198  _ZN5CUser23SetEventCreateDnfRewardEb
#           CUser::SetEventCreateDnfReward(bool)
# range [0x08693198, 0x086931b3]
08693198 +0x00:  push   %ebp
08693199 +0x01:  mov    %esp,%ebp
0869319b +0x03:  sub    $0x4,%esp
0869319e +0x06:  mov    0xc(%ebp),%eax
086931a1 +0x09:  mov    %al,-0x4(%ebp)
086931a4 +0x0c:  mov    0x8(%ebp),%eax
086931a7 +0x0f:  movzbl -0x4(%ebp),%edx
086931ab +0x13:  mov    %dl,0x8ec30(%eax)
086931b1 +0x19:  leave
086931b2 +0x1a:  ret
086931b3 +0x1b:  nop
```

## 反编译 C

```c
// CUser::SetEventCreateDnfReward @ 0x8693198

/* CUser::SetEventCreateDnfReward(bool) */

void __thiscall CUser::SetEventCreateDnfReward(CUser *this,bool param_1)

{
  this[0x8ec30] = (CUser)param_1;
  return;
}
```

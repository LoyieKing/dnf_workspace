# GetEventCreateDnfReward

`_ZN5CUser23GetEventCreateDnfRewardEv`

`CUser::GetEventCreateDnfReward()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086931b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086931b4  _ZN5CUser23GetEventCreateDnfRewardEv
#           CUser::GetEventCreateDnfReward()
# range [0x086931b4, 0x086931c3]
086931b4 +0x00:  push   %ebp
086931b5 +0x01:  mov    %esp,%ebp
086931b7 +0x03:  mov    0x8(%ebp),%eax
086931ba +0x06:  movzbl 0x8ec30(%eax),%eax
086931c1 +0x0d:  pop    %ebp
086931c2 +0x0e:  ret
086931c3 +0x0f:  nop
```

## 反编译 C

```c
// CUser::GetEventCreateDnfReward @ 0x86931b4

/* CUser::GetEventCreateDnfReward() */

CUser __thiscall CUser::GetEventCreateDnfReward(CUser *this)

{
  return this[0x8ec30];
}
```

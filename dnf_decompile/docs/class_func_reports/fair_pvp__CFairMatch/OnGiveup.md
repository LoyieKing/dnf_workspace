# OnGiveup

`_ZN8fair_pvp10CFairMatch8OnGiveupEP5CUser`

`fair_pvp::CFairMatch::OnGiveup(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564de0  _ZN8fair_pvp10CFairMatch8OnGiveupEP5CUser
#           fair_pvp::CFairMatch::OnGiveup(CUser*)
# range [0x08564de0, 0x08564de9]
08564de0 +0x00:  push   %ebp
08564de1 +0x01:  mov    %esp,%ebp
08564de3 +0x03:  mov    $0x1,%eax
08564de8 +0x08:  pop    %ebp
08564de9 +0x09:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnGiveup @ 0x8564de0

/* fair_pvp::CFairMatch::OnGiveup(CUser*) */

undefined4 fair_pvp::CFairMatch::OnGiveup(CUser *param_1)

{
  return 1;
}
```

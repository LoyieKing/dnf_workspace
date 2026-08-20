# gainPowerWarRewardExp

`_ZN5CUser21gainPowerWarRewardExpEi`

`CUser::gainPowerWarRewardExp(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fc34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fc34  _ZN5CUser21gainPowerWarRewardExpEi
#           CUser::gainPowerWarRewardExp(int)
# range [0x0864fc34, 0x0864fc3d]
0864fc34 +0x00:  push   %ebp
0864fc35 +0x01:  mov    %esp,%ebp
0864fc37 +0x03:  mov    $0x0,%eax
0864fc3c +0x08:  pop    %ebp
0864fc3d +0x09:  ret
```

## 反编译 C

```c
// CUser::gainPowerWarRewardExp @ 0x864fc34

/* CUser::gainPowerWarRewardExp(int) */

undefined4 CUser::gainPowerWarRewardExp(int param_1)

{
  return 0;
}
```

# isClearable

`_ZNK16CMission_revenge11isClearableER11MissionInfoRb`

`CMission_revenge::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_revenge` | `0x085e3b1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3b1c  _ZNK16CMission_revenge11isClearableER11MissionInfoRb
#           CMission_revenge::isClearable(MissionInfo&, bool&) const
# range [0x085e3b1c, 0x085e3b33]
085e3b1c +0x00:  push   %ebp
085e3b1d +0x01:  mov    %esp,%ebp
085e3b1f +0x03:  mov    0x8(%ebp),%eax
085e3b22 +0x06:  mov    0x40(%eax),%edx
085e3b25 +0x09:  mov    0xc(%ebp),%eax
085e3b28 +0x0c:  movzwl 0x4(%eax),%eax
085e3b2c +0x10:  cwtl
085e3b2d +0x11:  cmp    %eax,%edx
085e3b2f +0x13:  setle  %al
085e3b32 +0x16:  pop    %ebp
085e3b33 +0x17:  ret
```

## 反编译 C

```c
// CMission_revenge::isClearable @ 0x85e3b1c

/* CMission_revenge::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_revenge::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}
```

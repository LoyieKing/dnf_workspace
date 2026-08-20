# isClearable

`_ZNK18CMission_remain_hp11isClearableER11MissionInfoRb`

`CMission_remain_hp::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_remain_hp` | `0x085e3a2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3a2c  _ZNK18CMission_remain_hp11isClearableER11MissionInfoRb
#           CMission_remain_hp::isClearable(MissionInfo&, bool&) const
# range [0x085e3a2c, 0x085e3a43]
085e3a2c +0x00:  push   %ebp
085e3a2d +0x01:  mov    %esp,%ebp
085e3a2f +0x03:  mov    0x8(%ebp),%eax
085e3a32 +0x06:  mov    0x44(%eax),%edx
085e3a35 +0x09:  mov    0xc(%ebp),%eax
085e3a38 +0x0c:  movzwl 0x4(%eax),%eax
085e3a3c +0x10:  cwtl
085e3a3d +0x11:  cmp    %eax,%edx
085e3a3f +0x13:  setle  %al
085e3a42 +0x16:  pop    %ebp
085e3a43 +0x17:  ret
```

## 反编译 C

```c
// CMission_remain_hp::isClearable @ 0x85e3a2c

/* CMission_remain_hp::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_remain_hp::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4));
}
```

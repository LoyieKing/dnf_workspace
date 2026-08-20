# isClearable

`_ZNK19CMission_kill_count11isClearableER11MissionInfoRb`

`CMission_kill_count::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill_count` | `0x085e38f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e38f6  _ZNK19CMission_kill_count11isClearableER11MissionInfoRb
#           CMission_kill_count::isClearable(MissionInfo&, bool&) const
# range [0x085e38f6, 0x085e390d]
085e38f6 +0x00:  push   %ebp
085e38f7 +0x01:  mov    %esp,%ebp
085e38f9 +0x03:  mov    0x8(%ebp),%eax
085e38fc +0x06:  mov    0x40(%eax),%edx
085e38ff +0x09:  mov    0xc(%ebp),%eax
085e3902 +0x0c:  movzwl 0x4(%eax),%eax
085e3906 +0x10:  cwtl
085e3907 +0x11:  cmp    %eax,%edx
085e3909 +0x13:  setle  %al
085e390c +0x16:  pop    %ebp
085e390d +0x17:  ret
```

## 反编译 C

```c
// CMission_kill_count::isClearable @ 0x85e38f6

/* CMission_kill_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_kill_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}
```

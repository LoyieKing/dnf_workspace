# isClearable

`_ZNK32CMission_hereafter_winning_count11isClearableER11MissionInfoRb`

`CMission_hereafter_winning_count::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_hereafter_winning_count` | `0x085e39ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e39ee  _ZNK32CMission_hereafter_winning_count11isClearableER11MissionInfoRb
#           CMission_hereafter_winning_count::isClearable(MissionInfo&, bool&) const
# range [0x085e39ee, 0x085e3a05]
085e39ee +0x00:  push   %ebp
085e39ef +0x01:  mov    %esp,%ebp
085e39f1 +0x03:  mov    0x8(%ebp),%eax
085e39f4 +0x06:  mov    0x40(%eax),%edx
085e39f7 +0x09:  mov    0xc(%ebp),%eax
085e39fa +0x0c:  movzwl 0x4(%eax),%eax
085e39fe +0x10:  cwtl
085e39ff +0x11:  cmp    %eax,%edx
085e3a01 +0x13:  setle  %al
085e3a04 +0x16:  pop    %ebp
085e3a05 +0x17:  ret
```

## 反编译 C

```c
// CMission_hereafter_winning_count::isClearable @ 0x85e39ee

/* CMission_hereafter_winning_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_hereafter_winning_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}
```

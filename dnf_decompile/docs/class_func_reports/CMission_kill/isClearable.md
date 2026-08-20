# isClearable

`_ZNK13CMission_kill11isClearableER11MissionInfoRb`

`CMission_kill::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill` | `0x085e3bb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3bb4  _ZNK13CMission_kill11isClearableER11MissionInfoRb
#           CMission_kill::isClearable(MissionInfo&, bool&) const
# range [0x085e3bb4, 0x085e3bcb]
085e3bb4 +0x00:  push   %ebp
085e3bb5 +0x01:  mov    %esp,%ebp
085e3bb7 +0x03:  mov    0x8(%ebp),%eax
085e3bba +0x06:  mov    0x44(%eax),%edx
085e3bbd +0x09:  mov    0xc(%ebp),%eax
085e3bc0 +0x0c:  movzwl 0x4(%eax),%eax
085e3bc4 +0x10:  cwtl
085e3bc5 +0x11:  cmp    %eax,%edx
085e3bc7 +0x13:  setle  %al
085e3bca +0x16:  pop    %ebp
085e3bcb +0x17:  ret
```

## 反编译 C

```c
// CMission_kill::isClearable @ 0x85e3bb4

/* CMission_kill::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_kill::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4));
}
```

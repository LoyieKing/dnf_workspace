# isClearable

`_ZNK19CMission_remains_hp11isClearableER11MissionInfoRb`

`CMission_remains_hp::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_remains_hp` | `0x085e3f08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3f08  _ZNK19CMission_remains_hp11isClearableER11MissionInfoRb
#           CMission_remains_hp::isClearable(MissionInfo&, bool&) const
# range [0x085e3f08, 0x085e3f2b]
085e3f08 +0x00:  push   %ebp
085e3f09 +0x01:  mov    %esp,%ebp
085e3f0b +0x03:  mov    0x8(%ebp),%eax
085e3f0e +0x06:  mov    0x44(%eax),%edx
085e3f11 +0x09:  mov    0xc(%ebp),%eax
085e3f14 +0x0c:  movzwl 0x4(%eax),%eax
085e3f18 +0x10:  cwtl
085e3f19 +0x11:  cmp    %eax,%edx
085e3f1b +0x13:  jg     085e3f24 <+0x1c>
085e3f1d +0x15:  mov    $0x1,%eax
085e3f22 +0x1a:  jmp    085e3f29 <+0x21>
085e3f24 +0x1c:  mov    $0x0,%eax
085e3f29 +0x21:  pop    %ebp
085e3f2a +0x22:  ret
085e3f2b +0x23:  nop
```

## 反编译 C

```c
// CMission_remains_hp::isClearable @ 0x85e3f08

/* CMission_remains_hp::isClearable(MissionInfo&, bool&) const */

bool CMission_remains_hp::isClearable(MissionInfo *param_1,bool *param_2)

{
  return *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4);
}
```

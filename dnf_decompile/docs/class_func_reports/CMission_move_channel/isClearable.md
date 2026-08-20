# isClearable

`_ZNK21CMission_move_channel11isClearableER11MissionInfoRb`

`CMission_move_channel::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel` | `0x085e3f78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3f78  _ZNK21CMission_move_channel11isClearableER11MissionInfoRb
#           CMission_move_channel::isClearable(MissionInfo&, bool&) const
# range [0x085e3f78, 0x085e3fcd]
085e3f78 +0x00:  push   %ebp
085e3f79 +0x01:  mov    %esp,%ebp
085e3f7b +0x03:  mov    0xc(%ebp),%eax
085e3f7e +0x06:  movzwl 0x6(%eax),%eax
085e3f82 +0x0a:  cmp    $0x10,%ax
085e3f86 +0x0e:  jne    085e3f8f <+0x17>
085e3f88 +0x10:  mov    $0x1,%eax
085e3f8d +0x15:  jmp    085e3fcc <+0x54>
085e3f8f +0x17:  mov    0x8(%ebp),%eax
085e3f92 +0x1a:  mov    0x40(%eax),%edx
085e3f95 +0x1d:  mov    0xc(%ebp),%eax
085e3f98 +0x20:  movzwl 0x4(%eax),%eax
085e3f9c +0x24:  cwtl
085e3f9d +0x25:  cmp    %eax,%edx
085e3f9f +0x27:  jne    085e3fa8 <+0x30>
085e3fa1 +0x29:  mov    $0x1,%eax
085e3fa6 +0x2e:  jmp    085e3fcc <+0x54>
085e3fa8 +0x30:  mov    0x8(%ebp),%eax
085e3fab +0x33:  mov    0x40(%eax),%eax
085e3fae +0x36:  cmp    $0xa,%eax
085e3fb1 +0x39:  jne    085e3fc7 <+0x4f>
085e3fb3 +0x3b:  mov    0xc(%ebp),%eax
085e3fb6 +0x3e:  movzwl 0x4(%eax),%eax
085e3fba +0x42:  cmp    $0x3,%ax
085e3fbe +0x46:  jne    085e3fc7 <+0x4f>
085e3fc0 +0x48:  mov    $0x1,%eax
085e3fc5 +0x4d:  jmp    085e3fcc <+0x54>
085e3fc7 +0x4f:  mov    $0x0,%eax
085e3fcc +0x54:  pop    %ebp
085e3fcd +0x55:  ret
```

## 反编译 C

```c
// CMission_move_channel::isClearable @ 0x85e3f78

/* CMission_move_channel::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_move_channel::isClearable(MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 6) == 0x10) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x40) == (int)*(short *)(param_2 + 4)) {
    uVar1 = 1;
  }
  else if ((*(int *)(param_1 + 0x40) == 10) && (*(short *)(param_2 + 4) == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

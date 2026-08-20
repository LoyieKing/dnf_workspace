# isClearable

`_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb`

`CMission_move_channel_total::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel_total` | `0x085e40d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e40d4  _ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb
#           CMission_move_channel_total::isClearable(MissionInfo&, bool&) const
# range [0x085e40d4, 0x085e4129]
085e40d4 +0x00:  push   %ebp
085e40d5 +0x01:  mov    %esp,%ebp
085e40d7 +0x03:  mov    0xc(%ebp),%eax
085e40da +0x06:  movzwl 0x6(%eax),%eax
085e40de +0x0a:  cmp    $0x10,%ax
085e40e2 +0x0e:  jne    085e40eb <+0x17>
085e40e4 +0x10:  mov    $0x1,%eax
085e40e9 +0x15:  jmp    085e4128 <+0x54>
085e40eb +0x17:  mov    0x8(%ebp),%eax
085e40ee +0x1a:  mov    0x40(%eax),%edx
085e40f1 +0x1d:  mov    0xc(%ebp),%eax
085e40f4 +0x20:  movzwl 0x4(%eax),%eax
085e40f8 +0x24:  cwtl
085e40f9 +0x25:  cmp    %eax,%edx
085e40fb +0x27:  jne    085e4104 <+0x30>
085e40fd +0x29:  mov    $0x1,%eax
085e4102 +0x2e:  jmp    085e4128 <+0x54>
085e4104 +0x30:  mov    0x8(%ebp),%eax
085e4107 +0x33:  mov    0x40(%eax),%eax
085e410a +0x36:  cmp    $0xa,%eax
085e410d +0x39:  jne    085e4123 <+0x4f>
085e410f +0x3b:  mov    0xc(%ebp),%eax
085e4112 +0x3e:  movzwl 0x4(%eax),%eax
085e4116 +0x42:  cmp    $0x3,%ax
085e411a +0x46:  jne    085e4123 <+0x4f>
085e411c +0x48:  mov    $0x1,%eax
085e4121 +0x4d:  jmp    085e4128 <+0x54>
085e4123 +0x4f:  mov    $0x0,%eax
085e4128 +0x54:  pop    %ebp
085e4129 +0x55:  ret
```

## 反编译 C

```c
// CMission_move_channel_total::isClearable @ 0x85e40d4

/* CMission_move_channel_total::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_move_channel_total::isClearable(MissionInfo *param_1,bool *param_2)

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

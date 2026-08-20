# get_growth_power_exp_reward

`_ZN5CUser27get_growth_power_exp_rewardEv`

`CUser::get_growth_power_exp_reward()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dc64  _ZN5CUser27get_growth_power_exp_rewardEv
#           CUser::get_growth_power_exp_reward()
# range [0x0868dc64, 0x0868dc79]
0868dc64 +0x00:  push   %ebp
0868dc65 +0x01:  mov    %esp,%ebp
0868dc67 +0x03:  mov    0x8(%ebp),%eax
0868dc6a +0x06:  mov    0xc(%ebp),%edx
0868dc6d +0x09:  mov    0x8d24d(%edx),%edx
0868dc73 +0x0f:  mov    %edx,(%eax)
0868dc75 +0x11:  pop    %ebp
0868dc76 +0x12:  ret    $0x4
0868dc79 +0x15:  nop
```

## 反编译 C

```c
// CUser::get_growth_power_exp_reward @ 0x868dc64

/* CUser::get_growth_power_exp_reward() */

void CUser::get_growth_power_exp_reward(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  *in_stack_00000004 = *(undefined4 *)(in_stack_00000008 + 0x8d24d);
  return;
}
```

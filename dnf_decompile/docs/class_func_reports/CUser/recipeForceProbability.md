# recipeForceProbability

`_ZN5CUser22recipeForceProbabilityEi`

`CUser::recipeForceProbability(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08693178` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08693178  _ZN5CUser22recipeForceProbabilityEi
#           CUser::recipeForceProbability(int)
# range [0x08693178, 0x08693189]
08693178 +0x00:  push   %ebp
08693179 +0x01:  mov    %esp,%ebp
0869317b +0x03:  mov    0x8(%ebp),%eax
0869317e +0x06:  mov    0xc(%ebp),%edx
08693181 +0x09:  mov    %edx,0x8ec2c(%eax)
08693187 +0x0f:  pop    %ebp
08693188 +0x10:  ret
08693189 +0x11:  nop
```

## 反编译 C

```c
// CUser::recipeForceProbability @ 0x8693178

/* CUser::recipeForceProbability(int) */

void __thiscall CUser::recipeForceProbability(CUser *this,int param_1)

{
  *(int *)(this + 0x8ec2c) = param_1;
  return;
}
```

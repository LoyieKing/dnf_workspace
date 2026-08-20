# setForceDropFlag

`_ZN5CUser16setForceDropFlagEb`

`CUser::setForceDropFlag(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f6fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f6fa  _ZN5CUser16setForceDropFlagEb
#           CUser::setForceDropFlag(bool)
# range [0x0868f6fa, 0x0868f715]
0868f6fa +0x00:  push   %ebp
0868f6fb +0x01:  mov    %esp,%ebp
0868f6fd +0x03:  sub    $0x4,%esp
0868f700 +0x06:  mov    0xc(%ebp),%eax
0868f703 +0x09:  mov    %al,-0x4(%ebp)
0868f706 +0x0c:  mov    0x8(%ebp),%eax
0868f709 +0x0f:  movzbl -0x4(%ebp),%edx
0868f70d +0x13:  mov    %dl,0x70391(%eax)
0868f713 +0x19:  leave
0868f714 +0x1a:  ret
0868f715 +0x1b:  nop
```

## 反编译 C

```c
// CUser::setForceDropFlag @ 0x868f6fa

/* CUser::setForceDropFlag(bool) */

void __thiscall CUser::setForceDropFlag(CUser *this,bool param_1)

{
  this[0x70391] = (CUser)param_1;
  return;
}
```

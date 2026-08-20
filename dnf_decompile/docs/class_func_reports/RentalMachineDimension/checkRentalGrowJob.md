# checkRentalGrowJob

`_ZN22RentalMachineDimension18checkRentalGrowJobEi`

`RentalMachineDimension::checkRentalGrowJob(int)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f7fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f7fc  _ZN22RentalMachineDimension18checkRentalGrowJobEi
#           RentalMachineDimension::checkRentalGrowJob(int)
# range [0x0826f7fc, 0x0826f813]
0826f7fc +0x00:  push   %ebp
0826f7fd +0x01:  mov    %esp,%ebp
0826f7ff +0x03:  cmpl   $0x0,0xc(%ebp)
0826f803 +0x07:  je     0826f80c <+0x10>
0826f805 +0x09:  mov    $0x1,%eax
0826f80a +0x0e:  jmp    0826f811 <+0x15>
0826f80c +0x10:  mov    $0x0,%eax
0826f811 +0x15:  pop    %ebp
0826f812 +0x16:  ret
0826f813 +0x17:  nop
```

## 反编译 C

```c
// RentalMachineDimension::checkRentalGrowJob @ 0x826f7fc

/* RentalMachineDimension::checkRentalGrowJob(int) */

bool __thiscall RentalMachineDimension::checkRentalGrowJob(RentalMachineDimension *this,int param_1)

{
  return param_1 != 0;
}
```

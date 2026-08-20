# checkRentalLevel

`_ZN22RentalMachineDimension16checkRentalLevelEi`

`RentalMachineDimension::checkRentalLevel(int)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f7e4  _ZN22RentalMachineDimension16checkRentalLevelEi
#           RentalMachineDimension::checkRentalLevel(int)
# range [0x0826f7e4, 0x0826f7fb]
0826f7e4 +0x00:  push   %ebp
0826f7e5 +0x01:  mov    %esp,%ebp
0826f7e7 +0x03:  cmpl   $0x40,0xc(%ebp)
0826f7eb +0x07:  jle    0826f7f4 <+0x10>
0826f7ed +0x09:  mov    $0x1,%eax
0826f7f2 +0x0e:  jmp    0826f7f9 <+0x15>
0826f7f4 +0x10:  mov    $0x0,%eax
0826f7f9 +0x15:  pop    %ebp
0826f7fa +0x16:  ret
0826f7fb +0x17:  nop
```

## 反编译 C

```c
// RentalMachineDimension::checkRentalLevel @ 0x826f7e4

/* RentalMachineDimension::checkRentalLevel(int) */

bool __thiscall RentalMachineDimension::checkRentalLevel(RentalMachineDimension *this,int param_1)

{
  return 0x40 < param_1;
}
```

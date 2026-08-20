# checkResultCode

`_ZN6Taiwan10TaiwanCash15checkResultCodeEi`

`Taiwan::TaiwanCash::checkResultCode(int)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x0817366e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817366e  _ZN6Taiwan10TaiwanCash15checkResultCodeEi
#           Taiwan::TaiwanCash::checkResultCode(int)
# range [0x0817366e, 0x08173685]
0817366e +0x00:  push   %ebp
0817366f +0x01:  mov    %esp,%ebp
08173671 +0x03:  cmpl   $0x0,0xc(%ebp)
08173675 +0x07:  je     0817367e <+0x10>
08173677 +0x09:  mov    $0x0,%eax
0817367c +0x0e:  jmp    08173683 <+0x15>
0817367e +0x10:  mov    $0x1,%eax
08173683 +0x15:  pop    %ebp
08173684 +0x16:  ret
08173685 +0x17:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::checkResultCode @ 0x817366e

/* Taiwan::TaiwanCash::checkResultCode(int) */

bool __thiscall Taiwan::TaiwanCash::checkResultCode(TaiwanCash *this,int param_1)

{
  return param_1 == 0;
}
```

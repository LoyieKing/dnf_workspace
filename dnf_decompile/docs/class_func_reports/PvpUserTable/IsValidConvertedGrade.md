# IsValidConvertedGrade

`_ZN12PvpUserTable21IsValidConvertedGradeEi`

`PvpUserTable::IsValidConvertedGrade(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4a32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4a32  _ZN12PvpUserTable21IsValidConvertedGradeEi
#           PvpUserTable::IsValidConvertedGrade(int)
# range [0x085d4a32, 0x085d4a4f]
085d4a32 +0x00:  push   %ebp
085d4a33 +0x01:  mov    %esp,%ebp
085d4a35 +0x03:  cmpl   $0x0,0xc(%ebp)
085d4a39 +0x07:  js     085d4a48 <+0x16>
085d4a3b +0x09:  cmpl   $0x14,0xc(%ebp)
085d4a3f +0x0d:  jg     085d4a48 <+0x16>
085d4a41 +0x0f:  mov    $0x1,%eax
085d4a46 +0x14:  jmp    085d4a4d <+0x1b>
085d4a48 +0x16:  mov    $0x0,%eax
085d4a4d +0x1b:  pop    %ebp
085d4a4e +0x1c:  ret
085d4a4f +0x1d:  nop
```

## 反编译 C

```c
// PvpUserTable::IsValidConvertedGrade @ 0x85d4a32

/* PvpUserTable::IsValidConvertedGrade(int) */

undefined4 __thiscall PvpUserTable::IsValidConvertedGrade(PvpUserTable *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x14 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

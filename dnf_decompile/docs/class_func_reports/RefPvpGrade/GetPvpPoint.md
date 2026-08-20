# GetPvpPoint

`_ZNK11RefPvpGrade11GetPvpPointEi`

`RefPvpGrade::GetPvpPoint(int) const`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4832` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4832  _ZNK11RefPvpGrade11GetPvpPointEi
#           RefPvpGrade::GetPvpPoint(int) const
# range [0x085d4832, 0x085d485f]
085d4832 +0x00:  push   %ebp
085d4833 +0x01:  mov    %esp,%ebp
085d4835 +0x03:  cmpl   $0x0,0xc(%ebp)
085d4839 +0x07:  jg     085d4842 <+0x10>
085d483b +0x09:  mov    $0x0,%eax
085d4840 +0x0e:  jmp    085d485d <+0x2b>
085d4842 +0x10:  cmpl   $0x25,0xc(%ebp)
085d4846 +0x14:  jle    085d4853 <+0x21>
085d4848 +0x16:  mov    0x8(%ebp),%eax
085d484b +0x19:  mov    0x12c(%eax),%eax
085d4851 +0x1f:  jmp    085d485d <+0x2b>
085d4853 +0x21:  mov    0xc(%ebp),%edx
085d4856 +0x24:  mov    0x8(%ebp),%eax
085d4859 +0x27:  mov    0x4(%eax,%edx,8),%eax
085d485d +0x2b:  pop    %ebp
085d485e +0x2c:  ret
085d485f +0x2d:  nop
```

## 反编译 C

```c
// RefPvpGrade::GetPvpPoint @ 0x85d4832

/* RefPvpGrade::GetPvpPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 300);
  }
  return uVar1;
}
```

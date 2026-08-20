# get_second_growtype_max_level

`_ZNK6CSkill29get_second_growtype_max_levelEii`

`CSkill::get_second_growtype_max_level(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350658  _ZNK6CSkill29get_second_growtype_max_levelEii
#           CSkill::get_second_growtype_max_level(int, int) const
# range [0x08350658, 0x083506ad]
08350658 +0x00:  push   %ebp
08350659 +0x01:  mov    %esp,%ebp
0835065b +0x03:  cmpl   $0x0,0xc(%ebp)
0835065f +0x07:  js     08350673 <+0x1b>
08350661 +0x09:  cmpl   $0x5,0xc(%ebp)
08350665 +0x0d:  jg     08350673 <+0x1b>
08350667 +0x0f:  cmpl   $0x0,0x10(%ebp)
0835066b +0x13:  jle    08350673 <+0x1b>
0835066d +0x15:  cmpl   $0x2,0x10(%ebp)
08350671 +0x19:  jle    0835067a <+0x22>
08350673 +0x1b:  mov    $0xffffffff,%eax
08350678 +0x20:  jmp    083506ab <+0x53>
0835067a +0x22:  cmpl   $0x0,0xc(%ebp)
0835067e +0x26:  js     08350693 <+0x3b>
08350680 +0x28:  cmpl   $0x6,0xc(%ebp)
08350684 +0x2c:  jg     08350693 <+0x3b>
08350686 +0x2e:  cmpl   $0x0,0x10(%ebp)
0835068a +0x32:  jne    08350693 <+0x3b>
0835068c +0x34:  mov    $0x0,%eax
08350691 +0x39:  jmp    083506ab <+0x53>
08350693 +0x3b:  mov    0xc(%ebp),%edx
08350696 +0x3e:  mov    0x10(%ebp),%eax
08350699 +0x41:  lea    -0x1(%eax),%ecx
0835069c +0x44:  mov    0x8(%ebp),%eax
0835069f +0x47:  shl    $0x2,%edx
083506a2 +0x4a:  add    %ecx,%edx
083506a4 +0x4c:  add    $0x14,%edx
083506a7 +0x4f:  mov    0xc(%eax,%edx,4),%eax
083506ab +0x53:  pop    %ebp
083506ac +0x54:  ret
083506ad +0x55:  nop
```

## 反编译 C

```c
// CSkill::get_second_growtype_max_level @ 0x8350658

/* CSkill::get_second_growtype_max_level(int, int) const */

undefined4 __thiscall CSkill::get_second_growtype_max_level(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_1 < 0) || (5 < param_1)) || (param_2 < 1)) || (2 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else if (((param_1 < 0) || (6 < param_1)) || (param_2 != 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 0xc);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

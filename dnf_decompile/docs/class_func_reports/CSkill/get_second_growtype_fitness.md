# get_second_growtype_fitness

`_ZNK6CSkill27get_second_growtype_fitnessEii`

`CSkill::get_second_growtype_fitness(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083505be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083505be  _ZNK6CSkill27get_second_growtype_fitnessEii
#           CSkill::get_second_growtype_fitness(int, int) const
# range [0x083505be, 0x08350613]
083505be +0x00:  push   %ebp
083505bf +0x01:  mov    %esp,%ebp
083505c1 +0x03:  cmpl   $0x0,0xc(%ebp)
083505c5 +0x07:  js     083505d9 <+0x1b>
083505c7 +0x09:  cmpl   $0x6,0xc(%ebp)
083505cb +0x0d:  jg     083505d9 <+0x1b>
083505cd +0x0f:  cmpl   $0x0,0x10(%ebp)
083505d1 +0x13:  js     083505d9 <+0x1b>
083505d3 +0x15:  cmpl   $0x2,0x10(%ebp)
083505d7 +0x19:  jle    083505e0 <+0x22>
083505d9 +0x1b:  mov    $0xffffffff,%eax
083505de +0x20:  jmp    08350611 <+0x53>
083505e0 +0x22:  cmpl   $0x0,0xc(%ebp)
083505e4 +0x26:  js     083505f9 <+0x3b>
083505e6 +0x28:  cmpl   $0x6,0xc(%ebp)
083505ea +0x2c:  jg     083505f9 <+0x3b>
083505ec +0x2e:  cmpl   $0x0,0x10(%ebp)
083505f0 +0x32:  jne    083505f9 <+0x3b>
083505f2 +0x34:  mov    $0x0,%eax
083505f7 +0x39:  jmp    08350611 <+0x53>
083505f9 +0x3b:  mov    0xc(%ebp),%edx
083505fc +0x3e:  mov    0x10(%ebp),%eax
083505ff +0x41:  lea    -0x1(%eax),%ecx
08350602 +0x44:  mov    0x8(%ebp),%eax
08350605 +0x47:  shl    $0x2,%edx
08350608 +0x4a:  add    %ecx,%edx
0835060a +0x4c:  add    $0x14,%edx
0835060d +0x4f:  mov    0x4(%eax,%edx,4),%eax
08350611 +0x53:  pop    %ebp
08350612 +0x54:  ret
08350613 +0x55:  nop
```

## 反编译 C

```c
// CSkill::get_second_growtype_fitness @ 0x83505be

/* CSkill::get_second_growtype_fitness(int, int) const */

undefined4 __thiscall CSkill::get_second_growtype_fitness(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_1 < 0) || (6 < param_1)) || (param_2 < 0)) || (2 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else if (((param_1 < 0) || (6 < param_1)) || (param_2 != 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

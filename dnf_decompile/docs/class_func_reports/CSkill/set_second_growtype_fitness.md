# set_second_growtype_fitness

`_ZN6CSkill27set_second_growtype_fitnessEiii`

`CSkill::set_second_growtype_fitness(int, int, int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0835057a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835057a  _ZN6CSkill27set_second_growtype_fitnessEiii
#           CSkill::set_second_growtype_fitness(int, int, int)
# range [0x0835057a, 0x083505bd]
0835057a +0x00:  push   %ebp
0835057b +0x01:  mov    %esp,%ebp
0835057d +0x03:  cmpl   $0x0,0xc(%ebp)
08350581 +0x07:  js     083505b2 <+0x38>
08350583 +0x09:  cmpl   $0x5,0xc(%ebp)
08350587 +0x0d:  jg     083505b5 <+0x3b>
08350589 +0x0f:  cmpl   $0x0,0x10(%ebp)
0835058d +0x13:  jle    083505b8 <+0x3e>
0835058f +0x15:  cmpl   $0x2,0x10(%ebp)
08350593 +0x19:  jg     083505bb <+0x41>
08350595 +0x1b:  mov    0xc(%ebp),%edx
08350598 +0x1e:  mov    0x10(%ebp),%eax
0835059b +0x21:  lea    -0x1(%eax),%ecx
0835059e +0x24:  mov    0x8(%ebp),%eax
083505a1 +0x27:  shl    $0x2,%edx
083505a4 +0x2a:  add    %ecx,%edx
083505a6 +0x2c:  lea    0x14(%edx),%ecx
083505a9 +0x2f:  mov    0x14(%ebp),%edx
083505ac +0x32:  mov    %edx,0x4(%eax,%ecx,4)
083505b0 +0x36:  jmp    083505bc <+0x42>
083505b2 +0x38:  nop
083505b3 +0x39:  jmp    083505bc <+0x42>
083505b5 +0x3b:  nop
083505b6 +0x3c:  jmp    083505bc <+0x42>
083505b8 +0x3e:  nop
083505b9 +0x3f:  jmp    083505bc <+0x42>
083505bb +0x41:  nop
083505bc +0x42:  pop    %ebp
083505bd +0x43:  ret
```

## 反编译 C

```c
// CSkill::set_second_growtype_fitness @ 0x835057a

/* CSkill::set_second_growtype_fitness(int, int, int) */

void __thiscall
CSkill::set_second_growtype_fitness(CSkill *this,int param_1,int param_2,int param_3)

{
  if ((((-1 < param_1) && (param_1 < 6)) && (0 < param_2)) && (param_2 < 3)) {
    *(int *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 4) = param_3;
  }
  return;
}
```

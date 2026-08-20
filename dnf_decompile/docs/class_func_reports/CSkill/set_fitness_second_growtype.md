# set_fitness_second_growtype

`_ZN6CSkill27set_fitness_second_growtypeEii`

`CSkill::set_fitness_second_growtype(int, int)`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083506ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083506ae  _ZN6CSkill27set_fitness_second_growtypeEii
#           CSkill::set_fitness_second_growtype(int, int)
# range [0x083506ae, 0x083506d7]
083506ae +0x00:  push   %ebp
083506af +0x01:  mov    %esp,%ebp
083506b1 +0x03:  cmpl   $0x0,0xc(%ebp)
083506b5 +0x07:  jle    083506d2 <+0x24>
083506b7 +0x09:  cmpl   $0x2,0xc(%ebp)
083506bb +0x0d:  jg     083506d5 <+0x27>
083506bd +0x0f:  mov    0xc(%ebp),%eax
083506c0 +0x12:  lea    -0x1(%eax),%edx
083506c3 +0x15:  mov    0x8(%ebp),%eax
083506c6 +0x18:  lea    0x2c(%edx),%ecx
083506c9 +0x1b:  mov    0x10(%ebp),%edx
083506cc +0x1e:  mov    %edx,0x4(%eax,%ecx,4)
083506d0 +0x22:  jmp    083506d6 <+0x28>
083506d2 +0x24:  nop
083506d3 +0x25:  jmp    083506d6 <+0x28>
083506d5 +0x27:  nop
083506d6 +0x28:  pop    %ebp
083506d7 +0x29:  ret
```

## 反编译 C

```c
// CSkill::set_fitness_second_growtype @ 0x83506ae

/* CSkill::set_fitness_second_growtype(int, int) */

void __thiscall CSkill::set_fitness_second_growtype(CSkill *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_1 < 3)) {
    *(int *)(this + (param_1 + 0x2b) * 4 + 4) = param_2;
  }
  return;
}
```

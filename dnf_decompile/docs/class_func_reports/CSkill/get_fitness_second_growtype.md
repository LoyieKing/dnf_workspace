# get_fitness_second_growtype

`_ZNK6CSkill27get_fitness_second_growtypeEi`

`CSkill::get_fitness_second_growtype(int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083506d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083506d8  _ZNK6CSkill27get_fitness_second_growtypeEi
#           CSkill::get_fitness_second_growtype(int) const
# range [0x083506d8, 0x083506ff]
083506d8 +0x00:  push   %ebp
083506d9 +0x01:  mov    %esp,%ebp
083506db +0x03:  cmpl   $0x0,0xc(%ebp)
083506df +0x07:  jle    083506e7 <+0xf>
083506e1 +0x09:  cmpl   $0x2,0xc(%ebp)
083506e5 +0x0d:  jle    083506ee <+0x16>
083506e7 +0x0f:  mov    $0xffffffff,%eax
083506ec +0x14:  jmp    083506fe <+0x26>
083506ee +0x16:  mov    0xc(%ebp),%eax
083506f1 +0x19:  lea    -0x1(%eax),%edx
083506f4 +0x1c:  mov    0x8(%ebp),%eax
083506f7 +0x1f:  add    $0x2c,%edx
083506fa +0x22:  mov    0x4(%eax,%edx,4),%eax
083506fe +0x26:  pop    %ebp
083506ff +0x27:  ret
```

## 反编译 C

```c
// CSkill::get_fitness_second_growtype @ 0x83506d8

/* CSkill::get_fitness_second_growtype(int) const */

undefined4 __thiscall CSkill::get_fitness_second_growtype(CSkill *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x2b) * 4 + 4);
  }
  return uVar1;
}
```

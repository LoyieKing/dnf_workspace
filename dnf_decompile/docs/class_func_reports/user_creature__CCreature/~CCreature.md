# ~CCreature

`_ZN13user_creature9CCreatureD1Ev`

`user_creature::CCreature::~CCreature()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083370a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083370a2  _ZN13user_creature9CCreatureD1Ev
#           user_creature::CCreature::~CCreature()
# range [0x083370a2, 0x083370af]
083370a2 +0x00:  push   %ebp
083370a3 +0x01:  mov    %esp,%ebp
083370a5 +0x03:  mov    0x8(%ebp),%eax
083370a8 +0x06:  movl   $&_ZTVN13user_creature9CCreatureE+0x8,(%eax)
083370ae +0x0c:  pop    %ebp
083370af +0x0d:  ret
```

## 反编译 C

```c
// user_creature::CCreature::~CCreature @ 0x83370a2

/* user_creature::CCreature::~CCreature() */

void __thiscall user_creature::CCreature::~CCreature(CCreature *this)

{
  *(undefined ***)this = &PTR_Reset_08c2f4c0;
  return;
}
```

# RenameCreature

`_ZN13user_creature9CCreature14RenameCreatureEPKc`

`user_creature::CCreature::RenameCreature(char const*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083373aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083373aa  _ZN13user_creature9CCreature14RenameCreatureEPKc
#           user_creature::CCreature::RenameCreature(char const*)
# range [0x083373aa, 0x083373d3]
083373aa +0x00:  push   %ebp
083373ab +0x01:  mov    %esp,%ebp
083373ad +0x03:  sub    $0x18,%esp
083373b0 +0x06:  mov    0x8(%ebp),%eax
083373b3 +0x09:  lea    0x1c(%eax),%edx
083373b6 +0x0c:  movl   $0xc,0x8(%esp)
083373be +0x14:  mov    0xc(%ebp),%eax
083373c1 +0x17:  mov    %eax,0x4(%esp)
083373c5 +0x1b:  mov    %edx,(%esp)
083373c8 +0x1e:  call   0807d8d0 <_init+0x1c8>
083373cd +0x23:  mov    $0x1,%eax
083373d2 +0x28:  leave
083373d3 +0x29:  ret
```

## 反编译 C

```c
// user_creature::CCreature::RenameCreature @ 0x83373aa

/* user_creature::CCreature::RenameCreature(char const*) */

undefined4 __thiscall user_creature::CCreature::RenameCreature(CCreature *this,char *param_1)

{
  strncpy((char *)(this + 0x1c),param_1,0xc);
  return 1;
}
```

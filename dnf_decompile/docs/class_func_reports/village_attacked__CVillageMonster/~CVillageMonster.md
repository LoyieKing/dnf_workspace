# ~CVillageMonster

`_ZN16village_attacked15CVillageMonsterD1Ev`

`village_attacked::CVillageMonster::~CVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b3106` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3106  _ZN16village_attacked15CVillageMonsterD1Ev
#           village_attacked::CVillageMonster::~CVillageMonster()
# range [0x086b3106, 0x086b310b]
086b3106 +0x00:  push   %ebp
086b3107 +0x01:  mov    %esp,%ebp
086b3109 +0x03:  pop    %ebp
086b310a +0x04:  ret
086b310b +0x05:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::~CVillageMonster @ 0x86b3106

/* village_attacked::CVillageMonster::~CVillageMonster() */

void __thiscall village_attacked::CVillageMonster::~CVillageMonster(CVillageMonster *this)

{
  return;
}
```

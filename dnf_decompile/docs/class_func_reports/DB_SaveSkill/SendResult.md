# SendResult

`_ZN12DB_SaveSkill10SendResultEiiP14SIG_LOAD_SKILL`

`DB_SaveSkill::SendResult(int, int, SIG_LOAD_SKILL*)`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x08417a08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417a08  _ZN12DB_SaveSkill10SendResultEiiP14SIG_LOAD_SKILL
#           DB_SaveSkill::SendResult(int, int, SIG_LOAD_SKILL*)
# range [0x08417a08, 0x08417a11]
08417a08 +0x00:  push   %ebp
08417a09 +0x01:  mov    %esp,%ebp
08417a0b +0x03:  mov    $0x1,%eax
08417a10 +0x08:  pop    %ebp
08417a11 +0x09:  ret
```

## 反编译 C

```c
// DB_SaveSkill::SendResult @ 0x8417a08

/* DB_SaveSkill::SendResult(int, int, SIG_LOAD_SKILL*) */

undefined4 DB_SaveSkill::SendResult(int param_1,int param_2,SIG_LOAD_SKILL *param_3)

{
  return 1;
}
```

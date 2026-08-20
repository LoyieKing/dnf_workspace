# isApplyLevel

`_ZN24ConditionLevelChkDungeon12isApplyLevelEi`

`ConditionLevelChkDungeon::isApplyLevel(int)`

| 类 | 地址 |
|---|---|
| `ConditionLevelChkDungeon` | `0x08913a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08913a62  _ZN24ConditionLevelChkDungeon12isApplyLevelEi
#           ConditionLevelChkDungeon::isApplyLevel(int)
# range [0x08913a62, 0x08913a7d]
08913a62 +0x00:  push   %ebp
08913a63 +0x01:  mov    %esp,%ebp
08913a65 +0x03:  mov    0x8(%ebp),%eax
08913a68 +0x06:  mov    0xc(%eax),%eax
08913a6b +0x09:  cmp    0xc(%ebp),%eax
08913a6e +0x0c:  jg     08913a77 <+0x15>
08913a70 +0x0e:  mov    $0x1,%eax
08913a75 +0x13:  jmp    08913a7c <+0x1a>
08913a77 +0x15:  mov    $0x0,%eax
08913a7c +0x1a:  pop    %ebp
08913a7d +0x1b:  ret
```

## 反编译 C

```c
// ConditionLevelChkDungeon::isApplyLevel @ 0x8913a62

/* ConditionLevelChkDungeon::isApplyLevel(int) */

bool __thiscall ConditionLevelChkDungeon::isApplyLevel(ConditionLevelChkDungeon *this,int param_1)

{
  return *(int *)(this + 0xc) <= param_1;
}
```

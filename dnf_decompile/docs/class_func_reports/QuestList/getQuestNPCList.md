# getQuestNPCList

`_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE`

`QuestList::getQuestNPCList(ENUM_QUEST_GRADE)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355ad8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355ad8  _ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE
#           QuestList::getQuestNPCList(ENUM_QUEST_GRADE)
# range [0x08355ad8, 0x08355b2f]
08355ad8 +0x00:  push   %ebp
08355ad9 +0x01:  mov    %esp,%ebp
08355adb +0x03:  mov    0xc(%ebp),%eax
08355ade +0x06:  cmp    $0x8,%eax
08355ae1 +0x09:  ja     08355b28 <+0x50>
08355ae3 +0x0b:  mov    &data#ab6eb98e(.rodata)(,%eax,4),%eax
08355aea +0x12:  jmp    *%eax
08355aec +0x14:  mov    0x8(%ebp),%eax
08355aef +0x17:  add    $0x14,%eax
08355af2 +0x1a:  jmp    08355b2d <+0x55>
08355af4 +0x1c:  mov    0x8(%ebp),%eax
08355af7 +0x1f:  add    $0x5c,%eax
08355afa +0x22:  jmp    08355b2d <+0x55>
08355afc +0x24:  mov    0x8(%ebp),%eax
08355aff +0x27:  add    $0x74,%eax
08355b02 +0x2a:  jmp    08355b2d <+0x55>
08355b04 +0x2c:  mov    0x8(%ebp),%eax
08355b07 +0x2f:  add    $0x44,%eax
08355b0a +0x32:  jmp    08355b2d <+0x55>
08355b0c +0x34:  mov    0x8(%ebp),%eax
08355b0f +0x37:  add    $0x2c,%eax
08355b12 +0x3a:  jmp    08355b2d <+0x55>
08355b14 +0x3c:  mov    0x8(%ebp),%eax
08355b17 +0x3f:  add    $0x8c,%eax
08355b1c +0x44:  jmp    08355b2d <+0x55>
08355b1e +0x46:  mov    0x8(%ebp),%eax
08355b21 +0x49:  add    $0xa4,%eax
08355b26 +0x4e:  jmp    08355b2d <+0x55>
08355b28 +0x50:  mov    $0x0,%eax
08355b2d +0x55:  pop    %ebp
08355b2e +0x56:  ret
08355b2f +0x57:  nop
```

## 反编译 C

```c
// QuestList::getQuestNPCList @ 0x8355ad8

/* QuestList::getQuestNPCList(ENUM_QUEST_GRADE) */

QuestList * __thiscall QuestList::getQuestNPCList(QuestList *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    this = this + 0x14;
    break;
  case 1:
    this = this + 0x5c;
    break;
  case 2:
    this = this + 0x74;
    break;
  default:
    this = (QuestList *)0x0;
    break;
  case 4:
    this = this + 0x44;
    break;
  case 5:
    this = this + 0x2c;
    break;
  case 6:
    this = this + 0x8c;
    break;
  case 8:
    this = this + 0xa4;
  }
  return this;
}
```

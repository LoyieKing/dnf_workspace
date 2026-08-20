# getConditionMessage

`_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB`

`QuestScript::getConditionMessage(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `QuestScript` | `0x08a61284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a61284  _ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB
#           QuestScript::getConditionMessage(ENUM_CHARACTERJOB)
# range [0x08a61284, 0x08a612c5]
08a61284 +0x00:  push   %ebp
08a61285 +0x01:  mov    %esp,%ebp
08a61287 +0x03:  mov    0x8(%ebp),%eax
08a6128a +0x06:  mov    0x14(%eax),%eax
08a6128d +0x09:  test   %eax,%eax
08a6128f +0x0b:  je     08a612be <+0x3a>
08a61291 +0x0d:  mov    0xc(%ebp),%eax
08a61294 +0x10:  test   %eax,%eax
08a61296 +0x12:  js     08a612be <+0x3a>
08a61298 +0x14:  mov    0xc(%ebp),%eax
08a6129b +0x17:  cmp    $0xa,%eax
08a6129e +0x1a:  jg     08a612be <+0x3a>
08a612a0 +0x1c:  mov    0xc(%ebp),%edx
08a612a3 +0x1f:  mov    0x8(%ebp),%eax
08a612a6 +0x22:  add    $0x1c,%edx
08a612a9 +0x25:  mov    (%eax,%edx,4),%eax
08a612ac +0x28:  test   %eax,%eax
08a612ae +0x2a:  je     08a612be <+0x3a>
08a612b0 +0x2c:  mov    0xc(%ebp),%edx
08a612b3 +0x2f:  mov    0x8(%ebp),%eax
08a612b6 +0x32:  add    $0x1c,%edx
08a612b9 +0x35:  mov    (%eax,%edx,4),%eax
08a612bc +0x38:  jmp    08a612c4 <+0x40>
08a612be +0x3a:  mov    0x8(%ebp),%eax
08a612c1 +0x3d:  add    $0xc,%eax
08a612c4 +0x40:  pop    %ebp
08a612c5 +0x41:  ret
```

## 反编译 C

```c
// QuestScript::getConditionMessage @ 0x8a61284

/* QuestScript::getConditionMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getConditionMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x1c) * 4) == 0)) {
    this = this + 0xc;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x1c) * 4);
  }
  return this;
}
```

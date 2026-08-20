# getSolveMessage

`_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB`

`QuestScript::getSolveMessage(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `QuestScript` | `0x08a612c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a612c6  _ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB
#           QuestScript::getSolveMessage(ENUM_CHARACTERJOB)
# range [0x08a612c6, 0x08a61309]
08a612c6 +0x00:  push   %ebp
08a612c7 +0x01:  mov    %esp,%ebp
08a612c9 +0x03:  mov    0x8(%ebp),%eax
08a612cc +0x06:  mov    0x14(%eax),%eax
08a612cf +0x09:  test   %eax,%eax
08a612d1 +0x0b:  je     08a61302 <+0x3c>
08a612d3 +0x0d:  mov    0xc(%ebp),%eax
08a612d6 +0x10:  test   %eax,%eax
08a612d8 +0x12:  js     08a61302 <+0x3c>
08a612da +0x14:  mov    0xc(%ebp),%eax
08a612dd +0x17:  cmp    $0xa,%eax
08a612e0 +0x1a:  jg     08a61302 <+0x3c>
08a612e2 +0x1c:  mov    0xc(%ebp),%edx
08a612e5 +0x1f:  mov    0x8(%ebp),%eax
08a612e8 +0x22:  add    $0x24,%edx
08a612eb +0x25:  mov    0xc(%eax,%edx,4),%eax
08a612ef +0x29:  test   %eax,%eax
08a612f1 +0x2b:  je     08a61302 <+0x3c>
08a612f3 +0x2d:  mov    0xc(%ebp),%edx
08a612f6 +0x30:  mov    0x8(%ebp),%eax
08a612f9 +0x33:  add    $0x24,%edx
08a612fc +0x36:  mov    0xc(%eax,%edx,4),%eax
08a61300 +0x3a:  jmp    08a61308 <+0x42>
08a61302 +0x3c:  mov    0x8(%ebp),%eax
08a61305 +0x3f:  add    $0x10,%eax
08a61308 +0x42:  pop    %ebp
08a61309 +0x43:  ret
```

## 反编译 C

```c
// QuestScript::getSolveMessage @ 0x8a612c6

/* QuestScript::getSolveMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getSolveMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x24) * 4 + 0xc) == 0)) {
    this = this + 0x10;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x24) * 4 + 0xc);
  }
  return this;
}
```

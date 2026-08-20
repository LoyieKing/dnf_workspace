# getName

`_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB`

`QuestScript::getName(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `QuestScript` | `0x08a611fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a611fc  _ZN11QuestScript7getNameE17ENUM_CHARACTERJOB
#           QuestScript::getName(ENUM_CHARACTERJOB)
# range [0x08a611fc, 0x08a6123f]
08a611fc +0x00:  push   %ebp
08a611fd +0x01:  mov    %esp,%ebp
08a611ff +0x03:  mov    0x8(%ebp),%eax
08a61202 +0x06:  mov    0x14(%eax),%eax
08a61205 +0x09:  test   %eax,%eax
08a61207 +0x0b:  je     08a61238 <+0x3c>
08a61209 +0x0d:  mov    0xc(%ebp),%eax
08a6120c +0x10:  test   %eax,%eax
08a6120e +0x12:  js     08a61238 <+0x3c>
08a61210 +0x14:  mov    0xc(%ebp),%eax
08a61213 +0x17:  cmp    $0xa,%eax
08a61216 +0x1a:  jg     08a61238 <+0x3c>
08a61218 +0x1c:  mov    0xc(%ebp),%edx
08a6121b +0x1f:  mov    0x8(%ebp),%eax
08a6121e +0x22:  add    $0x4,%edx
08a61221 +0x25:  mov    0x8(%eax,%edx,4),%eax
08a61225 +0x29:  test   %eax,%eax
08a61227 +0x2b:  je     08a61238 <+0x3c>
08a61229 +0x2d:  mov    0xc(%ebp),%edx
08a6122c +0x30:  mov    0x8(%ebp),%eax
08a6122f +0x33:  add    $0x4,%edx
08a61232 +0x36:  mov    0x8(%eax,%edx,4),%eax
08a61236 +0x3a:  jmp    08a6123e <+0x42>
08a61238 +0x3c:  mov    0x8(%ebp),%eax
08a6123b +0x3f:  add    $0x4,%eax
08a6123e +0x42:  pop    %ebp
08a6123f +0x43:  ret
```

## 反编译 C

```c
// QuestScript::getName @ 0x8a611fc

/* QuestScript::getName(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getName(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 4) * 4 + 8) == 0)) {
    this = this + 4;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 4) * 4 + 8);
  }
  return this;
}
```

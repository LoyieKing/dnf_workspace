# getRequestMessage

`_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB`

`QuestScript::getRequestMessage(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `QuestScript` | `0x08a61240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a61240  _ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB
#           QuestScript::getRequestMessage(ENUM_CHARACTERJOB)
# range [0x08a61240, 0x08a61283]
08a61240 +0x00:  push   %ebp
08a61241 +0x01:  mov    %esp,%ebp
08a61243 +0x03:  mov    0x8(%ebp),%eax
08a61246 +0x06:  mov    0x14(%eax),%eax
08a61249 +0x09:  test   %eax,%eax
08a6124b +0x0b:  je     08a6127c <+0x3c>
08a6124d +0x0d:  mov    0xc(%ebp),%eax
08a61250 +0x10:  test   %eax,%eax
08a61252 +0x12:  js     08a6127c <+0x3c>
08a61254 +0x14:  mov    0xc(%ebp),%eax
08a61257 +0x17:  cmp    $0xa,%eax
08a6125a +0x1a:  jg     08a6127c <+0x3c>
08a6125c +0x1c:  mov    0xc(%ebp),%edx
08a6125f +0x1f:  mov    0x8(%ebp),%eax
08a61262 +0x22:  add    $0x10,%edx
08a61265 +0x25:  mov    0x4(%eax,%edx,4),%eax
08a61269 +0x29:  test   %eax,%eax
08a6126b +0x2b:  je     08a6127c <+0x3c>
08a6126d +0x2d:  mov    0xc(%ebp),%edx
08a61270 +0x30:  mov    0x8(%ebp),%eax
08a61273 +0x33:  add    $0x10,%edx
08a61276 +0x36:  mov    0x4(%eax,%edx,4),%eax
08a6127a +0x3a:  jmp    08a61282 <+0x42>
08a6127c +0x3c:  mov    0x8(%ebp),%eax
08a6127f +0x3f:  add    $0x8,%eax
08a61282 +0x42:  pop    %ebp
08a61283 +0x43:  ret
```

## 反编译 C

```c
// QuestScript::getRequestMessage @ 0x8a61240

/* QuestScript::getRequestMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getRequestMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x10) * 4 + 4) == 0)) {
    this = this + 8;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x10) * 4 + 4);
  }
  return this;
}
```

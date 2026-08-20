# getNewDialog

`_ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB`

`dungeonEventHanaseStruct::getNewDialog(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `dungeonEventHanaseStruct` | `0x08a615fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a615fe  _ZN24dungeonEventHanaseStruct12getNewDialogE17ENUM_CHARACTERJOB
#           dungeonEventHanaseStruct::getNewDialog(ENUM_CHARACTERJOB)
# range [0x08a615fe, 0x08a61641]
08a615fe +0x00:  push   %ebp
08a615ff +0x01:  mov    %esp,%ebp
08a61601 +0x03:  mov    0x8(%ebp),%eax
08a61604 +0x06:  mov    0x24(%eax),%eax
08a61607 +0x09:  test   %eax,%eax
08a61609 +0x0b:  je     08a6163a <+0x3c>
08a6160b +0x0d:  mov    0xc(%ebp),%eax
08a6160e +0x10:  test   %eax,%eax
08a61610 +0x12:  js     08a6163a <+0x3c>
08a61612 +0x14:  mov    0xc(%ebp),%eax
08a61615 +0x17:  cmp    $0xa,%eax
08a61618 +0x1a:  jg     08a6163a <+0x3c>
08a6161a +0x1c:  mov    0xc(%ebp),%edx
08a6161d +0x1f:  mov    0x8(%ebp),%eax
08a61620 +0x22:  add    $0x8,%edx
08a61623 +0x25:  mov    0x8(%eax,%edx,4),%eax
08a61627 +0x29:  test   %eax,%eax
08a61629 +0x2b:  je     08a6163a <+0x3c>
08a6162b +0x2d:  mov    0xc(%ebp),%edx
08a6162e +0x30:  mov    0x8(%ebp),%eax
08a61631 +0x33:  add    $0x8,%edx
08a61634 +0x36:  mov    0x8(%eax,%edx,4),%eax
08a61638 +0x3a:  jmp    08a61640 <+0x42>
08a6163a +0x3c:  mov    0x8(%ebp),%eax
08a6163d +0x3f:  add    $0x20,%eax
08a61640 +0x42:  pop    %ebp
08a61641 +0x43:  ret
```

## 反编译 C

```c
// dungeonEventHanaseStruct::getNewDialog @ 0x8a615fe

/* dungeonEventHanaseStruct::getNewDialog(ENUM_CHARACTERJOB) */

dungeonEventHanaseStruct * __thiscall
dungeonEventHanaseStruct::getNewDialog(dungeonEventHanaseStruct *this,int param_2)

{
  if ((((*(int *)(this + 0x24) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 8) * 4 + 8) == 0)) {
    this = this + 0x20;
  }
  else {
    this = *(dungeonEventHanaseStruct **)(this + (param_2 + 8) * 4 + 8);
  }
  return this;
}
```

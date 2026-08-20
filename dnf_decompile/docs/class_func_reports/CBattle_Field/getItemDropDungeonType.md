# getItemDropDungeonType

`_ZN13CBattle_Field22getItemDropDungeonTypeEv`

`CBattle_Field::getItemDropDungeonType()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830aa46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830aa46  _ZN13CBattle_Field22getItemDropDungeonTypeEv
#           CBattle_Field::getItemDropDungeonType()
# range [0x0830aa46, 0x0830aaa3]
0830aa46 +0x00:  push   %ebp
0830aa47 +0x01:  mov    %esp,%ebp
0830aa49 +0x03:  sub    $0x18,%esp
0830aa4c +0x06:  mov    0x8(%ebp),%eax
0830aa4f +0x09:  mov    0x188(%eax),%eax
0830aa55 +0x0f:  test   %eax,%eax
0830aa57 +0x11:  jne    0830aa60 <+0x1a>
0830aa59 +0x13:  mov    $0x3,%eax
0830aa5e +0x18:  jmp    0830aaa1 <+0x5b>
0830aa60 +0x1a:  mov    0x8(%ebp),%eax
0830aa63 +0x1d:  mov    0x188(%eax),%eax
0830aa69 +0x23:  mov    %eax,(%esp)
0830aa6c +0x26:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0830aa71 +0x2b:  test   %al,%al
0830aa73 +0x2d:  setg   %al
0830aa76 +0x30:  test   %al,%al
0830aa78 +0x32:  je     0830aa81 <+0x3b>
0830aa7a +0x34:  mov    $0x2,%eax
0830aa7f +0x39:  jmp    0830aaa1 <+0x5b>
0830aa81 +0x3b:  mov    0x8(%ebp),%eax
0830aa84 +0x3e:  mov    0x188(%eax),%eax
0830aa8a +0x44:  movzbl 0x89c(%eax),%eax
0830aa91 +0x4b:  test   %al,%al
0830aa93 +0x4d:  je     0830aa9c <+0x56>
0830aa95 +0x4f:  mov    $0x1,%eax
0830aa9a +0x54:  jmp    0830aaa1 <+0x5b>
0830aa9c +0x56:  mov    $0x0,%eax
0830aaa1 +0x5b:  leave
0830aaa2 +0x5c:  ret
0830aaa3 +0x5d:  nop
```

## 反编译 C

```c
// CBattle_Field::getItemDropDungeonType @ 0x830aa46

/* CBattle_Field::getItemDropDungeonType() */

undefined4 __thiscall CBattle_Field::getItemDropDungeonType(CBattle_Field *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x188) == 0) {
    uVar2 = 3;
  }
  else {
    cVar1 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
    if (cVar1 < '\x01') {
      if (*(char *)(*(int *)(this + 0x188) + 0x89c) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}
```

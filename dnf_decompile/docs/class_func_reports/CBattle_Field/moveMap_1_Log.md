# moveMap_1_Log

`_ZN13CBattle_Field13moveMap_1_LogEii`

`CBattle_Field::moveMap_1_Log(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830766e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830766e  _ZN13CBattle_Field13moveMap_1_LogEii
#           CBattle_Field::moveMap_1_Log(int, int)
# range [0x0830766e, 0x0830773f]
0830766e +0x00:  push   %ebp
0830766f +0x01:  mov    %esp,%ebp
08307671 +0x03:  push   %edi
08307672 +0x04:  push   %esi
08307673 +0x05:  push   %ebx
08307674 +0x06:  sub    $0x3c,%esp
08307677 +0x09:  movl   $0x0,0xc(%esp)
0830767f +0x11:  mov    0x10(%ebp),%eax
08307682 +0x14:  mov    %eax,0x8(%esp)
08307686 +0x18:  mov    0xc(%ebp),%eax
08307689 +0x1b:  mov    %eax,0x4(%esp)
0830768d +0x1f:  mov    0x8(%ebp),%eax
08307690 +0x22:  mov    %eax,(%esp)
08307693 +0x25:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307698 +0x2a:  movzbl 0xe8(%eax),%eax
0830769f +0x31:  test   %al,%al
083076a1 +0x33:  je     083076aa <+0x3c>
083076a3 +0x35:  mov    $"layeredMap",%eax
083076a8 +0x3a:  jmp    083076af <+0x41>
083076aa +0x3c:  mov    $"generalMap",%eax
083076af +0x41:  mov    %eax,%edi
083076b1 +0x43:  mov    0x8(%ebp),%eax
083076b4 +0x46:  mov    0x64(%eax),%esi
083076b7 +0x49:  mov    0x8(%ebp),%eax
083076ba +0x4c:  mov    0x60(%eax),%ebx
083076bd +0x4f:  movl   $0x0,0xc(%esp)
083076c5 +0x57:  mov    0x10(%ebp),%eax
083076c8 +0x5a:  mov    %eax,0x8(%esp)
083076cc +0x5e:  mov    0xc(%ebp),%eax
083076cf +0x61:  mov    %eax,0x4(%esp)
083076d3 +0x65:  mov    0x8(%ebp),%eax
083076d6 +0x68:  mov    %eax,(%esp)
083076d9 +0x6b:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
083076de +0x70:  mov    0x4(%eax),%edx
083076e1 +0x73:  mov    0x8(%ebp),%eax
083076e4 +0x76:  mov    0x194(%eax),%eax
083076ea +0x7c:  mov    %edi,0x2c(%esp)
083076ee +0x80:  mov    0x10(%ebp),%ecx
083076f1 +0x83:  mov    %ecx,0x28(%esp)
083076f5 +0x87:  mov    0xc(%ebp),%ecx
083076f8 +0x8a:  mov    %ecx,0x24(%esp)
083076fc +0x8e:  mov    %esi,0x20(%esp)
08307700 +0x92:  mov    %ebx,0x1c(%esp)
08307704 +0x96:  mov    %edx,0x18(%esp)
08307708 +0x9a:  mov    %eax,0x14(%esp)
0830770c +0x9e:  movl   $"TRY MoveMap [1][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",0x10(%esp)
08307714 +0xa6:  movl   $0x1126,0xc(%esp)
0830771c +0xae:  movl   $&_ZZN13CBattle_Field13moveMap_1_LogEiiE19__PRETTY_FUNCTION__,0x8(%esp)
08307724 +0xb6:  movl   $"battle_field.cpp",0x4(%esp)
0830772c +0xbe:  movl   $0x1,(%esp)
08307733 +0xc5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08307738 +0xca:  add    $0x3c,%esp
0830773b +0xcd:  pop    %ebx
0830773c +0xce:  pop    %esi
0830773d +0xcf:  pop    %edi
0830773e +0xd0:  pop    %ebp
0830773f +0xd1:  ret
```

## 反编译 C

```c
// CBattle_Field::moveMap_1_Log @ 0x830766e

/* CBattle_Field::moveMap_1_Log(int, int) */

void __thiscall CBattle_Field::moveMap_1_Log(CBattle_Field *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = GetMapInfoFromPos(this,param_1,param_2,false);
  if (*(char *)(iVar3 + 0xe8) == '\0') {
    pcVar4 = "generalMap";
  }
  else {
    pcVar4 = "layeredMap";
  }
  uVar1 = *(undefined4 *)(this + 100);
  uVar2 = *(undefined4 *)(this + 0x60);
  iVar3 = GetMapInfoFromPos(this,param_1,param_2,false);
  LogManager::logFormat
            (1,"battle_field.cpp","void CBattle_Field::moveMap_1_Log(int, int)",0x1126,
             "TRY MoveMap [1][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",
             *(undefined4 *)(this + 0x194),*(undefined4 *)(iVar3 + 4),uVar2,uVar1,param_1,param_2,
             pcVar4);
  return;
}
```

# moveMap_2_Log

`_ZN13CBattle_Field13moveMap_2_LogEii`

`CBattle_Field::moveMap_2_Log(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307740  _ZN13CBattle_Field13moveMap_2_LogEii
#           CBattle_Field::moveMap_2_Log(int, int)
# range [0x08307740, 0x08307811]
08307740 +0x00:  push   %ebp
08307741 +0x01:  mov    %esp,%ebp
08307743 +0x03:  push   %edi
08307744 +0x04:  push   %esi
08307745 +0x05:  push   %ebx
08307746 +0x06:  sub    $0x3c,%esp
08307749 +0x09:  movl   $0x0,0xc(%esp)
08307751 +0x11:  mov    0x10(%ebp),%eax
08307754 +0x14:  mov    %eax,0x8(%esp)
08307758 +0x18:  mov    0xc(%ebp),%eax
0830775b +0x1b:  mov    %eax,0x4(%esp)
0830775f +0x1f:  mov    0x8(%ebp),%eax
08307762 +0x22:  mov    %eax,(%esp)
08307765 +0x25:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
0830776a +0x2a:  movzbl 0xe8(%eax),%eax
08307771 +0x31:  test   %al,%al
08307773 +0x33:  je     0830777c <+0x3c>
08307775 +0x35:  mov    $"layeredMap",%eax
0830777a +0x3a:  jmp    08307781 <+0x41>
0830777c +0x3c:  mov    $"generalMap",%eax
08307781 +0x41:  mov    %eax,%edi
08307783 +0x43:  mov    0x8(%ebp),%eax
08307786 +0x46:  mov    0x64(%eax),%esi
08307789 +0x49:  mov    0x8(%ebp),%eax
0830778c +0x4c:  mov    0x60(%eax),%ebx
0830778f +0x4f:  movl   $0x0,0xc(%esp)
08307797 +0x57:  mov    0x10(%ebp),%eax
0830779a +0x5a:  mov    %eax,0x8(%esp)
0830779e +0x5e:  mov    0xc(%ebp),%eax
083077a1 +0x61:  mov    %eax,0x4(%esp)
083077a5 +0x65:  mov    0x8(%ebp),%eax
083077a8 +0x68:  mov    %eax,(%esp)
083077ab +0x6b:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
083077b0 +0x70:  mov    0x4(%eax),%edx
083077b3 +0x73:  mov    0x8(%ebp),%eax
083077b6 +0x76:  mov    0x194(%eax),%eax
083077bc +0x7c:  mov    %edi,0x2c(%esp)
083077c0 +0x80:  mov    0x10(%ebp),%ecx
083077c3 +0x83:  mov    %ecx,0x28(%esp)
083077c7 +0x87:  mov    0xc(%ebp),%ecx
083077ca +0x8a:  mov    %ecx,0x24(%esp)
083077ce +0x8e:  mov    %esi,0x20(%esp)
083077d2 +0x92:  mov    %ebx,0x1c(%esp)
083077d6 +0x96:  mov    %edx,0x18(%esp)
083077da +0x9a:  mov    %eax,0x14(%esp)
083077de +0x9e:  movl   $"TRY MoveMap [2][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",0x10(%esp)
083077e6 +0xa6:  movl   $0x1138,0xc(%esp)
083077ee +0xae:  movl   $&_ZZN13CBattle_Field13moveMap_2_LogEiiE19__PRETTY_FUNCTION__,0x8(%esp)
083077f6 +0xb6:  movl   $"battle_field.cpp",0x4(%esp)
083077fe +0xbe:  movl   $0x1,(%esp)
08307805 +0xc5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830780a +0xca:  add    $0x3c,%esp
0830780d +0xcd:  pop    %ebx
0830780e +0xce:  pop    %esi
0830780f +0xcf:  pop    %edi
08307810 +0xd0:  pop    %ebp
08307811 +0xd1:  ret
```

## 反编译 C

```c
// CBattle_Field::moveMap_2_Log @ 0x8307740

/* CBattle_Field::moveMap_2_Log(int, int) */

void __thiscall CBattle_Field::moveMap_2_Log(CBattle_Field *this,int param_1,int param_2)

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
            (1,"battle_field.cpp","void CBattle_Field::moveMap_2_Log(int, int)",0x1138,
             "TRY MoveMap [2][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",
             *(undefined4 *)(this + 0x194),*(undefined4 *)(iVar3 + 4),uVar2,uVar1,param_1,param_2,
             pcVar4);
  return;
}
```

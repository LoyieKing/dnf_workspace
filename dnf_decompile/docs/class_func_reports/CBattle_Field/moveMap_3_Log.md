# moveMap_3_Log

`_ZN13CBattle_Field13moveMap_3_LogEii`

`CBattle_Field::moveMap_3_Log(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307812` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307812  _ZN13CBattle_Field13moveMap_3_LogEii
#           CBattle_Field::moveMap_3_Log(int, int)
# range [0x08307812, 0x083078e3]
08307812 +0x00:  push   %ebp
08307813 +0x01:  mov    %esp,%ebp
08307815 +0x03:  push   %edi
08307816 +0x04:  push   %esi
08307817 +0x05:  push   %ebx
08307818 +0x06:  sub    $0x3c,%esp
0830781b +0x09:  movl   $0x0,0xc(%esp)
08307823 +0x11:  mov    0x10(%ebp),%eax
08307826 +0x14:  mov    %eax,0x8(%esp)
0830782a +0x18:  mov    0xc(%ebp),%eax
0830782d +0x1b:  mov    %eax,0x4(%esp)
08307831 +0x1f:  mov    0x8(%ebp),%eax
08307834 +0x22:  mov    %eax,(%esp)
08307837 +0x25:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
0830783c +0x2a:  movzbl 0xe8(%eax),%eax
08307843 +0x31:  test   %al,%al
08307845 +0x33:  je     0830784e <+0x3c>
08307847 +0x35:  mov    $"layeredMap",%eax
0830784c +0x3a:  jmp    08307853 <+0x41>
0830784e +0x3c:  mov    $"generalMap",%eax
08307853 +0x41:  mov    %eax,%edi
08307855 +0x43:  mov    0x8(%ebp),%eax
08307858 +0x46:  mov    0x64(%eax),%esi
0830785b +0x49:  mov    0x8(%ebp),%eax
0830785e +0x4c:  mov    0x60(%eax),%ebx
08307861 +0x4f:  movl   $0x0,0xc(%esp)
08307869 +0x57:  mov    0x10(%ebp),%eax
0830786c +0x5a:  mov    %eax,0x8(%esp)
08307870 +0x5e:  mov    0xc(%ebp),%eax
08307873 +0x61:  mov    %eax,0x4(%esp)
08307877 +0x65:  mov    0x8(%ebp),%eax
0830787a +0x68:  mov    %eax,(%esp)
0830787d +0x6b:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307882 +0x70:  mov    0x4(%eax),%edx
08307885 +0x73:  mov    0x8(%ebp),%eax
08307888 +0x76:  mov    0x194(%eax),%eax
0830788e +0x7c:  mov    %edi,0x2c(%esp)
08307892 +0x80:  mov    0x10(%ebp),%ecx
08307895 +0x83:  mov    %ecx,0x28(%esp)
08307899 +0x87:  mov    0xc(%ebp),%ecx
0830789c +0x8a:  mov    %ecx,0x24(%esp)
083078a0 +0x8e:  mov    %esi,0x20(%esp)
083078a4 +0x92:  mov    %ebx,0x1c(%esp)
083078a8 +0x96:  mov    %edx,0x18(%esp)
083078ac +0x9a:  mov    %eax,0x14(%esp)
083078b0 +0x9e:  movl   $"TRY MoveMap [3][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",0x10(%esp)
083078b8 +0xa6:  movl   $0x114a,0xc(%esp)
083078c0 +0xae:  movl   $&_ZZN13CBattle_Field13moveMap_3_LogEiiE19__PRETTY_FUNCTION__,0x8(%esp)
083078c8 +0xb6:  movl   $"battle_field.cpp",0x4(%esp)
083078d0 +0xbe:  movl   $0x1,(%esp)
083078d7 +0xc5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083078dc +0xca:  add    $0x3c,%esp
083078df +0xcd:  pop    %ebx
083078e0 +0xce:  pop    %esi
083078e1 +0xcf:  pop    %edi
083078e2 +0xd0:  pop    %ebp
083078e3 +0xd1:  ret
```

## 反编译 C

```c
// CBattle_Field::moveMap_3_Log @ 0x8307812

/* CBattle_Field::moveMap_3_Log(int, int) */

void __thiscall CBattle_Field::moveMap_3_Log(CBattle_Field *this,int param_1,int param_2)

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
            (1,"battle_field.cpp","void CBattle_Field::moveMap_3_Log(int, int)",0x114a,
             "TRY MoveMap [3][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",
             *(undefined4 *)(this + 0x194),*(undefined4 *)(iVar3 + 4),uVar2,uVar1,param_1,param_2,
             pcVar4);
  return;
}
```

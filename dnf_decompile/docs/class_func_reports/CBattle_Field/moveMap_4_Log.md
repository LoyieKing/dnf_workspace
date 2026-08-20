# moveMap_4_Log

`_ZN13CBattle_Field13moveMap_4_LogEiiPK10GridScript`

`CBattle_Field::moveMap_4_Log(int, int, GridScript const*)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083078e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083078e4  _ZN13CBattle_Field13moveMap_4_LogEiiPK10GridScript
#           CBattle_Field::moveMap_4_Log(int, int, GridScript const*)
# range [0x083078e4, 0x083079b9]
083078e4 +0x00:  push   %ebp
083078e5 +0x01:  mov    %esp,%ebp
083078e7 +0x03:  push   %edi
083078e8 +0x04:  push   %esi
083078e9 +0x05:  push   %ebx
083078ea +0x06:  sub    $0x3c,%esp
083078ed +0x09:  cmpl   $0x0,0x14(%ebp)
083078f1 +0x0d:  je     083079b0 <+0xcc>
083078f7 +0x13:  mov    0x14(%ebp),%eax
083078fa +0x16:  add    $0x1c,%eax
083078fd +0x19:  mov    %eax,(%esp)
08307900 +0x1c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08307905 +0x21:  mov    %eax,%ebx
08307907 +0x23:  mov    0x8(%ebp),%eax
0830790a +0x26:  mov    0x64(%eax),%edx
0830790d +0x29:  mov    0x8(%ebp),%eax
08307910 +0x2c:  mov    0x60(%eax),%eax
08307913 +0x2f:  movl   $0x0,0xc(%esp)
0830791b +0x37:  mov    %edx,0x8(%esp)
0830791f +0x3b:  mov    %eax,0x4(%esp)
08307923 +0x3f:  mov    0x8(%ebp),%eax
08307926 +0x42:  mov    %eax,(%esp)
08307929 +0x45:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
0830792e +0x4a:  movzbl 0xe8(%eax),%eax
08307935 +0x51:  test   %al,%al
08307937 +0x53:  je     08307940 <+0x5c>
08307939 +0x55:  mov    $"layeredMap",%eax
0830793e +0x5a:  jmp    08307945 <+0x61>
08307940 +0x5c:  mov    $"generalMap",%eax
08307945 +0x61:  mov    %eax,%edi
08307947 +0x63:  mov    0x14(%ebp),%eax
0830794a +0x66:  add    $0x4,%eax
0830794d +0x69:  mov    %eax,(%esp)
08307950 +0x6c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08307955 +0x71:  mov    0x8(%ebp),%edx
08307958 +0x74:  mov    0x64(%edx),%esi
0830795b +0x77:  mov    0x8(%ebp),%edx
0830795e +0x7a:  mov    0x60(%edx),%ecx
08307961 +0x7d:  mov    0x8(%ebp),%edx
08307964 +0x80:  mov    0x194(%edx),%edx
0830796a +0x86:  mov    %ebx,0x28(%esp)
0830796e +0x8a:  mov    %edi,0x24(%esp)
08307972 +0x8e:  mov    %eax,0x20(%esp)
08307976 +0x92:  mov    %esi,0x1c(%esp)
0830797a +0x96:  mov    %ecx,0x18(%esp)
0830797e +0x9a:  mov    %edx,0x14(%esp)
08307982 +0x9e:  movl   $"TRY MoveMap [4] Error(G_CDataManager()->find_dungeon( m_Dungeon )) Dungeon[%d] Pos(%d,%d), gs->mapIndex(%d) [Map Kind : %s], gs->layeredMapIndex(%d)\n",0x10(%esp)
0830798a +0xa6:  movl   $0x115b,0xc(%esp)
08307992 +0xae:  movl   $&_ZZN13CBattle_Field13moveMap_4_LogEiiPK10GridScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0830799a +0xb6:  movl   $"battle_field.cpp",0x4(%esp)
083079a2 +0xbe:  movl   $0x1,(%esp)
083079a9 +0xc5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083079ae +0xca:  jmp    083079b1 <+0xcd>
083079b0 +0xcc:  nop
083079b1 +0xcd:  add    $0x3c,%esp
083079b4 +0xd0:  pop    %ebx
083079b5 +0xd1:  pop    %esi
083079b6 +0xd2:  pop    %edi
083079b7 +0xd3:  pop    %ebp
083079b8 +0xd4:  ret
083079b9 +0xd5:  nop
```

## 反编译 C

```c
// CBattle_Field::moveMap_4_Log @ 0x83078e4

/* CBattle_Field::moveMap_4_Log(int, int, GridScript const*) */

void __thiscall
CBattle_Field::moveMap_4_Log(CBattle_Field *this,int param_1,int param_2,GridScript *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_3 != (GridScript *)0x0) {
    uVar1 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(param_3 + 0x1c));
    iVar2 = GetMapInfoFromPos(this,*(int *)(this + 0x60),*(int *)(this + 100),false);
    if (*(char *)(iVar2 + 0xe8) == '\0') {
      pcVar3 = "generalMap";
    }
    else {
      pcVar3 = "layeredMap";
    }
    uVar4 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(param_3 + 4));
    LogManager::logFormat
              (1,"battle_field.cpp","void CBattle_Field::moveMap_4_Log(int, int, const GridScript*)"
               ,0x115b,
               "TRY MoveMap [4] Error(G_CDataManager()->find_dungeon( m_Dungeon )) Dungeon[%d] Pos(%d,%d), gs->mapIndex(%d) [Map Kind : %s], gs->layeredMapIndex(%d)\n"
               ,*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x60),
               *(undefined4 *)(this + 100),uVar4,pcVar3,uVar1);
  }
  return;
}
```

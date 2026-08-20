# set_map_id

`_ZN13CBattle_Field10set_map_idEPK10GridScriptRiRSt6vectorIiSaIiEE`

`CBattle_Field::set_map_id(GridScript const*, int&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308882  _ZN13CBattle_Field10set_map_idEPK10GridScriptRiRSt6vectorIiSaIiEE
#           CBattle_Field::set_map_id(GridScript const*, int&, std::vector<int, std::allocator<int> >&)
# range [0x08308882, 0x08308a23]
08308882 +0x000:  push   %ebp
08308883 +0x001:  mov    %esp,%ebp
08308885 +0x003:  push   %edi
08308886 +0x004:  push   %esi
08308887 +0x005:  push   %ebx
08308888 +0x006:  sub    $0x5c,%esp
0830888b +0x009:  cmpl   $0x0,0xc(%ebp)
0830888f +0x00d:  jne    0830889b <+0x19>
08308891 +0x00f:  mov    $0x15,%eax
08308896 +0x014:  jmp    08308a1b <+0x199>
0830889b +0x019:  mov    0x10(%ebp),%eax
0830889e +0x01c:  mov    (%eax),%eax
083088a0 +0x01e:  test   %eax,%eax
083088a2 +0x020:  jns    08308921 <+0x9f>
083088a4 +0x022:  mov    0x14(%ebp),%eax
083088a7 +0x025:  mov    %eax,(%esp)
083088aa +0x028:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083088af +0x02d:  test   %eax,%eax
083088b1 +0x02f:  setne  %al
083088b4 +0x032:  test   %al,%al
083088b6 +0x034:  je     083088e7 <+0x65>
083088b8 +0x036:  mov    0x14(%ebp),%eax
083088bb +0x039:  mov    %eax,(%esp)
083088be +0x03c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083088c3 +0x041:  mov    %eax,(%esp)
083088c6 +0x044:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083088cb +0x049:  mov    %eax,-0x1c(%ebp)
083088ce +0x04c:  mov    -0x1c(%ebp),%eax
083088d1 +0x04f:  mov    %eax,0x4(%esp)
083088d5 +0x053:  mov    0x14(%ebp),%eax
083088d8 +0x056:  mov    %eax,(%esp)
083088db +0x059:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
083088e0 +0x05e:  mov    (%eax),%edx
083088e2 +0x060:  mov    0x10(%ebp),%eax
083088e5 +0x063:  mov    %edx,(%eax)
083088e7 +0x065:  mov    0x8(%ebp),%eax
083088ea +0x068:  mov    %eax,(%esp)
083088ed +0x06b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083088f2 +0x070:  movzbl 0xe8(%eax),%eax
083088f9 +0x077:  test   %al,%al
083088fb +0x079:  je     08308921 <+0x9f>
083088fd +0x07b:  mov    0x8(%ebp),%eax
08308900 +0x07e:  mov    %eax,(%esp)
08308903 +0x081:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
08308908 +0x086:  mov    0xc(%ebp),%edx
0830890b +0x089:  add    $0x1c,%edx
0830890e +0x08c:  mov    %eax,0x4(%esp)
08308912 +0x090:  mov    %edx,(%esp)
08308915 +0x093:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0830891a +0x098:  mov    (%eax),%edx
0830891c +0x09a:  mov    0x10(%ebp),%eax
0830891f +0x09d:  mov    %edx,(%eax)
08308921 +0x09f:  mov    0x8(%ebp),%eax
08308924 +0x0a2:  mov    %eax,(%esp)
08308927 +0x0a5:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830892c +0x0aa:  mov    0x10(%ebp),%edx
0830892f +0x0ad:  mov    (%edx),%edx
08308931 +0x0af:  mov    %edx,0x4(%eax)
08308934 +0x0b2:  mov    0x10(%ebp),%eax
08308937 +0x0b5:  mov    (%eax),%eax
08308939 +0x0b7:  test   %eax,%eax
0830893b +0x0b9:  jg     08308a16 <+0x194>
08308941 +0x0bf:  mov    0xc(%ebp),%eax
08308944 +0x0c2:  add    $0x1c,%eax
08308947 +0x0c5:  mov    %eax,(%esp)
0830894a +0x0c8:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830894f +0x0cd:  mov    %eax,%esi
08308951 +0x0cf:  mov    0x8(%ebp),%eax
08308954 +0x0d2:  mov    0x64(%eax),%edx
08308957 +0x0d5:  mov    0x8(%ebp),%eax
0830895a +0x0d8:  mov    0x60(%eax),%eax
0830895d +0x0db:  movl   $0x0,0xc(%esp)
08308965 +0x0e3:  mov    %edx,0x8(%esp)
08308969 +0x0e7:  mov    %eax,0x4(%esp)
0830896d +0x0eb:  mov    0x8(%ebp),%eax
08308970 +0x0ee:  mov    %eax,(%esp)
08308973 +0x0f1:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308978 +0x0f6:  movzbl 0xe8(%eax),%eax
0830897f +0x0fd:  test   %al,%al
08308981 +0x0ff:  je     0830898a <+0x108>
08308983 +0x101:  mov    $"layeredMap",%eax
08308988 +0x106:  jmp    0830898f <+0x10d>
0830898a +0x108:  mov    $"generalMap",%eax
0830898f +0x10d:  mov    %eax,-0x2c(%ebp)
08308992 +0x110:  mov    0xc(%ebp),%eax
08308995 +0x113:  add    $0x4,%eax
08308998 +0x116:  mov    %eax,(%esp)
0830899b +0x119:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083089a0 +0x11e:  mov    %eax,%ebx
083089a2 +0x120:  mov    0x14(%ebp),%eax
083089a5 +0x123:  mov    %eax,(%esp)
083089a8 +0x126:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083089ad +0x12b:  mov    %eax,%edx
083089af +0x12d:  mov    0x8(%ebp),%eax
083089b2 +0x130:  mov    0x64(%eax),%edi
083089b5 +0x133:  mov    0x8(%ebp),%eax
083089b8 +0x136:  mov    0x60(%eax),%ecx
083089bb +0x139:  mov    0x8(%ebp),%eax
083089be +0x13c:  mov    0x194(%eax),%eax
083089c4 +0x142:  mov    %esi,0x2c(%esp)
083089c8 +0x146:  mov    -0x2c(%ebp),%esi
083089cb +0x149:  mov    %esi,0x28(%esp)
083089cf +0x14d:  mov    %ebx,0x24(%esp)
083089d3 +0x151:  mov    %edx,0x20(%esp)
083089d7 +0x155:  mov    %edi,0x1c(%esp)
083089db +0x159:  mov    %ecx,0x18(%esp)
083089df +0x15d:  mov    %eax,0x14(%esp)
083089e3 +0x161:  movl   $"[CBattle_Field::MoveMap] Error Dungeon[%d] Pos(%d,%d), candidator(%d), gs->mapIndex(%d) [Map Kind : %s], gs->layeredMapIndex(%d)\n",0x10(%esp)
083089eb +0x169:  movl   $0x1363,0xc(%esp)
083089f3 +0x171:  movl   $&_ZZN13CBattle_Field10set_map_idEPK10GridScriptRiRSt6vectorIiSaIiEEE19__PRETTY_FUNCTION__,0x8(%esp)
083089fb +0x179:  movl   $"battle_field.cpp",0x4(%esp)
08308a03 +0x181:  movl   $0x1,(%esp)
08308a0a +0x188:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08308a0f +0x18d:  mov    $0x15,%eax
08308a14 +0x192:  jmp    08308a1b <+0x199>
08308a16 +0x194:  mov    $0x0,%eax
08308a1b +0x199:  add    $0x5c,%esp
08308a1e +0x19c:  pop    %ebx
08308a1f +0x19d:  pop    %esi
08308a20 +0x19e:  pop    %edi
08308a21 +0x19f:  pop    %ebp
08308a22 +0x1a0:  ret
08308a23 +0x1a1:  nop
```

## 反编译 C

```c
// CBattle_Field::set_map_id @ 0x8308882

/* CBattle_Field::set_map_id(GridScript const*, int&, std::vector<int, std::allocator<int> >&) */

undefined4 __thiscall
CBattle_Field::set_map_id(CBattle_Field *this,GridScript *param_1,int *param_2,vector *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == (GridScript *)0x0) {
    uVar1 = 0x15;
  }
  else {
    if (*param_2 < 0) {
      iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_3)
      ;
      if (iVar2 != 0) {
        iVar2 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)param_3);
        uVar3 = get_rand_int(iVar2);
        piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)param_3,uVar3);
        *param_2 = *piVar4;
      }
      iVar2 = GetCurrentMapInfo(this);
      if (*(char *)(iVar2 + 0xe8) != '\0') {
        uVar3 = getLayeredMapIndex(this);
        piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(param_1 + 0x1c),uVar3);
        *param_2 = *piVar4;
      }
    }
    iVar2 = GetCurrentMapInfo(this);
    *(int *)(iVar2 + 4) = *param_2;
    if (*param_2 < 1) {
      uVar1 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(param_1 + 0x1c));
      iVar2 = GetMapInfoFromPos(this,*(int *)(this + 0x60),*(int *)(this + 100),false);
      if (*(char *)(iVar2 + 0xe8) == '\0') {
        pcVar5 = "generalMap";
      }
      else {
        pcVar5 = "layeredMap";
      }
      uVar6 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(param_1 + 4));
      uVar7 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_3)
      ;
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "int CBattle_Field::set_map_id(const GridScript*, int&, INT_VECTOR&)",0x1363,
                 "[CBattle_Field::MoveMap] Error Dungeon[%d] Pos(%d,%d), candidator(%d), gs->mapIndex(%d) [Map Kind : %s], gs->layeredMapIndex(%d)\n"
                 ,*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x60),
                 *(undefined4 *)(this + 100),uVar7,uVar6,pcVar5,uVar1);
      uVar1 = 0x15;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

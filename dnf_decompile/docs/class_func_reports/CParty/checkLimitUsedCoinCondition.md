# checkLimitUsedCoinCondition

`_ZN6CParty27checkLimitUsedCoinConditionEPK8CDungeon`

`CParty::checkLimitUsedCoinCondition(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be56c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be56c  _ZN6CParty27checkLimitUsedCoinConditionEPK8CDungeon
#           CParty::checkLimitUsedCoinCondition(CDungeon const*)
# range [0x085be56c, 0x085be6b9]
085be56c +0x000:  push   %ebp
085be56d +0x001:  mov    %esp,%ebp
085be56f +0x003:  push   %ebx
085be570 +0x004:  sub    $0x24,%esp
085be573 +0x007:  cmpl   $0x0,0xc(%ebp)
085be577 +0x00b:  jne    085be5b3 <+0x47>
085be579 +0x00d:  mov    0x8(%ebp),%eax
085be57c +0x010:  add    $0xb24,%eax
085be581 +0x015:  mov    %eax,(%esp)
085be584 +0x018:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085be589 +0x01d:  mov    %eax,-0xc(%ebp)
085be58c +0x020:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085be591 +0x025:  mov    -0xc(%ebp),%edx
085be594 +0x028:  mov    %edx,0x4(%esp)
085be598 +0x02c:  mov    %eax,(%esp)
085be59b +0x02f:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085be5a0 +0x034:  mov    %eax,0xc(%ebp)
085be5a3 +0x037:  cmpl   $0x0,0xc(%ebp)
085be5a7 +0x03b:  jne    085be5b3 <+0x47>
085be5a9 +0x03d:  mov    $0x13,%eax
085be5ae +0x042:  jmp    085be6b4 <+0x148>
085be5b3 +0x047:  mov    0x8(%ebp),%eax
085be5b6 +0x04a:  mov    %eax,(%esp)
085be5b9 +0x04d:  call   085be54c <_ZN6CParty23GetPartyMemberCoinLimitEv>  ; CParty::GetPartyMemberCoinLimit()
085be5be +0x052:  test   %eax,%eax
085be5c0 +0x054:  setne  %al
085be5c3 +0x057:  test   %al,%al
085be5c5 +0x059:  je     085be5f2 <+0x86>
085be5c7 +0x05b:  mov    0x8(%ebp),%eax
085be5ca +0x05e:  mov    %eax,(%esp)
085be5cd +0x061:  call   0822d8e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f92
085be5d2 +0x066:  mov    %eax,%ebx
085be5d4 +0x068:  mov    0x8(%ebp),%eax
085be5d7 +0x06b:  mov    %eax,(%esp)
085be5da +0x06e:  call   085be54c <_ZN6CParty23GetPartyMemberCoinLimitEv>  ; CParty::GetPartyMemberCoinLimit()
085be5df +0x073:  cmp    %eax,%ebx
085be5e1 +0x075:  setge  %al
085be5e4 +0x078:  test   %al,%al
085be5e6 +0x07a:  je     085be5f2 <+0x86>
085be5e8 +0x07c:  mov    $0x16,%eax
085be5ed +0x081:  jmp    085be6b4 <+0x148>
085be5f2 +0x086:  movl   $0x0,-0x10(%ebp)
085be5f9 +0x08d:  mov    0x8(%ebp),%eax
085be5fc +0x090:  add    $0xb24,%eax
085be601 +0x095:  mov    %eax,(%esp)
085be604 +0x098:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085be609 +0x09d:  lea    -0x10(%ebp),%edx
085be60c +0x0a0:  mov    %edx,0x8(%esp)
085be610 +0x0a4:  mov    %eax,0x4(%esp)
085be614 +0x0a8:  mov    0xc(%ebp),%eax
085be617 +0x0ab:  mov    %eax,(%esp)
085be61a +0x0ae:  call   08365316 <_ZNK8CDungeon16getLimitCoinDiffEiRi>  ; CDungeon::getLimitCoinDiff(int, int&) const
085be61f +0x0b3:  test   %al,%al
085be621 +0x0b5:  je     085be649 <+0xdd>
085be623 +0x0b7:  mov    -0x10(%ebp),%eax
085be626 +0x0ba:  cmp    $0xffffffff,%eax
085be629 +0x0bd:  je     085be649 <+0xdd>
085be62b +0x0bf:  mov    0x8(%ebp),%eax
085be62e +0x0c2:  mov    %eax,(%esp)
085be631 +0x0c5:  call   0822d8e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f92
085be636 +0x0ca:  mov    -0x10(%ebp),%edx
085be639 +0x0cd:  cmp    %edx,%eax
085be63b +0x0cf:  setge  %al
085be63e +0x0d2:  test   %al,%al
085be640 +0x0d4:  je     085be649 <+0xdd>
085be642 +0x0d6:  mov    $0x16,%eax
085be647 +0x0db:  jmp    085be6b4 <+0x148>
085be649 +0x0dd:  mov    0xc(%ebp),%eax
085be64c +0x0e0:  mov    0x87c(%eax),%eax
085be652 +0x0e6:  cmp    $0xffffffff,%eax
085be655 +0x0e9:  je     085be67b <+0x10f>
085be657 +0x0eb:  mov    0x8(%ebp),%eax
085be65a +0x0ee:  mov    %eax,(%esp)
085be65d +0x0f1:  call   0822d8e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f92
085be662 +0x0f6:  mov    0xc(%ebp),%edx
085be665 +0x0f9:  mov    0x87c(%edx),%edx
085be66b +0x0ff:  cmp    %edx,%eax
085be66d +0x101:  setge  %al
085be670 +0x104:  test   %al,%al
085be672 +0x106:  je     085be67b <+0x10f>
085be674 +0x108:  mov    $0x16,%eax
085be679 +0x10d:  jmp    085be6b4 <+0x148>
085be67b +0x10f:  mov    0xc(%ebp),%eax
085be67e +0x112:  mov    0x898(%eax),%eax
085be684 +0x118:  cmp    $0xffffffff,%eax
085be687 +0x11b:  je     085be6af <+0x143>
085be689 +0x11d:  mov    0xc(%ebp),%eax
085be68c +0x120:  mov    0x898(%eax),%eax
085be692 +0x126:  mov    %eax,0x4(%esp)
085be696 +0x12a:  mov    0x8(%ebp),%eax
085be699 +0x12d:  mov    %eax,(%esp)
085be69c +0x130:  call   085a834a <_ZN6CParty19CheckHellCoinLimintEi>  ; CParty::CheckHellCoinLimint(int)
085be6a1 +0x135:  xor    $0x1,%eax
085be6a4 +0x138:  test   %al,%al
085be6a6 +0x13a:  je     085be6af <+0x143>
085be6a8 +0x13c:  mov    $0x16,%eax
085be6ad +0x141:  jmp    085be6b4 <+0x148>
085be6af +0x143:  mov    $0x0,%eax
085be6b4 +0x148:  add    $0x24,%esp
085be6b7 +0x14b:  pop    %ebx
085be6b8 +0x14c:  pop    %ebp
085be6b9 +0x14d:  ret
```

## 反编译 C

```c
// CParty::checkLimitUsedCoinCondition @ 0x85be56c

/* CParty::checkLimitUsedCoinCondition(CDungeon const*) */

undefined4 __thiscall CParty::checkLimitUsedCoinCondition(CParty *this,CDungeon *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  undefined4 local_10;
  
  if (param_1 == (CDungeon *)0x0) {
    local_10 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    iVar2 = G_CDataManager();
    param_1 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (param_1 == (CDungeon *)0x0) {
      return 0x13;
    }
  }
  iVar2 = GetPartyMemberCoinLimit(this);
  if (iVar2 != 0) {
    iVar2 = GetUsedCoinCount(this);
    iVar3 = GetPartyMemberCoinLimit(this);
    if (iVar3 <= iVar2) {
      return 0x16;
    }
  }
  local_14 = 0;
  iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
  cVar1 = CDungeon::getLimitCoinDiff(param_1,iVar2,&local_14);
  if (((cVar1 != '\0') && (local_14 != -1)) && (iVar2 = GetUsedCoinCount(this), local_14 <= iVar2))
  {
    return 0x16;
  }
  if ((*(int *)(param_1 + 0x87c) != -1) &&
     (iVar2 = GetUsedCoinCount(this), *(int *)(param_1 + 0x87c) <= iVar2)) {
    return 0x16;
  }
  if ((*(int *)(param_1 + 0x898) != -1) &&
     (cVar1 = CheckHellCoinLimint(this,*(int *)(param_1 + 0x898)), cVar1 != '\x01')) {
    return 0x16;
  }
  return 0;
}
```

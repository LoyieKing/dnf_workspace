# getRandomBuffDungeonType

`_ZN13CBattle_Field24getRandomBuffDungeonTypeEi`

`CBattle_Field::getRandomBuffDungeonType(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830aaa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830aaa4  _ZN13CBattle_Field24getRandomBuffDungeonTypeEi
#           CBattle_Field::getRandomBuffDungeonType(int)
# range [0x0830aaa4, 0x0830ac79]
0830aaa4 +0x000:  push   %ebp
0830aaa5 +0x001:  mov    %esp,%ebp
0830aaa7 +0x003:  sub    $0x28,%esp
0830aaaa +0x006:  cmpl   $0x0,0xc(%ebp)
0830aaae +0x00a:  jne    0830aadb <+0x37>
0830aab0 +0x00c:  mov    0x8(%ebp),%eax
0830aab3 +0x00f:  mov    0x188(%eax),%eax
0830aab9 +0x015:  test   %eax,%eax
0830aabb +0x017:  jne    0830aac7 <+0x23>
0830aabd +0x019:  mov    $0x7,%eax
0830aac2 +0x01e:  jmp    0830ac77 <+0x1d3>
0830aac7 +0x023:  mov    0x8(%ebp),%eax
0830aaca +0x026:  mov    0x188(%eax),%eax
0830aad0 +0x02c:  mov    %eax,(%esp)
0830aad3 +0x02f:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0830aad8 +0x034:  mov    %eax,0xc(%ebp)
0830aadb +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830aae0 +0x03c:  mov    0xc(%ebp),%edx
0830aae3 +0x03f:  mov    %edx,0x4(%esp)
0830aae7 +0x043:  mov    %eax,(%esp)
0830aaea +0x046:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0830aaef +0x04b:  mov    %eax,-0xc(%ebp)
0830aaf2 +0x04e:  cmpl   $0x0,-0xc(%ebp)
0830aaf6 +0x052:  jne    0830ab02 <+0x5e>
0830aaf8 +0x054:  mov    $0x7,%eax
0830aafd +0x059:  jmp    0830ac77 <+0x1d3>
0830ab02 +0x05e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0830ab07 +0x063:  mov    %eax,(%esp)
0830ab0a +0x066:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0830ab0f +0x06b:  mov    %eax,(%esp)
0830ab12 +0x06e:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
0830ab17 +0x073:  lea    -0x10(%ebp),%edx
0830ab1a +0x076:  mov    %eax,0x4(%esp)
0830ab1e +0x07a:  mov    %edx,(%esp)
0830ab21 +0x07d:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0830ab26 +0x082:  sub    $0x4,%esp
0830ab29 +0x085:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0830ab2e +0x08a:  mov    %eax,(%esp)
0830ab31 +0x08d:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0830ab36 +0x092:  mov    %eax,(%esp)
0830ab39 +0x095:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
0830ab3e +0x09a:  lea    -0x14(%ebp),%edx
0830ab41 +0x09d:  mov    %eax,0x4(%esp)
0830ab45 +0x0a1:  mov    %edx,(%esp)
0830ab48 +0x0a4:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0830ab4d +0x0a9:  sub    $0x4,%esp
0830ab50 +0x0ac:  jmp    0830ab7e <+0xda>
0830ab52 +0x0ae:  lea    -0x10(%ebp),%eax
0830ab55 +0x0b1:  mov    %eax,(%esp)
0830ab58 +0x0b4:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0830ab5d +0x0b9:  mov    (%eax),%eax
0830ab5f +0x0bb:  cmp    0xc(%ebp),%eax
0830ab62 +0x0be:  sete   %al
0830ab65 +0x0c1:  test   %al,%al
0830ab67 +0x0c3:  je     0830ab73 <+0xcf>
0830ab69 +0x0c5:  mov    $0x7,%eax
0830ab6e +0x0ca:  jmp    0830ac77 <+0x1d3>
0830ab73 +0x0cf:  lea    -0x10(%ebp),%eax
0830ab76 +0x0d2:  mov    %eax,(%esp)
0830ab79 +0x0d5:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0830ab7e +0x0da:  lea    -0x14(%ebp),%eax
0830ab81 +0x0dd:  mov    %eax,0x4(%esp)
0830ab85 +0x0e1:  lea    -0x10(%ebp),%eax
0830ab88 +0x0e4:  mov    %eax,(%esp)
0830ab8b +0x0e7:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0830ab90 +0x0ec:  test   %al,%al
0830ab92 +0x0ee:  jne    0830ab52 <+0xae>
0830ab94 +0x0f0:  mov    -0xc(%ebp),%eax
0830ab97 +0x0f3:  mov    %eax,(%esp)
0830ab9a +0x0f6:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0830ab9f +0x0fb:  test   %al,%al
0830aba1 +0x0fd:  setg   %al
0830aba4 +0x100:  test   %al,%al
0830aba6 +0x102:  je     0830abb2 <+0x10e>
0830aba8 +0x104:  mov    $0x2,%eax
0830abad +0x109:  jmp    0830ac77 <+0x1d3>
0830abb2 +0x10e:  mov    -0xc(%ebp),%eax
0830abb5 +0x111:  movzbl 0x89c(%eax),%eax
0830abbc +0x118:  test   %al,%al
0830abbe +0x11a:  je     0830abca <+0x126>
0830abc0 +0x11c:  mov    $0x1,%eax
0830abc5 +0x121:  jmp    0830ac77 <+0x1d3>
0830abca +0x126:  mov    -0xc(%ebp),%eax
0830abcd +0x129:  mov    %eax,(%esp)
0830abd0 +0x12c:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
0830abd5 +0x131:  cmp    $0x1,%al
0830abd7 +0x133:  sete   %al
0830abda +0x136:  test   %al,%al
0830abdc +0x138:  je     0830abe8 <+0x144>
0830abde +0x13a:  mov    $0x4,%eax
0830abe3 +0x13f:  jmp    0830ac77 <+0x1d3>
0830abe8 +0x144:  mov    -0xc(%ebp),%eax
0830abeb +0x147:  mov    %eax,(%esp)
0830abee +0x14a:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
0830abf3 +0x14f:  cmp    $0x2,%al
0830abf5 +0x151:  sete   %al
0830abf8 +0x154:  test   %al,%al
0830abfa +0x156:  je     0830ac03 <+0x15f>
0830abfc +0x158:  mov    $0x5,%eax
0830ac01 +0x15d:  jmp    0830ac77 <+0x1d3>
0830ac03 +0x15f:  mov    -0xc(%ebp),%eax
0830ac06 +0x162:  mov    %eax,(%esp)
0830ac09 +0x165:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
0830ac0e +0x16a:  cmp    $0x1,%eax
0830ac11 +0x16d:  jne    0830ac29 <+0x185>
0830ac13 +0x16f:  mov    -0xc(%ebp),%eax
0830ac16 +0x172:  mov    %eax,(%esp)
0830ac19 +0x175:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
0830ac1e +0x17a:  test   %al,%al
0830ac20 +0x17c:  je     0830ac29 <+0x185>
0830ac22 +0x17e:  mov    $0x1,%eax
0830ac27 +0x183:  jmp    0830ac2e <+0x18a>
0830ac29 +0x185:  mov    $0x0,%eax
0830ac2e +0x18a:  test   %al,%al
0830ac30 +0x18c:  je     0830ac39 <+0x195>
0830ac32 +0x18e:  mov    $0x3,%eax
0830ac37 +0x193:  jmp    0830ac77 <+0x1d3>
0830ac39 +0x195:  mov    -0xc(%ebp),%eax
0830ac3c +0x198:  mov    %eax,(%esp)
0830ac3f +0x19b:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
0830ac44 +0x1a0:  cmp    $0x1,%eax
0830ac47 +0x1a3:  jne    0830ac62 <+0x1be>
0830ac49 +0x1a5:  mov    -0xc(%ebp),%eax
0830ac4c +0x1a8:  mov    %eax,(%esp)
0830ac4f +0x1ab:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
0830ac54 +0x1b0:  xor    $0x1,%eax
0830ac57 +0x1b3:  test   %al,%al
0830ac59 +0x1b5:  je     0830ac62 <+0x1be>
0830ac5b +0x1b7:  mov    $0x1,%eax
0830ac60 +0x1bc:  jmp    0830ac67 <+0x1c3>
0830ac62 +0x1be:  mov    $0x0,%eax
0830ac67 +0x1c3:  test   %al,%al
0830ac69 +0x1c5:  je     0830ac72 <+0x1ce>
0830ac6b +0x1c7:  mov    $0x6,%eax
0830ac70 +0x1cc:  jmp    0830ac77 <+0x1d3>
0830ac72 +0x1ce:  mov    $0x0,%eax
0830ac77 +0x1d3:  leave
0830ac78 +0x1d4:  ret
0830ac79 +0x1d5:  nop
```

## 反编译 C

```c
// CBattle_Field::getRandomBuffDungeonType @ 0x830aaa4

/* CBattle_Field::getRandomBuffDungeonType(int) */

undefined4 __thiscall CBattle_Field::getRandomBuffDungeonType(CBattle_Field *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *pCVar4;
  CQuickPartyRewardManager *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  __normal_iterator local_18 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_14 [4];
  CDungeon *local_10;
  
  if (param_1 == 0) {
    if (*(int *)(this + 0x188) == 0) {
      return 7;
    }
    param_1 = CDungeon::get_index(*(CDungeon **)(this + 0x188));
  }
  iVar3 = G_CDataManager();
  local_10 = (CDungeon *)CDataManager::find_dungeon(iVar3);
  if (local_10 == (CDungeon *)0x0) {
    return 7;
  }
  pCVar4 = (CGameManager *)G_CGameManager();
  pCVar5 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar4);
  QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(pCVar5);
  std::vector<int,std::allocator<int>>::begin();
  pCVar4 = (CGameManager *)G_CGameManager();
  pCVar5 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar4);
  QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(pCVar5);
  std::vector<int,std::allocator<int>>::end();
  while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_14);
    if (*piVar6 == param_1) {
      return 7;
    }
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_14);
  }
  cVar2 = CDungeon::get_dimension_possible(local_10);
  if ('\0' < cVar2) {
    return 2;
  }
  if (local_10[0x89c] == (CDungeon)0x0) {
    cVar2 = CDungeon::get_blood_dungeon_type(local_10);
    if (cVar2 == '\x01') {
      return 4;
    }
    cVar2 = CDungeon::get_blood_dungeon_type(local_10);
    if (cVar2 != '\x02') {
      iVar3 = CDungeon::getDungeonKind(local_10);
      if ((iVar3 == 1) && (cVar2 = CDungeon::limitOfStackableItemInTower(local_10), cVar2 != '\0'))
      {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        iVar3 = CDungeon::getDungeonKind(local_10);
        if ((iVar3 == 1) &&
           (cVar2 = CDungeon::limitOfStackableItemInTower(local_10), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar7 = 6;
        }
        else {
          uVar7 = 0;
        }
        return uVar7;
      }
      return 3;
    }
    return 5;
  }
  return 1;
}
```

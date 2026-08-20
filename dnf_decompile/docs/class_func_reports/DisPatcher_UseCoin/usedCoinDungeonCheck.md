# usedCoinDungeonCheck

`_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty`

`DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081cab3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cab3a  _ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty
#           DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*)
# range [0x081cab3a, 0x081cac5d]
081cab3a +0x000:  push   %ebp
081cab3b +0x001:  mov    %esp,%ebp
081cab3d +0x003:  sub    $0x38,%esp
081cab40 +0x006:  cmpl   $0x0,0xc(%ebp)
081cab44 +0x00a:  jne    081cab50 <+0x16>
081cab46 +0x00c:  mov    $0xffffffff,%eax
081cab4b +0x011:  jmp    081cac5c <+0x122>
081cab50 +0x016:  cmpl   $0x0,0x10(%ebp)
081cab54 +0x01a:  jne    081cab60 <+0x26>
081cab56 +0x01c:  mov    $0xffffffff,%eax
081cab5b +0x021:  jmp    081cac5c <+0x122>
081cab60 +0x026:  mov    0xc(%ebp),%eax
081cab63 +0x029:  mov    %eax,(%esp)
081cab66 +0x02c:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
081cab6b +0x031:  mov    %eax,-0x14(%ebp)
081cab6e +0x034:  cmpl   $0xffffffff,-0x14(%ebp)
081cab72 +0x038:  jne    081cab87 <+0x4d>
081cab74 +0x03a:  mov    0x10(%ebp),%eax
081cab77 +0x03d:  add    $0xb24,%eax
081cab7c +0x042:  mov    %eax,(%esp)
081cab7f +0x045:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
081cab84 +0x04a:  mov    %eax,-0x14(%ebp)
081cab87 +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081cab8c +0x052:  mov    -0x14(%ebp),%edx
081cab8f +0x055:  mov    %edx,0x4(%esp)
081cab93 +0x059:  mov    %eax,(%esp)
081cab96 +0x05c:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
081cab9b +0x061:  mov    %eax,-0x10(%ebp)
081cab9e +0x064:  cmpl   $0x0,-0x10(%ebp)
081caba2 +0x068:  jne    081cabdf <+0xa5>
081caba4 +0x06a:  movl   $0x0,0x14(%esp)
081cabac +0x072:  movl   $"DisPatcher_UseCoin G_CDataManager()->find_dungeon( %d) fail",0x10(%esp)
081cabb4 +0x07a:  movl   $0x1fa9,0xc(%esp)
081cabbc +0x082:  movl   $&_ZZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CPartyE19__PRETTY_FUNCTION__,0x8(%esp)
081cabc4 +0x08a:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cabcc +0x092:  movl   $0x1,(%esp)
081cabd3 +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081cabd8 +0x09e:  mov    $0x7fffffff,%eax
081cabdd +0x0a3:  jmp    081cac5c <+0x122>
081cabdf +0x0a5:  mov    -0x10(%ebp),%eax
081cabe2 +0x0a8:  mov    %eax,0x4(%esp)
081cabe6 +0x0ac:  mov    0x10(%ebp),%eax
081cabe9 +0x0af:  mov    %eax,(%esp)
081cabec +0x0b2:  call   085be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>  ; CParty::checkFreeRevivalCondition(CDungeon const*)
081cabf1 +0x0b7:  test   %al,%al
081cabf3 +0x0b9:  je     081cabfc <+0xc2>
081cabf5 +0x0bb:  mov    $0x0,%eax
081cabfa +0x0c0:  jmp    081cac5c <+0x122>
081cabfc +0x0c2:  mov    0xc(%ebp),%eax
081cabff +0x0c5:  mov    %eax,(%esp)
081cac02 +0x0c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081cac07 +0x0cd:  mov    %eax,(%esp)
081cac0a +0x0d0:  call   0822d696 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d40
081cac0f +0x0d5:  test   %al,%al
081cac11 +0x0d7:  je     081cac50 <+0x116>
081cac13 +0x0d9:  mov    -0x10(%ebp),%eax
081cac16 +0x0dc:  mov    %eax,0x4(%esp)
081cac1a +0x0e0:  mov    0x10(%ebp),%eax
081cac1d +0x0e3:  mov    %eax,(%esp)
081cac20 +0x0e6:  call   085be4ae <_ZN6CParty29checkUnLimitUsedCoinConditionEPK8CDungeon>  ; CParty::checkUnLimitUsedCoinCondition(CDungeon const*)
081cac25 +0x0eb:  test   %al,%al
081cac27 +0x0ed:  je     081cac30 <+0xf6>
081cac29 +0x0ef:  mov    $0x0,%eax
081cac2e +0x0f4:  jmp    081cac5c <+0x122>
081cac30 +0x0f6:  mov    -0x10(%ebp),%eax
081cac33 +0x0f9:  mov    %eax,0x4(%esp)
081cac37 +0x0fd:  mov    0x10(%ebp),%eax
081cac3a +0x100:  mov    %eax,(%esp)
081cac3d +0x103:  call   085be56c <_ZN6CParty27checkLimitUsedCoinConditionEPK8CDungeon>  ; CParty::checkLimitUsedCoinCondition(CDungeon const*)
081cac42 +0x108:  mov    %eax,-0xc(%ebp)
081cac45 +0x10b:  cmpl   $0x0,-0xc(%ebp)
081cac49 +0x10f:  je     081cac57 <+0x11d>
081cac4b +0x111:  mov    -0xc(%ebp),%eax
081cac4e +0x114:  jmp    081cac5c <+0x122>
081cac50 +0x116:  mov    $0x11,%eax
081cac55 +0x11b:  jmp    081cac5c <+0x122>
081cac57 +0x11d:  mov    $0x0,%eax
081cac5c +0x122:  leave
081cac5d +0x123:  ret
```

## 反编译 C

```c
// DisPatcher_UseCoin::usedCoinDungeonCheck @ 0x81cab3a

/* DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*) */

int __thiscall
DisPatcher_UseCoin::usedCoinDungeonCheck(DisPatcher_UseCoin *this,CUser *param_1,CParty *param_2)

{
  char cVar1;
  int iVar2;
  CDungeon *pCVar3;
  CInventory *this_00;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = -1;
  }
  else if (param_2 == (CParty *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = CUser::getPlayingDungeonIndex(param_1);
    if (iVar2 == -1) {
      CBattle_Field::get_dungeon_index((CBattle_Field *)(param_2 + 0xb24));
    }
    iVar2 = G_CDataManager();
    pCVar3 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (pCVar3 == (CDungeon *)0x0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "int DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*)",0x1fa9,
                 "DisPatcher_UseCoin G_CDataManager()->find_dungeon( %d) fail",0);
      iVar2 = 0x7fffffff;
    }
    else {
      cVar1 = CParty::checkFreeRevivalCondition(param_2,pCVar3);
      if (cVar1 == '\0') {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        cVar1 = CInventory::IsCoinUsable(this_00);
        if (cVar1 == '\0') {
          iVar2 = 0x11;
        }
        else {
          cVar1 = CParty::checkUnLimitUsedCoinCondition(param_2,pCVar3);
          if (cVar1 == '\0') {
            iVar2 = CParty::checkLimitUsedCoinCondition(param_2,pCVar3);
            if (iVar2 == 0) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0;
          }
        }
      }
      else {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
```

# get_bind_result

`_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE`

`Dispatcher_MonstercardBind::get_bind_result(CUser*, short, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d84a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d84a0  _ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE
#           Dispatcher_MonstercardBind::get_bind_result(CUser*, short, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x081d84a0, 0x081d85fb]
081d84a0 +0x000:  push   %ebp
081d84a1 +0x001:  mov    %esp,%ebp
081d84a3 +0x003:  push   %ebx
081d84a4 +0x004:  sub    $0x84,%esp
081d84aa +0x00a:  mov    0x10(%ebp),%eax
081d84ad +0x00d:  mov    %ax,-0x6c(%ebp)
081d84b1 +0x011:  movswl -0x6c(%ebp),%ebx
081d84b5 +0x015:  mov    0xc(%ebp),%eax
081d84b8 +0x018:  mov    %eax,(%esp)
081d84bb +0x01b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d84c0 +0x020:  lea    -0x61(%ebp),%edx
081d84c3 +0x023:  mov    %ebx,0xc(%esp)
081d84c7 +0x027:  movl   $0x1,0x8(%esp)
081d84cf +0x02f:  mov    %eax,0x4(%esp)
081d84d3 +0x033:  mov    %edx,(%esp)
081d84d6 +0x036:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d84db +0x03b:  sub    $0x4,%esp
081d84de +0x03e:  mov    -0x5f(%ebp),%eax
081d84e1 +0x041:  mov    %eax,%ebx
081d84e3 +0x043:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d84e8 +0x048:  mov    %ebx,0x4(%esp)
081d84ec +0x04c:  mov    %eax,(%esp)
081d84ef +0x04f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d84f4 +0x054:  mov    %eax,-0x1c(%ebp)
081d84f7 +0x057:  mov    -0x1c(%ebp),%eax
081d84fa +0x05a:  mov    0x330(%eax),%eax
081d8500 +0x060:  mov    %eax,-0x18(%ebp)
081d8503 +0x063:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8508 +0x068:  movl   $0x1,0x4(%esp)
081d8510 +0x070:  mov    %eax,(%esp)
081d8513 +0x073:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
081d8518 +0x078:  mov    %eax,-0x14(%ebp)
081d851b +0x07b:  lea    -0x24(%ebp),%eax
081d851e +0x07e:  mov    %eax,(%esp)
081d8521 +0x081:  call   0822b1de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x888>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x888
081d8526 +0x086:  movb   $0x0,-0xd(%ebp)
081d852a +0x08a:  lea    -0x24(%ebp),%eax
081d852d +0x08d:  mov    %eax,0x8(%esp)
081d8531 +0x091:  mov    -0x18(%ebp),%eax
081d8534 +0x094:  mov    %eax,0x4(%esp)
081d8538 +0x098:  mov    -0x14(%ebp),%eax
081d853b +0x09b:  mov    %eax,(%esp)
081d853e +0x09e:  call   0822b2d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x97a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x97a
081d8543 +0x0a3:  mov    %al,-0xd(%ebp)
081d8546 +0x0a6:  movzbl -0xd(%ebp),%eax
081d854a +0x0aa:  xor    $0x1,%eax
081d854d +0x0ad:  test   %al,%al
081d854f +0x0af:  je     081d855b <+0xbb>
081d8551 +0x0b1:  mov    $0x0,%eax
081d8556 +0x0b6:  jmp    081d85f6 <+0x156>
081d855b +0x0bb:  mov    0x18(%ebp),%eax
081d855e +0x0be:  mov    %eax,(%esp)
081d8561 +0x0c1:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
081d8566 +0x0c6:  movzwl -0x24(%ebp),%eax
081d856a +0x0ca:  movzwl %ax,%eax
081d856d +0x0cd:  mov    %eax,0x8(%esp)
081d8571 +0x0d1:  mov    0x14(%ebp),%eax
081d8574 +0x0d4:  mov    %eax,0x4(%esp)
081d8578 +0x0d8:  mov    0x8(%ebp),%eax
081d857b +0x0db:  mov    %eax,(%esp)
081d857e +0x0de:  call   081d842e <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt>  ; Dispatcher_MonstercardBind::calcurate_rarity(ENUM_RARITY, unsigned short)
081d8583 +0x0e3:  mov    %eax,-0xc(%ebp)
081d8586 +0x0e6:  movl   $0x2710,-0x20(%ebp)
081d858d +0x0ed:  mov    0x8(%ebp),%eax
081d8590 +0x0f0:  mov    0x4(%eax),%eax
081d8593 +0x0f3:  lea    -0x20(%ebp),%edx
081d8596 +0x0f6:  mov    %edx,0x4(%esp)
081d859a +0x0fa:  mov    %eax,(%esp)
081d859d +0x0fd:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081d85a2 +0x102:  movzwl -0x22(%ebp),%edx
081d85a6 +0x106:  movzwl %dx,%edx
081d85a9 +0x109:  cmp    %edx,%eax
081d85ab +0x10b:  setb   %al
081d85ae +0x10e:  test   %al,%al
081d85b0 +0x110:  je     081d85d5 <+0x135>
081d85b2 +0x112:  mov    0x18(%ebp),%eax
081d85b5 +0x115:  mov    %eax,0xc(%esp)
081d85b9 +0x119:  mov    -0xc(%ebp),%eax
081d85bc +0x11c:  mov    %eax,0x8(%esp)
081d85c0 +0x120:  movl   $0x0,0x4(%esp)
081d85c8 +0x128:  mov    0x8(%ebp),%eax
081d85cb +0x12b:  mov    %eax,(%esp)
081d85ce +0x12e:  call   081d85fc <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE>  ; Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081d85d3 +0x133:  jmp    081d85f6 <+0x156>
081d85d5 +0x135:  mov    0x18(%ebp),%eax
081d85d8 +0x138:  mov    %eax,0xc(%esp)
081d85dc +0x13c:  mov    -0xc(%ebp),%eax
081d85df +0x13f:  mov    %eax,0x8(%esp)
081d85e3 +0x143:  movl   $0x1,0x4(%esp)
081d85eb +0x14b:  mov    0x8(%ebp),%eax
081d85ee +0x14e:  mov    %eax,(%esp)
081d85f1 +0x151:  call   081d85fc <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE>  ; Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081d85f6 +0x156:  mov    -0x4(%ebp),%ebx
081d85f9 +0x159:  leave
081d85fa +0x15a:  ret
081d85fb +0x15b:  nop
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::get_bind_result @ 0x81d84a0

/* Dispatcher_MonstercardBind::get_bind_result(CUser*, short, ENUM_RARITY,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::get_bind_result
          (Dispatcher_MonstercardBind *this,CUserCharacInfo *param_1,undefined4 param_2,
          undefined4 param_4,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_5)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_65 [2];
  int local_63;
  undefined2 local_28;
  ushort local_26;
  ulong local_24;
  int local_20;
  int local_1c;
  STExpertJobScript *local_18;
  char local_11;
  undefined4 local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacInvenR(param_1);
  CInventory::GetInvenSlot((int)local_65,iVar1);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = CDataManager::find_item(this_00,local_63);
  local_1c = *(int *)(local_20 + 0x330);
  iVar1 = G_CDataManager();
  local_18 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar1);
  STExpertJobScript::stMonsterCardBindRate::stMonsterCardBindRate
            ((stMonsterCardBindRate *)&local_28);
  local_11 = 0;
  local_11 = STExpertJobScript::GetMonsterCardBindRate
                       (local_18,local_1c,(stMonsterCardBindRate *)&local_28);
  if (local_11 == '\x01') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(param_5);
    local_10 = calcurate_rarity(this,param_4,local_28);
    local_24 = 10000;
    uVar3 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_24);
    if (uVar3 < local_26) {
      uVar2 = _bind_process(this,0,local_10,param_5);
    }
    else {
      uVar2 = _bind_process(this,1,local_10,param_5);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

# _bind_process

`_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE`

`Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d85fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d85fc  _ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE
#           Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x081d85fc, 0x081d88af]
081d85fc +0x000:  push   %ebp
081d85fd +0x001:  mov    %esp,%ebp
081d85ff +0x003:  push   %ebx
081d8600 +0x004:  sub    $0x74,%esp
081d8603 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8608 +0x00c:  movl   $0x1,0x4(%esp)
081d8610 +0x014:  mov    %eax,(%esp)
081d8613 +0x017:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
081d8618 +0x01c:  mov    %eax,-0x24(%ebp)
081d861b +0x01f:  movl   $0x0,-0x20(%ebp)
081d8622 +0x026:  mov    0xc(%ebp),%eax
081d8625 +0x029:  test   %eax,%eax
081d8627 +0x02b:  je     081d8630 <+0x34>
081d8629 +0x02d:  cmp    $0x1,%eax
081d862c +0x030:  je     081d8640 <+0x44>
081d862e +0x032:  jmp    081d8650 <+0x54>
081d8630 +0x034:  mov    -0x24(%ebp),%eax
081d8633 +0x037:  mov    %eax,(%esp)
081d8636 +0x03a:  call   0822b358 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa02>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa02
081d863b +0x03f:  mov    %eax,-0x20(%ebp)
081d863e +0x042:  jmp    081d8665 <+0x69>
081d8640 +0x044:  mov    -0x24(%ebp),%eax
081d8643 +0x047:  mov    %eax,(%esp)
081d8646 +0x04a:  call   0822b366 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa10
081d864b +0x04f:  mov    %eax,-0x20(%ebp)
081d864e +0x052:  jmp    081d8665 <+0x69>
081d8650 +0x054:  mov    0x14(%ebp),%eax
081d8653 +0x057:  mov    %eax,(%esp)
081d8656 +0x05a:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
081d865b +0x05f:  mov    $0x0,%eax
081d8660 +0x064:  jmp    081d88ab <+0x2af>
081d8665 +0x069:  mov    0x10(%ebp),%edx
081d8668 +0x06c:  mov    %edx,%eax
081d866a +0x06e:  add    %eax,%eax
081d866c +0x070:  add    %edx,%eax
081d866e +0x072:  shl    $0x2,%eax
081d8671 +0x075:  add    $0x10,%eax
081d8674 +0x078:  add    -0x20(%ebp),%eax
081d8677 +0x07b:  mov    %eax,-0x1c(%ebp)
081d867a +0x07e:  mov    0x10(%ebp),%edx
081d867d +0x081:  mov    -0x20(%ebp),%eax
081d8680 +0x084:  mov    (%eax,%edx,4),%eax
081d8683 +0x087:  mov    %eax,-0x18(%ebp)
081d8686 +0x08a:  mov    -0x1c(%ebp),%eax
081d8689 +0x08d:  mov    %eax,(%esp)
081d868c +0x090:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
081d8691 +0x095:  test   %eax,%eax
081d8693 +0x097:  sete   %al
081d8696 +0x09a:  test   %al,%al
081d8698 +0x09c:  je     081d86eb <+0xef>
081d869a +0x09e:  mov    -0x1c(%ebp),%eax
081d869d +0x0a1:  mov    %eax,(%esp)
081d86a0 +0x0a4:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
081d86a5 +0x0a9:  mov    %eax,%ebx
081d86a7 +0x0ab:  movl   $0x5,0xc(%esp)
081d86af +0x0b3:  movl   $0x44b1,0x8(%esp)
081d86b7 +0x0bb:  movl   $&_ZZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EEE19__PRETTY_FUNCTION__,0x4(%esp)
081d86bf +0x0c3:  lea    -0x64(%ebp),%eax
081d86c2 +0x0c6:  mov    %eax,(%esp)
081d86c5 +0x0c9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d86ca +0x0ce:  mov    %ebx,0x8(%esp)
081d86ce +0x0d2:  movl   $"MonstercardBind Error : size(%d)",0x4(%esp)
081d86d6 +0x0da:  lea    -0x64(%ebp),%eax
081d86d9 +0x0dd:  mov    %eax,(%esp)
081d86dc +0x0e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d86e1 +0x0e5:  mov    $0x0,%eax
081d86e6 +0x0ea:  jmp    081d88ab <+0x2af>
081d86eb +0x0ef:  mov    -0x1c(%ebp),%eax
081d86ee +0x0f2:  mov    %eax,(%esp)
081d86f1 +0x0f5:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
081d86f6 +0x0fa:  test   %eax,%eax
081d86f8 +0x0fc:  je     081d8707 <+0x10b>
081d86fa +0x0fe:  cmpl   $0x0,-0x18(%ebp)
081d86fe +0x102:  jne    081d8707 <+0x10b>
081d8700 +0x104:  mov    $0x1,%eax
081d8705 +0x109:  jmp    081d870c <+0x110>
081d8707 +0x10b:  mov    $0x0,%eax
081d870c +0x110:  test   %al,%al
081d870e +0x112:  je     081d8768 <+0x16c>
081d8710 +0x114:  mov    -0x1c(%ebp),%eax
081d8713 +0x117:  mov    %eax,(%esp)
081d8716 +0x11a:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
081d871b +0x11f:  mov    %eax,%ebx
081d871d +0x121:  movl   $0x5,0xc(%esp)
081d8725 +0x129:  movl   $0x44b6,0x8(%esp)
081d872d +0x131:  movl   $&_ZZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EEE19__PRETTY_FUNCTION__,0x4(%esp)
081d8735 +0x139:  lea    -0x54(%ebp),%eax
081d8738 +0x13c:  mov    %eax,(%esp)
081d873b +0x13f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d8740 +0x144:  mov    -0x18(%ebp),%eax
081d8743 +0x147:  mov    %eax,0xc(%esp)
081d8747 +0x14b:  mov    %ebx,0x8(%esp)
081d874b +0x14f:  movl   $"MonstercardBind Error : size(%d), sum(%d)",0x4(%esp)
081d8753 +0x157:  lea    -0x54(%ebp),%eax
081d8756 +0x15a:  mov    %eax,(%esp)
081d8759 +0x15d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d875e +0x162:  mov    $0x0,%eax
081d8763 +0x167:  jmp    081d88ab <+0x2af>
081d8768 +0x16c:  mov    -0x18(%ebp),%eax
081d876b +0x16f:  sub    $0x1,%eax
081d876e +0x172:  mov    %eax,-0x44(%ebp)
081d8771 +0x175:  mov    0x8(%ebp),%eax
081d8774 +0x178:  mov    0x4(%eax),%eax
081d8777 +0x17b:  lea    -0x44(%ebp),%edx
081d877a +0x17e:  mov    %edx,0x4(%esp)
081d877e +0x182:  mov    %eax,(%esp)
081d8781 +0x185:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081d8786 +0x18a:  mov    %eax,-0x14(%ebp)
081d8789 +0x18d:  addl   $0x1,-0x14(%ebp)
081d878d +0x191:  movl   $0x0,-0x10(%ebp)
081d8794 +0x198:  movl   $0x0,-0xc(%ebp)
081d879b +0x19f:  jmp    081d8841 <+0x245>
081d87a0 +0x1a4:  mov    -0x10(%ebp),%eax
081d87a3 +0x1a7:  cmp    -0x14(%ebp),%eax
081d87a6 +0x1aa:  jge    081d87d0 <+0x1d4>
081d87a8 +0x1ac:  mov    -0xc(%ebp),%eax
081d87ab +0x1af:  mov    %eax,0x4(%esp)
081d87af +0x1b3:  mov    -0x1c(%ebp),%eax
081d87b2 +0x1b6:  mov    %eax,(%esp)
081d87b5 +0x1b9:  call   082370d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc77c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc77c
081d87ba +0x1be:  movzwl 0x4(%eax),%eax
081d87be +0x1c2:  movzwl %ax,%eax
081d87c1 +0x1c5:  add    -0x10(%ebp),%eax
081d87c4 +0x1c8:  cmp    -0x14(%ebp),%eax
081d87c7 +0x1cb:  jl     081d87d0 <+0x1d4>
081d87c9 +0x1cd:  mov    $0x1,%eax
081d87ce +0x1d2:  jmp    081d87d5 <+0x1d9>
081d87d0 +0x1d4:  mov    $0x0,%eax
081d87d5 +0x1d9:  test   %al,%al
081d87d7 +0x1db:  je     081d8821 <+0x225>
081d87d9 +0x1dd:  movl   $0x1,-0x38(%ebp)
081d87e0 +0x1e4:  mov    -0xc(%ebp),%eax
081d87e3 +0x1e7:  mov    %eax,0x4(%esp)
081d87e7 +0x1eb:  mov    -0x1c(%ebp),%eax
081d87ea +0x1ee:  mov    %eax,(%esp)
081d87ed +0x1f1:  call   082370d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc77c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc77c
081d87f2 +0x1f6:  mov    %eax,%edx
081d87f4 +0x1f8:  lea    -0x40(%ebp),%eax
081d87f7 +0x1fb:  lea    -0x38(%ebp),%ecx
081d87fa +0x1fe:  mov    %ecx,0x8(%esp)
081d87fe +0x202:  mov    %edx,0x4(%esp)
081d8802 +0x206:  mov    %eax,(%esp)
081d8805 +0x209:  call   08135ba6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ad
081d880a +0x20e:  sub    $0x4,%esp
081d880d +0x211:  lea    -0x40(%ebp),%eax
081d8810 +0x214:  mov    %eax,0x4(%esp)
081d8814 +0x218:  mov    0x14(%ebp),%eax
081d8817 +0x21b:  mov    %eax,(%esp)
081d881a +0x21e:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081d881f +0x223:  jmp    081d885a <+0x25e>
081d8821 +0x225:  mov    -0xc(%ebp),%eax
081d8824 +0x228:  mov    %eax,0x4(%esp)
081d8828 +0x22c:  mov    -0x1c(%ebp),%eax
081d882b +0x22f:  mov    %eax,(%esp)
081d882e +0x232:  call   082370d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc77c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc77c
081d8833 +0x237:  movzwl 0x4(%eax),%eax
081d8837 +0x23b:  movzwl %ax,%eax
081d883a +0x23e:  add    %eax,-0x10(%ebp)
081d883d +0x241:  addl   $0x1,-0xc(%ebp)
081d8841 +0x245:  mov    -0x1c(%ebp),%eax
081d8844 +0x248:  mov    %eax,(%esp)
081d8847 +0x24b:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
081d884c +0x250:  cmp    -0xc(%ebp),%eax
081d884f +0x253:  seta   %al
081d8852 +0x256:  test   %al,%al
081d8854 +0x258:  jne    081d87a0 <+0x1a4>
081d885a +0x25e:  mov    0x14(%ebp),%eax
081d885d +0x261:  mov    %eax,(%esp)
081d8860 +0x264:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
081d8865 +0x269:  test   %al,%al
081d8867 +0x26b:  je     081d88a6 <+0x2aa>
081d8869 +0x26d:  movl   $0x5,0xc(%esp)
081d8871 +0x275:  movl   $0x44ca,0x8(%esp)
081d8879 +0x27d:  movl   $&_ZZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EEE19__PRETTY_FUNCTION__,0x4(%esp)
081d8881 +0x285:  lea    -0x34(%ebp),%eax
081d8884 +0x288:  mov    %eax,(%esp)
081d8887 +0x28b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d888c +0x290:  movl   $"Dispatcher_MonstercardBind::_bind_process ERROR : result is empty",0x4(%esp)
081d8894 +0x298:  lea    -0x34(%ebp),%eax
081d8897 +0x29b:  mov    %eax,(%esp)
081d889a +0x29e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d889f +0x2a3:  mov    $0x0,%eax
081d88a4 +0x2a8:  jmp    081d88ab <+0x2af>
081d88a6 +0x2aa:  mov    $0x1,%eax
081d88ab +0x2af:  mov    -0x4(%ebp),%ebx
081d88ae +0x2b2:  leave
081d88af +0x2b3:  ret
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::_bind_process @ 0x81d85fc

/* Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE,
   ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::_bind_process
          (Dispatcher_MonstercardBind *this,int param_2,int param_3,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  ulong local_48;
  int local_44 [2];
  undefined4 local_3c;
  cMyTrace local_38 [16];
  STExpertJobScript *local_28;
  int local_24;
  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
  *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar3 = G_CDataManager();
  local_28 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_24 = 0;
  if (param_2 == 0) {
    local_24 = STExpertJobScript::GetSpecialBindInfo(local_28);
  }
  else {
    if (param_2 != 1) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(param_4);
      return 0;
    }
    local_24 = STExpertJobScript::GetCommonBindInfo(local_28);
  }
  local_20 = (vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              *)(param_3 * 0xc + 0x10 + local_24);
  local_1c = *(int *)(local_24 + param_3 * 4);
  iVar3 = std::
          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
          ::size(local_20);
  if (iVar3 == 0) {
    uVar4 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_20);
    cMyTrace::cMyTrace(local_68,
                       "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                       ,0x44b1,5);
    cMyTrace::operator()(local_68,"MonstercardBind Error : size(%d)",uVar4);
    uVar4 = 0;
  }
  else {
    iVar3 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_20);
    if ((iVar3 == 0) || (local_1c != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = std::
              vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              ::size(local_20);
      cMyTrace::cMyTrace(local_58,
                         "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                         ,0x44b6,5);
      cMyTrace::operator()(local_58,"MonstercardBind Error : size(%d), sum(%d)",uVar4,local_1c);
      uVar4 = 0;
    }
    else {
      local_48 = local_1c - 1;
      local_18 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_48);
      local_18 = local_18 + 1;
      local_14 = 0;
      local_10 = 0;
      while (uVar6 = std::
                     vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                     ::size(local_20), local_10 < uVar6) {
        if ((local_14 < local_18) &&
           (iVar3 = std::
                    vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                    ::operator[](local_20,local_10),
           local_18 <= (int)((uint)*(ushort *)(iVar3 + 4) + local_14))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_3c = 1;
          piVar5 = (int *)std::
                          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                          ::operator[](local_20,local_10);
          std::make_pair<int_const&,int>(local_44,piVar5);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (param_4,(pair *)local_44);
          break;
        }
        iVar3 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::operator[](local_20,local_10);
        local_14 = local_14 + (uint)*(ushort *)(iVar3 + 4);
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 == '\0') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_38,
                           "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                           ,0x44ca,5);
        cMyTrace::operator()
                  (local_38,"Dispatcher_MonstercardBind::_bind_process ERROR : result is empty");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```

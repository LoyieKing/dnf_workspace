# execute

`_ZN11game_master20CAddItemPollutionCmd7executeEv`

`game_master::CAddItemPollutionCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAddItemPollutionCmd` | `0x084aaa00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aaa00  _ZN11game_master20CAddItemPollutionCmd7executeEv
#           game_master::CAddItemPollutionCmd::execute()
# range [0x084aaa00, 0x084aacb7]
084aaa00 +0x000:  push   %ebp
084aaa01 +0x001:  mov    %esp,%ebp
084aaa03 +0x003:  push   %esi
084aaa04 +0x004:  push   %ebx
084aaa05 +0x005:  sub    $0x60,%esp
084aaa08 +0x008:  mov    0x8(%ebp),%eax
084aaa0b +0x00b:  mov    0x8(%eax),%eax
084aaa0e +0x00e:  cmp    $0xffffffff,%eax
084aaa11 +0x011:  jne    084aaa4e <+0x4e>
084aaa13 +0x013:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084aaa1a +0x01a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084aaa1f +0x01f:  lea    &_ZL14gUnicodeBuffer+0xac54(%eax),%esi
084aaa25 +0x025:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084aaa2c +0x02c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084aaa31 +0x031:  mov    %eax,%ebx
084aaa33 +0x033:  mov    0x8(%ebp),%eax
084aaa36 +0x036:  mov    %eax,(%esp)
084aaa39 +0x039:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aaa3e +0x03e:  mov    %esi,0x8(%esp)
084aaa42 +0x042:  mov    %ebx,0x4(%esp)
084aaa46 +0x046:  mov    %eax,(%esp)
084aaa49 +0x049:  call   086b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>  ; WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
084aaa4e +0x04e:  movl   $0x64,-0x1c(%ebp)
084aaa55 +0x055:  mov    0x8(%ebp),%eax
084aaa58 +0x058:  mov    0x8(%eax),%ebx
084aaa5b +0x05b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084aaa60 +0x060:  mov    %ebx,0x4(%esp)
084aaa64 +0x064:  mov    %eax,(%esp)
084aaa67 +0x067:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084aaa6c +0x06c:  mov    %eax,-0x18(%ebp)
084aaa6f +0x06f:  cmpl   $0x0,-0x18(%ebp)
084aaa73 +0x073:  je     084aaaa7 <+0xa7>
084aaa75 +0x075:  mov    -0x18(%ebp),%eax
084aaa78 +0x078:  mov    %eax,(%esp)
084aaa7b +0x07b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084aaa80 +0x080:  test   %al,%al
084aaa82 +0x082:  je     084aaaa7 <+0xa7>
084aaa84 +0x084:  mov    -0x18(%ebp),%eax
084aaa87 +0x087:  mov    %eax,(%esp)
084aaa8a +0x08a:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
084aaa8f +0x08f:  cmp    -0x1c(%ebp),%eax
084aaa92 +0x092:  setl   %al
084aaa95 +0x095:  test   %al,%al
084aaa97 +0x097:  je     084aaaa7 <+0xa7>
084aaa99 +0x099:  mov    -0x18(%ebp),%eax
084aaa9c +0x09c:  mov    %eax,(%esp)
084aaa9f +0x09f:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
084aaaa4 +0x0a4:  mov    %eax,-0x1c(%ebp)
084aaaa7 +0x0a7:  mov    0x8(%ebp),%eax
084aaaaa +0x0aa:  mov    0x8(%eax),%ebx
084aaaad +0x0ad:  mov    0x8(%ebp),%eax
084aaab0 +0x0b0:  mov    %eax,(%esp)
084aaab3 +0x0b3:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aaab8 +0x0b8:  movl   $0x0,0x14(%esp)
084aaac0 +0x0c0:  lea    -0x30(%ebp),%edx
084aaac3 +0x0c3:  mov    %edx,0x10(%esp)
084aaac7 +0x0c7:  movl   $0x6,0xc(%esp)
084aaacf +0x0cf:  mov    -0x1c(%ebp),%edx
084aaad2 +0x0d2:  mov    %edx,0x8(%esp)
084aaad6 +0x0d6:  mov    %ebx,0x4(%esp)
084aaada +0x0da:  mov    %eax,(%esp)
084aaadd +0x0dd:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
084aaae2 +0x0e2:  mov    %eax,-0x14(%ebp)
084aaae5 +0x0e5:  cmpl   $0x0,-0x14(%ebp)
084aaae9 +0x0e9:  js     084aacaa <+0x2aa>
084aaaef +0x0ef:  mov    -0x30(%ebp),%eax
084aaaf2 +0x0f2:  mov    %eax,(%esp)
084aaaf5 +0x0f5:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
084aaafa +0x0fa:  mov    %eax,%ebx
084aaafc +0x0fc:  mov    0x8(%ebp),%eax
084aaaff +0x0ff:  mov    %eax,(%esp)
084aab02 +0x102:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aab07 +0x107:  mov    %eax,(%esp)
084aab0a +0x10a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084aab0f +0x10f:  mov    -0x14(%ebp),%edx
084aab12 +0x112:  mov    %edx,0x8(%esp)
084aab16 +0x116:  mov    %ebx,0x4(%esp)
084aab1a +0x11a:  mov    %eax,(%esp)
084aab1d +0x11d:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
084aab22 +0x122:  mov    %eax,-0x10(%ebp)
084aab25 +0x125:  cmpl   $0x0,-0x10(%ebp)
084aab29 +0x129:  je     084aacad <+0x2ad>
084aab2f +0x12f:  mov    -0x10(%ebp),%eax
084aab32 +0x132:  add    $0x11,%eax
084aab35 +0x135:  mov    %eax,(%esp)
084aab38 +0x138:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084aab3d +0x13d:  test   %al,%al
084aab3f +0x13f:  sete   %al
084aab42 +0x142:  test   %al,%al
084aab44 +0x144:  je     084aabf6 <+0x1f6>
084aab4a +0x14a:  movl   $0x4,(%esp)
084aab51 +0x151:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
084aab56 +0x156:  add    $0x1,%eax
084aab59 +0x159:  mov    %eax,-0xc(%ebp)
084aab5c +0x15c:  cmpl   $0x0,-0xc(%ebp)
084aab60 +0x160:  jle    084aabf6 <+0x1f6>
084aab66 +0x166:  cmpl   $0x4,-0xc(%ebp)
084aab6a +0x16a:  jg     084aabf6 <+0x1f6>
084aab70 +0x170:  lea    -0x38(%ebp),%eax
084aab73 +0x173:  mov    %eax,(%esp)
084aab76 +0x176:  call   0822aea6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x550>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x550
084aab7b +0x17b:  mov    -0xc(%ebp),%eax
084aab7e +0x17e:  mov    %eax,-0x38(%ebp)
084aab81 +0x181:  cmpl   $0x0,-0x18(%ebp)
084aab85 +0x185:  je     084aabf6 <+0x1f6>
084aab87 +0x187:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
084aab8c +0x18c:  lea    -0x38(%ebp),%edx
084aab8f +0x18f:  mov    %edx,0xc(%esp)
084aab93 +0x193:  mov    -0x10(%ebp),%edx
084aab96 +0x196:  mov    %edx,0x8(%esp)
084aab9a +0x19a:  mov    -0x18(%ebp),%edx
084aab9d +0x19d:  mov    %edx,0x4(%esp)
084aaba1 +0x1a1:  mov    %eax,(%esp)
084aaba4 +0x1a4:  call   08234b30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa1da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa1da
084aaba9 +0x1a9:  movb   $0x0,-0x39(%ebp)
084aabad +0x1ad:  movw   $0x0,-0x3c(%ebp)
084aabb3 +0x1b3:  mov    -0x10(%ebp),%eax
084aabb6 +0x1b6:  lea    0x11(%eax),%edx
084aabb9 +0x1b9:  lea    -0x3c(%ebp),%eax
084aabbc +0x1bc:  mov    %eax,0x8(%esp)
084aabc0 +0x1c0:  lea    -0x39(%ebp),%eax
084aabc3 +0x1c3:  mov    %eax,0x4(%esp)
084aabc7 +0x1c7:  mov    %edx,(%esp)
084aabca +0x1ca:  call   0844d490 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa6
084aabcf +0x1cf:  movzwl -0x3c(%ebp),%eax
084aabd3 +0x1d3:  movzwl %ax,%edx
084aabd6 +0x1d6:  movzbl -0x39(%ebp),%eax
084aabda +0x1da:  or     $0xffffff80,%eax
084aabdd +0x1dd:  movzbl %al,%eax
084aabe0 +0x1e0:  mov    -0x10(%ebp),%ecx
084aabe3 +0x1e3:  add    $0x11,%ecx
084aabe6 +0x1e6:  mov    %edx,0x8(%esp)
084aabea +0x1ea:  mov    %eax,0x4(%esp)
084aabee +0x1ee:  mov    %ecx,(%esp)
084aabf1 +0x1f1:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
084aabf6 +0x1f6:  cmpl   $0x0,-0x14(%ebp)
084aabfa +0x1fa:  js     084aacb0 <+0x2b0>
084aac00 +0x200:  mov    0x8(%ebp),%eax
084aac03 +0x203:  mov    %eax,(%esp)
084aac06 +0x206:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aac0b +0x20b:  mov    %eax,(%esp)
084aac0e +0x20e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084aac13 +0x213:  mov    %eax,%esi
084aac15 +0x215:  mov    0x8(%ebp),%eax
084aac18 +0x218:  mov    %eax,(%esp)
084aac1b +0x21b:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aac20 +0x220:  mov    %eax,(%esp)
084aac23 +0x223:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084aac28 +0x228:  movl   $0x0,0x4(%esp)
084aac30 +0x230:  mov    %eax,(%esp)
084aac33 +0x233:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084aac38 +0x238:  mov    %eax,%ebx
084aac3a +0x23a:  movl   $0x0,0xc(%esp)
084aac42 +0x242:  movl   $0x5b0,0x8(%esp)
084aac4a +0x24a:  movl   $&_ZZN11game_master20CAddItemPollutionCmd7executeEvE19__PRETTY_FUNCTION__,0x4(%esp)
084aac52 +0x252:  lea    -0x2c(%ebp),%eax
084aac55 +0x255:  mov    %eax,(%esp)
084aac58 +0x258:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084aac5d +0x25d:  mov    -0x14(%ebp),%eax
084aac60 +0x260:  mov    %eax,0x10(%esp)
084aac64 +0x264:  mov    %esi,0xc(%esp)
084aac68 +0x268:  mov    %ebx,0x8(%esp)
084aac6c +0x26c:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
084aac74 +0x274:  lea    -0x2c(%ebp),%eax
084aac77 +0x277:  mov    %eax,(%esp)
084aac7a +0x27a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084aac7f +0x27f:  mov    -0x30(%ebp),%ebx
084aac82 +0x282:  mov    0x8(%ebp),%eax
084aac85 +0x285:  mov    %eax,(%esp)
084aac88 +0x288:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aac8d +0x28d:  mov    -0x14(%ebp),%edx
084aac90 +0x290:  mov    %edx,0xc(%esp)
084aac94 +0x294:  mov    %ebx,0x8(%esp)
084aac98 +0x298:  movl   $0x1,0x4(%esp)
084aaca0 +0x2a0:  mov    %eax,(%esp)
084aaca3 +0x2a3:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084aaca8 +0x2a8:  jmp    084aacb1 <+0x2b1>
084aacaa +0x2aa:  nop
084aacab +0x2ab:  jmp    084aacb1 <+0x2b1>
084aacad +0x2ad:  nop
084aacae +0x2ae:  jmp    084aacb1 <+0x2b1>
084aacb0 +0x2b0:  nop
084aacb1 +0x2b1:  add    $0x60,%esp
084aacb4 +0x2b4:  pop    %ebx
084aacb5 +0x2b5:  pop    %esi
084aacb6 +0x2b6:  pop    %ebp
084aacb7 +0x2b7:  ret
```

## 反编译 C

```c
// game_master::CAddItemPollutionCmd::execute @ 0x84aaa00

/* game_master::CAddItemPollutionCmd::execute() */

void __thiscall game_master::CAddItemPollutionCmd::execute(CAddItemPollutionCmd *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CUser *pCVar4;
  CDataManager *this_00;
  CUserCharacInfo *pCVar5;
  CInventory *this_01;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort local_40;
  byte local_3d;
  int local_3c [2];
  undefined4 local_34;
  cMyTrace local_30 [16];
  int local_20;
  CStackableItem *local_1c;
  int local_18;
  Inven_Item *local_14;
  int local_10;
  
  if (*(int *)(this + 8) == -1) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
    WongWork::CHandlePremium::handleSetUserPCRoom(pCVar4,lVar3,iVar2 + 0x15180);
  }
  local_20 = 100;
  iVar2 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_1c = (CStackableItem *)CDataManager::find_item(this_00,iVar2);
  if (((local_1c != (CStackableItem *)0x0) &&
      (cVar1 = CItem::is_stackable((CItem *)local_1c), cVar1 != '\0')) &&
     (iVar2 = CStackableItem::getStackableLimit(local_1c), iVar2 < local_20)) {
    local_20 = CStackableItem::getStackableLimit(local_1c);
  }
  uVar6 = *(undefined4 *)(this + 8);
  pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_18 = CUser::AddItem(pCVar4,uVar6,local_20,6,&local_34,0);
  if (-1 < local_18) {
    iVar2 = GetInvenTypeFromItemSpace(local_34);
    pCVar5 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
    this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(pCVar5);
    local_14 = (Inven_Item *)CInventory::GetInvenRef(this_01,iVar2,local_18);
    if (local_14 != (Inven_Item *)0x0) {
      cVar1 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_14 + 0x11));
      if (cVar1 == '\0') {
        local_10 = get_rand_int(4);
        local_10 = local_10 + 1;
        if ((0 < local_10) && (local_10 < 5)) {
          stInvestAmplifyOption_t::stInvestAmplifyOption_t((stInvestAmplifyOption_t *)local_3c);
          local_3c[0] = local_10;
          if (local_1c != (CStackableItem *)0x0) {
            CItemAmplifier::investAmplifyOption
                      (GlobalData::s_itemAmplifier_,(CItem *)local_1c,local_14,
                       (stInvestAmplifyOption_t *)local_3c);
            local_3d = 0;
            local_40 = 0;
            stAmplifyOption_t::getValues((stAmplifyOption_t *)(local_14 + 0x11),&local_3d,&local_40)
            ;
            stAmplifyOption_t::assign
                      ((stAmplifyOption_t *)(local_14 + 0x11),local_3d | 0x80,local_40);
          }
        }
      }
      if (-1 < local_18) {
        pCVar5 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
        pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
        uVar7 = CUser::get_acc_id(pCVar4);
        uVar8 = NumberToString(uVar7,0);
        cMyTrace::cMyTrace(local_30,"virtual void game_master::CAddItemPollutionCmd::execute()",
                           0x5b0,0);
        cMyTrace::operator()(local_30,"%s:\'%s\' GM Mode Add Item(%d).",uVar8,uVar6,local_18);
        pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
        CUser::SendUpdateItemList(pCVar4,1,local_34,local_18);
      }
    }
  }
  return;
}
```

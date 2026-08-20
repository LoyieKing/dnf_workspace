# check_error

`_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_BuyItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081be46a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081be46a  _ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_BuyItem::check_error(CUser*, MSG_BASE&)
# range [0x081be46a, 0x081be657]
081be46a +0x000:  push   %ebp
081be46b +0x001:  mov    %esp,%ebp
081be46d +0x003:  push   %esi
081be46e +0x004:  push   %ebx
081be46f +0x005:  sub    $0x30,%esp
081be472 +0x008:  mov    0x10(%ebp),%eax
081be475 +0x00b:  mov    %eax,-0x10(%ebp)
081be478 +0x00e:  mov    -0x10(%ebp),%eax
081be47b +0x011:  mov    0xd(%eax),%esi
081be47e +0x014:  mov    -0x10(%ebp),%eax
081be481 +0x017:  mov    0x15(%eax),%ebx
081be484 +0x01a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081be489 +0x01f:  mov    %esi,0x8(%esp)
081be48d +0x023:  mov    %ebx,0x4(%esp)
081be491 +0x027:  mov    %eax,(%esp)
081be494 +0x02a:  call   08362be6 <_ZN12CDataManager18checkValidShopItemEjm>  ; CDataManager::checkValidShopItem(unsigned int, unsigned long)
081be499 +0x02f:  xor    $0x1,%eax
081be49c +0x032:  test   %al,%al
081be49e +0x034:  je     081be511 <+0xa7>
081be4a0 +0x036:  mov    -0x10(%ebp),%eax
081be4a3 +0x039:  mov    0x15(%eax),%eax
081be4a6 +0x03c:  mov    %eax,%ebx
081be4a8 +0x03e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081be4ad +0x043:  mov    0x8cbc(%eax),%eax
081be4b3 +0x049:  mov    %ebx,0x4(%esp)
081be4b7 +0x04d:  mov    %eax,(%esp)
081be4ba +0x050:  call   08513082 <_ZNK9CItemShop13IsOneADayShopEi>  ; CItemShop::IsOneADayShop(int) const
081be4bf +0x055:  test   %al,%al
081be4c1 +0x057:  je     081be4cd <+0x63>
081be4c3 +0x059:  mov    $0x11,%eax
081be4c8 +0x05e:  jmp    081be650 <+0x1e6>
081be4cd +0x063:  mov    0xc(%ebp),%eax
081be4d0 +0x066:  mov    %eax,(%esp)
081be4d3 +0x069:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081be4d8 +0x06e:  movl   $0x0,0x14(%esp)
081be4e0 +0x076:  movl   $0x0,0x10(%esp)
081be4e8 +0x07e:  movl   $0x1,0xc(%esp)
081be4f0 +0x086:  movl   $0x3c9,0x8(%esp)
081be4f8 +0x08e:  mov    0xc(%ebp),%edx
081be4fb +0x091:  mov    %edx,0x4(%esp)
081be4ff +0x095:  mov    %eax,(%esp)
081be502 +0x098:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081be507 +0x09d:  mov    $0xffffffff,%eax
081be50c +0x0a2:  jmp    081be650 <+0x1e6>
081be511 +0x0a7:  mov    0xc(%ebp),%eax
081be514 +0x0aa:  mov    %eax,(%esp)
081be517 +0x0ad:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081be51c +0x0b2:  test   %al,%al
081be51e +0x0b4:  je     081be52a <+0xc0>
081be520 +0x0b6:  mov    $0x13,%eax
081be525 +0x0bb:  jmp    081be650 <+0x1e6>
081be52a +0x0c0:  mov    0xc(%ebp),%eax
081be52d +0x0c3:  mov    %eax,(%esp)
081be530 +0x0c6:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081be535 +0x0cb:  test   %eax,%eax
081be537 +0x0cd:  sete   %al
081be53a +0x0d0:  test   %al,%al
081be53c +0x0d2:  je     081be548 <+0xde>
081be53e +0x0d4:  mov    $0x13,%eax
081be543 +0x0d9:  jmp    081be650 <+0x1e6>
081be548 +0x0de:  mov    0xc(%ebp),%eax
081be54b +0x0e1:  mov    %eax,(%esp)
081be54e +0x0e4:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
081be553 +0x0e9:  test   %al,%al
081be555 +0x0eb:  je     081be561 <+0xf7>
081be557 +0x0ed:  mov    $0x13,%eax
081be55c +0x0f2:  jmp    081be650 <+0x1e6>
081be561 +0x0f7:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081be566 +0x0fc:  movl   $0x3,0xc(%esp)
081be56e +0x104:  movl   $0x1,0x8(%esp)
081be576 +0x10c:  mov    0xc(%ebp),%edx
081be579 +0x10f:  mov    %edx,0x4(%esp)
081be57d +0x113:  mov    %eax,(%esp)
081be580 +0x116:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081be585 +0x11b:  test   %al,%al
081be587 +0x11d:  je     081be593 <+0x129>
081be589 +0x11f:  mov    $0xd1,%eax
081be58e +0x124:  jmp    081be650 <+0x1e6>
081be593 +0x129:  mov    0xc(%ebp),%eax
081be596 +0x12c:  mov    %eax,(%esp)
081be599 +0x12f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081be59e +0x134:  cmp    $0x8,%eax
081be5a1 +0x137:  setne  %al
081be5a4 +0x13a:  test   %al,%al
081be5a6 +0x13c:  je     081be5d2 <+0x168>
081be5a8 +0x13e:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081be5ad +0x143:  movl   $0x22,0x8(%esp)
081be5b5 +0x14b:  mov    0xc(%ebp),%edx
081be5b8 +0x14e:  mov    %edx,0x4(%esp)
081be5bc +0x152:  mov    %eax,(%esp)
081be5bf +0x155:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081be5c4 +0x15a:  mov    %eax,-0xc(%ebp)
081be5c7 +0x15d:  cmpl   $0x0,-0xc(%ebp)
081be5cb +0x161:  je     081be5d2 <+0x168>
081be5cd +0x163:  mov    -0xc(%ebp),%eax
081be5d0 +0x166:  jmp    081be650 <+0x1e6>
081be5d2 +0x168:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081be5d7 +0x16d:  mov    0xc(%ebp),%edx
081be5da +0x170:  mov    %edx,0x4(%esp)
081be5de +0x174:  mov    %eax,(%esp)
081be5e1 +0x177:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081be5e6 +0x17c:  test   %al,%al
081be5e8 +0x17e:  je     081be5f1 <+0x187>
081be5ea +0x180:  mov    $0x3c,%eax
081be5ef +0x185:  jmp    081be650 <+0x1e6>
081be5f1 +0x187:  mov    -0x10(%ebp),%eax
081be5f4 +0x18a:  mov    0x15(%eax),%eax
081be5f7 +0x18d:  mov    %eax,%ebx
081be5f9 +0x18f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081be5fe +0x194:  mov    0x8cbc(%eax),%eax
081be604 +0x19a:  mov    %ebx,0x4(%esp)
081be608 +0x19e:  mov    %eax,(%esp)
081be60b +0x1a1:  call   08513082 <_ZNK9CItemShop13IsOneADayShopEi>  ; CItemShop::IsOneADayShop(int) const
081be610 +0x1a6:  test   %al,%al
081be612 +0x1a8:  je     081be64b <+0x1e1>
081be614 +0x1aa:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081be619 +0x1af:  movl   $0x6d,0x4(%esp)
081be621 +0x1b7:  mov    %eax,(%esp)
081be624 +0x1ba:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081be629 +0x1bf:  mov    (%eax),%edx
081be62b +0x1c1:  add    $0x34,%edx
081be62e +0x1c4:  mov    (%edx),%edx
081be630 +0x1c6:  movl   $0x0,0x4(%esp)
081be638 +0x1ce:  mov    %eax,(%esp)
081be63b +0x1d1:  call   *%edx
081be63d +0x1d3:  xor    $0x1,%eax
081be640 +0x1d6:  test   %al,%al
081be642 +0x1d8:  je     081be64b <+0x1e1>
081be644 +0x1da:  mov    $0x11,%eax
081be649 +0x1df:  jmp    081be650 <+0x1e6>
081be64b +0x1e1:  mov    $0x0,%eax
081be650 +0x1e6:  add    $0x30,%esp
081be653 +0x1e9:  pop    %ebx
081be654 +0x1ea:  pop    %esi
081be655 +0x1eb:  pop    %ebp
081be656 +0x1ec:  ret
081be657 +0x1ed:  nop
```

## 反编译 C

```c
// DisPatcher_BuyItem::check_error @ 0x81be46a

/* DisPatcher_BuyItem::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_BuyItem::check_error(DisPatcher_BuyItem *this,CUser *param_1,MSG_BASE *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this_00;
  int iVar4;
  CHackAnalyzer *pCVar5;
  ServiceRestrictManager *pSVar6;
  CPrivateStoreMgr *this_01;
  int *piVar7;
  
  uVar1 = *(ulong *)(param_2 + 0xd);
  uVar2 = *(uint *)(param_2 + 0x15);
  this_00 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::checkValidShopItem(this_00,uVar2,uVar1);
  if (cVar3 == '\x01') {
    cVar3 = CUser::CheckInTrade(param_1);
    if (cVar3 == '\0') {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar4 == 0) {
        iVar4 = 0x13;
      }
      else {
        cVar3 = CUser::isHackUser(param_1);
        if (cVar3 == '\0') {
          pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,3);
          if (cVar3 == '\0') {
            iVar4 = CUser::get_state(param_1);
            if ((iVar4 == 8) ||
               (iVar4 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x22), iVar4 == 0)) {
              this_01 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_01,param_1);
              if (cVar3 == '\0') {
                iVar4 = G_CDataManager();
                cVar3 = CItemShop::IsOneADayShop(*(int *)(iVar4 + 0x8cbc));
                if (cVar3 != '\0') {
                  piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6d);
                  cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
                  if (cVar3 != '\x01') {
                    return 0x11;
                  }
                }
                iVar4 = 0;
              }
              else {
                iVar4 = 0x3c;
              }
            }
          }
          else {
            iVar4 = 0xd1;
          }
        }
        else {
          iVar4 = 0x13;
        }
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  else {
    iVar4 = G_CDataManager();
    cVar3 = CItemShop::IsOneADayShop(*(int *)(iVar4 + 0x8cbc));
    if (cVar3 == '\0') {
      pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x3c9,1,0,0);
      iVar4 = -1;
    }
    else {
      iVar4 = 0x11;
    }
  }
  return iVar4;
}
```

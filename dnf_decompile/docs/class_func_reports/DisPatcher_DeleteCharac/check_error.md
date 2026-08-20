# check_error

`_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteCharac` | `0x081c14f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c14f0  _ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)
# range [0x081c14f0, 0x081c17bf]
081c14f0 +0x000:  push   %ebp
081c14f1 +0x001:  mov    %esp,%ebp
081c14f3 +0x003:  push   %esi
081c14f4 +0x004:  push   %ebx
081c14f5 +0x005:  sub    $0x40,%esp
081c14f8 +0x008:  mov    0xc(%ebp),%eax
081c14fb +0x00b:  mov    %eax,(%esp)
081c14fe +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c1503 +0x013:  cmp    $0x2,%eax
081c1506 +0x016:  setne  %al
081c1509 +0x019:  test   %al,%al
081c150b +0x01b:  je     081c1517 <+0x27>
081c150d +0x01d:  mov    $0xffffffff,%eax
081c1512 +0x022:  jmp    081c17b9 <+0x2c9>
081c1517 +0x027:  mov    0xc(%ebp),%eax
081c151a +0x02a:  mov    %eax,(%esp)
081c151d +0x02d:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
081c1522 +0x032:  test   %al,%al
081c1524 +0x034:  je     081c1530 <+0x40>
081c1526 +0x036:  mov    $0x13,%eax
081c152b +0x03b:  jmp    081c17b9 <+0x2c9>
081c1530 +0x040:  mov    0x10(%ebp),%eax
081c1533 +0x043:  mov    %eax,-0x14(%ebp)
081c1536 +0x046:  mov    -0x14(%ebp),%eax
081c1539 +0x049:  movzbl 0xd(%eax),%eax
081c153d +0x04d:  movsbl %al,%ebx
081c1540 +0x050:  mov    0xc(%ebp),%eax
081c1543 +0x053:  mov    %eax,(%esp)
081c1546 +0x056:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
081c154b +0x05b:  cmp    %eax,%ebx
081c154d +0x05d:  jge    081c155a <+0x6a>
081c154f +0x05f:  mov    -0x14(%ebp),%eax
081c1552 +0x062:  movzbl 0xd(%eax),%eax
081c1556 +0x066:  test   %al,%al
081c1558 +0x068:  jns    081c1561 <+0x71>
081c155a +0x06a:  mov    $0x1,%eax
081c155f +0x06f:  jmp    081c1566 <+0x76>
081c1561 +0x071:  mov    $0x0,%eax
081c1566 +0x076:  test   %al,%al
081c1568 +0x078:  je     081c1574 <+0x84>
081c156a +0x07a:  mov    $0xfffffffe,%eax
081c156f +0x07f:  jmp    081c17b9 <+0x2c9>
081c1574 +0x084:  mov    -0x14(%ebp),%eax
081c1577 +0x087:  movzbl 0xd(%eax),%eax
081c157b +0x08b:  movsbl %al,%eax
081c157e +0x08e:  mov    %eax,0x4(%esp)
081c1582 +0x092:  mov    0xc(%ebp),%eax
081c1585 +0x095:  mov    %eax,(%esp)
081c1588 +0x098:  call   0864a830 <_ZN5CUser21CheckDeleteCharacTimeEi>  ; CUser::CheckDeleteCharacTime(int)
081c158d +0x09d:  xor    $0x1,%eax
081c1590 +0x0a0:  test   %al,%al
081c1592 +0x0a2:  je     081c159e <+0xae>
081c1594 +0x0a4:  mov    $0x16,%eax
081c1599 +0x0a9:  jmp    081c17b9 <+0x2c9>
081c159e +0x0ae:  mov    0xc(%ebp),%eax
081c15a1 +0x0b1:  mov    %eax,(%esp)
081c15a4 +0x0b4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081c15a9 +0x0b9:  test   %eax,%eax
081c15ab +0x0bb:  je     081c15de <+0xee>
081c15ad +0x0bd:  mov    0xc(%ebp),%eax
081c15b0 +0x0c0:  mov    %eax,(%esp)
081c15b3 +0x0c3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081c15b8 +0x0c8:  mov    %eax,%ebx
081c15ba +0x0ca:  mov    -0x14(%ebp),%eax
081c15bd +0x0cd:  movzbl 0xd(%eax),%eax
081c15c1 +0x0d1:  movsbl %al,%eax
081c15c4 +0x0d4:  mov    %eax,0x4(%esp)
081c15c8 +0x0d8:  mov    0xc(%ebp),%eax
081c15cb +0x0db:  mov    %eax,(%esp)
081c15ce +0x0de:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c15d3 +0x0e3:  cmp    %eax,%ebx
081c15d5 +0x0e5:  jne    081c15de <+0xee>
081c15d7 +0x0e7:  mov    $0x1,%eax
081c15dc +0x0ec:  jmp    081c15e3 <+0xf3>
081c15de +0x0ee:  mov    $0x0,%eax
081c15e3 +0x0f3:  test   %al,%al
081c15e5 +0x0f5:  je     081c1654 <+0x164>
081c15e7 +0x0f7:  mov    -0x14(%ebp),%eax
081c15ea +0x0fa:  movzbl 0xd(%eax),%eax
081c15ee +0x0fe:  movsbl %al,%eax
081c15f1 +0x101:  mov    %eax,0x4(%esp)
081c15f5 +0x105:  mov    0xc(%ebp),%eax
081c15f8 +0x108:  mov    %eax,(%esp)
081c15fb +0x10b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c1600 +0x110:  mov    %eax,%ebx
081c1602 +0x112:  mov    -0x14(%ebp),%eax
081c1605 +0x115:  movzbl 0xd(%eax),%eax
081c1609 +0x119:  movsbl %al,%esi
081c160c +0x11c:  movl   $0x5,0xc(%esp)
081c1614 +0x124:  movl   $0xaa4,0x8(%esp)
081c161c +0x12c:  movl   $&_ZZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1624 +0x134:  lea    -0x34(%ebp),%eax
081c1627 +0x137:  mov    %eax,(%esp)
081c162a +0x13a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c162f +0x13f:  mov    %ebx,0xc(%esp)
081c1633 +0x143:  mov    %esi,0x8(%esp)
081c1637 +0x147:  movl   $"pUser->getCurCharacNo() == recv_pk_del_charac.charac_index %d %d",0x4(%esp)
081c163f +0x14f:  lea    -0x34(%ebp),%eax
081c1642 +0x152:  mov    %eax,(%esp)
081c1645 +0x155:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c164a +0x15a:  mov    $0x16,%eax
081c164f +0x15f:  jmp    081c17b9 <+0x2c9>
081c1654 +0x164:  mov    0xc(%ebp),%eax
081c1657 +0x167:  mov    %eax,(%esp)
081c165a +0x16a:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
081c165f +0x16f:  test   %al,%al
081c1661 +0x171:  je     081c166d <+0x17d>
081c1663 +0x173:  mov    $0x13,%eax
081c1668 +0x178:  jmp    081c17b9 <+0x2c9>
081c166d +0x17d:  mov    0xc(%ebp),%eax
081c1670 +0x180:  mov    %eax,(%esp)
081c1673 +0x183:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081c1678 +0x188:  test   %eax,%eax
081c167a +0x18a:  setne  %al
081c167d +0x18d:  test   %al,%al
081c167f +0x18f:  je     081c168b <+0x19b>
081c1681 +0x191:  mov    $0xfffffffd,%eax
081c1686 +0x196:  jmp    081c17b9 <+0x2c9>
081c168b +0x19b:  mov    -0x14(%ebp),%eax
081c168e +0x19e:  movzbl 0xd(%eax),%eax
081c1692 +0x1a2:  movsbl %al,%eax
081c1695 +0x1a5:  mov    0xc(%ebp),%edx
081c1698 +0x1a8:  add    $0x796e8,%edx
081c169e +0x1ae:  mov    %eax,0x4(%esp)
081c16a2 +0x1b2:  mov    %edx,(%esp)
081c16a5 +0x1b5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c16aa +0x1ba:  movzbl 0x1246(%eax),%eax
081c16b1 +0x1c1:  cmp    $0x1,%al
081c16b3 +0x1c3:  setg   %al
081c16b6 +0x1c6:  test   %al,%al
081c16b8 +0x1c8:  je     081c16fa <+0x20a>
081c16ba +0x1ca:  movl   $0x5,0xc(%esp)
081c16c2 +0x1d2:  movl   $0xab4,0x8(%esp)
081c16ca +0x1da:  movl   $&_ZZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c16d2 +0x1e2:  lea    -0x24(%ebp),%eax
081c16d5 +0x1e5:  mov    %eax,(%esp)
081c16d8 +0x1e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c16dd +0x1ed:  movl   $"LINK_LOG : ABNOMAL CHARAC DELETEING!!",0x4(%esp)
081c16e5 +0x1f5:  lea    -0x24(%ebp),%eax
081c16e8 +0x1f8:  mov    %eax,(%esp)
081c16eb +0x1fb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c16f0 +0x200:  mov    $0xfffffffc,%eax
081c16f5 +0x205:  jmp    081c17b9 <+0x2c9>
081c16fa +0x20a:  mov    -0x14(%ebp),%eax
081c16fd +0x20d:  movzbl 0xd(%eax),%eax
081c1701 +0x211:  movsbl %al,%eax
081c1704 +0x214:  mov    %eax,0x4(%esp)
081c1708 +0x218:  mov    0xc(%ebp),%eax
081c170b +0x21b:  mov    %eax,(%esp)
081c170e +0x21e:  call   0822feb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5560>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5560
081c1713 +0x223:  mov    %eax,-0x10(%ebp)
081c1716 +0x226:  cmpl   $0x0,-0x10(%ebp)
081c171a +0x22a:  je     081c1729 <+0x239>
081c171c +0x22c:  mov    -0x14(%ebp),%eax
081c171f +0x22f:  add    $0x12,%eax
081c1722 +0x232:  movzbl (%eax),%eax
081c1725 +0x235:  test   %al,%al
081c1727 +0x237:  jne    081c1733 <+0x243>
081c1729 +0x239:  mov    $0xfffffffb,%eax
081c172e +0x23e:  jmp    081c17b9 <+0x2c9>
081c1733 +0x243:  mov    -0x14(%ebp),%eax
081c1736 +0x246:  add    $0x12,%eax
081c1739 +0x249:  movl   $0x1e,0x8(%esp)
081c1741 +0x251:  mov    %eax,0x4(%esp)
081c1745 +0x255:  mov    -0x10(%ebp),%eax
081c1748 +0x258:  mov    %eax,(%esp)
081c174b +0x25b:  call   0807e8c0 <_init+0x11b8>
081c1750 +0x260:  test   %eax,%eax
081c1752 +0x262:  je     081c175b <+0x26b>
081c1754 +0x264:  mov    $0xfffffffa,%eax
081c1759 +0x269:  jmp    081c17b9 <+0x2c9>
081c175b +0x26b:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081c1760 +0x270:  movl   $0x17,0xc(%esp)
081c1768 +0x278:  movl   $0x1,0x8(%esp)
081c1770 +0x280:  mov    0xc(%ebp),%edx
081c1773 +0x283:  mov    %edx,0x4(%esp)
081c1777 +0x287:  mov    %eax,(%esp)
081c177a +0x28a:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081c177f +0x28f:  test   %al,%al
081c1781 +0x291:  je     081c178a <+0x29a>
081c1783 +0x293:  mov    $0xd1,%eax
081c1788 +0x298:  jmp    081c17b9 <+0x2c9>
081c178a +0x29a:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081c178f +0x29f:  movl   $0x2e,0x8(%esp)
081c1797 +0x2a7:  mov    0xc(%ebp),%edx
081c179a +0x2aa:  mov    %edx,0x4(%esp)
081c179e +0x2ae:  mov    %eax,(%esp)
081c17a1 +0x2b1:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081c17a6 +0x2b6:  mov    %eax,-0xc(%ebp)
081c17a9 +0x2b9:  cmpl   $0x0,-0xc(%ebp)
081c17ad +0x2bd:  je     081c17b4 <+0x2c4>
081c17af +0x2bf:  mov    -0xc(%ebp),%eax
081c17b2 +0x2c2:  jmp    081c17b9 <+0x2c9>
081c17b4 +0x2c4:  mov    $0x0,%eax
081c17b9 +0x2c9:  add    $0x40,%esp
081c17bc +0x2cc:  pop    %ebx
081c17bd +0x2cd:  pop    %esi
081c17be +0x2ce:  pop    %ebp
081c17bf +0x2cf:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteCharac::check_error @ 0x81c14f0

/* DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_DeleteCharac::check_error(DisPatcher_DeleteCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ServiceRestrictManager *pSVar7;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MSG_BASE *local_18;
  char *local_14;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 2) {
    return -1;
  }
  cVar3 = CUser::isLockedCreateCharac(param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  local_18 = param_2;
  MVar1 = param_2[0xd];
  iVar4 = CUser::get_charac_count(param_1);
  if (((char)MVar1 < iVar4) && (-1 < (char)local_18[0xd])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return -2;
  }
  cVar3 = CUser::CheckDeleteCharacTime(param_1,(int)(char)local_18[0xd]);
  if (cVar3 != '\x01') {
    return 0x16;
  }
  iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar5 = CUser::get_charac_no(param_1,(int)(char)local_18[0xd]);
    if (iVar4 == iVar5) {
      bVar2 = true;
      goto LAB_081c15e3;
    }
  }
  bVar2 = false;
LAB_081c15e3:
  if (bVar2) {
    uVar6 = CUser::get_charac_no(param_1,(int)(char)local_18[0xd]);
    MVar1 = local_18[0xd];
    cMyTrace::cMyTrace(local_38,"int DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)",0xaa4,
                       5);
    cMyTrace::operator()
              (local_38,"pUser->getCurCharacNo() == recv_pk_del_charac.charac_index %d %d",
               (int)(char)MVar1,uVar6);
    iVar4 = 0x16;
  }
  else {
    cVar3 = CUser::isLocked4DataLoad(param_1);
    if (cVar3 == '\0') {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar4 == 0) {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        if (*(char *)(iVar4 + 0x1246) < '\x02') {
          local_14 = (char *)CUser::get_charac_name(param_1,(int)(char)local_18[0xd]);
          if ((local_14 == (char *)0x0) || (local_18[0x12] == (MSG_BASE)0x0)) {
            iVar4 = -5;
          }
          else {
            iVar4 = strncmp(local_14,(char *)(local_18 + 0x12),0x1e);
            if (iVar4 == 0) {
              pSVar7 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
              cVar3 = ServiceRestrictManager::isRestricted(pSVar7,param_1,1,0x17);
              if (cVar3 == '\0') {
                iVar4 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x2e);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = 0xd1;
              }
            }
            else {
              iVar4 = -6;
            }
          }
        }
        else {
          cMyTrace::cMyTrace(local_28,"int DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)",
                             0xab4,5);
          cMyTrace::operator()(local_28,"LINK_LOG : ABNOMAL CHARAC DELETEING!!");
          iVar4 = -4;
        }
      }
      else {
        iVar4 = -3;
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  return iVar4;
}
```

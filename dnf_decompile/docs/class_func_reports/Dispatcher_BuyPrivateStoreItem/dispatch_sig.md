# dispatch_sig

`_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyPrivateStoreItem` | `0x08202322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08202322  _ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08202322, 0x082025ad]
08202322 +0x000:  push   %ebp
08202323 +0x001:  mov    %esp,%ebp
08202325 +0x003:  push   %ebx
08202326 +0x004:  sub    $0x24,%esp
08202329 +0x007:  mov    0xc(%ebp),%eax
0820232c +0x00a:  mov    %eax,(%esp)
0820232f +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08202334 +0x012:  cmp    $0x3,%eax
08202337 +0x015:  jne    08202348 <+0x26>
08202339 +0x017:  mov    0xc(%ebp),%eax
0820233c +0x01a:  mov    %eax,(%esp)
0820233f +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08202344 +0x022:  test   %eax,%eax
08202346 +0x024:  jne    0820234f <+0x2d>
08202348 +0x026:  mov    $0x1,%eax
0820234d +0x02b:  jmp    08202354 <+0x32>
0820234f +0x02d:  mov    $0x0,%eax
08202354 +0x032:  test   %al,%al
08202356 +0x034:  je     08202381 <+0x5f>
08202358 +0x036:  movl   $0x0,0xc(%esp)
08202360 +0x03e:  movl   $0x0,0x8(%esp)
08202368 +0x046:  movl   $&_ZZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202370 +0x04e:  movl   $0x9891,(%esp)
08202377 +0x055:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820237c +0x05a:  jmp    082025a7 <+0x285>
08202381 +0x05f:  cmpl   $0x0,0xc(%ebp)
08202385 +0x063:  je     08202396 <+0x74>
08202387 +0x065:  mov    0xc(%ebp),%eax
0820238a +0x068:  mov    %eax,(%esp)
0820238d +0x06b:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08202392 +0x070:  test   %al,%al
08202394 +0x072:  je     0820239d <+0x7b>
08202396 +0x074:  mov    $0x1,%eax
0820239b +0x079:  jmp    082023a2 <+0x80>
0820239d +0x07b:  mov    $0x0,%eax
082023a2 +0x080:  test   %al,%al
082023a4 +0x082:  je     082023b0 <+0x8e>
082023a6 +0x084:  mov    $0x0,%eax
082023ab +0x089:  jmp    082025a7 <+0x285>
082023b0 +0x08e:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
082023b5 +0x093:  movl   $0xb,0xc(%esp)
082023bd +0x09b:  movl   $0x1,0x8(%esp)
082023c5 +0x0a3:  mov    0xc(%ebp),%edx
082023c8 +0x0a6:  mov    %edx,0x4(%esp)
082023cc +0x0aa:  mov    %eax,(%esp)
082023cf +0x0ad:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
082023d4 +0x0b2:  test   %al,%al
082023d6 +0x0b4:  je     082023fd <+0xdb>
082023d8 +0x0b6:  movl   $0xd1,0x8(%esp)
082023e0 +0x0be:  movl   $0x55,0x4(%esp)
082023e8 +0x0c6:  mov    0xc(%ebp),%eax
082023eb +0x0c9:  mov    %eax,(%esp)
082023ee +0x0cc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082023f3 +0x0d1:  mov    $0x0,%eax
082023f8 +0x0d6:  jmp    082025a7 <+0x285>
082023fd +0x0db:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08202402 +0x0e0:  movl   $0x3d,0x8(%esp)
0820240a +0x0e8:  mov    0xc(%ebp),%edx
0820240d +0x0eb:  mov    %edx,0x4(%esp)
08202411 +0x0ef:  mov    %eax,(%esp)
08202414 +0x0f2:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08202419 +0x0f7:  mov    %eax,-0xc(%ebp)
0820241c +0x0fa:  cmpl   $0x0,-0xc(%ebp)
08202420 +0x0fe:  je     08202449 <+0x127>
08202422 +0x100:  mov    -0xc(%ebp),%eax
08202425 +0x103:  movzbl %al,%eax
08202428 +0x106:  mov    %eax,0x8(%esp)
0820242c +0x10a:  movl   $0x55,0x4(%esp)
08202434 +0x112:  mov    0xc(%ebp),%eax
08202437 +0x115:  mov    %eax,(%esp)
0820243a +0x118:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820243f +0x11d:  mov    $0x0,%eax
08202444 +0x122:  jmp    082025a7 <+0x285>
08202449 +0x127:  mov    0xc(%ebp),%eax
0820244c +0x12a:  mov    %eax,(%esp)
0820244f +0x12d:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
08202454 +0x132:  test   %al,%al
08202456 +0x134:  jne    08202467 <+0x145>
08202458 +0x136:  mov    0xc(%ebp),%eax
0820245b +0x139:  mov    %eax,(%esp)
0820245e +0x13c:  call   0822fd4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53f6
08202463 +0x141:  test   %al,%al
08202465 +0x143:  je     0820246e <+0x14c>
08202467 +0x145:  mov    $0x1,%eax
0820246c +0x14a:  jmp    08202473 <+0x151>
0820246e +0x14c:  mov    $0x0,%eax
08202473 +0x151:  test   %al,%al
08202475 +0x153:  je     0820249c <+0x17a>
08202477 +0x155:  movl   $0x11,0x8(%esp)
0820247f +0x15d:  movl   $0x55,0x4(%esp)
08202487 +0x165:  mov    0xc(%ebp),%eax
0820248a +0x168:  mov    %eax,(%esp)
0820248d +0x16b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08202492 +0x170:  mov    $0x0,%eax
08202497 +0x175:  jmp    082025a7 <+0x285>
0820249c +0x17a:  movw   $0x0,-0xe(%ebp)
082024a2 +0x180:  movl   $0x0,-0x14(%ebp)
082024a9 +0x187:  movl   $0x0,-0x18(%ebp)
082024b0 +0x18e:  lea    -0xe(%ebp),%eax
082024b3 +0x191:  mov    %eax,0x4(%esp)
082024b7 +0x195:  mov    0x10(%ebp),%eax
082024ba +0x198:  mov    %eax,(%esp)
082024bd +0x19b:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082024c2 +0x1a0:  xor    $0x1,%eax
082024c5 +0x1a3:  test   %al,%al
082024c7 +0x1a5:  je     082024f2 <+0x1d0>
082024c9 +0x1a7:  movl   $0x0,0xc(%esp)
082024d1 +0x1af:  movl   $0x0,0x8(%esp)
082024d9 +0x1b7:  movl   $&_ZZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082024e1 +0x1bf:  movl   $0x98c8,(%esp)
082024e8 +0x1c6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082024ed +0x1cb:  jmp    082025a7 <+0x285>
082024f2 +0x1d0:  lea    -0x14(%ebp),%eax
082024f5 +0x1d3:  mov    %eax,0x4(%esp)
082024f9 +0x1d7:  mov    0x10(%ebp),%eax
082024fc +0x1da:  mov    %eax,(%esp)
082024ff +0x1dd:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08202504 +0x1e2:  xor    $0x1,%eax
08202507 +0x1e5:  test   %al,%al
08202509 +0x1e7:  je     08202531 <+0x20f>
0820250b +0x1e9:  movl   $0x0,0xc(%esp)
08202513 +0x1f1:  movl   $0x0,0x8(%esp)
0820251b +0x1f9:  movl   $&_ZZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202523 +0x201:  movl   $0x98c9,(%esp)
0820252a +0x208:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820252f +0x20d:  jmp    082025a7 <+0x285>
08202531 +0x20f:  mov    -0x14(%ebp),%eax
08202534 +0x212:  test   %eax,%eax
08202536 +0x214:  jns    0820255e <+0x23c>
08202538 +0x216:  movl   $0x0,0xc(%esp)
08202540 +0x21e:  movl   $0x0,0x8(%esp)
08202548 +0x226:  movl   $&_ZZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202550 +0x22e:  movl   $0x98ca,(%esp)
08202557 +0x235:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820255c +0x23a:  jmp    082025a7 <+0x285>
0820255e +0x23c:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202563 +0x241:  movl   $0x0,0xc(%esp)
0820256b +0x249:  mov    0xc(%ebp),%edx
0820256e +0x24c:  mov    %edx,0x8(%esp)
08202572 +0x250:  lea    -0x18(%ebp),%edx
08202575 +0x253:  mov    %edx,0x4(%esp)
08202579 +0x257:  mov    %eax,(%esp)
0820257c +0x25a:  call   085ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
08202581 +0x25f:  mov    -0x18(%ebp),%eax
08202584 +0x262:  mov    (%eax),%eax
08202586 +0x264:  mov    (%eax),%ebx
08202588 +0x266:  mov    -0x14(%ebp),%ecx
0820258b +0x269:  movzwl -0xe(%ebp),%eax
0820258f +0x26d:  movswl %ax,%edx
08202592 +0x270:  mov    -0x18(%ebp),%eax
08202595 +0x273:  mov    %ecx,0x8(%esp)
08202599 +0x277:  mov    %edx,0x4(%esp)
0820259d +0x27b:  mov    %eax,(%esp)
082025a0 +0x27e:  call   *%ebx
082025a2 +0x280:  mov    $0x0,%eax
082025a7 +0x285:  add    $0x24,%esp
082025aa +0x288:  pop    %ebx
082025ab +0x289:  pop    %ebp
082025ac +0x28a:  ret
082025ad +0x28b:  nop
```

## 反编译 C

```c
// Dispatcher_BuyPrivateStoreItem::dispatch_sig @ 0x8202322

/* Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyPrivateStoreItem::dispatch_sig
          (Dispatcher_BuyPrivateStoreItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  CPrivateStoreMgr *this_00;
  IBuyer *local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x9891,
                     "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar4;
  }
  if ((param_1 == (CUser *)0x0) || (cVar2 = CUser::CheckInTrade(param_1), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0xb);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0x55,0xd1);
      return 0;
    }
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3d);
    if (local_10 == 0) {
      cVar2 = CUser::isHackUser(param_1);
      if ((cVar2 == '\0') && (cVar2 = CUser::isHackUserTimer(param_1), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x55,0x11);
        uVar4 = 0;
      }
      else {
        local_12 = 0;
        local_18 = 0;
        local_1c = (IBuyer *)0x0;
        cVar2 = PacketBuf::get_short(param_2,&local_12);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,&local_18);
          if (cVar2 == '\x01') {
            if (local_18 < 0) {
              uVar4 = LineFunc(0x98ca,
                               "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_1c,param_1,(CUser *)0x0)
              ;
              (*(code *)**(undefined4 **)local_1c)(local_1c,(int)local_12,local_18);
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0x98c9,
                             "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0x98c8,
                           "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0x55,local_10 & 0xff);
    return 0;
  }
  return 0;
}
```

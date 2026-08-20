# dispatch_sig

`_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompoundItemByExpertJob` | `0x0821eb66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821eb66  _ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821eb66, 0x0821eed1]
0821eb66 +0x000:  push   %ebp
0821eb67 +0x001:  mov    %esp,%ebp
0821eb69 +0x003:  push   %esi
0821eb6a +0x004:  push   %ebx
0821eb6b +0x005:  sub    $0x50,%esp
0821eb6e +0x008:  mov    0xc(%ebp),%eax
0821eb71 +0x00b:  mov    %eax,(%esp)
0821eb74 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821eb79 +0x013:  test   %eax,%eax
0821eb7b +0x015:  sete   %al
0821eb7e +0x018:  test   %al,%al
0821eb80 +0x01a:  je     0821ebad <+0x47>
0821eb82 +0x01c:  movl   $0x0,0xc(%esp)
0821eb8a +0x024:  movl   $0x0,0x8(%esp)
0821eb92 +0x02c:  movl   $&_ZZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821eb9a +0x034:  movl   $0xd73c,(%esp)
0821eba1 +0x03b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821eba6 +0x040:  mov    %eax,%ebx
0821eba8 +0x042:  jmp    0821eec9 <+0x363>
0821ebad +0x047:  mov    0xc(%ebp),%eax
0821ebb0 +0x04a:  mov    %eax,(%esp)
0821ebb3 +0x04d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0821ebb8 +0x052:  test   %eax,%eax
0821ebba +0x054:  sete   %al
0821ebbd +0x057:  test   %al,%al
0821ebbf +0x059:  je     0821ebec <+0x86>
0821ebc1 +0x05b:  movl   $0x0,0xc(%esp)
0821ebc9 +0x063:  movl   $0x0,0x8(%esp)
0821ebd1 +0x06b:  movl   $&_ZZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ebd9 +0x073:  movl   $0xd73f,(%esp)
0821ebe0 +0x07a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ebe5 +0x07f:  mov    %eax,%ebx
0821ebe7 +0x081:  jmp    0821eec9 <+0x363>
0821ebec +0x086:  mov    0xc(%ebp),%eax
0821ebef +0x089:  mov    %eax,(%esp)
0821ebf2 +0x08c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821ebf7 +0x091:  cmp    $0x3,%eax
0821ebfa +0x094:  setne  %al
0821ebfd +0x097:  test   %al,%al
0821ebff +0x099:  je     0821ec0b <+0xa5>
0821ec01 +0x09b:  mov    $0x0,%ebx
0821ec06 +0x0a0:  jmp    0821eec9 <+0x363>
0821ec0b +0x0a5:  mov    0xc(%ebp),%eax
0821ec0e +0x0a8:  mov    %eax,(%esp)
0821ec11 +0x0ab:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0821ec16 +0x0b0:  test   %al,%al
0821ec18 +0x0b2:  je     0821ec24 <+0xbe>
0821ec1a +0x0b4:  mov    $0x0,%ebx
0821ec1f +0x0b9:  jmp    0821eec9 <+0x363>
0821ec24 +0x0be:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0821ec29 +0x0c3:  movl   $0x13,0xc(%esp)
0821ec31 +0x0cb:  movl   $0x1,0x8(%esp)
0821ec39 +0x0d3:  mov    0xc(%ebp),%edx
0821ec3c +0x0d6:  mov    %edx,0x4(%esp)
0821ec40 +0x0da:  mov    %eax,(%esp)
0821ec43 +0x0dd:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0821ec48 +0x0e2:  test   %al,%al
0821ec4a +0x0e4:  je     0821ec71 <+0x10b>
0821ec4c +0x0e6:  movl   $0xd1,0x8(%esp)
0821ec54 +0x0ee:  movl   $0xf2,0x4(%esp)
0821ec5c +0x0f6:  mov    0xc(%ebp),%eax
0821ec5f +0x0f9:  mov    %eax,(%esp)
0821ec62 +0x0fc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821ec67 +0x101:  mov    $0x0,%ebx
0821ec6c +0x106:  jmp    0821eec9 <+0x363>
0821ec71 +0x10b:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0821ec76 +0x110:  movl   $0x1c,0x8(%esp)
0821ec7e +0x118:  mov    0xc(%ebp),%edx
0821ec81 +0x11b:  mov    %edx,0x4(%esp)
0821ec85 +0x11f:  mov    %eax,(%esp)
0821ec88 +0x122:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0821ec8d +0x127:  mov    %eax,-0x10(%ebp)
0821ec90 +0x12a:  cmpl   $0x0,-0x10(%ebp)
0821ec94 +0x12e:  je     0821ecbd <+0x157>
0821ec96 +0x130:  mov    -0x10(%ebp),%eax
0821ec99 +0x133:  movzbl %al,%eax
0821ec9c +0x136:  mov    %eax,0x8(%esp)
0821eca0 +0x13a:  movl   $0xf2,0x4(%esp)
0821eca8 +0x142:  mov    0xc(%ebp),%eax
0821ecab +0x145:  mov    %eax,(%esp)
0821ecae +0x148:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821ecb3 +0x14d:  mov    $0x0,%ebx
0821ecb8 +0x152:  jmp    0821eec9 <+0x363>
0821ecbd +0x157:  lea    -0x24(%ebp),%eax
0821ecc0 +0x15a:  add    $0xd,%eax
0821ecc3 +0x15d:  mov    %eax,0x4(%esp)
0821ecc7 +0x161:  mov    0x10(%ebp),%eax
0821ecca +0x164:  mov    %eax,(%esp)
0821eccd +0x167:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
0821ecd2 +0x16c:  xor    $0x1,%eax
0821ecd5 +0x16f:  test   %al,%al
0821ecd7 +0x171:  je     0821ed04 <+0x19e>
0821ecd9 +0x173:  movl   $0x0,0xc(%esp)
0821ece1 +0x17b:  movl   $0x0,0x8(%esp)
0821ece9 +0x183:  movl   $&_ZZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ecf1 +0x18b:  movl   $0xd762,(%esp)
0821ecf8 +0x192:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ecfd +0x197:  mov    %eax,%ebx
0821ecff +0x199:  jmp    0821eec9 <+0x363>
0821ed04 +0x19e:  lea    -0x24(%ebp),%eax
0821ed07 +0x1a1:  add    $0x12,%eax
0821ed0a +0x1a4:  mov    %eax,0x4(%esp)
0821ed0e +0x1a8:  mov    0x10(%ebp),%eax
0821ed11 +0x1ab:  mov    %eax,(%esp)
0821ed14 +0x1ae:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821ed19 +0x1b3:  xor    $0x1,%eax
0821ed1c +0x1b6:  test   %al,%al
0821ed1e +0x1b8:  je     0821ed4b <+0x1e5>
0821ed20 +0x1ba:  movl   $0x0,0xc(%esp)
0821ed28 +0x1c2:  movl   $0x0,0x8(%esp)
0821ed30 +0x1ca:  movl   $&_ZZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ed38 +0x1d2:  movl   $0xd764,(%esp)
0821ed3f +0x1d9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ed44 +0x1de:  mov    %eax,%ebx
0821ed46 +0x1e0:  jmp    0821eec9 <+0x363>
0821ed4b +0x1e5:  movzwl -0x12(%ebp),%eax
0821ed4f +0x1e9:  test   %ax,%ax
0821ed52 +0x1ec:  jne    0821ed7f <+0x219>
0821ed54 +0x1ee:  movl   $0x0,0xc(%esp)
0821ed5c +0x1f6:  movl   $0x0,0x8(%esp)
0821ed64 +0x1fe:  movl   $&_ZZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ed6c +0x206:  movl   $0xd76a,(%esp)
0821ed73 +0x20d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ed78 +0x212:  mov    %eax,%ebx
0821ed7a +0x214:  jmp    0821eec9 <+0x363>
0821ed7f +0x219:  movzwl -0x12(%ebp),%eax
0821ed83 +0x21d:  movzwl %ax,%edx
0821ed86 +0x220:  mov    -0x17(%ebp),%eax
0821ed89 +0x223:  movl   $0xf2,0x10(%esp)
0821ed91 +0x22b:  mov    %edx,0xc(%esp)
0821ed95 +0x22f:  movl   $0x1,0x8(%esp)
0821ed9d +0x237:  mov    %eax,0x4(%esp)
0821eda1 +0x23b:  mov    0xc(%ebp),%eax
0821eda4 +0x23e:  mov    %eax,(%esp)
0821eda7 +0x241:  call   0867218c <_ZN5CUser13compound_itemEibti>  ; CUser::compound_item(int, bool, unsigned short, int)
0821edac +0x246:  mov    %eax,-0xc(%ebp)
0821edaf +0x249:  cmpl   $0x0,-0xc(%ebp)
0821edb3 +0x24d:  jle    0821ee59 <+0x2f3>
0821edb9 +0x253:  lea    -0x30(%ebp),%eax
0821edbc +0x256:  mov    %eax,(%esp)
0821edbf +0x259:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821edc4 +0x25e:  movl   $0xf2,0x8(%esp)
0821edcc +0x266:  movl   $0x1,0x4(%esp)
0821edd4 +0x26e:  lea    -0x30(%ebp),%eax
0821edd7 +0x271:  mov    %eax,(%esp)
0821edda +0x274:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821eddf +0x279:  movl   $0x0,0x4(%esp)
0821ede7 +0x281:  lea    -0x30(%ebp),%eax
0821edea +0x284:  mov    %eax,(%esp)
0821eded +0x287:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821edf2 +0x28c:  mov    -0xc(%ebp),%eax
0821edf5 +0x28f:  mov    %eax,0x4(%esp)
0821edf9 +0x293:  lea    -0x30(%ebp),%eax
0821edfc +0x296:  mov    %eax,(%esp)
0821edff +0x299:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821ee04 +0x29e:  movl   $0x1,0x4(%esp)
0821ee0c +0x2a6:  lea    -0x30(%ebp),%eax
0821ee0f +0x2a9:  mov    %eax,(%esp)
0821ee12 +0x2ac:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821ee17 +0x2b1:  lea    -0x30(%ebp),%eax
0821ee1a +0x2b4:  mov    %eax,0x4(%esp)
0821ee1e +0x2b8:  mov    0xc(%ebp),%eax
0821ee21 +0x2bb:  mov    %eax,(%esp)
0821ee24 +0x2be:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821ee29 +0x2c3:  mov    $0x0,%ebx
0821ee2e +0x2c8:  lea    -0x30(%ebp),%eax
0821ee31 +0x2cb:  mov    %eax,(%esp)
0821ee34 +0x2ce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821ee39 +0x2d3:  jmp    0821eec9 <+0x363>
0821ee3e +0x2d8:  mov    %edx,%ebx
0821ee40 +0x2da:  mov    %eax,%esi
0821ee42 +0x2dc:  lea    -0x30(%ebp),%eax
0821ee45 +0x2df:  mov    %eax,(%esp)
0821ee48 +0x2e2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821ee4d +0x2e7:  mov    %esi,%eax
0821ee4f +0x2e9:  mov    %ebx,%edx
0821ee51 +0x2eb:  mov    %eax,(%esp)
0821ee54 +0x2ee:  call   08ae3750 <_Unwind_Resume>
0821ee59 +0x2f3:  cmpl   $0x0,0xc(%ebp)
0821ee5d +0x2f7:  je     0821eec4 <+0x35e>
0821ee5f +0x2f9:  cmpl   $0x0,-0xc(%ebp)
0821ee63 +0x2fd:  jne    0821eec4 <+0x35e>
0821ee65 +0x2ff:  mov    0xc(%ebp),%eax
0821ee68 +0x302:  mov    %eax,(%esp)
0821ee6b +0x305:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0821ee70 +0x30a:  cmp    $0x2,%eax
0821ee73 +0x30d:  je     0821ee7c <+0x316>
0821ee75 +0x30f:  cmp    $0x4,%eax
0821ee78 +0x312:  je     0821eea1 <+0x33b>
0821ee7a +0x314:  jmp    0821eec4 <+0x35e>
0821ee7c +0x316:  movl   $0x0,0xc(%esp)
0821ee84 +0x31e:  movl   $0x0,0x8(%esp)
0821ee8c +0x326:  movl   $0x1d,0x4(%esp)
0821ee94 +0x32e:  mov    0xc(%ebp),%eax
0821ee97 +0x331:  mov    %eax,(%esp)
0821ee9a +0x334:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0821ee9f +0x339:  jmp    0821eec4 <+0x35e>
0821eea1 +0x33b:  movl   $0x0,0xc(%esp)
0821eea9 +0x343:  movl   $0x0,0x8(%esp)
0821eeb1 +0x34b:  movl   $0x1e,0x4(%esp)
0821eeb9 +0x353:  mov    0xc(%ebp),%eax
0821eebc +0x356:  mov    %eax,(%esp)
0821eebf +0x359:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0821eec4 +0x35e:  mov    $0x0,%ebx
0821eec9 +0x363:  mov    %ebx,%eax
0821eecb +0x365:  add    $0x50,%esp
0821eece +0x368:  pop    %ebx
0821eecf +0x369:  pop    %esi
0821eed0 +0x36a:  pop    %ebp
0821eed1 +0x36b:  ret
```

## 反编译 C

```c
// Dispatcher_CompoundItemByExpertJob::dispatch_sig @ 0x821eb66

/* Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompoundItemByExpertJob::dispatch_sig
          (Dispatcher_CompoundItemByExpertJob *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  PacketGuard local_34 [25];
  ulong local_1b;
  ushort local_16;
  uint local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xd73c,
                     "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar3 = LineFunc(0xd73f,
                       "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 3) {
        cVar1 = CUser::CheckInTrade(param_1);
        if (cVar1 == '\0') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x13);
          if (cVar1 == '\0') {
            local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1c)
            ;
            if (local_14 == 0) {
              cVar1 = PacketBuf::get_int(param_2,&local_1b);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&local_16);
                if (cVar1 == '\x01') {
                  if (local_16 == 0) {
                    uVar3 = LineFunc(0xd76a,
                                     "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                  else {
                    local_10 = CUser::compound_item(param_1,local_1b,true,local_16,0xf2);
                    if (local_10 < 1) {
                      if ((param_1 != (CUser *)0x0) && (local_10 == 0)) {
                        iVar2 = CUserCharacInfo::GetCurCharacExpertJobType
                                          ((CUserCharacInfo *)param_1);
                        if (iVar2 == 2) {
                          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1d,0,0);
                        }
                        else if (iVar2 == 4) {
                          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1e,0,0);
                        }
                      }
                      uVar3 = 0;
                    }
                    else {
                      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0821edda to 0821ee28 has its CatchHandler @ 0821ee3e */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf2);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_10);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
                      CUser::Send(param_1,local_34);
                      uVar3 = 0;
                      PacketGuard::~PacketGuard(local_34);
                    }
                  }
                }
                else {
                  uVar3 = LineFunc(0xd764,
                                   "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0xd762,
                                 "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xf2,local_14 & 0xff);
              uVar3 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xf2,0xd1);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```

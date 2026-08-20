# dispatch_sig

`_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Compound` | `0x081eaa5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081eaa5c  _ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)
# range [0x081eaa5c, 0x081ead3f]
081eaa5c +0x000:  push   %ebp
081eaa5d +0x001:  mov    %esp,%ebp
081eaa5f +0x003:  push   %esi
081eaa60 +0x004:  push   %ebx
081eaa61 +0x005:  sub    $0x50,%esp
081eaa64 +0x008:  mov    0xc(%ebp),%eax
081eaa67 +0x00b:  mov    %eax,(%esp)
081eaa6a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eaa6f +0x013:  cmp    $0x3,%eax
081eaa72 +0x016:  setne  %al
081eaa75 +0x019:  test   %al,%al
081eaa77 +0x01b:  je     081eaa83 <+0x27>
081eaa79 +0x01d:  mov    $0x0,%ebx
081eaa7e +0x022:  jmp    081ead37 <+0x2db>
081eaa83 +0x027:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081eaa88 +0x02c:  movl   $0x9,0xc(%esp)
081eaa90 +0x034:  movl   $0x1,0x8(%esp)
081eaa98 +0x03c:  mov    0xc(%ebp),%edx
081eaa9b +0x03f:  mov    %edx,0x4(%esp)
081eaa9f +0x043:  mov    %eax,(%esp)
081eaaa2 +0x046:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081eaaa7 +0x04b:  test   %al,%al
081eaaa9 +0x04d:  je     081eaad0 <+0x74>
081eaaab +0x04f:  movl   $0xd1,0x8(%esp)
081eaab3 +0x057:  movl   $0x1b,0x4(%esp)
081eaabb +0x05f:  mov    0xc(%ebp),%eax
081eaabe +0x062:  mov    %eax,(%esp)
081eaac1 +0x065:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081eaac6 +0x06a:  mov    $0x0,%ebx
081eaacb +0x06f:  jmp    081ead37 <+0x2db>
081eaad0 +0x074:  lea    -0x20(%ebp),%eax
081eaad3 +0x077:  add    $0xd,%eax
081eaad6 +0x07a:  mov    %eax,0x4(%esp)
081eaada +0x07e:  mov    0x10(%ebp),%eax
081eaadd +0x081:  mov    %eax,(%esp)
081eaae0 +0x084:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081eaae5 +0x089:  xor    $0x1,%eax
081eaae8 +0x08c:  test   %al,%al
081eaaea +0x08e:  je     081eab17 <+0xbb>
081eaaec +0x090:  movl   $0x0,0xc(%esp)
081eaaf4 +0x098:  movl   $0x0,0x8(%esp)
081eaafc +0x0a0:  movl   $&_ZZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eab04 +0x0a8:  movl   $0x6c3a,(%esp)
081eab0b +0x0af:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eab10 +0x0b4:  mov    %eax,%ebx
081eab12 +0x0b6:  jmp    081ead37 <+0x2db>
081eab17 +0x0bb:  lea    -0x20(%ebp),%eax
081eab1a +0x0be:  add    $0x11,%eax
081eab1d +0x0c1:  mov    %eax,0x4(%esp)
081eab21 +0x0c5:  mov    0x10(%ebp),%eax
081eab24 +0x0c8:  mov    %eax,(%esp)
081eab27 +0x0cb:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eab2c +0x0d0:  xor    $0x1,%eax
081eab2f +0x0d3:  test   %al,%al
081eab31 +0x0d5:  je     081eab5e <+0x102>
081eab33 +0x0d7:  movl   $0x0,0xc(%esp)
081eab3b +0x0df:  movl   $0x0,0x8(%esp)
081eab43 +0x0e7:  movl   $&_ZZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eab4b +0x0ef:  movl   $0x6c3b,(%esp)
081eab52 +0x0f6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eab57 +0x0fb:  mov    %eax,%ebx
081eab59 +0x0fd:  jmp    081ead37 <+0x2db>
081eab5e +0x102:  lea    -0x20(%ebp),%eax
081eab61 +0x105:  add    $0x12,%eax
081eab64 +0x108:  mov    %eax,0x4(%esp)
081eab68 +0x10c:  mov    0x10(%ebp),%eax
081eab6b +0x10f:  mov    %eax,(%esp)
081eab6e +0x112:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eab73 +0x117:  xor    $0x1,%eax
081eab76 +0x11a:  test   %al,%al
081eab78 +0x11c:  je     081eaba5 <+0x149>
081eab7a +0x11e:  movl   $0x0,0xc(%esp)
081eab82 +0x126:  movl   $0x0,0x8(%esp)
081eab8a +0x12e:  movl   $&_ZZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eab92 +0x136:  movl   $0x6c3d,(%esp)
081eab99 +0x13d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eab9e +0x142:  mov    %eax,%ebx
081eaba0 +0x144:  jmp    081ead37 <+0x2db>
081eaba5 +0x149:  movzwl -0xe(%ebp),%eax
081eaba9 +0x14d:  test   %ax,%ax
081eabac +0x150:  jne    081eabd9 <+0x17d>
081eabae +0x152:  movl   $0x0,0xc(%esp)
081eabb6 +0x15a:  movl   $0x0,0x8(%esp)
081eabbe +0x162:  movl   $&_ZZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eabc6 +0x16a:  movl   $0x6c40,(%esp)
081eabcd +0x171:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eabd2 +0x176:  mov    %eax,%ebx
081eabd4 +0x178:  jmp    081ead37 <+0x2db>
081eabd9 +0x17d:  movzbl -0xf(%ebp),%eax
081eabdd +0x181:  cmp    $0x1,%al
081eabdf +0x183:  je     081eac24 <+0x1c8>
081eabe1 +0x185:  mov    -0x13(%ebp),%eax
081eabe4 +0x188:  mov    %eax,0x8(%esp)
081eabe8 +0x18c:  movl   $0x1,0x4(%esp)
081eabf0 +0x194:  mov    0xc(%ebp),%eax
081eabf3 +0x197:  mov    %eax,(%esp)
081eabf6 +0x19a:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081eabfb +0x19f:  test   %al,%al
081eabfd +0x1a1:  je     081eac24 <+0x1c8>
081eabff +0x1a3:  movl   $0xd5,0x8(%esp)
081eac07 +0x1ab:  movl   $0x1b,0x4(%esp)
081eac0f +0x1b3:  mov    0xc(%ebp),%eax
081eac12 +0x1b6:  mov    %eax,(%esp)
081eac15 +0x1b9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081eac1a +0x1be:  mov    $0x0,%ebx
081eac1f +0x1c3:  jmp    081ead37 <+0x2db>
081eac24 +0x1c8:  movzwl -0xe(%ebp),%eax
081eac28 +0x1cc:  movzwl %ax,%ecx
081eac2b +0x1cf:  movzbl -0xf(%ebp),%eax
081eac2f +0x1d3:  cmp    $0x1,%al
081eac31 +0x1d5:  sete   %al
081eac34 +0x1d8:  movzbl %al,%edx
081eac37 +0x1db:  mov    -0x13(%ebp),%eax
081eac3a +0x1de:  movl   $0x1b,0x10(%esp)
081eac42 +0x1e6:  mov    %ecx,0xc(%esp)
081eac46 +0x1ea:  mov    %edx,0x8(%esp)
081eac4a +0x1ee:  mov    %eax,0x4(%esp)
081eac4e +0x1f2:  mov    0xc(%ebp),%eax
081eac51 +0x1f5:  mov    %eax,(%esp)
081eac54 +0x1f8:  call   0867218c <_ZN5CUser13compound_itemEibti>  ; CUser::compound_item(int, bool, unsigned short, int)
081eac59 +0x1fd:  mov    %eax,-0xc(%ebp)
081eac5c +0x200:  cmpl   $0x0,-0xc(%ebp)
081eac60 +0x204:  jle    081ead03 <+0x2a7>
081eac66 +0x20a:  lea    -0x2c(%ebp),%eax
081eac69 +0x20d:  mov    %eax,(%esp)
081eac6c +0x210:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081eac71 +0x215:  movl   $0x1b,0x8(%esp)
081eac79 +0x21d:  movl   $0x1,0x4(%esp)
081eac81 +0x225:  lea    -0x2c(%ebp),%eax
081eac84 +0x228:  mov    %eax,(%esp)
081eac87 +0x22b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081eac8c +0x230:  movl   $0x0,0x4(%esp)
081eac94 +0x238:  lea    -0x2c(%ebp),%eax
081eac97 +0x23b:  mov    %eax,(%esp)
081eac9a +0x23e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081eac9f +0x243:  mov    -0xc(%ebp),%eax
081eaca2 +0x246:  mov    %eax,0x4(%esp)
081eaca6 +0x24a:  lea    -0x2c(%ebp),%eax
081eaca9 +0x24d:  mov    %eax,(%esp)
081eacac +0x250:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081eacb1 +0x255:  movl   $0x1,0x4(%esp)
081eacb9 +0x25d:  lea    -0x2c(%ebp),%eax
081eacbc +0x260:  mov    %eax,(%esp)
081eacbf +0x263:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081eacc4 +0x268:  lea    -0x2c(%ebp),%eax
081eacc7 +0x26b:  mov    %eax,0x4(%esp)
081eaccb +0x26f:  mov    0xc(%ebp),%eax
081eacce +0x272:  mov    %eax,(%esp)
081eacd1 +0x275:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081eacd6 +0x27a:  mov    $0x0,%ebx
081eacdb +0x27f:  lea    -0x2c(%ebp),%eax
081eacde +0x282:  mov    %eax,(%esp)
081eace1 +0x285:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eace6 +0x28a:  jmp    081ead37 <+0x2db>
081eace8 +0x28c:  mov    %edx,%ebx
081eacea +0x28e:  mov    %eax,%esi
081eacec +0x290:  lea    -0x2c(%ebp),%eax
081eacef +0x293:  mov    %eax,(%esp)
081eacf2 +0x296:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eacf7 +0x29b:  mov    %esi,%eax
081eacf9 +0x29d:  mov    %ebx,%edx
081eacfb +0x29f:  mov    %eax,(%esp)
081eacfe +0x2a2:  call   08ae3750 <_Unwind_Resume>
081ead03 +0x2a7:  cmpl   $0x0,0xc(%ebp)
081ead07 +0x2ab:  je     081ead32 <+0x2d6>
081ead09 +0x2ad:  cmpl   $0x0,-0xc(%ebp)
081ead0d +0x2b1:  jne    081ead32 <+0x2d6>
081ead0f +0x2b3:  movl   $0x0,0xc(%esp)
081ead17 +0x2bb:  movl   $0x0,0x8(%esp)
081ead1f +0x2c3:  movl   $0x6,0x4(%esp)
081ead27 +0x2cb:  mov    0xc(%ebp),%eax
081ead2a +0x2ce:  mov    %eax,(%esp)
081ead2d +0x2d1:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081ead32 +0x2d6:  mov    $0x0,%ebx
081ead37 +0x2db:  mov    %ebx,%eax
081ead39 +0x2dd:  add    $0x50,%esp
081ead3c +0x2e0:  pop    %ebx
081ead3d +0x2e1:  pop    %esi
081ead3e +0x2e2:  pop    %ebp
081ead3f +0x2e3:  ret
```

## 反编译 C

```c
// DisPatcher_Compound::dispatch_sig @ 0x81eaa5c

/* DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Compound::dispatch_sig(DisPatcher_Compound *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  PacketGuard local_30 [25];
  ulong local_17;
  uchar local_13;
  ushort local_12;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar1 = ServiceRestrictManager::isRestricted(pSVar3,param_1,1,9);
    if (cVar1 == '\0') {
      cVar1 = PacketBuf::get_int(param_2,&local_17);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,&local_13);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_12);
          if (cVar1 == '\x01') {
            if (local_12 == 0) {
              uVar4 = LineFunc(0x6c40,
                               "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0
                               ,0);
            }
            else {
              if ((local_13 != '\x01') &&
                 (cVar1 = CUser::CheckItemLock(param_1,1,local_17), cVar1 != '\0')) {
                CUser::SendCmdErrorPacket(param_1,0x1b,0xd5);
                return 0;
              }
              local_10 = CUser::compound_item(param_1,local_17,local_13 == '\x01',local_12,0x1b);
              if (local_10 < 1) {
                if ((param_1 != (CUser *)0x0) && (local_10 == 0)) {
                  APSystem::CUserProc::ClearActionAndSendtoUser(param_1,6,0,0);
                }
                uVar4 = 0;
              }
              else {
                PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081eac87 to 081eacd5 has its CatchHandler @ 081eace8 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1b);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_10);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                CUser::Send(param_1,local_30);
                uVar4 = 0;
                PacketGuard::~PacketGuard(local_30);
              }
            }
          }
          else {
            uVar4 = LineFunc(0x6c3d,
                             "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
          }
        }
        else {
          uVar4 = LineFunc(0x6c3b,
                           "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x6c3a,"virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1b,0xd1);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

# dispatch_sig

`_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci`

`Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyGuildSecede` | `0x084c9768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9768  _ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci
#           Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int)
# range [0x084c9768, 0x084c9a31]
084c9768 +0x000:  push   %ebp
084c9769 +0x001:  mov    %esp,%ebp
084c976b +0x003:  push   %edi
084c976c +0x004:  push   %esi
084c976d +0x005:  push   %ebx
084c976e +0x006:  sub    $0x4c,%esp
084c9771 +0x009:  mov    0xc(%ebp),%eax
084c9774 +0x00c:  mov    %eax,(%esp)
084c9777 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c977c +0x014:  test   %eax,%eax
084c977e +0x016:  sete   %al
084c9781 +0x019:  test   %al,%al
084c9783 +0x01b:  je     084c978f <+0x27>
084c9785 +0x01d:  mov    $0x0,%ebx
084c978a +0x022:  jmp    084c9a28 <+0x2c0>
084c978f +0x027:  mov    0x10(%ebp),%eax
084c9792 +0x02a:  mov    %eax,-0x24(%ebp)
084c9795 +0x02d:  movl   $0xffffffff,0x4(%esp)
084c979d +0x035:  mov    0xc(%ebp),%eax
084c97a0 +0x038:  mov    %eax,(%esp)
084c97a3 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c97a8 +0x040:  mov    %eax,%edx
084c97aa +0x042:  mov    -0x24(%ebp),%eax
084c97ad +0x045:  mov    0x10(%eax),%eax
084c97b0 +0x048:  cmp    %eax,%edx
084c97b2 +0x04a:  setne  %al
084c97b5 +0x04d:  test   %al,%al
084c97b7 +0x04f:  je     084c9810 <+0xa8>
084c97b9 +0x051:  mov    -0x24(%ebp),%eax
084c97bc +0x054:  mov    0x10(%eax),%ebx
084c97bf +0x057:  movl   $0xffffffff,0x4(%esp)
084c97c7 +0x05f:  mov    0xc(%ebp),%eax
084c97ca +0x062:  mov    %eax,(%esp)
084c97cd +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c97d2 +0x06a:  mov    %ebx,0x18(%esp)
084c97d6 +0x06e:  mov    %eax,0x14(%esp)
084c97da +0x072:  movl   $"Inter_ReplyGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c97e2 +0x07a:  movl   $0x236b,0xc(%esp)
084c97ea +0x082:  movl   $&_ZZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c97f2 +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c97fa +0x092:  movl   $0x1,(%esp)
084c9801 +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9806 +0x09e:  mov    $0x0,%ebx
084c980b +0x0a3:  jmp    084c9a28 <+0x2c0>
084c9810 +0x0a8:  lea    -0x30(%ebp),%eax
084c9813 +0x0ab:  mov    %eax,(%esp)
084c9816 +0x0ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c981b +0x0b3:  movl   $0x9c,0x8(%esp)
084c9823 +0x0bb:  movl   $0x1,0x4(%esp)
084c982b +0x0c3:  lea    -0x30(%ebp),%eax
084c982e +0x0c6:  mov    %eax,(%esp)
084c9831 +0x0c9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c9836 +0x0ce:  mov    -0x24(%ebp),%eax
084c9839 +0x0d1:  mov    0x18(%eax),%eax
084c983c +0x0d4:  test   %eax,%eax
084c983e +0x0d6:  je     084c9892 <+0x12a>
084c9840 +0x0d8:  movl   $0x0,0x4(%esp)
084c9848 +0x0e0:  lea    -0x30(%ebp),%eax
084c984b +0x0e3:  mov    %eax,(%esp)
084c984e +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9853 +0x0eb:  mov    -0x24(%ebp),%eax
084c9856 +0x0ee:  mov    0x18(%eax),%eax
084c9859 +0x0f1:  mov    %eax,0x4(%esp)
084c985d +0x0f5:  lea    -0x30(%ebp),%eax
084c9860 +0x0f8:  mov    %eax,(%esp)
084c9863 +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9868 +0x100:  movl   $0x1,0x4(%esp)
084c9870 +0x108:  lea    -0x30(%ebp),%eax
084c9873 +0x10b:  mov    %eax,(%esp)
084c9876 +0x10e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c987b +0x113:  lea    -0x30(%ebp),%eax
084c987e +0x116:  mov    %eax,0x4(%esp)
084c9882 +0x11a:  mov    0xc(%ebp),%eax
084c9885 +0x11d:  mov    %eax,(%esp)
084c9888 +0x120:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c988d +0x125:  jmp    084c99af <+0x247>
084c9892 +0x12a:  movl   $0x1,0x4(%esp)
084c989a +0x132:  lea    -0x30(%ebp),%eax
084c989d +0x135:  mov    %eax,(%esp)
084c98a0 +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c98a5 +0x13d:  mov    -0x24(%ebp),%eax
084c98a8 +0x140:  movzbl 0x1c(%eax),%eax
084c98ac +0x144:  movsbl %al,%eax
084c98af +0x147:  mov    %eax,0x4(%esp)
084c98b3 +0x14b:  lea    -0x30(%ebp),%eax
084c98b6 +0x14e:  mov    %eax,(%esp)
084c98b9 +0x151:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c98be +0x156:  mov    -0x24(%ebp),%eax
084c98c1 +0x159:  add    $0x3b,%eax
084c98c4 +0x15c:  mov    %eax,(%esp)
084c98c7 +0x15f:  call   0807e3b0 <_init+0xca8>
084c98cc +0x164:  mov    %eax,-0x20(%ebp)
084c98cf +0x167:  mov    -0x20(%ebp),%eax
084c98d2 +0x16a:  mov    %eax,0x4(%esp)
084c98d6 +0x16e:  lea    -0x30(%ebp),%eax
084c98d9 +0x171:  mov    %eax,(%esp)
084c98dc +0x174:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c98e1 +0x179:  mov    -0x24(%ebp),%eax
084c98e4 +0x17c:  lea    0x3b(%eax),%edx
084c98e7 +0x17f:  mov    -0x20(%ebp),%eax
084c98ea +0x182:  mov    %eax,0x8(%esp)
084c98ee +0x186:  mov    %edx,0x4(%esp)
084c98f2 +0x18a:  lea    -0x30(%ebp),%eax
084c98f5 +0x18d:  mov    %eax,(%esp)
084c98f8 +0x190:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c98fd +0x195:  mov    -0x24(%ebp),%eax
084c9900 +0x198:  add    $0x1d,%eax
084c9903 +0x19b:  mov    %eax,(%esp)
084c9906 +0x19e:  call   0807e3b0 <_init+0xca8>
084c990b +0x1a3:  mov    %eax,-0x1c(%ebp)
084c990e +0x1a6:  mov    -0x1c(%ebp),%eax
084c9911 +0x1a9:  mov    %eax,0x4(%esp)
084c9915 +0x1ad:  lea    -0x30(%ebp),%eax
084c9918 +0x1b0:  mov    %eax,(%esp)
084c991b +0x1b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9920 +0x1b8:  mov    -0x24(%ebp),%eax
084c9923 +0x1bb:  lea    0x1d(%eax),%edx
084c9926 +0x1be:  mov    -0x1c(%ebp),%eax
084c9929 +0x1c1:  mov    %eax,0x8(%esp)
084c992d +0x1c5:  mov    %edx,0x4(%esp)
084c9931 +0x1c9:  lea    -0x30(%ebp),%eax
084c9934 +0x1cc:  mov    %eax,(%esp)
084c9937 +0x1cf:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c993c +0x1d4:  movl   $0x1,0x4(%esp)
084c9944 +0x1dc:  lea    -0x30(%ebp),%eax
084c9947 +0x1df:  mov    %eax,(%esp)
084c994a +0x1e2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c994f +0x1e7:  lea    -0x30(%ebp),%eax
084c9952 +0x1ea:  mov    %eax,0x4(%esp)
084c9956 +0x1ee:  mov    0xc(%ebp),%eax
084c9959 +0x1f1:  mov    %eax,(%esp)
084c995c +0x1f4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9961 +0x1f9:  mov    -0x24(%ebp),%eax
084c9964 +0x1fc:  movzwl 0xe(%eax),%eax
084c9968 +0x200:  sub    $0x1,%eax
084c996b +0x203:  movzwl %ax,%ebx
084c996e +0x206:  mov    -0x24(%ebp),%eax
084c9971 +0x209:  movzbl 0x1c(%eax),%eax
084c9975 +0x20d:  movsbl %al,%ecx
084c9978 +0x210:  mov    -0x24(%ebp),%eax
084c997b +0x213:  mov    0x10(%eax),%edx
084c997e +0x216:  mov    -0x24(%ebp),%eax
084c9981 +0x219:  lea    0x3b(%eax),%edi
084c9984 +0x21c:  mov    -0x24(%ebp),%eax
084c9987 +0x21f:  mov    0xa(%eax),%eax
084c998a +0x222:  mov    0xc(%ebp),%esi
084c998d +0x225:  add    $0x79700,%esi
084c9993 +0x22b:  mov    %ebx,0x14(%esp)
084c9997 +0x22f:  mov    %ecx,0x10(%esp)
084c999b +0x233:  mov    %edx,0xc(%esp)
084c999f +0x237:  mov    %edi,0x8(%esp)
084c99a3 +0x23b:  mov    %eax,0x4(%esp)
084c99a7 +0x23f:  mov    %esi,(%esp)
084c99aa +0x242:  call   08685b00 <_ZN15cUserHistoryLog8GuildOutEjPKcjct>  ; cUserHistoryLog::GuildOut(unsigned int, char const*, unsigned int, char, unsigned short)
084c99af +0x247:  mov    0xc(%ebp),%eax
084c99b2 +0x24a:  mov    %eax,(%esp)
084c99b5 +0x24d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084c99ba +0x252:  mov    %eax,(%esp)
084c99bd +0x255:  call   084faf8e <_ZNK10CInventory21SendItemLockListInvenEv>  ; CInventory::SendItemLockListInven() const
084c99c2 +0x25a:  mov    0xc(%ebp),%eax
084c99c5 +0x25d:  mov    %eax,(%esp)
084c99c8 +0x260:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084c99cd +0x265:  mov    %eax,(%esp)
084c99d0 +0x268:  call   084fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>  ; CInventory::SendItemLockListAvatar() const
084c99d5 +0x26d:  mov    0xc(%ebp),%eax
084c99d8 +0x270:  mov    %eax,(%esp)
084c99db +0x273:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
084c99e0 +0x278:  mov    %eax,(%esp)
084c99e3 +0x27b:  call   0850bd50 <_ZNK6CCargo16SendItemLockListEv>  ; CCargo::SendItemLockList() const
084c99e8 +0x280:  mov    0xc(%ebp),%eax
084c99eb +0x283:  mov    %eax,(%esp)
084c99ee +0x286:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084c99f3 +0x28b:  mov    %eax,(%esp)
084c99f6 +0x28e:  call   084fafee <_ZNK10CInventory24SendItemLockListCreatureEv>  ; CInventory::SendItemLockListCreature() const
084c99fb +0x293:  mov    $0x0,%ebx
084c9a00 +0x298:  lea    -0x30(%ebp),%eax
084c9a03 +0x29b:  mov    %eax,(%esp)
084c9a06 +0x29e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9a0b +0x2a3:  jmp    084c9a28 <+0x2c0>
084c9a0d +0x2a5:  mov    %edx,%ebx
084c9a0f +0x2a7:  mov    %eax,%esi
084c9a11 +0x2a9:  lea    -0x30(%ebp),%eax
084c9a14 +0x2ac:  mov    %eax,(%esp)
084c9a17 +0x2af:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9a1c +0x2b4:  mov    %esi,%eax
084c9a1e +0x2b6:  mov    %ebx,%edx
084c9a20 +0x2b8:  mov    %eax,(%esp)
084c9a23 +0x2bb:  call   08ae3750 <_Unwind_Resume>
084c9a28 +0x2c0:  mov    %ebx,%eax
084c9a2a +0x2c2:  add    $0x4c,%esp
084c9a2d +0x2c5:  pop    %ebx
084c9a2e +0x2c6:  pop    %esi
084c9a2f +0x2c7:  pop    %edi
084c9a30 +0x2c8:  pop    %ebp
084c9a31 +0x2c9:  ret
```

## 反编译 C

```c
// Inter_ReplyGuildSecede::dispatch_sig @ 0x84c9768

/* Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  CCargo *this;
  PacketGuard local_34 [12];
  int local_28;
  size_t local_24;
  size_t local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_28 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_28 + 0x10)) {
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084c9831 to 084c99fa has its CatchHandler @ 084c9a0d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x9c);
      if (*(int *)(local_28 + 0x18) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)*(char *)(local_28 + 0x1c))
        ;
        local_24 = strlen((char *)(local_28 + 0x3b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_24);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x3b),local_24);
        local_20 = strlen((char *)(local_28 + 0x1d));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_20);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x1d),local_20);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
        cUserHistoryLog::GuildOut
                  ((cUserHistoryLog *)(param_2 + 0x79700),*(uint *)(local_28 + 10),
                   (char *)(local_28 + 0x3b),*(uint *)(local_28 + 0x10),*(char *)(local_28 + 0x1c),
                   *(short *)(local_28 + 0xe) - 1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x18));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListInven(pCVar4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListAvatar(pCVar4);
      this = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_2);
      CCargo::SendItemLockList(this);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListCreature(pCVar4);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar1 = *(undefined4 *)(local_28 + 0x10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int)",0x236b,
                 "Inter_ReplyGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

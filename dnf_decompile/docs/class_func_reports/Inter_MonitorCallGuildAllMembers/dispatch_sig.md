# dispatch_sig

`_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci`

`Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallGuildAllMembers` | `0x084cabda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cabda  _ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci
#           Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)
# range [0x084cabda, 0x084cae09]
084cabda +0x000:  push   %ebp
084cabdb +0x001:  mov    %esp,%ebp
084cabdd +0x003:  push   %esi
084cabde +0x004:  push   %ebx
084cabdf +0x005:  sub    $0x40,%esp
084cabe2 +0x008:  mov    0xc(%ebp),%eax
084cabe5 +0x00b:  mov    %eax,(%esp)
084cabe8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cabed +0x013:  test   %eax,%eax
084cabef +0x015:  sete   %al
084cabf2 +0x018:  test   %al,%al
084cabf4 +0x01a:  je     084cac00 <+0x26>
084cabf6 +0x01c:  mov    $0x0,%ebx
084cabfb +0x021:  jmp    084cae01 <+0x227>
084cac00 +0x026:  mov    0x10(%ebp),%eax
084cac03 +0x029:  mov    %eax,-0x10(%ebp)
084cac06 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cac0e +0x034:  mov    0xc(%ebp),%eax
084cac11 +0x037:  mov    %eax,(%esp)
084cac14 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cac19 +0x03f:  mov    %eax,%edx
084cac1b +0x041:  mov    -0x10(%ebp),%eax
084cac1e +0x044:  mov    0xe(%eax),%eax
084cac21 +0x047:  cmp    %eax,%edx
084cac23 +0x049:  setne  %al
084cac26 +0x04c:  test   %al,%al
084cac28 +0x04e:  je     084cac81 <+0xa7>
084cac2a +0x050:  mov    -0x10(%ebp),%eax
084cac2d +0x053:  mov    0xe(%eax),%ebx
084cac30 +0x056:  movl   $0xffffffff,0x4(%esp)
084cac38 +0x05e:  mov    0xc(%ebp),%eax
084cac3b +0x061:  mov    %eax,(%esp)
084cac3e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cac43 +0x069:  mov    %ebx,0x18(%esp)
084cac47 +0x06d:  mov    %eax,0x14(%esp)
084cac4b +0x071:  movl   $"Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cac53 +0x079:  movl   $0x250c,0xc(%esp)
084cac5b +0x081:  movl   $&_ZZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cac63 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cac6b +0x091:  movl   $0x1,(%esp)
084cac72 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cac77 +0x09d:  mov    $0x0,%ebx
084cac7c +0x0a2:  jmp    084cae01 <+0x227>
084cac81 +0x0a7:  mov    0xc(%ebp),%eax
084cac84 +0x0aa:  mov    %eax,(%esp)
084cac87 +0x0ad:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084cac8c +0x0b2:  mov    -0x10(%ebp),%edx
084cac8f +0x0b5:  mov    0x12(%edx),%edx
084cac92 +0x0b8:  cmp    %edx,%eax
084cac94 +0x0ba:  setne  %al
084cac97 +0x0bd:  test   %al,%al
084cac99 +0x0bf:  je     084cacd1 <+0xf7>
084cac9b +0x0c1:  movl   $"Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey",0x10(%esp)
084caca3 +0x0c9:  movl   $0x2512,0xc(%esp)
084cacab +0x0d1:  movl   $&_ZZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cacb3 +0x0d9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cacbb +0x0e1:  movl   $0x1,(%esp)
084cacc2 +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cacc7 +0x0ed:  mov    $0x0,%ebx
084caccc +0x0f2:  jmp    084cae01 <+0x227>
084cacd1 +0x0f7:  lea    -0x1c(%ebp),%eax
084cacd4 +0x0fa:  mov    %eax,(%esp)
084cacd7 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cacdc +0x102:  movl   $0x8f,0x8(%esp)
084cace4 +0x10a:  movl   $0x1,0x4(%esp)
084cacec +0x112:  lea    -0x1c(%ebp),%eax
084cacef +0x115:  mov    %eax,(%esp)
084cacf2 +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cacf7 +0x11d:  movl   $0x1,0x4(%esp)
084cacff +0x125:  lea    -0x1c(%ebp),%eax
084cad02 +0x128:  mov    %eax,(%esp)
084cad05 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cad0a +0x130:  mov    -0x10(%ebp),%eax
084cad0d +0x133:  mov    0x12(%eax),%eax
084cad10 +0x136:  mov    %eax,0x4(%esp)
084cad14 +0x13a:  lea    -0x1c(%ebp),%eax
084cad17 +0x13d:  mov    %eax,(%esp)
084cad1a +0x140:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cad1f +0x145:  mov    -0x10(%ebp),%eax
084cad22 +0x148:  add    $0x16,%eax
084cad25 +0x14b:  mov    %eax,(%esp)
084cad28 +0x14e:  call   0807e3b0 <_init+0xca8>
084cad2d +0x153:  mov    %eax,-0xc(%ebp)
084cad30 +0x156:  mov    -0xc(%ebp),%eax
084cad33 +0x159:  mov    %eax,0x4(%esp)
084cad37 +0x15d:  lea    -0x1c(%ebp),%eax
084cad3a +0x160:  mov    %eax,(%esp)
084cad3d +0x163:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cad42 +0x168:  mov    -0x10(%ebp),%eax
084cad45 +0x16b:  lea    0x16(%eax),%edx
084cad48 +0x16e:  mov    -0xc(%ebp),%eax
084cad4b +0x171:  mov    %eax,0x8(%esp)
084cad4f +0x175:  mov    %edx,0x4(%esp)
084cad53 +0x179:  lea    -0x1c(%ebp),%eax
084cad56 +0x17c:  mov    %eax,(%esp)
084cad59 +0x17f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cad5e +0x184:  mov    -0x10(%ebp),%eax
084cad61 +0x187:  mov    0x2d(%eax),%eax
084cad64 +0x18a:  mov    %eax,0x4(%esp)
084cad68 +0x18e:  lea    -0x1c(%ebp),%eax
084cad6b +0x191:  mov    %eax,(%esp)
084cad6e +0x194:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cad73 +0x199:  mov    -0x10(%ebp),%eax
084cad76 +0x19c:  movzwl 0x31(%eax),%eax
084cad7a +0x1a0:  movzwl %ax,%eax
084cad7d +0x1a3:  mov    %eax,0x4(%esp)
084cad81 +0x1a7:  lea    -0x1c(%ebp),%eax
084cad84 +0x1aa:  mov    %eax,(%esp)
084cad87 +0x1ad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cad8c +0x1b2:  mov    -0x10(%ebp),%eax
084cad8f +0x1b5:  lea    0x34(%eax),%edx
084cad92 +0x1b8:  mov    -0x10(%ebp),%eax
084cad95 +0x1bb:  movzbl 0x33(%eax),%eax
084cad99 +0x1bf:  movzbl %al,%eax
084cad9c +0x1c2:  mov    %edx,0x8(%esp)
084cada0 +0x1c6:  mov    %eax,0x4(%esp)
084cada4 +0x1ca:  lea    -0x1c(%ebp),%eax
084cada7 +0x1cd:  mov    %eax,(%esp)
084cadaa +0x1d0:  call   084ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>  ; FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)
084cadaf +0x1d5:  movl   $0x1,0x4(%esp)
084cadb7 +0x1dd:  lea    -0x1c(%ebp),%eax
084cadba +0x1e0:  mov    %eax,(%esp)
084cadbd +0x1e3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cadc2 +0x1e8:  lea    -0x1c(%ebp),%eax
084cadc5 +0x1eb:  mov    %eax,0x4(%esp)
084cadc9 +0x1ef:  mov    0xc(%ebp),%eax
084cadcc +0x1f2:  mov    %eax,(%esp)
084cadcf +0x1f5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cadd4 +0x1fa:  mov    $0x0,%ebx
084cadd9 +0x1ff:  lea    -0x1c(%ebp),%eax
084caddc +0x202:  mov    %eax,(%esp)
084caddf +0x205:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cade4 +0x20a:  jmp    084cae01 <+0x227>
084cade6 +0x20c:  mov    %edx,%ebx
084cade8 +0x20e:  mov    %eax,%esi
084cadea +0x210:  lea    -0x1c(%ebp),%eax
084caded +0x213:  mov    %eax,(%esp)
084cadf0 +0x216:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cadf5 +0x21b:  mov    %esi,%eax
084cadf7 +0x21d:  mov    %ebx,%edx
084cadf9 +0x21f:  mov    %eax,(%esp)
084cadfc +0x222:  call   08ae3750 <_Unwind_Resume>
084cae01 +0x227:  mov    %ebx,%eax
084cae03 +0x229:  add    $0x40,%esp
084cae06 +0x22c:  pop    %ebx
084cae07 +0x22d:  pop    %esi
084cae08 +0x22e:  pop    %ebp
084cae09 +0x22f:  ret
```

## 反编译 C

```c
// Inter_MonitorCallGuildAllMembers::dispatch_sig @ 0x84cabda

/* Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_14 + 0x12)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cacf2 to 084cadd3 has its CatchHandler @ 084cade6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x8f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        local_10 = strlen((char *)(local_14 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x2d));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0x31));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_20,(uint)*(byte *)(local_14 + 0x33),(ST_Guild_Mem_Info *)(local_14 + 0x34))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)",
                   0x2512,
                   "Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)",
                 0x250c,
                 "Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

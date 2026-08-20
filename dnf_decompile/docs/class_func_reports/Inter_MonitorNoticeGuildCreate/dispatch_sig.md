# dispatch_sig

`_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildCreate` | `0x084cbb94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cbb94  _ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int)
# range [0x084cbb94, 0x084cbd25]
084cbb94 +0x000:  push   %ebp
084cbb95 +0x001:  mov    %esp,%ebp
084cbb97 +0x003:  push   %esi
084cbb98 +0x004:  push   %ebx
084cbb99 +0x005:  sub    $0x40,%esp
084cbb9c +0x008:  mov    0xc(%ebp),%eax
084cbb9f +0x00b:  mov    %eax,(%esp)
084cbba2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cbba7 +0x013:  test   %eax,%eax
084cbba9 +0x015:  sete   %al
084cbbac +0x018:  test   %al,%al
084cbbae +0x01a:  je     084cbbba <+0x26>
084cbbb0 +0x01c:  mov    $0x267c,%ebx
084cbbb5 +0x021:  jmp    084cbd1c <+0x188>
084cbbba +0x026:  mov    0x10(%ebp),%eax
084cbbbd +0x029:  mov    %eax,-0x10(%ebp)
084cbbc0 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cbbc8 +0x034:  mov    0xc(%ebp),%eax
084cbbcb +0x037:  mov    %eax,(%esp)
084cbbce +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cbbd3 +0x03f:  mov    %eax,%edx
084cbbd5 +0x041:  mov    -0x10(%ebp),%eax
084cbbd8 +0x044:  mov    0xe(%eax),%eax
084cbbdb +0x047:  cmp    %eax,%edx
084cbbdd +0x049:  setne  %al
084cbbe0 +0x04c:  test   %al,%al
084cbbe2 +0x04e:  je     084cbc3b <+0xa7>
084cbbe4 +0x050:  mov    -0x10(%ebp),%eax
084cbbe7 +0x053:  mov    0xe(%eax),%ebx
084cbbea +0x056:  movl   $0xffffffff,0x4(%esp)
084cbbf2 +0x05e:  mov    0xc(%ebp),%eax
084cbbf5 +0x061:  mov    %eax,(%esp)
084cbbf8 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cbbfd +0x069:  mov    %ebx,0x18(%esp)
084cbc01 +0x06d:  mov    %eax,0x14(%esp)
084cbc05 +0x071:  movl   $"Packet_Monitor_Notice_Guild_Create_ToUser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cbc0d +0x079:  movl   $0x2682,0xc(%esp)
084cbc15 +0x081:  movl   $&_ZZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cbc1d +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cbc25 +0x091:  movl   $0x1,(%esp)
084cbc2c +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cbc31 +0x09d:  mov    $0x0,%ebx
084cbc36 +0x0a2:  jmp    084cbd1c <+0x188>
084cbc3b +0x0a7:  mov    -0x10(%ebp),%eax
084cbc3e +0x0aa:  mov    0xa(%eax),%edx
084cbc41 +0x0ad:  mov    0xc(%ebp),%eax
084cbc44 +0x0b0:  mov    %edx,0x4(%esp)
084cbc48 +0x0b4:  mov    %eax,(%esp)
084cbc4b +0x0b7:  call   082a671e <_GLOBAL__I__ZN4CLog5this_E+0x2b45>  ; global constructors keyed to CLog::this_+0x2b45
084cbc50 +0x0bc:  lea    -0x1c(%ebp),%eax
084cbc53 +0x0bf:  mov    %eax,(%esp)
084cbc56 +0x0c2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cbc5b +0x0c7:  movl   $0x47,0x8(%esp)
084cbc63 +0x0cf:  movl   $0x0,0x4(%esp)
084cbc6b +0x0d7:  lea    -0x1c(%ebp),%eax
084cbc6e +0x0da:  mov    %eax,(%esp)
084cbc71 +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cbc76 +0x0e2:  mov    -0x10(%ebp),%eax
084cbc79 +0x0e5:  mov    0xa(%eax),%eax
084cbc7c +0x0e8:  mov    %eax,0x4(%esp)
084cbc80 +0x0ec:  lea    -0x1c(%ebp),%eax
084cbc83 +0x0ef:  mov    %eax,(%esp)
084cbc86 +0x0f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cbc8b +0x0f7:  mov    -0x10(%ebp),%eax
084cbc8e +0x0fa:  add    $0x12,%eax
084cbc91 +0x0fd:  mov    %eax,(%esp)
084cbc94 +0x100:  call   0807e3b0 <_init+0xca8>
084cbc99 +0x105:  mov    %eax,-0xc(%ebp)
084cbc9c +0x108:  mov    -0xc(%ebp),%eax
084cbc9f +0x10b:  mov    %eax,0x4(%esp)
084cbca3 +0x10f:  lea    -0x1c(%ebp),%eax
084cbca6 +0x112:  mov    %eax,(%esp)
084cbca9 +0x115:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cbcae +0x11a:  mov    -0x10(%ebp),%eax
084cbcb1 +0x11d:  lea    0x12(%eax),%edx
084cbcb4 +0x120:  mov    -0xc(%ebp),%eax
084cbcb7 +0x123:  mov    %eax,0x8(%esp)
084cbcbb +0x127:  mov    %edx,0x4(%esp)
084cbcbf +0x12b:  lea    -0x1c(%ebp),%eax
084cbcc2 +0x12e:  mov    %eax,(%esp)
084cbcc5 +0x131:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cbcca +0x136:  movl   $0x1,0x4(%esp)
084cbcd2 +0x13e:  lea    -0x1c(%ebp),%eax
084cbcd5 +0x141:  mov    %eax,(%esp)
084cbcd8 +0x144:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cbcdd +0x149:  lea    -0x1c(%ebp),%eax
084cbce0 +0x14c:  mov    %eax,0x4(%esp)
084cbce4 +0x150:  mov    0xc(%ebp),%eax
084cbce7 +0x153:  mov    %eax,(%esp)
084cbcea +0x156:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cbcef +0x15b:  mov    $0x0,%ebx
084cbcf4 +0x160:  lea    -0x1c(%ebp),%eax
084cbcf7 +0x163:  mov    %eax,(%esp)
084cbcfa +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbcff +0x16b:  jmp    084cbd1c <+0x188>
084cbd01 +0x16d:  mov    %edx,%ebx
084cbd03 +0x16f:  mov    %eax,%esi
084cbd05 +0x171:  lea    -0x1c(%ebp),%eax
084cbd08 +0x174:  mov    %eax,(%esp)
084cbd0b +0x177:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbd10 +0x17c:  mov    %esi,%eax
084cbd12 +0x17e:  mov    %ebx,%edx
084cbd14 +0x180:  mov    %eax,(%esp)
084cbd17 +0x183:  call   08ae3750 <_Unwind_Resume>
084cbd1c +0x188:  mov    %ebx,%eax
084cbd1e +0x18a:  add    $0x40,%esp
084cbd21 +0x18d:  pop    %ebx
084cbd22 +0x18e:  pop    %esi
084cbd23 +0x18f:  pop    %ebp
084cbd24 +0x190:  ret
084cbd25 +0x191:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildCreate::dispatch_sig @ 0x84cbb94

/* Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar3 = 0x267c;
  }
  else {
    local_14 = param_3;
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0xe)) {
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,*(uint *)(local_14 + 10));
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cbc71 to 084cbcee has its CatchHandler @ 084cbd01 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x47);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      uVar3 = 0;
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar3 = *(undefined4 *)(local_14 + 0xe);
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int)",
                 0x2682,
                 "Packet_Monitor_Notice_Guild_Create_ToUser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar2,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

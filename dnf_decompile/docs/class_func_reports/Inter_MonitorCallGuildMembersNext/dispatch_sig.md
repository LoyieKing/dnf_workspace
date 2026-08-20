# dispatch_sig

`_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci`

`Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallGuildMembersNext` | `0x084caa16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084caa16  _ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci
#           Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)
# range [0x084caa16, 0x084cabd9]
084caa16 +0x000:  push   %ebp
084caa17 +0x001:  mov    %esp,%ebp
084caa19 +0x003:  push   %esi
084caa1a +0x004:  push   %ebx
084caa1b +0x005:  sub    $0x30,%esp
084caa1e +0x008:  mov    0xc(%ebp),%eax
084caa21 +0x00b:  mov    %eax,(%esp)
084caa24 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084caa29 +0x013:  test   %eax,%eax
084caa2b +0x015:  sete   %al
084caa2e +0x018:  test   %al,%al
084caa30 +0x01a:  je     084caa3c <+0x26>
084caa32 +0x01c:  mov    $0x0,%ebx
084caa37 +0x021:  jmp    084cabd0 <+0x1ba>
084caa3c +0x026:  mov    0x10(%ebp),%eax
084caa3f +0x029:  mov    %eax,-0xc(%ebp)
084caa42 +0x02c:  movl   $0xffffffff,0x4(%esp)
084caa4a +0x034:  mov    0xc(%ebp),%eax
084caa4d +0x037:  mov    %eax,(%esp)
084caa50 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084caa55 +0x03f:  mov    %eax,%edx
084caa57 +0x041:  mov    -0xc(%ebp),%eax
084caa5a +0x044:  mov    0xe(%eax),%eax
084caa5d +0x047:  cmp    %eax,%edx
084caa5f +0x049:  setne  %al
084caa62 +0x04c:  test   %al,%al
084caa64 +0x04e:  je     084caabd <+0xa7>
084caa66 +0x050:  mov    -0xc(%ebp),%eax
084caa69 +0x053:  mov    0xe(%eax),%ebx
084caa6c +0x056:  movl   $0xffffffff,0x4(%esp)
084caa74 +0x05e:  mov    0xc(%ebp),%eax
084caa77 +0x061:  mov    %eax,(%esp)
084caa7a +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084caa7f +0x069:  mov    %ebx,0x18(%esp)
084caa83 +0x06d:  mov    %eax,0x14(%esp)
084caa87 +0x071:  movl   $"Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084caa8f +0x079:  movl   $0x24e7,0xc(%esp)
084caa97 +0x081:  movl   $&_ZZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084caa9f +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084caaa7 +0x091:  movl   $0x1,(%esp)
084caaae +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084caab3 +0x09d:  mov    $0x0,%ebx
084caab8 +0x0a2:  jmp    084cabd0 <+0x1ba>
084caabd +0x0a7:  mov    0xc(%ebp),%eax
084caac0 +0x0aa:  mov    %eax,(%esp)
084caac3 +0x0ad:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084caac8 +0x0b2:  mov    -0xc(%ebp),%edx
084caacb +0x0b5:  mov    0x12(%edx),%edx
084caace +0x0b8:  cmp    %edx,%eax
084caad0 +0x0ba:  setne  %al
084caad3 +0x0bd:  test   %al,%al
084caad5 +0x0bf:  je     084cab0d <+0xf7>
084caad7 +0x0c1:  movl   $"Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey",0x10(%esp)
084caadf +0x0c9:  movl   $0x24ed,0xc(%esp)
084caae7 +0x0d1:  movl   $&_ZZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084caaef +0x0d9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084caaf7 +0x0e1:  movl   $0x1,(%esp)
084caafe +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cab03 +0x0ed:  mov    $0x0,%ebx
084cab08 +0x0f2:  jmp    084cabd0 <+0x1ba>
084cab0d +0x0f7:  lea    -0x18(%ebp),%eax
084cab10 +0x0fa:  mov    %eax,(%esp)
084cab13 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cab18 +0x102:  movl   $0x8e,0x8(%esp)
084cab20 +0x10a:  movl   $0x1,0x4(%esp)
084cab28 +0x112:  lea    -0x18(%ebp),%eax
084cab2b +0x115:  mov    %eax,(%esp)
084cab2e +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cab33 +0x11d:  movl   $0x1,0x4(%esp)
084cab3b +0x125:  lea    -0x18(%ebp),%eax
084cab3e +0x128:  mov    %eax,(%esp)
084cab41 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cab46 +0x130:  mov    -0xc(%ebp),%eax
084cab49 +0x133:  mov    0x12(%eax),%eax
084cab4c +0x136:  mov    %eax,0x4(%esp)
084cab50 +0x13a:  lea    -0x18(%ebp),%eax
084cab53 +0x13d:  mov    %eax,(%esp)
084cab56 +0x140:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cab5b +0x145:  mov    -0xc(%ebp),%eax
084cab5e +0x148:  lea    0x17(%eax),%edx
084cab61 +0x14b:  mov    -0xc(%ebp),%eax
084cab64 +0x14e:  movzbl 0x16(%eax),%eax
084cab68 +0x152:  movzbl %al,%eax
084cab6b +0x155:  mov    %edx,0x8(%esp)
084cab6f +0x159:  mov    %eax,0x4(%esp)
084cab73 +0x15d:  lea    -0x18(%ebp),%eax
084cab76 +0x160:  mov    %eax,(%esp)
084cab79 +0x163:  call   084ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>  ; FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)
084cab7e +0x168:  movl   $0x1,0x4(%esp)
084cab86 +0x170:  lea    -0x18(%ebp),%eax
084cab89 +0x173:  mov    %eax,(%esp)
084cab8c +0x176:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cab91 +0x17b:  lea    -0x18(%ebp),%eax
084cab94 +0x17e:  mov    %eax,0x4(%esp)
084cab98 +0x182:  mov    0xc(%ebp),%eax
084cab9b +0x185:  mov    %eax,(%esp)
084cab9e +0x188:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084caba3 +0x18d:  mov    $0x0,%ebx
084caba8 +0x192:  lea    -0x18(%ebp),%eax
084cabab +0x195:  mov    %eax,(%esp)
084cabae +0x198:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cabb3 +0x19d:  jmp    084cabd0 <+0x1ba>
084cabb5 +0x19f:  mov    %edx,%ebx
084cabb7 +0x1a1:  mov    %eax,%esi
084cabb9 +0x1a3:  lea    -0x18(%ebp),%eax
084cabbc +0x1a6:  mov    %eax,(%esp)
084cabbf +0x1a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cabc4 +0x1ae:  mov    %esi,%eax
084cabc6 +0x1b0:  mov    %ebx,%edx
084cabc8 +0x1b2:  mov    %eax,(%esp)
084cabcb +0x1b5:  call   08ae3750 <_Unwind_Resume>
084cabd0 +0x1ba:  mov    %ebx,%eax
084cabd2 +0x1bc:  add    $0x30,%esp
084cabd5 +0x1bf:  pop    %ebx
084cabd6 +0x1c0:  pop    %esi
084cabd7 +0x1c1:  pop    %ebp
084cabd8 +0x1c2:  ret
084cabd9 +0x1c3:  nop
```

## 反编译 C

```c
// Inter_MonitorCallGuildMembersNext::dispatch_sig @ 0x84caa16

/* Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_10 + 0x12)) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cab2e to 084caba2 has its CatchHandler @ 084cabb5 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x8e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_1c,(uint)*(byte *)(local_10 + 0x16),(ST_Guild_Mem_Info *)(local_10 + 0x17))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)"
                   ,0x24ed,
                   "Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)",
                 0x24e7,
                 "Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

# dispatch_sig

`_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci`

`Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallGuildMembers` | `0x084ca7e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ca7e6  _ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci
#           Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)
# range [0x084ca7e6, 0x084caa15]
084ca7e6 +0x000:  push   %ebp
084ca7e7 +0x001:  mov    %esp,%ebp
084ca7e9 +0x003:  push   %esi
084ca7ea +0x004:  push   %ebx
084ca7eb +0x005:  sub    $0x40,%esp
084ca7ee +0x008:  mov    0xc(%ebp),%eax
084ca7f1 +0x00b:  mov    %eax,(%esp)
084ca7f4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ca7f9 +0x013:  test   %eax,%eax
084ca7fb +0x015:  sete   %al
084ca7fe +0x018:  test   %al,%al
084ca800 +0x01a:  je     084ca80c <+0x26>
084ca802 +0x01c:  mov    $0x0,%ebx
084ca807 +0x021:  jmp    084caa0d <+0x227>
084ca80c +0x026:  mov    0x10(%ebp),%eax
084ca80f +0x029:  mov    %eax,-0x10(%ebp)
084ca812 +0x02c:  movl   $0xffffffff,0x4(%esp)
084ca81a +0x034:  mov    0xc(%ebp),%eax
084ca81d +0x037:  mov    %eax,(%esp)
084ca820 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca825 +0x03f:  mov    %eax,%edx
084ca827 +0x041:  mov    -0x10(%ebp),%eax
084ca82a +0x044:  mov    0xe(%eax),%eax
084ca82d +0x047:  cmp    %eax,%edx
084ca82f +0x049:  setne  %al
084ca832 +0x04c:  test   %al,%al
084ca834 +0x04e:  je     084ca88d <+0xa7>
084ca836 +0x050:  mov    -0x10(%ebp),%eax
084ca839 +0x053:  mov    0xe(%eax),%ebx
084ca83c +0x056:  movl   $0xffffffff,0x4(%esp)
084ca844 +0x05e:  mov    0xc(%ebp),%eax
084ca847 +0x061:  mov    %eax,(%esp)
084ca84a +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca84f +0x069:  mov    %ebx,0x18(%esp)
084ca853 +0x06d:  mov    %eax,0x14(%esp)
084ca857 +0x071:  movl   $"Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ca85f +0x079:  movl   $0x24b9,0xc(%esp)
084ca867 +0x081:  movl   $&_ZZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ca86f +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ca877 +0x091:  movl   $0x1,(%esp)
084ca87e +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ca883 +0x09d:  mov    $0x0,%ebx
084ca888 +0x0a2:  jmp    084caa0d <+0x227>
084ca88d +0x0a7:  mov    0xc(%ebp),%eax
084ca890 +0x0aa:  mov    %eax,(%esp)
084ca893 +0x0ad:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ca898 +0x0b2:  mov    -0x10(%ebp),%edx
084ca89b +0x0b5:  mov    0x12(%edx),%edx
084ca89e +0x0b8:  cmp    %edx,%eax
084ca8a0 +0x0ba:  setne  %al
084ca8a3 +0x0bd:  test   %al,%al
084ca8a5 +0x0bf:  je     084ca8dd <+0xf7>
084ca8a7 +0x0c1:  movl   $"Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey",0x10(%esp)
084ca8af +0x0c9:  movl   $0x24bf,0xc(%esp)
084ca8b7 +0x0d1:  movl   $&_ZZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ca8bf +0x0d9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ca8c7 +0x0e1:  movl   $0x1,(%esp)
084ca8ce +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ca8d3 +0x0ed:  mov    $0x0,%ebx
084ca8d8 +0x0f2:  jmp    084caa0d <+0x227>
084ca8dd +0x0f7:  lea    -0x1c(%ebp),%eax
084ca8e0 +0x0fa:  mov    %eax,(%esp)
084ca8e3 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ca8e8 +0x102:  movl   $0x46,0x8(%esp)
084ca8f0 +0x10a:  movl   $0x1,0x4(%esp)
084ca8f8 +0x112:  lea    -0x1c(%ebp),%eax
084ca8fb +0x115:  mov    %eax,(%esp)
084ca8fe +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ca903 +0x11d:  movl   $0x1,0x4(%esp)
084ca90b +0x125:  lea    -0x1c(%ebp),%eax
084ca90e +0x128:  mov    %eax,(%esp)
084ca911 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca916 +0x130:  mov    -0x10(%ebp),%eax
084ca919 +0x133:  mov    0x12(%eax),%eax
084ca91c +0x136:  mov    %eax,0x4(%esp)
084ca920 +0x13a:  lea    -0x1c(%ebp),%eax
084ca923 +0x13d:  mov    %eax,(%esp)
084ca926 +0x140:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca92b +0x145:  mov    -0x10(%ebp),%eax
084ca92e +0x148:  add    $0x16,%eax
084ca931 +0x14b:  mov    %eax,(%esp)
084ca934 +0x14e:  call   0807e3b0 <_init+0xca8>
084ca939 +0x153:  mov    %eax,-0xc(%ebp)
084ca93c +0x156:  mov    -0xc(%ebp),%eax
084ca93f +0x159:  mov    %eax,0x4(%esp)
084ca943 +0x15d:  lea    -0x1c(%ebp),%eax
084ca946 +0x160:  mov    %eax,(%esp)
084ca949 +0x163:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca94e +0x168:  mov    -0x10(%ebp),%eax
084ca951 +0x16b:  lea    0x16(%eax),%edx
084ca954 +0x16e:  mov    -0xc(%ebp),%eax
084ca957 +0x171:  mov    %eax,0x8(%esp)
084ca95b +0x175:  mov    %edx,0x4(%esp)
084ca95f +0x179:  lea    -0x1c(%ebp),%eax
084ca962 +0x17c:  mov    %eax,(%esp)
084ca965 +0x17f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ca96a +0x184:  mov    -0x10(%ebp),%eax
084ca96d +0x187:  mov    0x2e(%eax),%eax
084ca970 +0x18a:  mov    %eax,0x4(%esp)
084ca974 +0x18e:  lea    -0x1c(%ebp),%eax
084ca977 +0x191:  mov    %eax,(%esp)
084ca97a +0x194:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca97f +0x199:  mov    -0x10(%ebp),%eax
084ca982 +0x19c:  movzwl 0x32(%eax),%eax
084ca986 +0x1a0:  movzwl %ax,%eax
084ca989 +0x1a3:  mov    %eax,0x4(%esp)
084ca98d +0x1a7:  lea    -0x1c(%ebp),%eax
084ca990 +0x1aa:  mov    %eax,(%esp)
084ca993 +0x1ad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ca998 +0x1b2:  mov    -0x10(%ebp),%eax
084ca99b +0x1b5:  lea    0x34(%eax),%edx
084ca99e +0x1b8:  mov    -0x10(%ebp),%eax
084ca9a1 +0x1bb:  movzbl 0x2d(%eax),%eax
084ca9a5 +0x1bf:  movzbl %al,%eax
084ca9a8 +0x1c2:  mov    %edx,0x8(%esp)
084ca9ac +0x1c6:  mov    %eax,0x4(%esp)
084ca9b0 +0x1ca:  lea    -0x1c(%ebp),%eax
084ca9b3 +0x1cd:  mov    %eax,(%esp)
084ca9b6 +0x1d0:  call   084ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>  ; FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)
084ca9bb +0x1d5:  movl   $0x1,0x4(%esp)
084ca9c3 +0x1dd:  lea    -0x1c(%ebp),%eax
084ca9c6 +0x1e0:  mov    %eax,(%esp)
084ca9c9 +0x1e3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ca9ce +0x1e8:  lea    -0x1c(%ebp),%eax
084ca9d1 +0x1eb:  mov    %eax,0x4(%esp)
084ca9d5 +0x1ef:  mov    0xc(%ebp),%eax
084ca9d8 +0x1f2:  mov    %eax,(%esp)
084ca9db +0x1f5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ca9e0 +0x1fa:  mov    $0x0,%ebx
084ca9e5 +0x1ff:  lea    -0x1c(%ebp),%eax
084ca9e8 +0x202:  mov    %eax,(%esp)
084ca9eb +0x205:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ca9f0 +0x20a:  jmp    084caa0d <+0x227>
084ca9f2 +0x20c:  mov    %edx,%ebx
084ca9f4 +0x20e:  mov    %eax,%esi
084ca9f6 +0x210:  lea    -0x1c(%ebp),%eax
084ca9f9 +0x213:  mov    %eax,(%esp)
084ca9fc +0x216:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084caa01 +0x21b:  mov    %esi,%eax
084caa03 +0x21d:  mov    %ebx,%edx
084caa05 +0x21f:  mov    %eax,(%esp)
084caa08 +0x222:  call   08ae3750 <_Unwind_Resume>
084caa0d +0x227:  mov    %ebx,%eax
084caa0f +0x229:  add    $0x40,%esp
084caa12 +0x22c:  pop    %ebx
084caa13 +0x22d:  pop    %esi
084caa14 +0x22e:  pop    %ebp
084caa15 +0x22f:  ret
```

## 反编译 C

```c
// Inter_MonitorCallGuildMembers::dispatch_sig @ 0x84ca7e6

/* Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084ca8fe to 084ca9df has its CatchHandler @ 084ca9f2 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x46);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        local_10 = strlen((char *)(local_14 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x2e));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0x32));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_20,(uint)*(byte *)(local_14 + 0x2d),(ST_Guild_Mem_Info *)(local_14 + 0x34))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)",
                   0x24bf,
                   "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)",
                 0x24b9,
                 "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

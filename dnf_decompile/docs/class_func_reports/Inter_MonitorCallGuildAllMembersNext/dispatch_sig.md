# dispatch_sig

`_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci`

`Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallGuildAllMembersNext` | `0x084cae0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cae0a  _ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci
#           Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)
# range [0x084cae0a, 0x084cafcd]
084cae0a +0x000:  push   %ebp
084cae0b +0x001:  mov    %esp,%ebp
084cae0d +0x003:  push   %esi
084cae0e +0x004:  push   %ebx
084cae0f +0x005:  sub    $0x30,%esp
084cae12 +0x008:  mov    0xc(%ebp),%eax
084cae15 +0x00b:  mov    %eax,(%esp)
084cae18 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cae1d +0x013:  test   %eax,%eax
084cae1f +0x015:  sete   %al
084cae22 +0x018:  test   %al,%al
084cae24 +0x01a:  je     084cae30 <+0x26>
084cae26 +0x01c:  mov    $0x0,%ebx
084cae2b +0x021:  jmp    084cafc4 <+0x1ba>
084cae30 +0x026:  mov    0x10(%ebp),%eax
084cae33 +0x029:  mov    %eax,-0xc(%ebp)
084cae36 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cae3e +0x034:  mov    0xc(%ebp),%eax
084cae41 +0x037:  mov    %eax,(%esp)
084cae44 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cae49 +0x03f:  mov    %eax,%edx
084cae4b +0x041:  mov    -0xc(%ebp),%eax
084cae4e +0x044:  mov    0xe(%eax),%eax
084cae51 +0x047:  cmp    %eax,%edx
084cae53 +0x049:  setne  %al
084cae56 +0x04c:  test   %al,%al
084cae58 +0x04e:  je     084caeb1 <+0xa7>
084cae5a +0x050:  mov    -0xc(%ebp),%eax
084cae5d +0x053:  mov    0xe(%eax),%ebx
084cae60 +0x056:  movl   $0xffffffff,0x4(%esp)
084cae68 +0x05e:  mov    0xc(%ebp),%eax
084cae6b +0x061:  mov    %eax,(%esp)
084cae6e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cae73 +0x069:  mov    %ebx,0x18(%esp)
084cae77 +0x06d:  mov    %eax,0x14(%esp)
084cae7b +0x071:  movl   $"Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cae83 +0x079:  movl   $0x2539,0xc(%esp)
084cae8b +0x081:  movl   $&_ZZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cae93 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cae9b +0x091:  movl   $0x1,(%esp)
084caea2 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084caea7 +0x09d:  mov    $0x0,%ebx
084caeac +0x0a2:  jmp    084cafc4 <+0x1ba>
084caeb1 +0x0a7:  mov    0xc(%ebp),%eax
084caeb4 +0x0aa:  mov    %eax,(%esp)
084caeb7 +0x0ad:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084caebc +0x0b2:  mov    -0xc(%ebp),%edx
084caebf +0x0b5:  mov    0x12(%edx),%edx
084caec2 +0x0b8:  cmp    %edx,%eax
084caec4 +0x0ba:  setne  %al
084caec7 +0x0bd:  test   %al,%al
084caec9 +0x0bf:  je     084caf01 <+0xf7>
084caecb +0x0c1:  movl   $"Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey",0x10(%esp)
084caed3 +0x0c9:  movl   $0x253f,0xc(%esp)
084caedb +0x0d1:  movl   $&_ZZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084caee3 +0x0d9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084caeeb +0x0e1:  movl   $0x1,(%esp)
084caef2 +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084caef7 +0x0ed:  mov    $0x0,%ebx
084caefc +0x0f2:  jmp    084cafc4 <+0x1ba>
084caf01 +0x0f7:  lea    -0x18(%ebp),%eax
084caf04 +0x0fa:  mov    %eax,(%esp)
084caf07 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084caf0c +0x102:  movl   $0x90,0x8(%esp)
084caf14 +0x10a:  movl   $0x1,0x4(%esp)
084caf1c +0x112:  lea    -0x18(%ebp),%eax
084caf1f +0x115:  mov    %eax,(%esp)
084caf22 +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084caf27 +0x11d:  movl   $0x1,0x4(%esp)
084caf2f +0x125:  lea    -0x18(%ebp),%eax
084caf32 +0x128:  mov    %eax,(%esp)
084caf35 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084caf3a +0x130:  mov    -0xc(%ebp),%eax
084caf3d +0x133:  mov    0x12(%eax),%eax
084caf40 +0x136:  mov    %eax,0x4(%esp)
084caf44 +0x13a:  lea    -0x18(%ebp),%eax
084caf47 +0x13d:  mov    %eax,(%esp)
084caf4a +0x140:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084caf4f +0x145:  mov    -0xc(%ebp),%eax
084caf52 +0x148:  lea    0x17(%eax),%edx
084caf55 +0x14b:  mov    -0xc(%ebp),%eax
084caf58 +0x14e:  movzbl 0x16(%eax),%eax
084caf5c +0x152:  movzbl %al,%eax
084caf5f +0x155:  mov    %edx,0x8(%esp)
084caf63 +0x159:  mov    %eax,0x4(%esp)
084caf67 +0x15d:  lea    -0x18(%ebp),%eax
084caf6a +0x160:  mov    %eax,(%esp)
084caf6d +0x163:  call   084ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>  ; FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)
084caf72 +0x168:  movl   $0x1,0x4(%esp)
084caf7a +0x170:  lea    -0x18(%ebp),%eax
084caf7d +0x173:  mov    %eax,(%esp)
084caf80 +0x176:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084caf85 +0x17b:  lea    -0x18(%ebp),%eax
084caf88 +0x17e:  mov    %eax,0x4(%esp)
084caf8c +0x182:  mov    0xc(%ebp),%eax
084caf8f +0x185:  mov    %eax,(%esp)
084caf92 +0x188:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084caf97 +0x18d:  mov    $0x0,%ebx
084caf9c +0x192:  lea    -0x18(%ebp),%eax
084caf9f +0x195:  mov    %eax,(%esp)
084cafa2 +0x198:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cafa7 +0x19d:  jmp    084cafc4 <+0x1ba>
084cafa9 +0x19f:  mov    %edx,%ebx
084cafab +0x1a1:  mov    %eax,%esi
084cafad +0x1a3:  lea    -0x18(%ebp),%eax
084cafb0 +0x1a6:  mov    %eax,(%esp)
084cafb3 +0x1a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cafb8 +0x1ae:  mov    %esi,%eax
084cafba +0x1b0:  mov    %ebx,%edx
084cafbc +0x1b2:  mov    %eax,(%esp)
084cafbf +0x1b5:  call   08ae3750 <_Unwind_Resume>
084cafc4 +0x1ba:  mov    %ebx,%eax
084cafc6 +0x1bc:  add    $0x30,%esp
084cafc9 +0x1bf:  pop    %ebx
084cafca +0x1c0:  pop    %esi
084cafcb +0x1c1:  pop    %ebp
084cafcc +0x1c2:  ret
084cafcd +0x1c3:  nop
```

## 反编译 C

```c
// Inter_MonitorCallGuildAllMembersNext::dispatch_sig @ 0x84cae0a

/* Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084caf22 to 084caf96 has its CatchHandler @ 084cafa9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x90);
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
                   "virtual int Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)"
                   ,0x253f,
                   "Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)"
                 ,0x2539,
                 "Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

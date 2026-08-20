# dispatch_sig

`_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberSecedeToSeceder` | `0x084cda74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cda74  _ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int)
# range [0x084cda74, 0x084cdc2b]
084cda74 +0x000:  push   %ebp
084cda75 +0x001:  mov    %esp,%ebp
084cda77 +0x003:  push   %esi
084cda78 +0x004:  push   %ebx
084cda79 +0x005:  sub    $0x40,%esp
084cda7c +0x008:  mov    0xc(%ebp),%eax
084cda7f +0x00b:  mov    %eax,(%esp)
084cda82 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cda87 +0x013:  test   %eax,%eax
084cda89 +0x015:  sete   %al
084cda8c +0x018:  test   %al,%al
084cda8e +0x01a:  je     084cda9a <+0x26>
084cda90 +0x01c:  mov    $0x0,%ebx
084cda95 +0x021:  jmp    084cdc22 <+0x1ae>
084cda9a +0x026:  mov    0x10(%ebp),%eax
084cda9d +0x029:  mov    %eax,-0x14(%ebp)
084cdaa0 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cdaa8 +0x034:  mov    0xc(%ebp),%eax
084cdaab +0x037:  mov    %eax,(%esp)
084cdaae +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cdab3 +0x03f:  mov    %eax,%edx
084cdab5 +0x041:  mov    -0x14(%ebp),%eax
084cdab8 +0x044:  mov    0xe(%eax),%eax
084cdabb +0x047:  cmp    %eax,%edx
084cdabd +0x049:  setne  %al
084cdac0 +0x04c:  test   %al,%al
084cdac2 +0x04e:  je     084cdb1b <+0xa7>
084cdac4 +0x050:  mov    -0x14(%ebp),%eax
084cdac7 +0x053:  mov    0xe(%eax),%ebx
084cdaca +0x056:  movl   $0xffffffff,0x4(%esp)
084cdad2 +0x05e:  mov    0xc(%ebp),%eax
084cdad5 +0x061:  mov    %eax,(%esp)
084cdad8 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cdadd +0x069:  mov    %ebx,0x18(%esp)
084cdae1 +0x06d:  mov    %eax,0x14(%esp)
084cdae5 +0x071:  movl   $"MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uSecededCharID(%d)",0x10(%esp)
084cdaed +0x079:  movl   $0x2947,0xc(%esp)
084cdaf5 +0x081:  movl   $&_ZZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cdafd +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cdb05 +0x091:  movl   $0x1,(%esp)
084cdb0c +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cdb11 +0x09d:  mov    $0x0,%ebx
084cdb16 +0x0a2:  jmp    084cdc22 <+0x1ae>
084cdb1b +0x0a7:  mov    -0x14(%ebp),%eax
084cdb1e +0x0aa:  movzbl 0x12(%eax),%eax
084cdb22 +0x0ae:  cmp    $0x1,%al
084cdb24 +0x0b0:  jne    084cdb6b <+0xf7>
084cdb26 +0x0b2:  mov    0xc(%ebp),%eax
084cdb29 +0x0b5:  movl   $0x0,0x4(%esp)
084cdb31 +0x0bd:  mov    %eax,(%esp)
084cdb34 +0x0c0:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cdb39 +0x0c5:  mov    0xc(%ebp),%eax
084cdb3c +0x0c8:  movl   $0x0,0x4(%esp)
084cdb44 +0x0d0:  mov    %eax,(%esp)
084cdb47 +0x0d3:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cdb4c +0x0d8:  mov    0xc(%ebp),%eax
084cdb4f +0x0db:  mov    %eax,(%esp)
084cdb52 +0x0de:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084cdb57 +0x0e3:  mov    %eax,-0xc(%ebp)
084cdb5a +0x0e6:  cmpl   $0x0,-0xc(%ebp)
084cdb5e +0x0ea:  je     084cdb6b <+0xf7>
084cdb60 +0x0ec:  mov    -0xc(%ebp),%eax
084cdb63 +0x0ef:  mov    %eax,(%esp)
084cdb66 +0x0f2:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
084cdb6b +0x0f7:  lea    -0x20(%ebp),%eax
084cdb6e +0x0fa:  mov    %eax,(%esp)
084cdb71 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cdb76 +0x102:  movl   $0x4d,0x8(%esp)
084cdb7e +0x10a:  movl   $0x0,0x4(%esp)
084cdb86 +0x112:  lea    -0x20(%ebp),%eax
084cdb89 +0x115:  mov    %eax,(%esp)
084cdb8c +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cdb91 +0x11d:  mov    -0x14(%ebp),%eax
084cdb94 +0x120:  add    $0x13,%eax
084cdb97 +0x123:  mov    %eax,(%esp)
084cdb9a +0x126:  call   0807e3b0 <_init+0xca8>
084cdb9f +0x12b:  mov    %eax,-0x10(%ebp)
084cdba2 +0x12e:  mov    -0x10(%ebp),%eax
084cdba5 +0x131:  mov    %eax,0x4(%esp)
084cdba9 +0x135:  lea    -0x20(%ebp),%eax
084cdbac +0x138:  mov    %eax,(%esp)
084cdbaf +0x13b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cdbb4 +0x140:  mov    -0x14(%ebp),%eax
084cdbb7 +0x143:  lea    0x13(%eax),%edx
084cdbba +0x146:  mov    -0x10(%ebp),%eax
084cdbbd +0x149:  mov    %eax,0x8(%esp)
084cdbc1 +0x14d:  mov    %edx,0x4(%esp)
084cdbc5 +0x151:  lea    -0x20(%ebp),%eax
084cdbc8 +0x154:  mov    %eax,(%esp)
084cdbcb +0x157:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cdbd0 +0x15c:  movl   $0x1,0x4(%esp)
084cdbd8 +0x164:  lea    -0x20(%ebp),%eax
084cdbdb +0x167:  mov    %eax,(%esp)
084cdbde +0x16a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cdbe3 +0x16f:  lea    -0x20(%ebp),%eax
084cdbe6 +0x172:  mov    %eax,0x4(%esp)
084cdbea +0x176:  mov    0xc(%ebp),%eax
084cdbed +0x179:  mov    %eax,(%esp)
084cdbf0 +0x17c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cdbf5 +0x181:  mov    $0x0,%ebx
084cdbfa +0x186:  lea    -0x20(%ebp),%eax
084cdbfd +0x189:  mov    %eax,(%esp)
084cdc00 +0x18c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cdc05 +0x191:  jmp    084cdc22 <+0x1ae>
084cdc07 +0x193:  mov    %edx,%ebx
084cdc09 +0x195:  mov    %eax,%esi
084cdc0b +0x197:  lea    -0x20(%ebp),%eax
084cdc0e +0x19a:  mov    %eax,(%esp)
084cdc11 +0x19d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cdc16 +0x1a2:  mov    %esi,%eax
084cdc18 +0x1a4:  mov    %ebx,%edx
084cdc1a +0x1a6:  mov    %eax,(%esp)
084cdc1d +0x1a9:  call   08ae3750 <_Unwind_Resume>
084cdc22 +0x1ae:  mov    %ebx,%eax
084cdc24 +0x1b0:  add    $0x40,%esp
084cdc27 +0x1b3:  pop    %ebx
084cdc28 +0x1b4:  pop    %esi
084cdc29 +0x1b5:  pop    %ebp
084cdc2a +0x1b6:  ret
084cdc2b +0x1b7:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig @ 0x84cda74

/* Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      if (*(char *)(local_18 + 0x12) == '\x01') {
        CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
        CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
        local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
        if (local_10 != (CParty *)0x0) {
          CParty::send_party_realtime_info(local_10);
        }
      }
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cdb8c to 084cdbf4 has its CatchHandler @ 084cdc07 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x4d);
      local_14 = strlen((char *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x13),local_14)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int)"
                 ,0x2947,
                 "MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uSecededCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

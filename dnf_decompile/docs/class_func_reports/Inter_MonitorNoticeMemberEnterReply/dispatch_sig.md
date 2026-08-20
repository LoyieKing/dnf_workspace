# dispatch_sig

`_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberEnterReply` | `0x084cd5ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cd5ca  _ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int)
# range [0x084cd5ca, 0x084cd839]
084cd5ca +0x000:  push   %ebp
084cd5cb +0x001:  mov    %esp,%ebp
084cd5cd +0x003:  push   %esi
084cd5ce +0x004:  push   %ebx
084cd5cf +0x005:  sub    $0x40,%esp
084cd5d2 +0x008:  mov    0xc(%ebp),%eax
084cd5d5 +0x00b:  mov    %eax,(%esp)
084cd5d8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cd5dd +0x013:  test   %eax,%eax
084cd5df +0x015:  sete   %al
084cd5e2 +0x018:  test   %al,%al
084cd5e4 +0x01a:  je     084cd5f0 <+0x26>
084cd5e6 +0x01c:  mov    $0x0,%ebx
084cd5eb +0x021:  jmp    084cd830 <+0x266>
084cd5f0 +0x026:  mov    0x10(%ebp),%eax
084cd5f3 +0x029:  mov    %eax,-0x14(%ebp)
084cd5f6 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cd5fe +0x034:  mov    0xc(%ebp),%eax
084cd601 +0x037:  mov    %eax,(%esp)
084cd604 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd609 +0x03f:  mov    %eax,%edx
084cd60b +0x041:  mov    -0x14(%ebp),%eax
084cd60e +0x044:  mov    0x11(%eax),%eax
084cd611 +0x047:  cmp    %eax,%edx
084cd613 +0x049:  setne  %al
084cd616 +0x04c:  test   %al,%al
084cd618 +0x04e:  je     084cd671 <+0xa7>
084cd61a +0x050:  mov    -0x14(%ebp),%eax
084cd61d +0x053:  mov    0x11(%eax),%ebx
084cd620 +0x056:  movl   $0xffffffff,0x4(%esp)
084cd628 +0x05e:  mov    0xc(%ebp),%eax
084cd62b +0x061:  mov    %eax,(%esp)
084cd62e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd633 +0x069:  mov    %ebx,0x18(%esp)
084cd637 +0x06d:  mov    %eax,0x14(%esp)
084cd63b +0x071:  movl   $"MEMBER : Inter_MonitorNoticeMemberEnterReply::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cd643 +0x079:  movl   $0x28d9,0xc(%esp)
084cd64b +0x081:  movl   $&_ZZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cd653 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cd65b +0x091:  movl   $0x1,(%esp)
084cd662 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cd667 +0x09d:  mov    $0x0,%ebx
084cd66c +0x0a2:  jmp    084cd830 <+0x266>
084cd671 +0x0a7:  mov    -0x14(%ebp),%eax
084cd674 +0x0aa:  movzbl 0xa(%eax),%eax
084cd678 +0x0ae:  cmp    $0x2,%al
084cd67a +0x0b0:  jne    084cd686 <+0xbc>
084cd67c +0x0b2:  mov    $0x0,%ebx
084cd681 +0x0b7:  jmp    084cd830 <+0x266>
084cd686 +0x0bc:  mov    -0x14(%ebp),%eax
084cd689 +0x0bf:  movzbl 0xa(%eax),%eax
084cd68d +0x0c3:  cmp    $0x3,%al
084cd68f +0x0c5:  je     084cd69c <+0xd2>
084cd691 +0x0c7:  mov    -0x14(%ebp),%eax
084cd694 +0x0ca:  movzbl 0xa(%eax),%eax
084cd698 +0x0ce:  cmp    $0x4,%al
084cd69a +0x0d0:  jne    084cd6a6 <+0xdc>
084cd69c +0x0d2:  mov    $0x0,%ebx
084cd6a1 +0x0d7:  jmp    084cd830 <+0x266>
084cd6a6 +0x0dc:  mov    -0x14(%ebp),%eax
084cd6a9 +0x0df:  movzbl 0xb(%eax),%eax
084cd6ad +0x0e3:  cmp    $0x1,%al
084cd6af +0x0e5:  je     084cd6bc <+0xf2>
084cd6b1 +0x0e7:  mov    -0x14(%ebp),%eax
084cd6b4 +0x0ea:  movzbl 0xb(%eax),%eax
084cd6b8 +0x0ee:  cmp    $0x2,%al
084cd6ba +0x0f0:  jne    084cd734 <+0x16a>
084cd6bc +0x0f2:  mov    -0x14(%ebp),%eax
084cd6bf +0x0f5:  movzbl 0xb(%eax),%eax
084cd6c3 +0x0f9:  cmp    $0x1,%al
084cd6c5 +0x0fb:  jne    084cd71f <+0x155>
084cd6c7 +0x0fd:  mov    -0x14(%ebp),%eax
084cd6ca +0x100:  movzbl 0xc(%eax),%eax
084cd6ce +0x104:  cmp    $0x1,%al
084cd6d0 +0x106:  jne    084cd71f <+0x155>
084cd6d2 +0x108:  mov    -0x14(%ebp),%eax
084cd6d5 +0x10b:  movzbl 0x34(%eax),%eax
084cd6d9 +0x10f:  movzbl %al,%edx
084cd6dc +0x112:  mov    0xc(%ebp),%eax
084cd6df +0x115:  mov    %edx,0x4(%esp)
084cd6e3 +0x119:  mov    %eax,(%esp)
084cd6e6 +0x11c:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cd6eb +0x121:  mov    -0x14(%ebp),%eax
084cd6ee +0x124:  mov    0x35(%eax),%edx
084cd6f1 +0x127:  mov    0xc(%ebp),%eax
084cd6f4 +0x12a:  mov    %edx,0x4(%esp)
084cd6f8 +0x12e:  mov    %eax,(%esp)
084cd6fb +0x131:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cd700 +0x136:  mov    0xc(%ebp),%eax
084cd703 +0x139:  mov    %eax,(%esp)
084cd706 +0x13c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084cd70b +0x141:  mov    %eax,-0xc(%ebp)
084cd70e +0x144:  cmpl   $0x0,-0xc(%ebp)
084cd712 +0x148:  je     084cd71f <+0x155>
084cd714 +0x14a:  mov    -0xc(%ebp),%eax
084cd717 +0x14d:  mov    %eax,(%esp)
084cd71a +0x150:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
084cd71f +0x155:  mov    -0x14(%ebp),%eax
084cd722 +0x158:  mov    0x11(%eax),%edx
084cd725 +0x15b:  mov    0xc(%ebp),%eax
084cd728 +0x15e:  mov    %edx,0x4(%esp)
084cd72c +0x162:  mov    %eax,(%esp)
084cd72f +0x165:  call   084ec0dc <_GLOBAL__I__Z7getUserj+0x308e>  ; global constructors keyed to getUser(unsigned int)+0x308e
084cd734 +0x16a:  lea    -0x20(%ebp),%eax
084cd737 +0x16d:  mov    %eax,(%esp)
084cd73a +0x170:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cd73f +0x175:  movl   $0x50,0x8(%esp)
084cd747 +0x17d:  movl   $0x1,0x4(%esp)
084cd74f +0x185:  lea    -0x20(%ebp),%eax
084cd752 +0x188:  mov    %eax,(%esp)
084cd755 +0x18b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cd75a +0x190:  movl   $0x1,0x4(%esp)
084cd762 +0x198:  lea    -0x20(%ebp),%eax
084cd765 +0x19b:  mov    %eax,(%esp)
084cd768 +0x19e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd76d +0x1a3:  mov    -0x14(%ebp),%eax
084cd770 +0x1a6:  movzbl 0xb(%eax),%eax
084cd774 +0x1aa:  movzbl %al,%eax
084cd777 +0x1ad:  mov    %eax,0x4(%esp)
084cd77b +0x1b1:  lea    -0x20(%ebp),%eax
084cd77e +0x1b4:  mov    %eax,(%esp)
084cd781 +0x1b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd786 +0x1bc:  mov    -0x14(%ebp),%eax
084cd789 +0x1bf:  movzbl 0x15(%eax),%eax
084cd78d +0x1c3:  movzbl %al,%eax
084cd790 +0x1c6:  mov    %eax,0x4(%esp)
084cd794 +0x1ca:  lea    -0x20(%ebp),%eax
084cd797 +0x1cd:  mov    %eax,(%esp)
084cd79a +0x1d0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd79f +0x1d5:  mov    -0x14(%ebp),%eax
084cd7a2 +0x1d8:  add    $0x16,%eax
084cd7a5 +0x1db:  mov    %eax,(%esp)
084cd7a8 +0x1de:  call   0807e3b0 <_init+0xca8>
084cd7ad +0x1e3:  mov    %eax,-0x10(%ebp)
084cd7b0 +0x1e6:  mov    -0x10(%ebp),%eax
084cd7b3 +0x1e9:  mov    %eax,0x4(%esp)
084cd7b7 +0x1ed:  lea    -0x20(%ebp),%eax
084cd7ba +0x1f0:  mov    %eax,(%esp)
084cd7bd +0x1f3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd7c2 +0x1f8:  mov    -0x14(%ebp),%eax
084cd7c5 +0x1fb:  lea    0x16(%eax),%edx
084cd7c8 +0x1fe:  mov    -0x10(%ebp),%eax
084cd7cb +0x201:  mov    %eax,0x8(%esp)
084cd7cf +0x205:  mov    %edx,0x4(%esp)
084cd7d3 +0x209:  lea    -0x20(%ebp),%eax
084cd7d6 +0x20c:  mov    %eax,(%esp)
084cd7d9 +0x20f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd7de +0x214:  movl   $0x1,0x4(%esp)
084cd7e6 +0x21c:  lea    -0x20(%ebp),%eax
084cd7e9 +0x21f:  mov    %eax,(%esp)
084cd7ec +0x222:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cd7f1 +0x227:  lea    -0x20(%ebp),%eax
084cd7f4 +0x22a:  mov    %eax,0x4(%esp)
084cd7f8 +0x22e:  mov    0xc(%ebp),%eax
084cd7fb +0x231:  mov    %eax,(%esp)
084cd7fe +0x234:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cd803 +0x239:  mov    $0x0,%ebx
084cd808 +0x23e:  lea    -0x20(%ebp),%eax
084cd80b +0x241:  mov    %eax,(%esp)
084cd80e +0x244:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd813 +0x249:  jmp    084cd830 <+0x266>
084cd815 +0x24b:  mov    %edx,%ebx
084cd817 +0x24d:  mov    %eax,%esi
084cd819 +0x24f:  lea    -0x20(%ebp),%eax
084cd81c +0x252:  mov    %eax,(%esp)
084cd81f +0x255:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd824 +0x25a:  mov    %esi,%eax
084cd826 +0x25c:  mov    %ebx,%edx
084cd828 +0x25e:  mov    %eax,(%esp)
084cd82b +0x261:  call   08ae3750 <_Unwind_Resume>
084cd830 +0x266:  mov    %ebx,%eax
084cd832 +0x268:  add    $0x40,%esp
084cd835 +0x26b:  pop    %ebx
084cd836 +0x26c:  pop    %esi
084cd837 +0x26d:  pop    %ebp
084cd838 +0x26e:  ret
084cd839 +0x26f:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberEnterReply::dispatch_sig @ 0x84cd5ca

/* Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_18 + 0x11)) {
      if (((*(char *)(local_18 + 10) != '\x02') && (*(char *)(local_18 + 10) != '\x03')) &&
         (*(char *)(local_18 + 10) != '\x04')) {
        if ((*(char *)(local_18 + 0xb) == '\x01') || (*(char *)(local_18 + 0xb) == '\x02')) {
          if ((*(char *)(local_18 + 0xb) == '\x01') && (*(char *)(local_18 + 0xc) == '\x01')) {
            CUserCharacInfo::set_uppermember_exp_level
                      ((CUserCharacInfo *)param_2,*(uchar *)(local_18 + 0x34));
            CUserCharacInfo::set_connect_upper_member
                      ((CUserCharacInfo *)param_2,*(uint *)(local_18 + 0x35));
            local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
            if (local_10 != (CParty *)0x0) {
              CParty::send_party_realtime_info(local_10);
            }
          }
          CUserCharacInfo::set_charac_memberkey
                    ((CUserCharacInfo *)param_2,*(uint *)(local_18 + 0x11));
        }
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cd755 to 084cd802 has its CatchHandler @ 084cd815 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x50);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x15));
        local_14 = strlen((char *)(local_18 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0x11);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int)"
                 ,0x28d9,
                 "MEMBER : Inter_MonitorNoticeMemberEnterReply::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

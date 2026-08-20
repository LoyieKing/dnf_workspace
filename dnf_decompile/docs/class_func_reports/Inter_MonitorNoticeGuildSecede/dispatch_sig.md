# dispatch_sig

`_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildSecede` | `0x084c957e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c957e  _ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int)
# range [0x084c957e, 0x084c9767]
084c957e +0x000:  push   %ebp
084c957f +0x001:  mov    %esp,%ebp
084c9581 +0x003:  push   %esi
084c9582 +0x004:  push   %ebx
084c9583 +0x005:  sub    $0x40,%esp
084c9586 +0x008:  mov    0xc(%ebp),%eax
084c9589 +0x00b:  mov    %eax,(%esp)
084c958c +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c9591 +0x013:  test   %eax,%eax
084c9593 +0x015:  sete   %al
084c9596 +0x018:  test   %al,%al
084c9598 +0x01a:  je     084c95a4 <+0x26>
084c959a +0x01c:  mov    $0x0,%ebx
084c959f +0x021:  jmp    084c975e <+0x1e0>
084c95a4 +0x026:  mov    0x10(%ebp),%eax
084c95a7 +0x029:  mov    %eax,-0x14(%ebp)
084c95aa +0x02c:  movl   $0xffffffff,0x4(%esp)
084c95b2 +0x034:  mov    0xc(%ebp),%eax
084c95b5 +0x037:  mov    %eax,(%esp)
084c95b8 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c95bd +0x03f:  mov    %eax,%edx
084c95bf +0x041:  mov    -0x14(%ebp),%eax
084c95c2 +0x044:  mov    0xe(%eax),%eax
084c95c5 +0x047:  cmp    %eax,%edx
084c95c7 +0x049:  setne  %al
084c95ca +0x04c:  test   %al,%al
084c95cc +0x04e:  je     084c9625 <+0xa7>
084c95ce +0x050:  mov    -0x14(%ebp),%eax
084c95d1 +0x053:  mov    0xe(%eax),%ebx
084c95d4 +0x056:  movl   $0xffffffff,0x4(%esp)
084c95dc +0x05e:  mov    0xc(%ebp),%eax
084c95df +0x061:  mov    %eax,(%esp)
084c95e2 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c95e7 +0x069:  mov    %ebx,0x18(%esp)
084c95eb +0x06d:  mov    %eax,0x14(%esp)
084c95ef +0x071:  movl   $"Inter_MonitorNoticeGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c95f7 +0x079:  movl   $0x2348,0xc(%esp)
084c95ff +0x081:  movl   $&_ZZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c9607 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c960f +0x091:  movl   $0x1,(%esp)
084c9616 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c961b +0x09d:  mov    $0x0,%ebx
084c9620 +0x0a2:  jmp    084c975e <+0x1e0>
084c9625 +0x0a7:  lea    -0x20(%ebp),%eax
084c9628 +0x0aa:  mov    %eax,(%esp)
084c962b +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9630 +0x0b2:  movl   $0x3b,0x8(%esp)
084c9638 +0x0ba:  movl   $0x0,0x4(%esp)
084c9640 +0x0c2:  lea    -0x20(%ebp),%eax
084c9643 +0x0c5:  mov    %eax,(%esp)
084c9646 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c964b +0x0cd:  mov    -0x14(%ebp),%eax
084c964e +0x0d0:  mov    0x12(%eax),%eax
084c9651 +0x0d3:  mov    %eax,0x4(%esp)
084c9655 +0x0d7:  lea    -0x20(%ebp),%eax
084c9658 +0x0da:  mov    %eax,(%esp)
084c965b +0x0dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9660 +0x0e2:  mov    -0x14(%ebp),%eax
084c9663 +0x0e5:  mov    0x1a(%eax),%eax
084c9666 +0x0e8:  mov    %eax,0x4(%esp)
084c966a +0x0ec:  lea    -0x20(%ebp),%eax
084c966d +0x0ef:  mov    %eax,(%esp)
084c9670 +0x0f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9675 +0x0f7:  mov    -0x14(%ebp),%eax
084c9678 +0x0fa:  movzwl 0x1e(%eax),%eax
084c967c +0x0fe:  movzwl %ax,%eax
084c967f +0x101:  mov    %eax,0x4(%esp)
084c9683 +0x105:  lea    -0x20(%ebp),%eax
084c9686 +0x108:  mov    %eax,(%esp)
084c9689 +0x10b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c968e +0x110:  mov    -0x14(%ebp),%eax
084c9691 +0x113:  add    $0x20,%eax
084c9694 +0x116:  mov    %eax,(%esp)
084c9697 +0x119:  call   0807e3b0 <_init+0xca8>
084c969c +0x11e:  mov    %eax,-0x10(%ebp)
084c969f +0x121:  mov    -0x10(%ebp),%eax
084c96a2 +0x124:  mov    %eax,0x4(%esp)
084c96a6 +0x128:  lea    -0x20(%ebp),%eax
084c96a9 +0x12b:  mov    %eax,(%esp)
084c96ac +0x12e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c96b1 +0x133:  mov    -0x14(%ebp),%eax
084c96b4 +0x136:  lea    0x20(%eax),%edx
084c96b7 +0x139:  mov    -0x10(%ebp),%eax
084c96ba +0x13c:  mov    %eax,0x8(%esp)
084c96be +0x140:  mov    %edx,0x4(%esp)
084c96c2 +0x144:  lea    -0x20(%ebp),%eax
084c96c5 +0x147:  mov    %eax,(%esp)
084c96c8 +0x14a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c96cd +0x14f:  mov    -0x14(%ebp),%eax
084c96d0 +0x152:  add    $0x37,%eax
084c96d3 +0x155:  mov    %eax,(%esp)
084c96d6 +0x158:  call   0807e3b0 <_init+0xca8>
084c96db +0x15d:  mov    %eax,-0xc(%ebp)
084c96de +0x160:  mov    -0xc(%ebp),%eax
084c96e1 +0x163:  mov    %eax,0x4(%esp)
084c96e5 +0x167:  lea    -0x20(%ebp),%eax
084c96e8 +0x16a:  mov    %eax,(%esp)
084c96eb +0x16d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c96f0 +0x172:  mov    -0x14(%ebp),%eax
084c96f3 +0x175:  lea    0x37(%eax),%edx
084c96f6 +0x178:  mov    -0xc(%ebp),%eax
084c96f9 +0x17b:  mov    %eax,0x8(%esp)
084c96fd +0x17f:  mov    %edx,0x4(%esp)
084c9701 +0x183:  lea    -0x20(%ebp),%eax
084c9704 +0x186:  mov    %eax,(%esp)
084c9707 +0x189:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c970c +0x18e:  movl   $0x1,0x4(%esp)
084c9714 +0x196:  lea    -0x20(%ebp),%eax
084c9717 +0x199:  mov    %eax,(%esp)
084c971a +0x19c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c971f +0x1a1:  lea    -0x20(%ebp),%eax
084c9722 +0x1a4:  mov    %eax,0x4(%esp)
084c9726 +0x1a8:  mov    0xc(%ebp),%eax
084c9729 +0x1ab:  mov    %eax,(%esp)
084c972c +0x1ae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9731 +0x1b3:  mov    $0x0,%ebx
084c9736 +0x1b8:  lea    -0x20(%ebp),%eax
084c9739 +0x1bb:  mov    %eax,(%esp)
084c973c +0x1be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9741 +0x1c3:  jmp    084c975e <+0x1e0>
084c9743 +0x1c5:  mov    %edx,%ebx
084c9745 +0x1c7:  mov    %eax,%esi
084c9747 +0x1c9:  lea    -0x20(%ebp),%eax
084c974a +0x1cc:  mov    %eax,(%esp)
084c974d +0x1cf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9752 +0x1d4:  mov    %esi,%eax
084c9754 +0x1d6:  mov    %ebx,%edx
084c9756 +0x1d8:  mov    %eax,(%esp)
084c9759 +0x1db:  call   08ae3750 <_Unwind_Resume>
084c975e +0x1e0:  mov    %ebx,%eax
084c9760 +0x1e2:  add    $0x40,%esp
084c9763 +0x1e5:  pop    %ebx
084c9764 +0x1e6:  pop    %esi
084c9765 +0x1e7:  pop    %ebp
084c9766 +0x1e8:  ret
084c9767 +0x1e9:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildSecede::dispatch_sig @ 0x84c957e

/* Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084c9646 to 084c9730 has its CatchHandler @ 084c9743 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x3b);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_18 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_18 + 0x1a));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0x1e));
      local_14 = strlen((char *)(local_18 + 0x20));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x20),local_14)
      ;
      local_10 = strlen((char *)(local_18 + 0x37));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x37),local_10)
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
                 "virtual int Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int)",
                 0x2348,
                 "Inter_MonitorNoticeGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

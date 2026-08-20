# dispatch_sig

`_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildLoginOut` | `0x084c93e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c93e4  _ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int)
# range [0x084c93e4, 0x084c957d]
084c93e4 +0x000:  push   %ebp
084c93e5 +0x001:  mov    %esp,%ebp
084c93e7 +0x003:  push   %esi
084c93e8 +0x004:  push   %ebx
084c93e9 +0x005:  sub    $0x40,%esp
084c93ec +0x008:  mov    0xc(%ebp),%eax
084c93ef +0x00b:  mov    %eax,(%esp)
084c93f2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c93f7 +0x013:  test   %eax,%eax
084c93f9 +0x015:  sete   %al
084c93fc +0x018:  test   %al,%al
084c93fe +0x01a:  je     084c940a <+0x26>
084c9400 +0x01c:  mov    $0x0,%ebx
084c9405 +0x021:  jmp    084c9574 <+0x190>
084c940a +0x026:  mov    0x10(%ebp),%eax
084c940d +0x029:  mov    %eax,-0x10(%ebp)
084c9410 +0x02c:  movl   $0xffffffff,0x4(%esp)
084c9418 +0x034:  mov    0xc(%ebp),%eax
084c941b +0x037:  mov    %eax,(%esp)
084c941e +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9423 +0x03f:  mov    %eax,%edx
084c9425 +0x041:  mov    -0x10(%ebp),%eax
084c9428 +0x044:  mov    0xf(%eax),%eax
084c942b +0x047:  cmp    %eax,%edx
084c942d +0x049:  setne  %al
084c9430 +0x04c:  test   %al,%al
084c9432 +0x04e:  je     084c948b <+0xa7>
084c9434 +0x050:  mov    -0x10(%ebp),%eax
084c9437 +0x053:  mov    0xf(%eax),%ebx
084c943a +0x056:  movl   $0xffffffff,0x4(%esp)
084c9442 +0x05e:  mov    0xc(%ebp),%eax
084c9445 +0x061:  mov    %eax,(%esp)
084c9448 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c944d +0x069:  mov    %ebx,0x18(%esp)
084c9451 +0x06d:  mov    %eax,0x14(%esp)
084c9455 +0x071:  movl   $"Inter_MonitorNoticeGuildLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c945d +0x079:  movl   $0x232c,0xc(%esp)
084c9465 +0x081:  movl   $&_ZZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c946d +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9475 +0x091:  movl   $0x1,(%esp)
084c947c +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9481 +0x09d:  mov    $0x0,%ebx
084c9486 +0x0a2:  jmp    084c9574 <+0x190>
084c948b +0x0a7:  lea    -0x1c(%ebp),%eax
084c948e +0x0aa:  mov    %eax,(%esp)
084c9491 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9496 +0x0b2:  movl   $0x40,0x8(%esp)
084c949e +0x0ba:  movl   $0x0,0x4(%esp)
084c94a6 +0x0c2:  lea    -0x1c(%ebp),%eax
084c94a9 +0x0c5:  mov    %eax,(%esp)
084c94ac +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c94b1 +0x0cd:  mov    -0x10(%ebp),%eax
084c94b4 +0x0d0:  movzbl 0xa(%eax),%eax
084c94b8 +0x0d4:  movsbl %al,%eax
084c94bb +0x0d7:  mov    %eax,0x4(%esp)
084c94bf +0x0db:  lea    -0x1c(%ebp),%eax
084c94c2 +0x0de:  mov    %eax,(%esp)
084c94c5 +0x0e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c94ca +0x0e6:  mov    -0x10(%ebp),%eax
084c94cd +0x0e9:  movzbl 0x13(%eax),%eax
084c94d1 +0x0ed:  movzbl %al,%eax
084c94d4 +0x0f0:  mov    %eax,0x4(%esp)
084c94d8 +0x0f4:  lea    -0x1c(%ebp),%eax
084c94db +0x0f7:  mov    %eax,(%esp)
084c94de +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c94e3 +0x0ff:  mov    -0x10(%ebp),%eax
084c94e6 +0x102:  add    $0x14,%eax
084c94e9 +0x105:  mov    %eax,(%esp)
084c94ec +0x108:  call   0807e3b0 <_init+0xca8>
084c94f1 +0x10d:  mov    %eax,-0xc(%ebp)
084c94f4 +0x110:  mov    -0xc(%ebp),%eax
084c94f7 +0x113:  mov    %eax,0x4(%esp)
084c94fb +0x117:  lea    -0x1c(%ebp),%eax
084c94fe +0x11a:  mov    %eax,(%esp)
084c9501 +0x11d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9506 +0x122:  mov    -0x10(%ebp),%eax
084c9509 +0x125:  lea    0x14(%eax),%edx
084c950c +0x128:  mov    -0xc(%ebp),%eax
084c950f +0x12b:  mov    %eax,0x8(%esp)
084c9513 +0x12f:  mov    %edx,0x4(%esp)
084c9517 +0x133:  lea    -0x1c(%ebp),%eax
084c951a +0x136:  mov    %eax,(%esp)
084c951d +0x139:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9522 +0x13e:  movl   $0x1,0x4(%esp)
084c952a +0x146:  lea    -0x1c(%ebp),%eax
084c952d +0x149:  mov    %eax,(%esp)
084c9530 +0x14c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c9535 +0x151:  lea    -0x1c(%ebp),%eax
084c9538 +0x154:  mov    %eax,0x4(%esp)
084c953c +0x158:  mov    0xc(%ebp),%eax
084c953f +0x15b:  mov    %eax,(%esp)
084c9542 +0x15e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9547 +0x163:  mov    $0x0,%ebx
084c954c +0x168:  lea    -0x1c(%ebp),%eax
084c954f +0x16b:  mov    %eax,(%esp)
084c9552 +0x16e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9557 +0x173:  jmp    084c9574 <+0x190>
084c9559 +0x175:  mov    %edx,%ebx
084c955b +0x177:  mov    %eax,%esi
084c955d +0x179:  lea    -0x1c(%ebp),%eax
084c9560 +0x17c:  mov    %eax,(%esp)
084c9563 +0x17f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9568 +0x184:  mov    %esi,%eax
084c956a +0x186:  mov    %ebx,%edx
084c956c +0x188:  mov    %eax,(%esp)
084c956f +0x18b:  call   08ae3750 <_Unwind_Resume>
084c9574 +0x190:  mov    %ebx,%eax
084c9576 +0x192:  add    $0x40,%esp
084c9579 +0x195:  pop    %ebx
084c957a +0x196:  pop    %esi
084c957b +0x197:  pop    %ebp
084c957c +0x198:  ret
084c957d +0x199:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildLoginOut::dispatch_sig @ 0x84c93e4

/* Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_14 + 0xf)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c94ac to 084c9546 has its CatchHandler @ 084c9559 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x40);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
      local_10 = strlen((char *)(local_14 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xf);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x232c,
                 "Inter_MonitorNoticeGuildLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

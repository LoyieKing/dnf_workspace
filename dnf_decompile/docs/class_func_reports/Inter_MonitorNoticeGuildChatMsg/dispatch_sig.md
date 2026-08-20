# dispatch_sig

`_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildChatMsg` | `0x084c9e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9e30  _ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int)
# range [0x084c9e30, 0x084ca00b]
084c9e30 +0x000:  push   %ebp
084c9e31 +0x001:  mov    %esp,%ebp
084c9e33 +0x003:  push   %esi
084c9e34 +0x004:  push   %ebx
084c9e35 +0x005:  sub    $0x40,%esp
084c9e38 +0x008:  mov    0xc(%ebp),%eax
084c9e3b +0x00b:  mov    %eax,(%esp)
084c9e3e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c9e43 +0x013:  test   %eax,%eax
084c9e45 +0x015:  sete   %al
084c9e48 +0x018:  test   %al,%al
084c9e4a +0x01a:  je     084c9e56 <+0x26>
084c9e4c +0x01c:  mov    $0x0,%ebx
084c9e51 +0x021:  jmp    084ca003 <+0x1d3>
084c9e56 +0x026:  mov    0x10(%ebp),%eax
084c9e59 +0x029:  mov    %eax,-0x10(%ebp)
084c9e5c +0x02c:  movl   $0xffffffff,0x4(%esp)
084c9e64 +0x034:  mov    0xc(%ebp),%eax
084c9e67 +0x037:  mov    %eax,(%esp)
084c9e6a +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9e6f +0x03f:  mov    %eax,%edx
084c9e71 +0x041:  mov    -0x10(%ebp),%eax
084c9e74 +0x044:  mov    0xe(%eax),%eax
084c9e77 +0x047:  cmp    %eax,%edx
084c9e79 +0x049:  setne  %al
084c9e7c +0x04c:  test   %al,%al
084c9e7e +0x04e:  je     084c9ed7 <+0xa7>
084c9e80 +0x050:  mov    -0x10(%ebp),%eax
084c9e83 +0x053:  mov    0xe(%eax),%ebx
084c9e86 +0x056:  movl   $0xffffffff,0x4(%esp)
084c9e8e +0x05e:  mov    0xc(%ebp),%eax
084c9e91 +0x061:  mov    %eax,(%esp)
084c9e94 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9e99 +0x069:  mov    %ebx,0x18(%esp)
084c9e9d +0x06d:  mov    %eax,0x14(%esp)
084c9ea1 +0x071:  movl   $"Inter_MonitorNoticeGuildChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c9ea9 +0x079:  movl   $0x23f1,0xc(%esp)
084c9eb1 +0x081:  movl   $&_ZZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c9eb9 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9ec1 +0x091:  movl   $0x1,(%esp)
084c9ec8 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9ecd +0x09d:  mov    $0x0,%ebx
084c9ed2 +0x0a2:  jmp    084ca003 <+0x1d3>
084c9ed7 +0x0a7:  lea    -0x1c(%ebp),%eax
084c9eda +0x0aa:  mov    %eax,(%esp)
084c9edd +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9ee2 +0x0b2:  movl   $0x41,0x8(%esp)
084c9eea +0x0ba:  movl   $0x0,0x4(%esp)
084c9ef2 +0x0c2:  lea    -0x1c(%ebp),%eax
084c9ef5 +0x0c5:  mov    %eax,(%esp)
084c9ef8 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c9efd +0x0cd:  movl   $0x6,0x4(%esp)
084c9f05 +0x0d5:  lea    -0x1c(%ebp),%eax
084c9f08 +0x0d8:  mov    %eax,(%esp)
084c9f0b +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9f10 +0x0e0:  movl   $0x0,0x4(%esp)
084c9f18 +0x0e8:  lea    -0x1c(%ebp),%eax
084c9f1b +0x0eb:  mov    %eax,(%esp)
084c9f1e +0x0ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9f23 +0x0f3:  mov    -0x10(%ebp),%eax
084c9f26 +0x0f6:  add    $0x12,%eax
084c9f29 +0x0f9:  mov    %eax,(%esp)
084c9f2c +0x0fc:  call   0807e3b0 <_init+0xca8>
084c9f31 +0x101:  mov    %eax,-0xc(%ebp)
084c9f34 +0x104:  mov    -0xc(%ebp),%eax
084c9f37 +0x107:  mov    %eax,0x4(%esp)
084c9f3b +0x10b:  lea    -0x1c(%ebp),%eax
084c9f3e +0x10e:  mov    %eax,(%esp)
084c9f41 +0x111:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9f46 +0x116:  mov    -0x10(%ebp),%eax
084c9f49 +0x119:  lea    0x12(%eax),%edx
084c9f4c +0x11c:  mov    -0xc(%ebp),%eax
084c9f4f +0x11f:  mov    %eax,0x8(%esp)
084c9f53 +0x123:  mov    %edx,0x4(%esp)
084c9f57 +0x127:  lea    -0x1c(%ebp),%eax
084c9f5a +0x12a:  mov    %eax,(%esp)
084c9f5d +0x12d:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9f62 +0x132:  movl   $0x0,0x4(%esp)
084c9f6a +0x13a:  lea    -0x1c(%ebp),%eax
084c9f6d +0x13d:  mov    %eax,(%esp)
084c9f70 +0x140:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9f75 +0x145:  mov    -0x10(%ebp),%eax
084c9f78 +0x148:  movzbl 0x30(%eax),%eax
084c9f7c +0x14c:  movzbl %al,%eax
084c9f7f +0x14f:  mov    %eax,0x4(%esp)
084c9f83 +0x153:  lea    -0x1c(%ebp),%eax
084c9f86 +0x156:  mov    %eax,(%esp)
084c9f89 +0x159:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9f8e +0x15e:  mov    -0x10(%ebp),%eax
084c9f91 +0x161:  movzbl 0x30(%eax),%eax
084c9f95 +0x165:  movzbl %al,%eax
084c9f98 +0x168:  mov    -0x10(%ebp),%edx
084c9f9b +0x16b:  add    $0x31,%edx
084c9f9e +0x16e:  mov    %eax,0x8(%esp)
084c9fa2 +0x172:  mov    %edx,0x4(%esp)
084c9fa6 +0x176:  lea    -0x1c(%ebp),%eax
084c9fa9 +0x179:  mov    %eax,(%esp)
084c9fac +0x17c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9fb1 +0x181:  movl   $0x1,0x4(%esp)
084c9fb9 +0x189:  lea    -0x1c(%ebp),%eax
084c9fbc +0x18c:  mov    %eax,(%esp)
084c9fbf +0x18f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c9fc4 +0x194:  lea    -0x1c(%ebp),%eax
084c9fc7 +0x197:  mov    %eax,0x4(%esp)
084c9fcb +0x19b:  mov    0xc(%ebp),%eax
084c9fce +0x19e:  mov    %eax,(%esp)
084c9fd1 +0x1a1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9fd6 +0x1a6:  mov    $0x0,%ebx
084c9fdb +0x1ab:  lea    -0x1c(%ebp),%eax
084c9fde +0x1ae:  mov    %eax,(%esp)
084c9fe1 +0x1b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9fe6 +0x1b6:  jmp    084ca003 <+0x1d3>
084c9fe8 +0x1b8:  mov    %edx,%ebx
084c9fea +0x1ba:  mov    %eax,%esi
084c9fec +0x1bc:  lea    -0x1c(%ebp),%eax
084c9fef +0x1bf:  mov    %eax,(%esp)
084c9ff2 +0x1c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9ff7 +0x1c7:  mov    %esi,%eax
084c9ff9 +0x1c9:  mov    %ebx,%edx
084c9ffb +0x1cb:  mov    %eax,(%esp)
084c9ffe +0x1ce:  call   08ae3750 <_Unwind_Resume>
084ca003 +0x1d3:  mov    %ebx,%eax
084ca005 +0x1d5:  add    $0x40,%esp
084ca008 +0x1d8:  pop    %ebx
084ca009 +0x1d9:  pop    %esi
084ca00a +0x1da:  pop    %ebp
084ca00b +0x1db:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildChatMsg::dispatch_sig @ 0x84c9e30

/* Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c9ef8 to 084c9fd5 has its CatchHandler @ 084c9fe8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x30));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x31),
                 (uint)*(byte *)(local_14 + 0x30));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int)",
                 0x23f1,
                 "Inter_MonitorNoticeGuildChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

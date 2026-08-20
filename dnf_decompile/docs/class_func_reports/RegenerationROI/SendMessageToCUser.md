# SendMessageToCUser

`_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc`

`RegenerationROI::SendMessageToCUser(CUser*, char const*)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f853c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f853c  _ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc
#           RegenerationROI::SendMessageToCUser(CUser*, char const*)
# range [0x085f853c, 0x085f8645]
085f853c +0x000:  push   %ebp
085f853d +0x001:  mov    %esp,%ebp
085f853f +0x003:  push   %esi
085f8540 +0x004:  push   %ebx
085f8541 +0x005:  sub    $0x20,%esp
085f8544 +0x008:  mov    0xc(%ebp),%eax
085f8547 +0x00b:  mov    %eax,(%esp)
085f854a +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
085f854f +0x013:  test   %al,%al
085f8551 +0x015:  je     085f863e <+0x102>
085f8557 +0x01b:  lea    -0x14(%ebp),%eax
085f855a +0x01e:  mov    %eax,(%esp)
085f855d +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085f8562 +0x026:  movl   $0xc,0x8(%esp)
085f856a +0x02e:  movl   $0x0,0x4(%esp)
085f8572 +0x036:  lea    -0x14(%ebp),%eax
085f8575 +0x039:  mov    %eax,(%esp)
085f8578 +0x03c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085f857d +0x041:  movl   $0x0,0x4(%esp)
085f8585 +0x049:  lea    -0x14(%ebp),%eax
085f8588 +0x04c:  mov    %eax,(%esp)
085f858b +0x04f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f8590 +0x054:  movl   $0x0,0x4(%esp)
085f8598 +0x05c:  lea    -0x14(%ebp),%eax
085f859b +0x05f:  mov    %eax,(%esp)
085f859e +0x062:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085f85a3 +0x067:  movl   $0x0,0x4(%esp)
085f85ab +0x06f:  lea    -0x14(%ebp),%eax
085f85ae +0x072:  mov    %eax,(%esp)
085f85b1 +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f85b6 +0x07a:  mov    0x10(%ebp),%eax
085f85b9 +0x07d:  mov    %eax,(%esp)
085f85bc +0x080:  call   0807e3b0 <_init+0xca8>
085f85c1 +0x085:  mov    %eax,0x4(%esp)
085f85c5 +0x089:  lea    -0x14(%ebp),%eax
085f85c8 +0x08c:  mov    %eax,(%esp)
085f85cb +0x08f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f85d0 +0x094:  mov    0x10(%ebp),%eax
085f85d3 +0x097:  mov    %eax,(%esp)
085f85d6 +0x09a:  call   0807e3b0 <_init+0xca8>
085f85db +0x09f:  mov    %eax,0x8(%esp)
085f85df +0x0a3:  mov    0x10(%ebp),%eax
085f85e2 +0x0a6:  mov    %eax,0x4(%esp)
085f85e6 +0x0aa:  lea    -0x14(%ebp),%eax
085f85e9 +0x0ad:  mov    %eax,(%esp)
085f85ec +0x0b0:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085f85f1 +0x0b5:  movl   $0x1,0x4(%esp)
085f85f9 +0x0bd:  lea    -0x14(%ebp),%eax
085f85fc +0x0c0:  mov    %eax,(%esp)
085f85ff +0x0c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085f8604 +0x0c8:  lea    -0x14(%ebp),%eax
085f8607 +0x0cb:  mov    %eax,0x4(%esp)
085f860b +0x0cf:  mov    0xc(%ebp),%eax
085f860e +0x0d2:  mov    %eax,(%esp)
085f8611 +0x0d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085f8616 +0x0da:  jmp    085f8633 <+0xf7>
085f8618 +0x0dc:  mov    %edx,%ebx
085f861a +0x0de:  mov    %eax,%esi
085f861c +0x0e0:  lea    -0x14(%ebp),%eax
085f861f +0x0e3:  mov    %eax,(%esp)
085f8622 +0x0e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085f8627 +0x0eb:  mov    %esi,%eax
085f8629 +0x0ed:  mov    %ebx,%edx
085f862b +0x0ef:  mov    %eax,(%esp)
085f862e +0x0f2:  call   08ae3750 <_Unwind_Resume>
085f8633 +0x0f7:  lea    -0x14(%ebp),%eax
085f8636 +0x0fa:  mov    %eax,(%esp)
085f8639 +0x0fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085f863e +0x102:  add    $0x20,%esp
085f8641 +0x105:  pop    %ebx
085f8642 +0x106:  pop    %esi
085f8643 +0x107:  pop    %ebp
085f8644 +0x108:  ret
085f8645 +0x109:  nop
```

## 反编译 C

```c
// RegenerationROI::SendMessageToCUser @ 0x85f853c

/* RegenerationROI::SendMessageToCUser(CUser*, char const*) */

void __thiscall
RegenerationROI::SendMessageToCUser(RegenerationROI *this,CUser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085f8578 to 085f8615 has its CatchHandler @ 085f8618 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar2);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```

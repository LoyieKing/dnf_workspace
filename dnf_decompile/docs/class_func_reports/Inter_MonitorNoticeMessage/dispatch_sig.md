# dispatch_sig

`_ZN26Inter_MonitorNoticeMessage12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMessage` | `0x084d035e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d035e  _ZN26Inter_MonitorNoticeMessage12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMessage::dispatch_sig(CUser*, char*, int)
# range [0x084d035e, 0x084d0465]
084d035e +0x000:  push   %ebp
084d035f +0x001:  mov    %esp,%ebp
084d0361 +0x003:  push   %esi
084d0362 +0x004:  push   %ebx
084d0363 +0x005:  sub    $0x20,%esp
084d0366 +0x008:  mov    0x10(%ebp),%eax
084d0369 +0x00b:  mov    %eax,-0xc(%ebp)
084d036c +0x00e:  lea    -0x18(%ebp),%eax
084d036f +0x011:  mov    %eax,(%esp)
084d0372 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d0377 +0x019:  movl   $0x6e,0x8(%esp)
084d037f +0x021:  movl   $0x1,0x4(%esp)
084d0387 +0x029:  lea    -0x18(%ebp),%eax
084d038a +0x02c:  mov    %eax,(%esp)
084d038d +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d0392 +0x034:  movl   $0x1,0x4(%esp)
084d039a +0x03c:  lea    -0x18(%ebp),%eax
084d039d +0x03f:  mov    %eax,(%esp)
084d03a0 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d03a5 +0x047:  movl   $0x1,0x4(%esp)
084d03ad +0x04f:  lea    -0x18(%ebp),%eax
084d03b0 +0x052:  mov    %eax,(%esp)
084d03b3 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d03b8 +0x05a:  mov    -0xc(%ebp),%eax
084d03bb +0x05d:  movzbl 0xa(%eax),%eax
084d03bf +0x061:  test   %al,%al
084d03c1 +0x063:  jne    084d03cd <+0x6f>
084d03c3 +0x065:  mov    $0x2e82,%ebx
084d03c8 +0x06a:  jmp    084d0452 <+0xf4>
084d03cd +0x06f:  mov    -0xc(%ebp),%eax
084d03d0 +0x072:  movzbl 0xa(%eax),%eax
084d03d4 +0x076:  movzbl %al,%eax
084d03d7 +0x079:  mov    %eax,0x4(%esp)
084d03db +0x07d:  lea    -0x18(%ebp),%eax
084d03de +0x080:  mov    %eax,(%esp)
084d03e1 +0x083:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d03e6 +0x088:  mov    -0xc(%ebp),%eax
084d03e9 +0x08b:  movzbl 0xa(%eax),%eax
084d03ed +0x08f:  movzbl %al,%eax
084d03f0 +0x092:  mov    -0xc(%ebp),%edx
084d03f3 +0x095:  add    $0xb,%edx
084d03f6 +0x098:  mov    %eax,0x8(%esp)
084d03fa +0x09c:  mov    %edx,0x4(%esp)
084d03fe +0x0a0:  lea    -0x18(%ebp),%eax
084d0401 +0x0a3:  mov    %eax,(%esp)
084d0404 +0x0a6:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d0409 +0x0ab:  movl   $0x1,0x4(%esp)
084d0411 +0x0b3:  lea    -0x18(%ebp),%eax
084d0414 +0x0b6:  mov    %eax,(%esp)
084d0417 +0x0b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d041c +0x0be:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d0421 +0x0c3:  lea    -0x18(%ebp),%edx
084d0424 +0x0c6:  mov    %edx,0x4(%esp)
084d0428 +0x0ca:  mov    %eax,(%esp)
084d042b +0x0cd:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d0430 +0x0d2:  mov    $0x0,%ebx
084d0435 +0x0d7:  jmp    084d0452 <+0xf4>
084d0437 +0x0d9:  mov    %edx,%ebx
084d0439 +0x0db:  mov    %eax,%esi
084d043b +0x0dd:  lea    -0x18(%ebp),%eax
084d043e +0x0e0:  mov    %eax,(%esp)
084d0441 +0x0e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0446 +0x0e8:  mov    %esi,%eax
084d0448 +0x0ea:  mov    %ebx,%edx
084d044a +0x0ec:  mov    %eax,(%esp)
084d044d +0x0ef:  call   08ae3750 <_Unwind_Resume>
084d0452 +0x0f4:  lea    -0x18(%ebp),%eax
084d0455 +0x0f7:  mov    %eax,(%esp)
084d0458 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d045d +0x0ff:  mov    %ebx,%eax
084d045f +0x101:  add    $0x20,%esp
084d0462 +0x104:  pop    %ebx
084d0463 +0x105:  pop    %esi
084d0464 +0x106:  pop    %ebp
084d0465 +0x107:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeMessage::dispatch_sig @ 0x84d035e

/* Inter_MonitorNoticeMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  undefined4 uVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d038d to 084d042f has its CatchHandler @ 084d0437 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x6e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  if (*(char *)(local_10 + 10) == '\0') {
    uVar1 = 0x2e82;
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xb),
               (uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c);
    uVar1 = 0;
  }
  PacketGuard::~PacketGuard(local_1c);
  return uVar1;
}
```

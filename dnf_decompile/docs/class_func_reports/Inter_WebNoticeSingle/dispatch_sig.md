# dispatch_sig

`_ZN21Inter_WebNoticeSingle12dispatch_sigEP5CUserPci`

`Inter_WebNoticeSingle::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_WebNoticeSingle` | `0x084d1344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1344  _ZN21Inter_WebNoticeSingle12dispatch_sigEP5CUserPci
#           Inter_WebNoticeSingle::dispatch_sig(CUser*, char*, int)
# range [0x084d1344, 0x084d1443]
084d1344 +0x00:  push   %ebp
084d1345 +0x01:  mov    %esp,%ebp
084d1347 +0x03:  push   %esi
084d1348 +0x04:  push   %ebx
084d1349 +0x05:  sub    $0x20,%esp
084d134c +0x08:  mov    0x10(%ebp),%eax
084d134f +0x0b:  mov    %eax,-0xc(%ebp)
084d1352 +0x0e:  lea    -0x18(%ebp),%eax
084d1355 +0x11:  mov    %eax,(%esp)
084d1358 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d135d +0x19:  movl   $0xc,0x8(%esp)
084d1365 +0x21:  movl   $0x0,0x4(%esp)
084d136d +0x29:  lea    -0x18(%ebp),%eax
084d1370 +0x2c:  mov    %eax,(%esp)
084d1373 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1378 +0x34:  movl   $0x0,0x4(%esp)
084d1380 +0x3c:  lea    -0x18(%ebp),%eax
084d1383 +0x3f:  mov    %eax,(%esp)
084d1386 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d138b +0x47:  movl   $0x0,0x4(%esp)
084d1393 +0x4f:  lea    -0x18(%ebp),%eax
084d1396 +0x52:  mov    %eax,(%esp)
084d1399 +0x55:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d139e +0x5a:  movl   $0x0,0x4(%esp)
084d13a6 +0x62:  lea    -0x18(%ebp),%eax
084d13a9 +0x65:  mov    %eax,(%esp)
084d13ac +0x68:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d13b1 +0x6d:  mov    -0xc(%ebp),%eax
084d13b4 +0x70:  movzbl 0xa(%eax),%eax
084d13b8 +0x74:  movzbl %al,%eax
084d13bb +0x77:  mov    %eax,0x4(%esp)
084d13bf +0x7b:  lea    -0x18(%ebp),%eax
084d13c2 +0x7e:  mov    %eax,(%esp)
084d13c5 +0x81:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d13ca +0x86:  mov    -0xc(%ebp),%eax
084d13cd +0x89:  movzbl 0xa(%eax),%eax
084d13d1 +0x8d:  movzbl %al,%eax
084d13d4 +0x90:  mov    -0xc(%ebp),%edx
084d13d7 +0x93:  add    $0xb,%edx
084d13da +0x96:  mov    %eax,0x8(%esp)
084d13de +0x9a:  mov    %edx,0x4(%esp)
084d13e2 +0x9e:  lea    -0x18(%ebp),%eax
084d13e5 +0xa1:  mov    %eax,(%esp)
084d13e8 +0xa4:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d13ed +0xa9:  movl   $0x1,0x4(%esp)
084d13f5 +0xb1:  lea    -0x18(%ebp),%eax
084d13f8 +0xb4:  mov    %eax,(%esp)
084d13fb +0xb7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d1400 +0xbc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d1405 +0xc1:  lea    -0x18(%ebp),%edx
084d1408 +0xc4:  mov    %edx,0x4(%esp)
084d140c +0xc8:  mov    %eax,(%esp)
084d140f +0xcb:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d1414 +0xd0:  mov    $0x0,%ebx
084d1419 +0xd5:  lea    -0x18(%ebp),%eax
084d141c +0xd8:  mov    %eax,(%esp)
084d141f +0xdb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1424 +0xe0:  mov    %ebx,%eax
084d1426 +0xe2:  add    $0x20,%esp
084d1429 +0xe5:  pop    %ebx
084d142a +0xe6:  pop    %esi
084d142b +0xe7:  pop    %ebp
084d142c +0xe8:  ret
084d142d +0xe9:  mov    %edx,%ebx
084d142f +0xeb:  mov    %eax,%esi
084d1431 +0xed:  lea    -0x18(%ebp),%eax
084d1434 +0xf0:  mov    %eax,(%esp)
084d1437 +0xf3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d143c +0xf8:  mov    %esi,%eax
084d143e +0xfa:  mov    %ebx,%edx
084d1440 +0xfc:  mov    %eax,(%esp)
084d1443 +0xff:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_WebNoticeSingle::dispatch_sig @ 0x84d1344

/* Inter_WebNoticeSingle::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_WebNoticeSingle::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d1373 to 084d1413 has its CatchHandler @ 084d142d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xb),(uint)*(byte *)(local_10 + 10))
  ;
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

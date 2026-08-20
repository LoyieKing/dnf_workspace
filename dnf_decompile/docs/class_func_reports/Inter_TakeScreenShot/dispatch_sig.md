# dispatch_sig

`_ZN20Inter_TakeScreenShot12dispatch_sigEP5CUserPci`

`Inter_TakeScreenShot::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TakeScreenShot` | `0x084df3d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084df3d6  _ZN20Inter_TakeScreenShot12dispatch_sigEP5CUserPci
#           Inter_TakeScreenShot::dispatch_sig(CUser*, char*, int)
# range [0x084df3d6, 0x084df475]
084df3d6 +0x00:  push   %ebp
084df3d7 +0x01:  mov    %esp,%ebp
084df3d9 +0x03:  push   %esi
084df3da +0x04:  push   %ebx
084df3db +0x05:  sub    $0x20,%esp
084df3de +0x08:  mov    0x10(%ebp),%eax
084df3e1 +0x0b:  mov    %eax,-0xc(%ebp)
084df3e4 +0x0e:  lea    -0x18(%ebp),%eax
084df3e7 +0x11:  mov    %eax,(%esp)
084df3ea +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084df3ef +0x19:  movl   $0xf4,0x8(%esp)
084df3f7 +0x21:  movl   $0x0,0x4(%esp)
084df3ff +0x29:  lea    -0x18(%ebp),%eax
084df402 +0x2c:  mov    %eax,(%esp)
084df405 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084df40a +0x34:  mov    -0xc(%ebp),%eax
084df40d +0x37:  mov    0xb(%eax),%eax
084df410 +0x3a:  mov    %eax,0x4(%esp)
084df414 +0x3e:  lea    -0x18(%ebp),%eax
084df417 +0x41:  mov    %eax,(%esp)
084df41a +0x44:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df41f +0x49:  movl   $0x1,0x4(%esp)
084df427 +0x51:  lea    -0x18(%ebp),%eax
084df42a +0x54:  mov    %eax,(%esp)
084df42d +0x57:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084df432 +0x5c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df437 +0x61:  lea    -0x18(%ebp),%edx
084df43a +0x64:  mov    %edx,0x4(%esp)
084df43e +0x68:  mov    %eax,(%esp)
084df441 +0x6b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084df446 +0x70:  mov    $0x0,%ebx
084df44b +0x75:  lea    -0x18(%ebp),%eax
084df44e +0x78:  mov    %eax,(%esp)
084df451 +0x7b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df456 +0x80:  mov    %ebx,%eax
084df458 +0x82:  add    $0x20,%esp
084df45b +0x85:  pop    %ebx
084df45c +0x86:  pop    %esi
084df45d +0x87:  pop    %ebp
084df45e +0x88:  ret
084df45f +0x89:  mov    %edx,%ebx
084df461 +0x8b:  mov    %eax,%esi
084df463 +0x8d:  lea    -0x18(%ebp),%eax
084df466 +0x90:  mov    %eax,(%esp)
084df469 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df46e +0x98:  mov    %esi,%eax
084df470 +0x9a:  mov    %ebx,%edx
084df472 +0x9c:  mov    %eax,(%esp)
084df475 +0x9f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_TakeScreenShot::dispatch_sig @ 0x84df3d6

/* Inter_TakeScreenShot::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TakeScreenShot::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084df405 to 084df445 has its CatchHandler @ 084df45f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xb));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

# dispatch_sig

`_ZN27Inter_NoticePowerWarEndTime12dispatch_sigEP5CUserPci`

`Inter_NoticePowerWarEndTime::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePowerWarEndTime` | `0x084d4d46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4d46  _ZN27Inter_NoticePowerWarEndTime12dispatch_sigEP5CUserPci
#           Inter_NoticePowerWarEndTime::dispatch_sig(CUser*, char*, int)
# range [0x084d4d46, 0x084d4e13]
084d4d46 +0x00:  push   %ebp
084d4d47 +0x01:  mov    %esp,%ebp
084d4d49 +0x03:  push   %esi
084d4d4a +0x04:  push   %ebx
084d4d4b +0x05:  sub    $0x20,%esp
084d4d4e +0x08:  mov    0x10(%ebp),%eax
084d4d51 +0x0b:  mov    %eax,-0xc(%ebp)
084d4d54 +0x0e:  lea    -0x18(%ebp),%eax
084d4d57 +0x11:  mov    %eax,(%esp)
084d4d5a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4d5f +0x19:  movl   $0xa2,0x8(%esp)
084d4d67 +0x21:  movl   $0x0,0x4(%esp)
084d4d6f +0x29:  lea    -0x18(%ebp),%eax
084d4d72 +0x2c:  mov    %eax,(%esp)
084d4d75 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d4d7a +0x34:  mov    -0xc(%ebp),%eax
084d4d7d +0x37:  movzbl 0xa(%eax),%eax
084d4d81 +0x3b:  movzbl %al,%eax
084d4d84 +0x3e:  mov    %eax,0x4(%esp)
084d4d88 +0x42:  lea    -0x18(%ebp),%eax
084d4d8b +0x45:  mov    %eax,(%esp)
084d4d8e +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4d93 +0x4d:  mov    -0xc(%ebp),%eax
084d4d96 +0x50:  mov    0xb(%eax),%eax
084d4d99 +0x53:  mov    %eax,0x4(%esp)
084d4d9d +0x57:  lea    -0x18(%ebp),%eax
084d4da0 +0x5a:  mov    %eax,(%esp)
084d4da3 +0x5d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d4da8 +0x62:  mov    -0xc(%ebp),%eax
084d4dab +0x65:  mov    0xf(%eax),%eax
084d4dae +0x68:  mov    %eax,0x4(%esp)
084d4db2 +0x6c:  lea    -0x18(%ebp),%eax
084d4db5 +0x6f:  mov    %eax,(%esp)
084d4db8 +0x72:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d4dbd +0x77:  movl   $0x1,0x4(%esp)
084d4dc5 +0x7f:  lea    -0x18(%ebp),%eax
084d4dc8 +0x82:  mov    %eax,(%esp)
084d4dcb +0x85:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d4dd0 +0x8a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d4dd5 +0x8f:  lea    -0x18(%ebp),%edx
084d4dd8 +0x92:  mov    %edx,0x4(%esp)
084d4ddc +0x96:  mov    %eax,(%esp)
084d4ddf +0x99:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d4de4 +0x9e:  mov    $0x0,%ebx
084d4de9 +0xa3:  lea    -0x18(%ebp),%eax
084d4dec +0xa6:  mov    %eax,(%esp)
084d4def +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4df4 +0xae:  mov    %ebx,%eax
084d4df6 +0xb0:  add    $0x20,%esp
084d4df9 +0xb3:  pop    %ebx
084d4dfa +0xb4:  pop    %esi
084d4dfb +0xb5:  pop    %ebp
084d4dfc +0xb6:  ret
084d4dfd +0xb7:  mov    %edx,%ebx
084d4dff +0xb9:  mov    %eax,%esi
084d4e01 +0xbb:  lea    -0x18(%ebp),%eax
084d4e04 +0xbe:  mov    %eax,(%esp)
084d4e07 +0xc1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4e0c +0xc6:  mov    %esi,%eax
084d4e0e +0xc8:  mov    %ebx,%edx
084d4e10 +0xca:  mov    %eax,(%esp)
084d4e13 +0xcd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_NoticePowerWarEndTime::dispatch_sig @ 0x84d4d46

/* Inter_NoticePowerWarEndTime::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarEndTime::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4d75 to 084d4de3 has its CatchHandler @ 084d4dfd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xb));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xf));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

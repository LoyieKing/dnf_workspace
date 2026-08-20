# dispatch_sig

`_ZN27Inter_NoticePowerWarProlong12dispatch_sigEP5CUserPci`

`Inter_NoticePowerWarProlong::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePowerWarProlong` | `0x084d4fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4fce  _ZN27Inter_NoticePowerWarProlong12dispatch_sigEP5CUserPci
#           Inter_NoticePowerWarProlong::dispatch_sig(CUser*, char*, int)
# range [0x084d4fce, 0x084d506d]
084d4fce +0x00:  push   %ebp
084d4fcf +0x01:  mov    %esp,%ebp
084d4fd1 +0x03:  push   %esi
084d4fd2 +0x04:  push   %ebx
084d4fd3 +0x05:  sub    $0x20,%esp
084d4fd6 +0x08:  mov    0x10(%ebp),%eax
084d4fd9 +0x0b:  mov    %eax,-0xc(%ebp)
084d4fdc +0x0e:  lea    -0x18(%ebp),%eax
084d4fdf +0x11:  mov    %eax,(%esp)
084d4fe2 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4fe7 +0x19:  movl   $0xa3,0x8(%esp)
084d4fef +0x21:  movl   $0x0,0x4(%esp)
084d4ff7 +0x29:  lea    -0x18(%ebp),%eax
084d4ffa +0x2c:  mov    %eax,(%esp)
084d4ffd +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d5002 +0x34:  mov    -0xc(%ebp),%eax
084d5005 +0x37:  mov    0xa(%eax),%eax
084d5008 +0x3a:  mov    %eax,0x4(%esp)
084d500c +0x3e:  lea    -0x18(%ebp),%eax
084d500f +0x41:  mov    %eax,(%esp)
084d5012 +0x44:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d5017 +0x49:  movl   $0x1,0x4(%esp)
084d501f +0x51:  lea    -0x18(%ebp),%eax
084d5022 +0x54:  mov    %eax,(%esp)
084d5025 +0x57:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d502a +0x5c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d502f +0x61:  lea    -0x18(%ebp),%edx
084d5032 +0x64:  mov    %edx,0x4(%esp)
084d5036 +0x68:  mov    %eax,(%esp)
084d5039 +0x6b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d503e +0x70:  mov    $0x0,%ebx
084d5043 +0x75:  lea    -0x18(%ebp),%eax
084d5046 +0x78:  mov    %eax,(%esp)
084d5049 +0x7b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d504e +0x80:  mov    %ebx,%eax
084d5050 +0x82:  add    $0x20,%esp
084d5053 +0x85:  pop    %ebx
084d5054 +0x86:  pop    %esi
084d5055 +0x87:  pop    %ebp
084d5056 +0x88:  ret
084d5057 +0x89:  mov    %edx,%ebx
084d5059 +0x8b:  mov    %eax,%esi
084d505b +0x8d:  lea    -0x18(%ebp),%eax
084d505e +0x90:  mov    %eax,(%esp)
084d5061 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5066 +0x98:  mov    %esi,%eax
084d5068 +0x9a:  mov    %ebx,%edx
084d506a +0x9c:  mov    %eax,(%esp)
084d506d +0x9f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_NoticePowerWarProlong::dispatch_sig @ 0x84d4fce

/* Inter_NoticePowerWarProlong::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarProlong::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4ffd to 084d503d has its CatchHandler @ 084d5057 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

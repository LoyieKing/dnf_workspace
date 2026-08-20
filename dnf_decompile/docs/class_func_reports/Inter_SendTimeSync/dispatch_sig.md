# dispatch_sig

`_ZN18Inter_SendTimeSync12dispatch_sigEP5CUserPci`

`Inter_SendTimeSync::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SendTimeSync` | `0x084e3326` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3326  _ZN18Inter_SendTimeSync12dispatch_sigEP5CUserPci
#           Inter_SendTimeSync::dispatch_sig(CUser*, char*, int)
# range [0x084e3326, 0x084e33eb]
084e3326 +0x00:  push   %ebp
084e3327 +0x01:  mov    %esp,%ebp
084e3329 +0x03:  push   %esi
084e332a +0x04:  push   %ebx
084e332b +0x05:  sub    $0x20,%esp
084e332e +0x08:  mov    0x10(%ebp),%eax
084e3331 +0x0b:  mov    %eax,-0xc(%ebp)
084e3334 +0x0e:  lea    -0x18(%ebp),%eax
084e3337 +0x11:  mov    %eax,(%esp)
084e333a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e333f +0x19:  movl   $0x12c,0x8(%esp)
084e3347 +0x21:  movl   $0x0,0x4(%esp)
084e334f +0x29:  lea    -0x18(%ebp),%eax
084e3352 +0x2c:  mov    %eax,(%esp)
084e3355 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e335a +0x34:  mov    -0xc(%ebp),%eax
084e335d +0x37:  movzwl 0xa(%eax),%eax
084e3361 +0x3b:  cwtl
084e3362 +0x3c:  mov    %eax,0x4(%esp)
084e3366 +0x40:  lea    -0x18(%ebp),%eax
084e3369 +0x43:  mov    %eax,(%esp)
084e336c +0x46:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e3371 +0x4b:  mov    -0xc(%ebp),%eax
084e3374 +0x4e:  movzwl 0xc(%eax),%eax
084e3378 +0x52:  cwtl
084e3379 +0x53:  mov    %eax,0x4(%esp)
084e337d +0x57:  lea    -0x18(%ebp),%eax
084e3380 +0x5a:  mov    %eax,(%esp)
084e3383 +0x5d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e3388 +0x62:  movl   $0x1,0x4(%esp)
084e3390 +0x6a:  lea    -0x18(%ebp),%eax
084e3393 +0x6d:  mov    %eax,(%esp)
084e3396 +0x70:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e339b +0x75:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e33a0 +0x7a:  movl   $0x3,0x8(%esp)
084e33a8 +0x82:  lea    -0x18(%ebp),%edx
084e33ab +0x85:  mov    %edx,0x4(%esp)
084e33af +0x89:  mov    %eax,(%esp)
084e33b2 +0x8c:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084e33b7 +0x91:  mov    $0x0,%ebx
084e33bc +0x96:  lea    -0x18(%ebp),%eax
084e33bf +0x99:  mov    %eax,(%esp)
084e33c2 +0x9c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e33c7 +0xa1:  mov    %ebx,%eax
084e33c9 +0xa3:  add    $0x20,%esp
084e33cc +0xa6:  pop    %ebx
084e33cd +0xa7:  pop    %esi
084e33ce +0xa8:  pop    %ebp
084e33cf +0xa9:  ret
084e33d0 +0xaa:  mov    %edx,%ebx
084e33d2 +0xac:  mov    %eax,%esi
084e33d4 +0xae:  lea    -0x18(%ebp),%eax
084e33d7 +0xb1:  mov    %eax,(%esp)
084e33da +0xb4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e33df +0xb9:  mov    %esi,%eax
084e33e1 +0xbb:  mov    %ebx,%edx
084e33e3 +0xbd:  mov    %eax,(%esp)
084e33e6 +0xc0:  call   08ae3750 <_Unwind_Resume>
084e33eb +0xc5:  nop
```

## 反编译 C

```c
// Inter_SendTimeSync::dispatch_sig @ 0x84e3326

/* Inter_SendTimeSync::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendTimeSync::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3355 to 084e33b6 has its CatchHandler @ 084e33d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,300);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0xc));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all_with_state(this,local_1c,3);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

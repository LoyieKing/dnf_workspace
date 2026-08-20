# dispatch_sig

`_ZN31Inter_NpcLimitBuyItemChangeInfo12dispatch_sigEP5CUserPci`

`Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemChangeInfo` | `0x084e6448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6448  _ZN31Inter_NpcLimitBuyItemChangeInfo12dispatch_sigEP5CUserPci
#           Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e6448, 0x084e6501]
084e6448 +0x00:  push   %ebp
084e6449 +0x01:  mov    %esp,%ebp
084e644b +0x03:  push   %esi
084e644c +0x04:  push   %ebx
084e644d +0x05:  sub    $0x20,%esp
084e6450 +0x08:  mov    0x10(%ebp),%eax
084e6453 +0x0b:  mov    %eax,-0xc(%ebp)
084e6456 +0x0e:  lea    -0x18(%ebp),%eax
084e6459 +0x11:  mov    %eax,(%esp)
084e645c +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e6461 +0x19:  movl   $0x191,0x8(%esp)
084e6469 +0x21:  movl   $0x0,0x4(%esp)
084e6471 +0x29:  lea    -0x18(%ebp),%eax
084e6474 +0x2c:  mov    %eax,(%esp)
084e6477 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e647c +0x34:  mov    -0xc(%ebp),%eax
084e647f +0x37:  mov    0xa(%eax),%eax
084e6482 +0x3a:  mov    %eax,0x4(%esp)
084e6486 +0x3e:  lea    -0x18(%ebp),%eax
084e6489 +0x41:  mov    %eax,(%esp)
084e648c +0x44:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6491 +0x49:  mov    -0xc(%ebp),%eax
084e6494 +0x4c:  mov    0xe(%eax),%eax
084e6497 +0x4f:  mov    %eax,0x4(%esp)
084e649b +0x53:  lea    -0x18(%ebp),%eax
084e649e +0x56:  mov    %eax,(%esp)
084e64a1 +0x59:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e64a6 +0x5e:  movl   $0x1,0x4(%esp)
084e64ae +0x66:  lea    -0x18(%ebp),%eax
084e64b1 +0x69:  mov    %eax,(%esp)
084e64b4 +0x6c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e64b9 +0x71:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e64be +0x76:  lea    -0x18(%ebp),%edx
084e64c1 +0x79:  mov    %edx,0x4(%esp)
084e64c5 +0x7d:  mov    %eax,(%esp)
084e64c8 +0x80:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084e64cd +0x85:  mov    $0x0,%ebx
084e64d2 +0x8a:  lea    -0x18(%ebp),%eax
084e64d5 +0x8d:  mov    %eax,(%esp)
084e64d8 +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e64dd +0x95:  mov    %ebx,%eax
084e64df +0x97:  add    $0x20,%esp
084e64e2 +0x9a:  pop    %ebx
084e64e3 +0x9b:  pop    %esi
084e64e4 +0x9c:  pop    %ebp
084e64e5 +0x9d:  ret
084e64e6 +0x9e:  mov    %edx,%ebx
084e64e8 +0xa0:  mov    %eax,%esi
084e64ea +0xa2:  lea    -0x18(%ebp),%eax
084e64ed +0xa5:  mov    %eax,(%esp)
084e64f0 +0xa8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e64f5 +0xad:  mov    %esi,%eax
084e64f7 +0xaf:  mov    %ebx,%edx
084e64f9 +0xb1:  mov    %eax,(%esp)
084e64fc +0xb4:  call   08ae3750 <_Unwind_Resume>
084e6501 +0xb9:  nop
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemChangeInfo::dispatch_sig @ 0x84e6448

/* Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e6477 to 084e64cc has its CatchHandler @ 084e64e6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x191);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

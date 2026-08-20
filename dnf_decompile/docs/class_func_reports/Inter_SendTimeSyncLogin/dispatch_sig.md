# dispatch_sig

`_ZN23Inter_SendTimeSyncLogin12dispatch_sigEP5CUserPci`

`Inter_SendTimeSyncLogin::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SendTimeSyncLogin` | `0x084e33ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e33ec  _ZN23Inter_SendTimeSyncLogin12dispatch_sigEP5CUserPci
#           Inter_SendTimeSyncLogin::dispatch_sig(CUser*, char*, int)
# range [0x084e33ec, 0x084e34b9]
084e33ec +0x00:  push   %ebp
084e33ed +0x01:  mov    %esp,%ebp
084e33ef +0x03:  push   %esi
084e33f0 +0x04:  push   %ebx
084e33f1 +0x05:  sub    $0x20,%esp
084e33f4 +0x08:  cmpl   $0x0,0xc(%ebp)
084e33f8 +0x0c:  jne    084e3404 <+0x18>
084e33fa +0x0e:  mov    $0x53d4,%ebx
084e33ff +0x13:  jmp    084e34b0 <+0xc4>
084e3404 +0x18:  mov    0x10(%ebp),%eax
084e3407 +0x1b:  mov    %eax,-0xc(%ebp)
084e340a +0x1e:  lea    -0x18(%ebp),%eax
084e340d +0x21:  mov    %eax,(%esp)
084e3410 +0x24:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3415 +0x29:  movl   $0x12c,0x8(%esp)
084e341d +0x31:  movl   $0x0,0x4(%esp)
084e3425 +0x39:  lea    -0x18(%ebp),%eax
084e3428 +0x3c:  mov    %eax,(%esp)
084e342b +0x3f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3430 +0x44:  mov    -0xc(%ebp),%eax
084e3433 +0x47:  movzwl 0x12(%eax),%eax
084e3437 +0x4b:  cwtl
084e3438 +0x4c:  mov    %eax,0x4(%esp)
084e343c +0x50:  lea    -0x18(%ebp),%eax
084e343f +0x53:  mov    %eax,(%esp)
084e3442 +0x56:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e3447 +0x5b:  mov    -0xc(%ebp),%eax
084e344a +0x5e:  movzwl 0x14(%eax),%eax
084e344e +0x62:  cwtl
084e344f +0x63:  mov    %eax,0x4(%esp)
084e3453 +0x67:  lea    -0x18(%ebp),%eax
084e3456 +0x6a:  mov    %eax,(%esp)
084e3459 +0x6d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e345e +0x72:  movl   $0x1,0x4(%esp)
084e3466 +0x7a:  lea    -0x18(%ebp),%eax
084e3469 +0x7d:  mov    %eax,(%esp)
084e346c +0x80:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e3471 +0x85:  lea    -0x18(%ebp),%eax
084e3474 +0x88:  mov    %eax,0x4(%esp)
084e3478 +0x8c:  mov    0xc(%ebp),%eax
084e347b +0x8f:  mov    %eax,(%esp)
084e347e +0x92:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e3483 +0x97:  mov    $0x0,%ebx
084e3488 +0x9c:  lea    -0x18(%ebp),%eax
084e348b +0x9f:  mov    %eax,(%esp)
084e348e +0xa2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3493 +0xa7:  jmp    084e34b0 <+0xc4>
084e3495 +0xa9:  mov    %edx,%ebx
084e3497 +0xab:  mov    %eax,%esi
084e3499 +0xad:  lea    -0x18(%ebp),%eax
084e349c +0xb0:  mov    %eax,(%esp)
084e349f +0xb3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e34a4 +0xb8:  mov    %esi,%eax
084e34a6 +0xba:  mov    %ebx,%edx
084e34a8 +0xbc:  mov    %eax,(%esp)
084e34ab +0xbf:  call   08ae3750 <_Unwind_Resume>
084e34b0 +0xc4:  mov    %ebx,%eax
084e34b2 +0xc6:  add    $0x20,%esp
084e34b5 +0xc9:  pop    %ebx
084e34b6 +0xca:  pop    %esi
084e34b7 +0xcb:  pop    %ebp
084e34b8 +0xcc:  ret
084e34b9 +0xcd:  nop
```

## 反编译 C

```c
// Inter_SendTimeSyncLogin::dispatch_sig @ 0x84e33ec

/* Inter_SendTimeSyncLogin::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendTimeSyncLogin::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x53d4;
  }
  else {
    local_10 = param_3;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e342b to 084e3482 has its CatchHandler @ 084e3495 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,300);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x12));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x14));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    uVar1 = 0;
    PacketGuard::~PacketGuard(local_1c);
  }
  return uVar1;
}
```

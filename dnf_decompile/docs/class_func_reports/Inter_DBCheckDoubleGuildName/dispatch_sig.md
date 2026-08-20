# dispatch_sig

`_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci`

`Inter_DBCheckDoubleGuildName::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DBCheckDoubleGuildName` | `0x084d347e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d347e  _ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci
#           Inter_DBCheckDoubleGuildName::dispatch_sig(CUser*, char*, int)
# range [0x084d347e, 0x084d358d]
084d347e +0x000:  push   %ebp
084d347f +0x001:  mov    %esp,%ebp
084d3481 +0x003:  push   %esi
084d3482 +0x004:  push   %ebx
084d3483 +0x005:  sub    $0x20,%esp
084d3486 +0x008:  mov    0xc(%ebp),%eax
084d3489 +0x00b:  mov    %eax,(%esp)
084d348c +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d3491 +0x013:  cmp    $0x2,%eax
084d3494 +0x016:  setle  %al
084d3497 +0x019:  test   %al,%al
084d3499 +0x01b:  je     084d34a5 <+0x27>
084d349b +0x01d:  mov    $0x0,%eax
084d34a0 +0x022:  jmp    084d3586 <+0x108>
084d34a5 +0x027:  mov    0x10(%ebp),%eax
084d34a8 +0x02a:  mov    %eax,-0xc(%ebp)
084d34ab +0x02d:  mov    -0xc(%ebp),%eax
084d34ae +0x030:  movzbl (%eax),%eax
084d34b1 +0x033:  cmp    $0x2,%al
084d34b3 +0x035:  jne    084d34d5 <+0x57>
084d34b5 +0x037:  movl   $0x6b,0x8(%esp)
084d34bd +0x03f:  movl   $0x9f,0x4(%esp)
084d34c5 +0x047:  mov    0xc(%ebp),%eax
084d34c8 +0x04a:  mov    %eax,(%esp)
084d34cb +0x04d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d34d0 +0x052:  jmp    084d3581 <+0x103>
084d34d5 +0x057:  mov    0xc(%ebp),%eax
084d34d8 +0x05a:  movl   $0x2,0x4(%esp)
084d34e0 +0x062:  mov    %eax,(%esp)
084d34e3 +0x065:  call   084ec07c <_GLOBAL__I__Z7getUserj+0x302e>  ; global constructors keyed to getUser(unsigned int)+0x302e
084d34e8 +0x06a:  lea    -0x18(%ebp),%eax
084d34eb +0x06d:  mov    %eax,(%esp)
084d34ee +0x070:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d34f3 +0x075:  movl   $0x9f,0x8(%esp)
084d34fb +0x07d:  movl   $0x1,0x4(%esp)
084d3503 +0x085:  lea    -0x18(%ebp),%eax
084d3506 +0x088:  mov    %eax,(%esp)
084d3509 +0x08b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d350e +0x090:  movl   $0x1,0x4(%esp)
084d3516 +0x098:  lea    -0x18(%ebp),%eax
084d3519 +0x09b:  mov    %eax,(%esp)
084d351c +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d3521 +0x0a3:  movl   $0x1,0x4(%esp)
084d3529 +0x0ab:  lea    -0x18(%ebp),%eax
084d352c +0x0ae:  mov    %eax,(%esp)
084d352f +0x0b1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3534 +0x0b6:  lea    -0x18(%ebp),%eax
084d3537 +0x0b9:  mov    %eax,0x4(%esp)
084d353b +0x0bd:  mov    0xc(%ebp),%eax
084d353e +0x0c0:  mov    %eax,(%esp)
084d3541 +0x0c3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3546 +0x0c8:  mov    0xc(%ebp),%eax
084d3549 +0x0cb:  movl   $0x4,0x4(%esp)
084d3551 +0x0d3:  mov    %eax,(%esp)
084d3554 +0x0d6:  call   084ec07c <_GLOBAL__I__Z7getUserj+0x302e>  ; global constructors keyed to getUser(unsigned int)+0x302e
084d3559 +0x0db:  lea    -0x18(%ebp),%eax
084d355c +0x0de:  mov    %eax,(%esp)
084d355f +0x0e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3564 +0x0e6:  jmp    084d3581 <+0x103>
084d3566 +0x0e8:  mov    %edx,%ebx
084d3568 +0x0ea:  mov    %eax,%esi
084d356a +0x0ec:  lea    -0x18(%ebp),%eax
084d356d +0x0ef:  mov    %eax,(%esp)
084d3570 +0x0f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3575 +0x0f7:  mov    %esi,%eax
084d3577 +0x0f9:  mov    %ebx,%edx
084d3579 +0x0fb:  mov    %eax,(%esp)
084d357c +0x0fe:  call   08ae3750 <_Unwind_Resume>
084d3581 +0x103:  mov    $0x0,%eax
084d3586 +0x108:  add    $0x20,%esp
084d3589 +0x10b:  pop    %ebx
084d358a +0x10c:  pop    %esi
084d358b +0x10d:  pop    %ebp
084d358c +0x10e:  ret
084d358d +0x10f:  nop
```

## 反编译 C

```c
// Inter_DBCheckDoubleGuildName::dispatch_sig @ 0x84d347e

/* Inter_DBCheckDoubleGuildName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DBCheckDoubleGuildName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)param_3 == '\x02') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x9f,0x6b);
    }
    else {
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,2);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3509 to 084d3545 has its CatchHandler @ 084d3566 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,4);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```

# dispatch_sig

`_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci`

`Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DBCheckDoubleGuildAddress` | `0x084d358e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d358e  _ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci
#           Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser*, char*, int)
# range [0x084d358e, 0x084d3689]
084d358e +0x00:  push   %ebp
084d358f +0x01:  mov    %esp,%ebp
084d3591 +0x03:  push   %esi
084d3592 +0x04:  push   %ebx
084d3593 +0x05:  sub    $0x20,%esp
084d3596 +0x08:  mov    0xc(%ebp),%eax
084d3599 +0x0b:  mov    %eax,(%esp)
084d359c +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d35a1 +0x13:  cmp    $0x2,%eax
084d35a4 +0x16:  setle  %al
084d35a7 +0x19:  test   %al,%al
084d35a9 +0x1b:  je     084d35b5 <+0x27>
084d35ab +0x1d:  mov    $0x0,%eax
084d35b0 +0x22:  jmp    084d3683 <+0xf5>
084d35b5 +0x27:  mov    0x10(%ebp),%eax
084d35b8 +0x2a:  mov    %eax,-0xc(%ebp)
084d35bb +0x2d:  mov    -0xc(%ebp),%eax
084d35be +0x30:  movzbl (%eax),%eax
084d35c1 +0x33:  cmp    $0x2,%al
084d35c3 +0x35:  jne    084d35e5 <+0x57>
084d35c5 +0x37:  movl   $0x6f,0x8(%esp)
084d35cd +0x3f:  movl   $0xa0,0x4(%esp)
084d35d5 +0x47:  mov    0xc(%ebp),%eax
084d35d8 +0x4a:  mov    %eax,(%esp)
084d35db +0x4d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d35e0 +0x52:  jmp    084d367e <+0xf0>
084d35e5 +0x57:  mov    0xc(%ebp),%eax
084d35e8 +0x5a:  movl   $0x4,0x4(%esp)
084d35f0 +0x62:  mov    %eax,(%esp)
084d35f3 +0x65:  call   084ec07c <_GLOBAL__I__Z7getUserj+0x302e>  ; global constructors keyed to getUser(unsigned int)+0x302e
084d35f8 +0x6a:  lea    -0x18(%ebp),%eax
084d35fb +0x6d:  mov    %eax,(%esp)
084d35fe +0x70:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3603 +0x75:  movl   $0xa0,0x8(%esp)
084d360b +0x7d:  movl   $0x1,0x4(%esp)
084d3613 +0x85:  lea    -0x18(%ebp),%eax
084d3616 +0x88:  mov    %eax,(%esp)
084d3619 +0x8b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d361e +0x90:  movl   $0x1,0x4(%esp)
084d3626 +0x98:  lea    -0x18(%ebp),%eax
084d3629 +0x9b:  mov    %eax,(%esp)
084d362c +0x9e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d3631 +0xa3:  movl   $0x1,0x4(%esp)
084d3639 +0xab:  lea    -0x18(%ebp),%eax
084d363c +0xae:  mov    %eax,(%esp)
084d363f +0xb1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3644 +0xb6:  lea    -0x18(%ebp),%eax
084d3647 +0xb9:  mov    %eax,0x4(%esp)
084d364b +0xbd:  mov    0xc(%ebp),%eax
084d364e +0xc0:  mov    %eax,(%esp)
084d3651 +0xc3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3656 +0xc8:  jmp    084d3673 <+0xe5>
084d3658 +0xca:  mov    %edx,%ebx
084d365a +0xcc:  mov    %eax,%esi
084d365c +0xce:  lea    -0x18(%ebp),%eax
084d365f +0xd1:  mov    %eax,(%esp)
084d3662 +0xd4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3667 +0xd9:  mov    %esi,%eax
084d3669 +0xdb:  mov    %ebx,%edx
084d366b +0xdd:  mov    %eax,(%esp)
084d366e +0xe0:  call   08ae3750 <_Unwind_Resume>
084d3673 +0xe5:  lea    -0x18(%ebp),%eax
084d3676 +0xe8:  mov    %eax,(%esp)
084d3679 +0xeb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d367e +0xf0:  mov    $0x0,%eax
084d3683 +0xf5:  add    $0x20,%esp
084d3686 +0xf8:  pop    %ebx
084d3687 +0xf9:  pop    %esi
084d3688 +0xfa:  pop    %ebp
084d3689 +0xfb:  ret
```

## 反编译 C

```c
// Inter_DBCheckDoubleGuildAddress::dispatch_sig @ 0x84d358e

/* Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)param_3 == '\x02') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa0,0x6f);
    }
    else {
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,4);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3619 to 084d3655 has its CatchHandler @ 084d3658 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```

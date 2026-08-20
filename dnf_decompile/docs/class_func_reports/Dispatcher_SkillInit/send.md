# send

`_ZN20Dispatcher_SkillInit4sendEP5CUserR9ParamBase`

`Dispatcher_SkillInit::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SkillInit` | `0x081e5aec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5aec  _ZN20Dispatcher_SkillInit4sendEP5CUserR9ParamBase
#           Dispatcher_SkillInit::send(CUser*, ParamBase&)
# range [0x081e5aec, 0x081e5bdb]
081e5aec +0x00:  push   %ebp
081e5aed +0x01:  mov    %esp,%ebp
081e5aef +0x03:  push   %esi
081e5af0 +0x04:  push   %ebx
081e5af1 +0x05:  sub    $0x20,%esp
081e5af4 +0x08:  mov    0x10(%ebp),%eax
081e5af7 +0x0b:  mov    %eax,-0xc(%ebp)
081e5afa +0x0e:  mov    -0xc(%ebp),%eax
081e5afd +0x11:  mov    0x4(%eax),%eax
081e5b00 +0x14:  test   %eax,%eax
081e5b02 +0x16:  jne    081e5bb4 <+0xc8>
081e5b08 +0x1c:  lea    -0x18(%ebp),%eax
081e5b0b +0x1f:  mov    %eax,(%esp)
081e5b0e +0x22:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e5b13 +0x27:  movl   $0x1ec,0x8(%esp)
081e5b1b +0x2f:  movl   $0x1,0x4(%esp)
081e5b23 +0x37:  lea    -0x18(%ebp),%eax
081e5b26 +0x3a:  mov    %eax,(%esp)
081e5b29 +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e5b2e +0x42:  movl   $0x1,0x4(%esp)
081e5b36 +0x4a:  lea    -0x18(%ebp),%eax
081e5b39 +0x4d:  mov    %eax,(%esp)
081e5b3c +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5b41 +0x55:  mov    -0xc(%ebp),%eax
081e5b44 +0x58:  movzbl 0x8(%eax),%eax
081e5b48 +0x5c:  movsbl %al,%eax
081e5b4b +0x5f:  mov    %eax,0x4(%esp)
081e5b4f +0x63:  lea    -0x18(%ebp),%eax
081e5b52 +0x66:  mov    %eax,(%esp)
081e5b55 +0x69:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5b5a +0x6e:  movl   $0x1,0x4(%esp)
081e5b62 +0x76:  lea    -0x18(%ebp),%eax
081e5b65 +0x79:  mov    %eax,(%esp)
081e5b68 +0x7c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e5b6d +0x81:  lea    -0x18(%ebp),%eax
081e5b70 +0x84:  mov    %eax,0x4(%esp)
081e5b74 +0x88:  mov    0xc(%ebp),%eax
081e5b77 +0x8b:  mov    %eax,(%esp)
081e5b7a +0x8e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e5b7f +0x93:  mov    0xc(%ebp),%eax
081e5b82 +0x96:  mov    %eax,(%esp)
081e5b85 +0x99:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
081e5b8a +0x9e:  jmp    081e5ba7 <+0xbb>
081e5b8c +0xa0:  mov    %edx,%ebx
081e5b8e +0xa2:  mov    %eax,%esi
081e5b90 +0xa4:  lea    -0x18(%ebp),%eax
081e5b93 +0xa7:  mov    %eax,(%esp)
081e5b96 +0xaa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5b9b +0xaf:  mov    %esi,%eax
081e5b9d +0xb1:  mov    %ebx,%edx
081e5b9f +0xb3:  mov    %eax,(%esp)
081e5ba2 +0xb6:  call   08ae3750 <_Unwind_Resume>
081e5ba7 +0xbb:  lea    -0x18(%ebp),%eax
081e5baa +0xbe:  mov    %eax,(%esp)
081e5bad +0xc1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5bb2 +0xc6:  jmp    081e5bd4 <+0xe8>
081e5bb4 +0xc8:  mov    -0xc(%ebp),%eax
081e5bb7 +0xcb:  mov    0x4(%eax),%eax
081e5bba +0xce:  movzbl %al,%eax
081e5bbd +0xd1:  mov    %eax,0x8(%esp)
081e5bc1 +0xd5:  movl   $0x1ec,0x4(%esp)
081e5bc9 +0xdd:  mov    0xc(%ebp),%eax
081e5bcc +0xe0:  mov    %eax,(%esp)
081e5bcf +0xe3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e5bd4 +0xe8:  add    $0x20,%esp
081e5bd7 +0xeb:  pop    %ebx
081e5bd8 +0xec:  pop    %esi
081e5bd9 +0xed:  pop    %ebp
081e5bda +0xee:  ret
081e5bdb +0xef:  nop
```

## 反编译 C

```c
// Dispatcher_SkillInit::send @ 0x81e5aec

/* Dispatcher_SkillInit::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SkillInit::send(Dispatcher_SkillInit *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e5b29 to 081e5b89 has its CatchHandler @ 081e5b8c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ec);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::send_skill_info(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ec,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```

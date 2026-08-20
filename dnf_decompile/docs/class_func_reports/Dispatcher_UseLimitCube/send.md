# send

`_ZN23Dispatcher_UseLimitCube4sendEP5CUserR9ParamBase`

`Dispatcher_UseLimitCube::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseLimitCube` | `0x081d4784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4784  _ZN23Dispatcher_UseLimitCube4sendEP5CUserR9ParamBase
#           Dispatcher_UseLimitCube::send(CUser*, ParamBase&)
# range [0x081d4784, 0x081d487b]
081d4784 +0x00:  push   %ebp
081d4785 +0x01:  mov    %esp,%ebp
081d4787 +0x03:  push   %esi
081d4788 +0x04:  push   %ebx
081d4789 +0x05:  sub    $0x20,%esp
081d478c +0x08:  mov    0x10(%ebp),%eax
081d478f +0x0b:  mov    %eax,-0xc(%ebp)
081d4792 +0x0e:  mov    -0xc(%ebp),%eax
081d4795 +0x11:  movzbl 0x4(%eax),%eax
081d4799 +0x15:  test   %al,%al
081d479b +0x17:  je     081d47c3 <+0x3f>
081d479d +0x19:  mov    -0xc(%ebp),%eax
081d47a0 +0x1c:  movzbl 0x4(%eax),%eax
081d47a4 +0x20:  movzbl %al,%eax
081d47a7 +0x23:  mov    %eax,0x8(%esp)
081d47ab +0x27:  movl   $0x153,0x4(%esp)
081d47b3 +0x2f:  mov    0xc(%ebp),%eax
081d47b6 +0x32:  mov    %eax,(%esp)
081d47b9 +0x35:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d47be +0x3a:  jmp    081d4874 <+0xf0>
081d47c3 +0x3f:  lea    -0x18(%ebp),%eax
081d47c6 +0x42:  mov    %eax,(%esp)
081d47c9 +0x45:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d47ce +0x4a:  movl   $0x153,0x8(%esp)
081d47d6 +0x52:  movl   $0x1,0x4(%esp)
081d47de +0x5a:  lea    -0x18(%ebp),%eax
081d47e1 +0x5d:  mov    %eax,(%esp)
081d47e4 +0x60:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d47e9 +0x65:  movl   $0x1,0x4(%esp)
081d47f1 +0x6d:  lea    -0x18(%ebp),%eax
081d47f4 +0x70:  mov    %eax,(%esp)
081d47f7 +0x73:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d47fc +0x78:  mov    -0xc(%ebp),%eax
081d47ff +0x7b:  mov    0x8(%eax),%eax
081d4802 +0x7e:  mov    %eax,0x4(%esp)
081d4806 +0x82:  lea    -0x18(%ebp),%eax
081d4809 +0x85:  mov    %eax,(%esp)
081d480c +0x88:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d4811 +0x8d:  mov    -0xc(%ebp),%eax
081d4814 +0x90:  mov    0xc(%eax),%eax
081d4817 +0x93:  cwtl
081d4818 +0x94:  mov    %eax,0x4(%esp)
081d481c +0x98:  lea    -0x18(%ebp),%eax
081d481f +0x9b:  mov    %eax,(%esp)
081d4822 +0x9e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d4827 +0xa3:  movl   $0x1,0x4(%esp)
081d482f +0xab:  lea    -0x18(%ebp),%eax
081d4832 +0xae:  mov    %eax,(%esp)
081d4835 +0xb1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d483a +0xb6:  lea    -0x18(%ebp),%eax
081d483d +0xb9:  mov    %eax,0x4(%esp)
081d4841 +0xbd:  mov    0xc(%ebp),%eax
081d4844 +0xc0:  mov    %eax,(%esp)
081d4847 +0xc3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d484c +0xc8:  jmp    081d4869 <+0xe5>
081d484e +0xca:  mov    %edx,%ebx
081d4850 +0xcc:  mov    %eax,%esi
081d4852 +0xce:  lea    -0x18(%ebp),%eax
081d4855 +0xd1:  mov    %eax,(%esp)
081d4858 +0xd4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d485d +0xd9:  mov    %esi,%eax
081d485f +0xdb:  mov    %ebx,%edx
081d4861 +0xdd:  mov    %eax,(%esp)
081d4864 +0xe0:  call   08ae3750 <_Unwind_Resume>
081d4869 +0xe5:  lea    -0x18(%ebp),%eax
081d486c +0xe8:  mov    %eax,(%esp)
081d486f +0xeb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d4874 +0xf0:  add    $0x20,%esp
081d4877 +0xf3:  pop    %ebx
081d4878 +0xf4:  pop    %esi
081d4879 +0xf5:  pop    %ebp
081d487a +0xf6:  ret
081d487b +0xf7:  nop
```

## 反编译 C

```c
// Dispatcher_UseLimitCube::send @ 0x81d4784

/* Dispatcher_UseLimitCube::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UseLimitCube::send(Dispatcher_UseLimitCube *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (param_2[4] == (ParamBase)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d47e4 to 081d484b has its CatchHandler @ 081d484e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x153);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(int)(short)*(undefined4 *)(local_10 + 0xc));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x153,param_2[4]);
  }
  return;
}
```

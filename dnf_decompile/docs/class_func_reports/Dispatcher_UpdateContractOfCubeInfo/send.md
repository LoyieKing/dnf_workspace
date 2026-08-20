# send

`_ZN35Dispatcher_UpdateContractOfCubeInfo4sendEP5CUserR9ParamBase`

`Dispatcher_UpdateContractOfCubeInfo::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpdateContractOfCubeInfo` | `0x0825f9ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f9ae  _ZN35Dispatcher_UpdateContractOfCubeInfo4sendEP5CUserR9ParamBase
#           Dispatcher_UpdateContractOfCubeInfo::send(CUser*, ParamBase&)
# range [0x0825f9ae, 0x0825fa8d]
0825f9ae +0x00:  push   %ebp
0825f9af +0x01:  mov    %esp,%ebp
0825f9b1 +0x03:  push   %esi
0825f9b2 +0x04:  push   %ebx
0825f9b3 +0x05:  sub    $0x20,%esp
0825f9b6 +0x08:  mov    0x10(%ebp),%eax
0825f9b9 +0x0b:  mov    %eax,-0xc(%ebp)
0825f9bc +0x0e:  lea    -0x18(%ebp),%eax
0825f9bf +0x11:  mov    %eax,(%esp)
0825f9c2 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825f9c7 +0x19:  movl   $0x20e,0x8(%esp)
0825f9cf +0x21:  movl   $0x1,0x4(%esp)
0825f9d7 +0x29:  lea    -0x18(%ebp),%eax
0825f9da +0x2c:  mov    %eax,(%esp)
0825f9dd +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825f9e2 +0x34:  mov    -0xc(%ebp),%eax
0825f9e5 +0x37:  mov    0x4(%eax),%eax
0825f9e8 +0x3a:  test   %eax,%eax
0825f9ea +0x3c:  jne    0825f9f3 <+0x45>
0825f9ec +0x3e:  mov    $0x1,%eax
0825f9f1 +0x43:  jmp    0825f9f8 <+0x4a>
0825f9f3 +0x45:  mov    $0x0,%eax
0825f9f8 +0x4a:  mov    %eax,0x4(%esp)
0825f9fc +0x4e:  lea    -0x18(%ebp),%eax
0825f9ff +0x51:  mov    %eax,(%esp)
0825fa02 +0x54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825fa07 +0x59:  mov    -0xc(%ebp),%eax
0825fa0a +0x5c:  movzbl 0x8(%eax),%eax
0825fa0e +0x60:  movzbl %al,%eax
0825fa11 +0x63:  mov    %eax,0x4(%esp)
0825fa15 +0x67:  lea    -0x18(%ebp),%eax
0825fa18 +0x6a:  mov    %eax,(%esp)
0825fa1b +0x6d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825fa20 +0x72:  mov    -0xc(%ebp),%eax
0825fa23 +0x75:  movzbl 0x9(%eax),%eax
0825fa27 +0x79:  movzbl %al,%eax
0825fa2a +0x7c:  mov    %eax,0x4(%esp)
0825fa2e +0x80:  lea    -0x18(%ebp),%eax
0825fa31 +0x83:  mov    %eax,(%esp)
0825fa34 +0x86:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825fa39 +0x8b:  movl   $0x1,0x4(%esp)
0825fa41 +0x93:  lea    -0x18(%ebp),%eax
0825fa44 +0x96:  mov    %eax,(%esp)
0825fa47 +0x99:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825fa4c +0x9e:  lea    -0x18(%ebp),%eax
0825fa4f +0xa1:  mov    %eax,0x4(%esp)
0825fa53 +0xa5:  mov    0xc(%ebp),%eax
0825fa56 +0xa8:  mov    %eax,(%esp)
0825fa59 +0xab:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825fa5e +0xb0:  jmp    0825fa7b <+0xcd>
0825fa60 +0xb2:  mov    %edx,%ebx
0825fa62 +0xb4:  mov    %eax,%esi
0825fa64 +0xb6:  lea    -0x18(%ebp),%eax
0825fa67 +0xb9:  mov    %eax,(%esp)
0825fa6a +0xbc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825fa6f +0xc1:  mov    %esi,%eax
0825fa71 +0xc3:  mov    %ebx,%edx
0825fa73 +0xc5:  mov    %eax,(%esp)
0825fa76 +0xc8:  call   08ae3750 <_Unwind_Resume>
0825fa7b +0xcd:  lea    -0x18(%ebp),%eax
0825fa7e +0xd0:  mov    %eax,(%esp)
0825fa81 +0xd3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825fa86 +0xd8:  add    $0x20,%esp
0825fa89 +0xdb:  pop    %ebx
0825fa8a +0xdc:  pop    %esi
0825fa8b +0xdd:  pop    %ebp
0825fa8c +0xde:  ret
0825fa8d +0xdf:  nop
```

## 反编译 C

```c
// Dispatcher_UpdateContractOfCubeInfo::send @ 0x825f9ae

/* Dispatcher_UpdateContractOfCubeInfo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UpdateContractOfCubeInfo::send
          (Dispatcher_UpdateContractOfCubeInfo *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825f9dd to 0825fa5d has its CatchHandler @ 0825fa60 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x20e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(*(int *)(local_10 + 4) == 0));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[9]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

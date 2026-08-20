# send

`_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase`

`Dispatcher_Register_Quick_Party::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Register_Quick_Party` | `0x081de0c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de0c6  _ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase
#           Dispatcher_Register_Quick_Party::send(CUser*, ParamBase&)
# range [0x081de0c6, 0x081de1a9]
081de0c6 +0x00:  push   %ebp
081de0c7 +0x01:  mov    %esp,%ebp
081de0c9 +0x03:  push   %esi
081de0ca +0x04:  push   %ebx
081de0cb +0x05:  sub    $0x20,%esp
081de0ce +0x08:  mov    0x10(%ebp),%eax
081de0d1 +0x0b:  mov    %eax,-0xc(%ebp)
081de0d4 +0x0e:  mov    -0xc(%ebp),%eax
081de0d7 +0x11:  mov    0x4(%eax),%eax
081de0da +0x14:  test   %eax,%eax
081de0dc +0x16:  jne    081de0f6 <+0x30>
081de0de +0x18:  movl   $0x1bc,0x4(%esp)
081de0e6 +0x20:  mov    0xc(%ebp),%eax
081de0e9 +0x23:  mov    %eax,(%esp)
081de0ec +0x26:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081de0f1 +0x2b:  jmp    081de1a3 <+0xdd>
081de0f6 +0x30:  mov    -0xc(%ebp),%eax
081de0f9 +0x33:  mov    0x4(%eax),%eax
081de0fc +0x36:  cmp    $0x1,%eax
081de0ff +0x39:  jne    081de1a2 <+0xdc>
081de105 +0x3f:  lea    -0x18(%ebp),%eax
081de108 +0x42:  mov    %eax,(%esp)
081de10b +0x45:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081de110 +0x4a:  movl   $0x1bc,0x8(%esp)
081de118 +0x52:  movl   $0x1,0x4(%esp)
081de120 +0x5a:  lea    -0x18(%ebp),%eax
081de123 +0x5d:  mov    %eax,(%esp)
081de126 +0x60:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081de12b +0x65:  movl   $0x0,0x4(%esp)
081de133 +0x6d:  lea    -0x18(%ebp),%eax
081de136 +0x70:  mov    %eax,(%esp)
081de139 +0x73:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de13e +0x78:  mov    -0xc(%ebp),%eax
081de141 +0x7b:  mov    0x4(%eax),%eax
081de144 +0x7e:  mov    %eax,0x4(%esp)
081de148 +0x82:  lea    -0x18(%ebp),%eax
081de14b +0x85:  mov    %eax,(%esp)
081de14e +0x88:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081de153 +0x8d:  movl   $0x1,0x4(%esp)
081de15b +0x95:  lea    -0x18(%ebp),%eax
081de15e +0x98:  mov    %eax,(%esp)
081de161 +0x9b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081de166 +0xa0:  lea    -0x18(%ebp),%eax
081de169 +0xa3:  mov    %eax,0x4(%esp)
081de16d +0xa7:  mov    0xc(%ebp),%eax
081de170 +0xaa:  mov    %eax,(%esp)
081de173 +0xad:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081de178 +0xb2:  jmp    081de195 <+0xcf>
081de17a +0xb4:  mov    %edx,%ebx
081de17c +0xb6:  mov    %eax,%esi
081de17e +0xb8:  lea    -0x18(%ebp),%eax
081de181 +0xbb:  mov    %eax,(%esp)
081de184 +0xbe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081de189 +0xc3:  mov    %esi,%eax
081de18b +0xc5:  mov    %ebx,%edx
081de18d +0xc7:  mov    %eax,(%esp)
081de190 +0xca:  call   08ae3750 <_Unwind_Resume>
081de195 +0xcf:  lea    -0x18(%ebp),%eax
081de198 +0xd2:  mov    %eax,(%esp)
081de19b +0xd5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081de1a0 +0xda:  jmp    081de1a3 <+0xdd>
081de1a2 +0xdc:  nop
081de1a3 +0xdd:  add    $0x20,%esp
081de1a6 +0xe0:  pop    %ebx
081de1a7 +0xe1:  pop    %esi
081de1a8 +0xe2:  pop    %ebp
081de1a9 +0xe3:  ret
```

## 反编译 C

```c
// Dispatcher_Register_Quick_Party::send @ 0x81de0c6

/* Dispatcher_Register_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Register_Quick_Party::send
          (Dispatcher_Register_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1bc);
  }
  else if (*(int *)(param_2 + 4) == 1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081de126 to 081de177 has its CatchHandler @ 081de17a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```

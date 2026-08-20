# send

`_ZN31Dispatcher_PrecheckSoloTeleport4sendEP5CUserR9ParamBase`

`Dispatcher_PrecheckSoloTeleport::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PrecheckSoloTeleport` | `0x081e1acc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1acc  _ZN31Dispatcher_PrecheckSoloTeleport4sendEP5CUserR9ParamBase
#           Dispatcher_PrecheckSoloTeleport::send(CUser*, ParamBase&)
# range [0x081e1acc, 0x081e1b9b]
081e1acc +0x00:  push   %ebp
081e1acd +0x01:  mov    %esp,%ebp
081e1acf +0x03:  push   %esi
081e1ad0 +0x04:  push   %ebx
081e1ad1 +0x05:  sub    $0x20,%esp
081e1ad4 +0x08:  mov    0x10(%ebp),%eax
081e1ad7 +0x0b:  mov    %eax,-0xc(%ebp)
081e1ada +0x0e:  mov    -0xc(%ebp),%eax
081e1add +0x11:  mov    0x4(%eax),%eax
081e1ae0 +0x14:  test   %eax,%eax
081e1ae2 +0x16:  je     081e1b93 <+0xc7>
081e1ae8 +0x1c:  lea    -0x18(%ebp),%eax
081e1aeb +0x1f:  mov    %eax,(%esp)
081e1aee +0x22:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e1af3 +0x27:  lea    -0x18(%ebp),%eax
081e1af6 +0x2a:  mov    %eax,(%esp)
081e1af9 +0x2d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e1afe +0x32:  movl   $0x1d6,0x8(%esp)
081e1b06 +0x3a:  movl   $0x1,0x4(%esp)
081e1b0e +0x42:  lea    -0x18(%ebp),%eax
081e1b11 +0x45:  mov    %eax,(%esp)
081e1b14 +0x48:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e1b19 +0x4d:  movl   $0x0,0x4(%esp)
081e1b21 +0x55:  lea    -0x18(%ebp),%eax
081e1b24 +0x58:  mov    %eax,(%esp)
081e1b27 +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e1b2c +0x60:  mov    -0xc(%ebp),%eax
081e1b2f +0x63:  mov    0x4(%eax),%eax
081e1b32 +0x66:  movsbl %al,%eax
081e1b35 +0x69:  mov    %eax,0x4(%esp)
081e1b39 +0x6d:  lea    -0x18(%ebp),%eax
081e1b3c +0x70:  mov    %eax,(%esp)
081e1b3f +0x73:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e1b44 +0x78:  movl   $0x1,0x4(%esp)
081e1b4c +0x80:  lea    -0x18(%ebp),%eax
081e1b4f +0x83:  mov    %eax,(%esp)
081e1b52 +0x86:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e1b57 +0x8b:  lea    -0x18(%ebp),%eax
081e1b5a +0x8e:  mov    %eax,0x4(%esp)
081e1b5e +0x92:  mov    0xc(%ebp),%eax
081e1b61 +0x95:  mov    %eax,(%esp)
081e1b64 +0x98:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e1b69 +0x9d:  jmp    081e1b86 <+0xba>
081e1b6b +0x9f:  mov    %edx,%ebx
081e1b6d +0xa1:  mov    %eax,%esi
081e1b6f +0xa3:  lea    -0x18(%ebp),%eax
081e1b72 +0xa6:  mov    %eax,(%esp)
081e1b75 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e1b7a +0xae:  mov    %esi,%eax
081e1b7c +0xb0:  mov    %ebx,%edx
081e1b7e +0xb2:  mov    %eax,(%esp)
081e1b81 +0xb5:  call   08ae3750 <_Unwind_Resume>
081e1b86 +0xba:  lea    -0x18(%ebp),%eax
081e1b89 +0xbd:  mov    %eax,(%esp)
081e1b8c +0xc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e1b91 +0xc5:  jmp    081e1b94 <+0xc8>
081e1b93 +0xc7:  nop
081e1b94 +0xc8:  add    $0x20,%esp
081e1b97 +0xcb:  pop    %ebx
081e1b98 +0xcc:  pop    %esi
081e1b99 +0xcd:  pop    %ebp
081e1b9a +0xce:  ret
081e1b9b +0xcf:  nop
```

## 反编译 C

```c
// Dispatcher_PrecheckSoloTeleport::send @ 0x81e1acc

/* Dispatcher_PrecheckSoloTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PrecheckSoloTeleport::send
          (Dispatcher_PrecheckSoloTeleport *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e1af9 to 081e1b68 has its CatchHandler @ 081e1b6b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1d6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```

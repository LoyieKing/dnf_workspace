# send

`_ZN21DisPatcher_PvPTimeout4sendEP5CUserR9ParamBase`

`DisPatcher_PvPTimeout::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_PvPTimeout` | `0x081c5ee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5ee8  _ZN21DisPatcher_PvPTimeout4sendEP5CUserR9ParamBase
#           DisPatcher_PvPTimeout::send(CUser*, ParamBase&)
# range [0x081c5ee8, 0x081c5fa5]
081c5ee8 +0x00:  push   %ebp
081c5ee9 +0x01:  mov    %esp,%ebp
081c5eeb +0x03:  push   %esi
081c5eec +0x04:  push   %ebx
081c5eed +0x05:  sub    $0x20,%esp
081c5ef0 +0x08:  mov    0x10(%ebp),%eax
081c5ef3 +0x0b:  mov    %eax,-0xc(%ebp)
081c5ef6 +0x0e:  lea    -0x18(%ebp),%eax
081c5ef9 +0x11:  mov    %eax,(%esp)
081c5efc +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c5f01 +0x19:  mov    -0xc(%ebp),%eax
081c5f04 +0x1c:  mov    0x4(%eax),%eax
081c5f07 +0x1f:  test   %eax,%eax
081c5f09 +0x21:  jle    081c5f94 <+0xac>
081c5f0f +0x27:  movl   $0x3b,0x8(%esp)
081c5f17 +0x2f:  movl   $0x1,0x4(%esp)
081c5f1f +0x37:  lea    -0x18(%ebp),%eax
081c5f22 +0x3a:  mov    %eax,(%esp)
081c5f25 +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c5f2a +0x42:  movl   $0x0,0x4(%esp)
081c5f32 +0x4a:  lea    -0x18(%ebp),%eax
081c5f35 +0x4d:  mov    %eax,(%esp)
081c5f38 +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5f3d +0x55:  mov    -0xc(%ebp),%eax
081c5f40 +0x58:  mov    0x4(%eax),%eax
081c5f43 +0x5b:  mov    %eax,0x4(%esp)
081c5f47 +0x5f:  lea    -0x18(%ebp),%eax
081c5f4a +0x62:  mov    %eax,(%esp)
081c5f4d +0x65:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5f52 +0x6a:  movl   $0x1,0x4(%esp)
081c5f5a +0x72:  lea    -0x18(%ebp),%eax
081c5f5d +0x75:  mov    %eax,(%esp)
081c5f60 +0x78:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c5f65 +0x7d:  lea    -0x18(%ebp),%eax
081c5f68 +0x80:  mov    %eax,0x4(%esp)
081c5f6c +0x84:  mov    0xc(%ebp),%eax
081c5f6f +0x87:  mov    %eax,(%esp)
081c5f72 +0x8a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c5f77 +0x8f:  jmp    081c5f94 <+0xac>
081c5f79 +0x91:  mov    %edx,%ebx
081c5f7b +0x93:  mov    %eax,%esi
081c5f7d +0x95:  lea    -0x18(%ebp),%eax
081c5f80 +0x98:  mov    %eax,(%esp)
081c5f83 +0x9b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c5f88 +0xa0:  mov    %esi,%eax
081c5f8a +0xa2:  mov    %ebx,%edx
081c5f8c +0xa4:  mov    %eax,(%esp)
081c5f8f +0xa7:  call   08ae3750 <_Unwind_Resume>
081c5f94 +0xac:  lea    -0x18(%ebp),%eax
081c5f97 +0xaf:  mov    %eax,(%esp)
081c5f9a +0xb2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c5f9f +0xb7:  add    $0x20,%esp
081c5fa2 +0xba:  pop    %ebx
081c5fa3 +0xbb:  pop    %esi
081c5fa4 +0xbc:  pop    %ebp
081c5fa5 +0xbd:  ret
```

## 反编译 C

```c
// DisPatcher_PvPTimeout::send @ 0x81c5ee8

/* DisPatcher_PvPTimeout::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_PvPTimeout::send(DisPatcher_PvPTimeout *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
  if (0 < *(int *)(local_10 + 4)) {
                    /* try { // try from 081c5f25 to 081c5f76 has its CatchHandler @ 081c5f79 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x3b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

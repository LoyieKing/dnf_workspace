# send

`_ZN41Dispatcher_ImageCommunicationEquipmentUse4sendEP5CUserR9ParamBase`

`Dispatcher_ImageCommunicationEquipmentUse::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ImageCommunicationEquipmentUse` | `0x081e22e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e22e6  _ZN41Dispatcher_ImageCommunicationEquipmentUse4sendEP5CUserR9ParamBase
#           Dispatcher_ImageCommunicationEquipmentUse::send(CUser*, ParamBase&)
# range [0x081e22e6, 0x081e23df]
081e22e6 +0x00:  push   %ebp
081e22e7 +0x01:  mov    %esp,%ebp
081e22e9 +0x03:  push   %esi
081e22ea +0x04:  push   %ebx
081e22eb +0x05:  sub    $0x20,%esp
081e22ee +0x08:  mov    0x10(%ebp),%eax
081e22f1 +0x0b:  mov    %eax,-0xc(%ebp)
081e22f4 +0x0e:  lea    -0x18(%ebp),%eax
081e22f7 +0x11:  mov    %eax,(%esp)
081e22fa +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e22ff +0x19:  movl   $0x1dc,0x8(%esp)
081e2307 +0x21:  movl   $0x1,0x4(%esp)
081e230f +0x29:  lea    -0x18(%ebp),%eax
081e2312 +0x2c:  mov    %eax,(%esp)
081e2315 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e231a +0x34:  mov    -0xc(%ebp),%eax
081e231d +0x37:  mov    0x4(%eax),%eax
081e2320 +0x3a:  test   %eax,%eax
081e2322 +0x3c:  je     081e234e <+0x68>
081e2324 +0x3e:  movl   $0x0,0x4(%esp)
081e232c +0x46:  lea    -0x18(%ebp),%eax
081e232f +0x49:  mov    %eax,(%esp)
081e2332 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e2337 +0x51:  mov    -0xc(%ebp),%eax
081e233a +0x54:  mov    0x4(%eax),%eax
081e233d +0x57:  mov    %eax,0x4(%esp)
081e2341 +0x5b:  lea    -0x18(%ebp),%eax
081e2344 +0x5e:  mov    %eax,(%esp)
081e2347 +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e234c +0x66:  jmp    081e238b <+0xa5>
081e234e +0x68:  movl   $0x1,0x4(%esp)
081e2356 +0x70:  lea    -0x18(%ebp),%eax
081e2359 +0x73:  mov    %eax,(%esp)
081e235c +0x76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e2361 +0x7b:  mov    -0xc(%ebp),%eax
081e2364 +0x7e:  mov    0x8(%eax),%eax
081e2367 +0x81:  mov    %eax,0x4(%esp)
081e236b +0x85:  lea    -0x18(%ebp),%eax
081e236e +0x88:  mov    %eax,(%esp)
081e2371 +0x8b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e2376 +0x90:  mov    -0xc(%ebp),%eax
081e2379 +0x93:  mov    0xc(%eax),%eax
081e237c +0x96:  mov    %eax,0x4(%esp)
081e2380 +0x9a:  lea    -0x18(%ebp),%eax
081e2383 +0x9d:  mov    %eax,(%esp)
081e2386 +0xa0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e238b +0xa5:  movl   $0x1,0x4(%esp)
081e2393 +0xad:  lea    -0x18(%ebp),%eax
081e2396 +0xb0:  mov    %eax,(%esp)
081e2399 +0xb3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e239e +0xb8:  lea    -0x18(%ebp),%eax
081e23a1 +0xbb:  mov    %eax,0x4(%esp)
081e23a5 +0xbf:  mov    0xc(%ebp),%eax
081e23a8 +0xc2:  mov    %eax,(%esp)
081e23ab +0xc5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e23b0 +0xca:  jmp    081e23cd <+0xe7>
081e23b2 +0xcc:  mov    %edx,%ebx
081e23b4 +0xce:  mov    %eax,%esi
081e23b6 +0xd0:  lea    -0x18(%ebp),%eax
081e23b9 +0xd3:  mov    %eax,(%esp)
081e23bc +0xd6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e23c1 +0xdb:  mov    %esi,%eax
081e23c3 +0xdd:  mov    %ebx,%edx
081e23c5 +0xdf:  mov    %eax,(%esp)
081e23c8 +0xe2:  call   08ae3750 <_Unwind_Resume>
081e23cd +0xe7:  lea    -0x18(%ebp),%eax
081e23d0 +0xea:  mov    %eax,(%esp)
081e23d3 +0xed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e23d8 +0xf2:  add    $0x20,%esp
081e23db +0xf5:  pop    %ebx
081e23dc +0xf6:  pop    %esi
081e23dd +0xf7:  pop    %ebp
081e23de +0xf8:  ret
081e23df +0xf9:  nop
```

## 反编译 C

```c
// Dispatcher_ImageCommunicationEquipmentUse::send @ 0x81e22e6

/* Dispatcher_ImageCommunicationEquipmentUse::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ImageCommunicationEquipmentUse::send
          (Dispatcher_ImageCommunicationEquipmentUse *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e2315 to 081e23af has its CatchHandler @ 081e23b2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1dc);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

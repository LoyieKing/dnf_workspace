# send

`_ZN39Dispatcher_Expand_Equipslot_Flag_Update4sendEP5CUserR9ParamBase`

`Dispatcher_Expand_Equipslot_Flag_Update::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Expand_Equipslot_Flag_Update` | `0x081d5fae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5fae  _ZN39Dispatcher_Expand_Equipslot_Flag_Update4sendEP5CUserR9ParamBase
#           Dispatcher_Expand_Equipslot_Flag_Update::send(CUser*, ParamBase&)
# range [0x081d5fae, 0x081d606d]
081d5fae +0x00:  push   %ebp
081d5faf +0x01:  mov    %esp,%ebp
081d5fb1 +0x03:  push   %esi
081d5fb2 +0x04:  push   %ebx
081d5fb3 +0x05:  sub    $0x20,%esp
081d5fb6 +0x08:  mov    0x10(%ebp),%eax
081d5fb9 +0x0b:  mov    %eax,-0xc(%ebp)
081d5fbc +0x0e:  lea    -0x18(%ebp),%eax
081d5fbf +0x11:  mov    %eax,(%esp)
081d5fc2 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d5fc7 +0x19:  lea    -0x18(%ebp),%eax
081d5fca +0x1c:  mov    %eax,(%esp)
081d5fcd +0x1f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d5fd2 +0x24:  movl   $0x18e,0x8(%esp)
081d5fda +0x2c:  movl   $0x1,0x4(%esp)
081d5fe2 +0x34:  lea    -0x18(%ebp),%eax
081d5fe5 +0x37:  mov    %eax,(%esp)
081d5fe8 +0x3a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d5fed +0x3f:  movl   $0x1,0x4(%esp)
081d5ff5 +0x47:  lea    -0x18(%ebp),%eax
081d5ff8 +0x4a:  mov    %eax,(%esp)
081d5ffb +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6000 +0x52:  mov    -0xc(%ebp),%eax
081d6003 +0x55:  movzbl 0x4(%eax),%eax
081d6007 +0x59:  movsbl %al,%eax
081d600a +0x5c:  mov    %eax,0x4(%esp)
081d600e +0x60:  lea    -0x18(%ebp),%eax
081d6011 +0x63:  mov    %eax,(%esp)
081d6014 +0x66:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6019 +0x6b:  movl   $0x1,0x4(%esp)
081d6021 +0x73:  lea    -0x18(%ebp),%eax
081d6024 +0x76:  mov    %eax,(%esp)
081d6027 +0x79:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d602c +0x7e:  lea    -0x18(%ebp),%eax
081d602f +0x81:  mov    %eax,0x4(%esp)
081d6033 +0x85:  mov    0xc(%ebp),%eax
081d6036 +0x88:  mov    %eax,(%esp)
081d6039 +0x8b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d603e +0x90:  jmp    081d605b <+0xad>
081d6040 +0x92:  mov    %edx,%ebx
081d6042 +0x94:  mov    %eax,%esi
081d6044 +0x96:  lea    -0x18(%ebp),%eax
081d6047 +0x99:  mov    %eax,(%esp)
081d604a +0x9c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d604f +0xa1:  mov    %esi,%eax
081d6051 +0xa3:  mov    %ebx,%edx
081d6053 +0xa5:  mov    %eax,(%esp)
081d6056 +0xa8:  call   08ae3750 <_Unwind_Resume>
081d605b +0xad:  lea    -0x18(%ebp),%eax
081d605e +0xb0:  mov    %eax,(%esp)
081d6061 +0xb3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d6066 +0xb8:  add    $0x20,%esp
081d6069 +0xbb:  pop    %ebx
081d606a +0xbc:  pop    %esi
081d606b +0xbd:  pop    %ebp
081d606c +0xbe:  ret
081d606d +0xbf:  nop
```

## 反编译 C

```c
// Dispatcher_Expand_Equipslot_Flag_Update::send @ 0x81d5fae

/* Dispatcher_Expand_Equipslot_Flag_Update::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::send
          (Dispatcher_Expand_Equipslot_Flag_Update *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d5fcd to 081d603d has its CatchHandler @ 081d6040 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x18e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

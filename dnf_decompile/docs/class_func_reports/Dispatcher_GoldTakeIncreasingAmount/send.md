# send

`_ZN35Dispatcher_GoldTakeIncreasingAmount4sendEP5CUserR9ParamBase`

`Dispatcher_GoldTakeIncreasingAmount::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoldTakeIncreasingAmount` | `0x081d56ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d56ac  _ZN35Dispatcher_GoldTakeIncreasingAmount4sendEP5CUserR9ParamBase
#           Dispatcher_GoldTakeIncreasingAmount::send(CUser*, ParamBase&)
# range [0x081d56ac, 0x081d574d]
081d56ac +0x00:  push   %ebp
081d56ad +0x01:  mov    %esp,%ebp
081d56af +0x03:  push   %esi
081d56b0 +0x04:  push   %ebx
081d56b1 +0x05:  sub    $0x20,%esp
081d56b4 +0x08:  mov    0x10(%ebp),%eax
081d56b7 +0x0b:  mov    %eax,-0xc(%ebp)
081d56ba +0x0e:  lea    -0x18(%ebp),%eax
081d56bd +0x11:  mov    %eax,(%esp)
081d56c0 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d56c5 +0x19:  movl   $0x174,0x8(%esp)
081d56cd +0x21:  movl   $0x1,0x4(%esp)
081d56d5 +0x29:  lea    -0x18(%ebp),%eax
081d56d8 +0x2c:  mov    %eax,(%esp)
081d56db +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d56e0 +0x34:  mov    -0xc(%ebp),%eax
081d56e3 +0x37:  movzbl 0x8(%eax),%eax
081d56e7 +0x3b:  movzbl %al,%eax
081d56ea +0x3e:  mov    %eax,0x4(%esp)
081d56ee +0x42:  lea    -0x18(%ebp),%eax
081d56f1 +0x45:  mov    %eax,(%esp)
081d56f4 +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d56f9 +0x4d:  movl   $0x1,0x4(%esp)
081d5701 +0x55:  lea    -0x18(%ebp),%eax
081d5704 +0x58:  mov    %eax,(%esp)
081d5707 +0x5b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d570c +0x60:  lea    -0x18(%ebp),%eax
081d570f +0x63:  mov    %eax,0x4(%esp)
081d5713 +0x67:  mov    0xc(%ebp),%eax
081d5716 +0x6a:  mov    %eax,(%esp)
081d5719 +0x6d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d571e +0x72:  jmp    081d573b <+0x8f>
081d5720 +0x74:  mov    %edx,%ebx
081d5722 +0x76:  mov    %eax,%esi
081d5724 +0x78:  lea    -0x18(%ebp),%eax
081d5727 +0x7b:  mov    %eax,(%esp)
081d572a +0x7e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d572f +0x83:  mov    %esi,%eax
081d5731 +0x85:  mov    %ebx,%edx
081d5733 +0x87:  mov    %eax,(%esp)
081d5736 +0x8a:  call   08ae3750 <_Unwind_Resume>
081d573b +0x8f:  lea    -0x18(%ebp),%eax
081d573e +0x92:  mov    %eax,(%esp)
081d5741 +0x95:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d5746 +0x9a:  add    $0x20,%esp
081d5749 +0x9d:  pop    %ebx
081d574a +0x9e:  pop    %esi
081d574b +0x9f:  pop    %ebp
081d574c +0xa0:  ret
081d574d +0xa1:  nop
```

## 反编译 C

```c
// Dispatcher_GoldTakeIncreasingAmount::send @ 0x81d56ac

/* Dispatcher_GoldTakeIncreasingAmount::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GoldTakeIncreasingAmount::send
          (Dispatcher_GoldTakeIncreasingAmount *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d56db to 081d571d has its CatchHandler @ 081d5720 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x174);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

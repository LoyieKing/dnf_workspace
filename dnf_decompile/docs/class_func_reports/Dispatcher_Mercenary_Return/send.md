# send

`_ZN27Dispatcher_Mercenary_Return4sendEP5CUserR9ParamBase`

`Dispatcher_Mercenary_Return::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Return` | `0x081dda1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dda1c  _ZN27Dispatcher_Mercenary_Return4sendEP5CUserR9ParamBase
#           Dispatcher_Mercenary_Return::send(CUser*, ParamBase&)
# range [0x081dda1c, 0x081ddb3b]
081dda1c +0x000:  push   %ebp
081dda1d +0x001:  mov    %esp,%ebp
081dda1f +0x003:  push   %esi
081dda20 +0x004:  push   %ebx
081dda21 +0x005:  sub    $0x20,%esp
081dda24 +0x008:  mov    0x10(%ebp),%eax
081dda27 +0x00b:  mov    %eax,-0xc(%ebp)
081dda2a +0x00e:  lea    -0x18(%ebp),%eax
081dda2d +0x011:  mov    %eax,(%esp)
081dda30 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dda35 +0x019:  movl   $0x1b9,0x8(%esp)
081dda3d +0x021:  movl   $0x1,0x4(%esp)
081dda45 +0x029:  lea    -0x18(%ebp),%eax
081dda48 +0x02c:  mov    %eax,(%esp)
081dda4b +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dda50 +0x034:  mov    -0xc(%ebp),%eax
081dda53 +0x037:  movzbl 0x4(%eax),%eax
081dda57 +0x03b:  test   %al,%al
081dda59 +0x03d:  je     081dda62 <+0x46>
081dda5b +0x03f:  mov    $0x1,%eax
081dda60 +0x044:  jmp    081dda67 <+0x4b>
081dda62 +0x046:  mov    $0x0,%eax
081dda67 +0x04b:  mov    %eax,0x4(%esp)
081dda6b +0x04f:  lea    -0x18(%ebp),%eax
081dda6e +0x052:  mov    %eax,(%esp)
081dda71 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dda76 +0x05a:  mov    -0xc(%ebp),%eax
081dda79 +0x05d:  movzbl 0x5(%eax),%eax
081dda7d +0x061:  movsbl %al,%eax
081dda80 +0x064:  mov    %eax,0x4(%esp)
081dda84 +0x068:  lea    -0x18(%ebp),%eax
081dda87 +0x06b:  mov    %eax,(%esp)
081dda8a +0x06e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dda8f +0x073:  mov    -0xc(%ebp),%eax
081dda92 +0x076:  mov    0x8(%eax),%eax
081dda95 +0x079:  mov    %eax,0x4(%esp)
081dda99 +0x07d:  lea    -0x18(%ebp),%eax
081dda9c +0x080:  mov    %eax,(%esp)
081dda9f +0x083:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ddaa4 +0x088:  mov    -0xc(%ebp),%eax
081ddaa7 +0x08b:  mov    0xc(%eax),%eax
081ddaaa +0x08e:  mov    %eax,0x4(%esp)
081ddaae +0x092:  lea    -0x18(%ebp),%eax
081ddab1 +0x095:  mov    %eax,(%esp)
081ddab4 +0x098:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ddab9 +0x09d:  mov    -0xc(%ebp),%eax
081ddabc +0x0a0:  mov    0x10(%eax),%eax
081ddabf +0x0a3:  mov    %eax,0x4(%esp)
081ddac3 +0x0a7:  lea    -0x18(%ebp),%eax
081ddac6 +0x0aa:  mov    %eax,(%esp)
081ddac9 +0x0ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ddace +0x0b2:  mov    -0xc(%ebp),%eax
081ddad1 +0x0b5:  movzbl 0x14(%eax),%eax
081ddad5 +0x0b9:  movsbl %al,%eax
081ddad8 +0x0bc:  mov    %eax,0x4(%esp)
081ddadc +0x0c0:  lea    -0x18(%ebp),%eax
081ddadf +0x0c3:  mov    %eax,(%esp)
081ddae2 +0x0c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ddae7 +0x0cb:  movl   $0x1,0x4(%esp)
081ddaef +0x0d3:  lea    -0x18(%ebp),%eax
081ddaf2 +0x0d6:  mov    %eax,(%esp)
081ddaf5 +0x0d9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ddafa +0x0de:  lea    -0x18(%ebp),%eax
081ddafd +0x0e1:  mov    %eax,0x4(%esp)
081ddb01 +0x0e5:  mov    0xc(%ebp),%eax
081ddb04 +0x0e8:  mov    %eax,(%esp)
081ddb07 +0x0eb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ddb0c +0x0f0:  jmp    081ddb29 <+0x10d>
081ddb0e +0x0f2:  mov    %edx,%ebx
081ddb10 +0x0f4:  mov    %eax,%esi
081ddb12 +0x0f6:  lea    -0x18(%ebp),%eax
081ddb15 +0x0f9:  mov    %eax,(%esp)
081ddb18 +0x0fc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddb1d +0x101:  mov    %esi,%eax
081ddb1f +0x103:  mov    %ebx,%edx
081ddb21 +0x105:  mov    %eax,(%esp)
081ddb24 +0x108:  call   08ae3750 <_Unwind_Resume>
081ddb29 +0x10d:  lea    -0x18(%ebp),%eax
081ddb2c +0x110:  mov    %eax,(%esp)
081ddb2f +0x113:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddb34 +0x118:  add    $0x20,%esp
081ddb37 +0x11b:  pop    %ebx
081ddb38 +0x11c:  pop    %esi
081ddb39 +0x11d:  pop    %ebp
081ddb3a +0x11e:  ret
081ddb3b +0x11f:  nop
```

## 反编译 C

```c
// Dispatcher_Mercenary_Return::send @ 0x81dda1c

/* Dispatcher_Mercenary_Return::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Mercenary_Return::send
          (Dispatcher_Mercenary_Return *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dda4b to 081ddb0b has its CatchHandler @ 081ddb0e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1b9);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0x14]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

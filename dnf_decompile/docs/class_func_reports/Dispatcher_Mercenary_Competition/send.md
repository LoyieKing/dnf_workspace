# send

`_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase`

`Dispatcher_Mercenary_Competition::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Competition` | `0x081dde20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dde20  _ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase
#           Dispatcher_Mercenary_Competition::send(CUser*, ParamBase&)
# range [0x081dde20, 0x081ddf35]
081dde20 +0x000:  push   %ebp
081dde21 +0x001:  mov    %esp,%ebp
081dde23 +0x003:  push   %esi
081dde24 +0x004:  push   %ebx
081dde25 +0x005:  sub    $0x20,%esp
081dde28 +0x008:  mov    0x10(%ebp),%eax
081dde2b +0x00b:  mov    %eax,-0xc(%ebp)
081dde2e +0x00e:  lea    -0x18(%ebp),%eax
081dde31 +0x011:  mov    %eax,(%esp)
081dde34 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dde39 +0x019:  movl   $0x1bb,0x8(%esp)
081dde41 +0x021:  movl   $0x1,0x4(%esp)
081dde49 +0x029:  lea    -0x18(%ebp),%eax
081dde4c +0x02c:  mov    %eax,(%esp)
081dde4f +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dde54 +0x034:  mov    -0xc(%ebp),%eax
081dde57 +0x037:  movzbl 0x4(%eax),%eax
081dde5b +0x03b:  test   %al,%al
081dde5d +0x03d:  je     081dde66 <+0x46>
081dde5f +0x03f:  mov    $0x1,%eax
081dde64 +0x044:  jmp    081dde6b <+0x4b>
081dde66 +0x046:  mov    $0x0,%eax
081dde6b +0x04b:  mov    %eax,0x4(%esp)
081dde6f +0x04f:  lea    -0x18(%ebp),%eax
081dde72 +0x052:  mov    %eax,(%esp)
081dde75 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dde7a +0x05a:  mov    -0xc(%ebp),%eax
081dde7d +0x05d:  movzbl 0x4(%eax),%eax
081dde81 +0x061:  test   %al,%al
081dde83 +0x063:  je     081ddece <+0xae>
081dde85 +0x065:  mov    -0xc(%ebp),%eax
081dde88 +0x068:  mov    0x8(%eax),%eax
081dde8b +0x06b:  mov    %eax,0x4(%esp)
081dde8f +0x06f:  lea    -0x18(%ebp),%eax
081dde92 +0x072:  mov    %eax,(%esp)
081dde95 +0x075:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081dde9a +0x07a:  mov    -0xc(%ebp),%eax
081dde9d +0x07d:  movzbl 0xd(%eax),%eax
081ddea1 +0x081:  movsbl %al,%eax
081ddea4 +0x084:  mov    %eax,0x4(%esp)
081ddea8 +0x088:  lea    -0x18(%ebp),%eax
081ddeab +0x08b:  mov    %eax,(%esp)
081ddeae +0x08e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ddeb3 +0x093:  mov    -0xc(%ebp),%eax
081ddeb6 +0x096:  movzbl 0xc(%eax),%eax
081ddeba +0x09a:  movsbl %al,%eax
081ddebd +0x09d:  mov    %eax,0x4(%esp)
081ddec1 +0x0a1:  lea    -0x18(%ebp),%eax
081ddec4 +0x0a4:  mov    %eax,(%esp)
081ddec7 +0x0a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ddecc +0x0ac:  jmp    081ddee1 <+0xc1>
081ddece +0x0ae:  movl   $0x15,0x4(%esp)
081dded6 +0x0b6:  lea    -0x18(%ebp),%eax
081dded9 +0x0b9:  mov    %eax,(%esp)
081ddedc +0x0bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ddee1 +0x0c1:  movl   $0x1,0x4(%esp)
081ddee9 +0x0c9:  lea    -0x18(%ebp),%eax
081ddeec +0x0cc:  mov    %eax,(%esp)
081ddeef +0x0cf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ddef4 +0x0d4:  lea    -0x18(%ebp),%eax
081ddef7 +0x0d7:  mov    %eax,0x4(%esp)
081ddefb +0x0db:  mov    0xc(%ebp),%eax
081ddefe +0x0de:  mov    %eax,(%esp)
081ddf01 +0x0e1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ddf06 +0x0e6:  jmp    081ddf23 <+0x103>
081ddf08 +0x0e8:  mov    %edx,%ebx
081ddf0a +0x0ea:  mov    %eax,%esi
081ddf0c +0x0ec:  lea    -0x18(%ebp),%eax
081ddf0f +0x0ef:  mov    %eax,(%esp)
081ddf12 +0x0f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddf17 +0x0f7:  mov    %esi,%eax
081ddf19 +0x0f9:  mov    %ebx,%edx
081ddf1b +0x0fb:  mov    %eax,(%esp)
081ddf1e +0x0fe:  call   08ae3750 <_Unwind_Resume>
081ddf23 +0x103:  lea    -0x18(%ebp),%eax
081ddf26 +0x106:  mov    %eax,(%esp)
081ddf29 +0x109:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddf2e +0x10e:  add    $0x20,%esp
081ddf31 +0x111:  pop    %ebx
081ddf32 +0x112:  pop    %esi
081ddf33 +0x113:  pop    %ebp
081ddf34 +0x114:  ret
081ddf35 +0x115:  nop
```

## 反编译 C

```c
// Dispatcher_Mercenary_Competition::send @ 0x81dde20

/* Dispatcher_Mercenary_Competition::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Mercenary_Competition::send
          (Dispatcher_Mercenary_Competition *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dde4f to 081ddf05 has its CatchHandler @ 081ddf08 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  if (local_10[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x15);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xd]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xc]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

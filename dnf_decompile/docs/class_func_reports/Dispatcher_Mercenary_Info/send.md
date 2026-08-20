# send

`_ZN25Dispatcher_Mercenary_Info4sendEP5CUserR9ParamBase`

`Dispatcher_Mercenary_Info::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Info` | `0x081ddb7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddb7c  _ZN25Dispatcher_Mercenary_Info4sendEP5CUserR9ParamBase
#           Dispatcher_Mercenary_Info::send(CUser*, ParamBase&)
# range [0x081ddb7c, 0x081ddc23]
081ddb7c +0x00:  push   %ebp
081ddb7d +0x01:  mov    %esp,%ebp
081ddb7f +0x03:  push   %esi
081ddb80 +0x04:  push   %ebx
081ddb81 +0x05:  sub    $0x20,%esp
081ddb84 +0x08:  lea    -0x14(%ebp),%eax
081ddb87 +0x0b:  mov    %eax,(%esp)
081ddb8a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ddb8f +0x13:  movl   $0x1ba,0x8(%esp)
081ddb97 +0x1b:  movl   $0x1,0x4(%esp)
081ddb9f +0x23:  lea    -0x14(%ebp),%eax
081ddba2 +0x26:  mov    %eax,(%esp)
081ddba5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ddbaa +0x2e:  movl   $0x1,0x4(%esp)
081ddbb2 +0x36:  lea    -0x14(%ebp),%eax
081ddbb5 +0x39:  mov    %eax,(%esp)
081ddbb8 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ddbbd +0x41:  lea    -0x14(%ebp),%eax
081ddbc0 +0x44:  mov    %eax,0x4(%esp)
081ddbc4 +0x48:  mov    0xc(%ebp),%eax
081ddbc7 +0x4b:  mov    %eax,(%esp)
081ddbca +0x4e:  call   0868e704 <_ZN5CUser22SetMercenaryInfoPacketER11PacketGuard>  ; CUser::SetMercenaryInfoPacket(PacketGuard&)
081ddbcf +0x53:  movl   $0x1,0x4(%esp)
081ddbd7 +0x5b:  lea    -0x14(%ebp),%eax
081ddbda +0x5e:  mov    %eax,(%esp)
081ddbdd +0x61:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ddbe2 +0x66:  lea    -0x14(%ebp),%eax
081ddbe5 +0x69:  mov    %eax,0x4(%esp)
081ddbe9 +0x6d:  mov    0xc(%ebp),%eax
081ddbec +0x70:  mov    %eax,(%esp)
081ddbef +0x73:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ddbf4 +0x78:  jmp    081ddc11 <+0x95>
081ddbf6 +0x7a:  mov    %edx,%ebx
081ddbf8 +0x7c:  mov    %eax,%esi
081ddbfa +0x7e:  lea    -0x14(%ebp),%eax
081ddbfd +0x81:  mov    %eax,(%esp)
081ddc00 +0x84:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddc05 +0x89:  mov    %esi,%eax
081ddc07 +0x8b:  mov    %ebx,%edx
081ddc09 +0x8d:  mov    %eax,(%esp)
081ddc0c +0x90:  call   08ae3750 <_Unwind_Resume>
081ddc11 +0x95:  lea    -0x14(%ebp),%eax
081ddc14 +0x98:  mov    %eax,(%esp)
081ddc17 +0x9b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ddc1c +0xa0:  add    $0x20,%esp
081ddc1f +0xa3:  pop    %ebx
081ddc20 +0xa4:  pop    %esi
081ddc21 +0xa5:  pop    %ebp
081ddc22 +0xa6:  ret
081ddc23 +0xa7:  nop
```

## 反编译 C

```c
// Dispatcher_Mercenary_Info::send @ 0x81ddb7c

/* Dispatcher_Mercenary_Info::send(CUser*, ParamBase&) */

void Dispatcher_Mercenary_Info::send(CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081ddba5 to 081ddbf3 has its CatchHandler @ 081ddbf6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x1ba);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  CUser::SetMercenaryInfoPacket((CUser *)param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

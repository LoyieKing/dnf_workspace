# send_packet

`_ZN12advancealtar16Dispatcher_Pause11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_Pause::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_Pause` | `0x08140bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140bae  _ZN12advancealtar16Dispatcher_Pause11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_Pause::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x08140bae, 0x08140c63]
08140bae +0x00:  push   %ebp
08140baf +0x01:  mov    %esp,%ebp
08140bb1 +0x03:  push   %esi
08140bb2 +0x04:  push   %ebx
08140bb3 +0x05:  sub    $0x20,%esp
08140bb6 +0x08:  mov    0x10(%ebp),%eax
08140bb9 +0x0b:  mov    %eax,-0xc(%ebp)
08140bbc +0x0e:  lea    -0x18(%ebp),%eax
08140bbf +0x11:  mov    %eax,(%esp)
08140bc2 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08140bc7 +0x19:  movl   $0x242,0x8(%esp)
08140bcf +0x21:  movl   $0x1,0x4(%esp)
08140bd7 +0x29:  lea    -0x18(%ebp),%eax
08140bda +0x2c:  mov    %eax,(%esp)
08140bdd +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08140be2 +0x34:  movl   $0x1,0x4(%esp)
08140bea +0x3c:  lea    -0x18(%ebp),%eax
08140bed +0x3f:  mov    %eax,(%esp)
08140bf0 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08140bf5 +0x47:  mov    -0xc(%ebp),%eax
08140bf8 +0x4a:  movl   $0xc,0x8(%esp)
08140c00 +0x52:  mov    %eax,0x4(%esp)
08140c04 +0x56:  lea    -0x18(%ebp),%eax
08140c07 +0x59:  mov    %eax,(%esp)
08140c0a +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08140c0f +0x61:  movl   $0x1,0x4(%esp)
08140c17 +0x69:  lea    -0x18(%ebp),%eax
08140c1a +0x6c:  mov    %eax,(%esp)
08140c1d +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08140c22 +0x74:  lea    -0x18(%ebp),%eax
08140c25 +0x77:  mov    %eax,0x4(%esp)
08140c29 +0x7b:  mov    0xc(%ebp),%eax
08140c2c +0x7e:  mov    %eax,(%esp)
08140c2f +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08140c34 +0x86:  jmp    08140c51 <+0xa3>
08140c36 +0x88:  mov    %edx,%ebx
08140c38 +0x8a:  mov    %eax,%esi
08140c3a +0x8c:  lea    -0x18(%ebp),%eax
08140c3d +0x8f:  mov    %eax,(%esp)
08140c40 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140c45 +0x97:  mov    %esi,%eax
08140c47 +0x99:  mov    %ebx,%edx
08140c49 +0x9b:  mov    %eax,(%esp)
08140c4c +0x9e:  call   08ae3750 <_Unwind_Resume>
08140c51 +0xa3:  lea    -0x18(%ebp),%eax
08140c54 +0xa6:  mov    %eax,(%esp)
08140c57 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140c5c +0xae:  add    $0x20,%esp
08140c5f +0xb1:  pop    %ebx
08140c60 +0xb2:  pop    %esi
08140c61 +0xb3:  pop    %ebp
08140c62 +0xb4:  ret
08140c63 +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_Pause::send_packet @ 0x8140bae

/* advancealtar::Dispatcher_Pause::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_Pause::send_packet
          (Dispatcher_Pause *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140bdd to 08140c33 has its CatchHandler @ 08140c36 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x242);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

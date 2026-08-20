# send_packet

`_ZN12advancealtar18Dispatcher_SetSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_SetSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SetSlot` | `0x08140148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140148  _ZN12advancealtar18Dispatcher_SetSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_SetSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x08140148, 0x081401fd]
08140148 +0x00:  push   %ebp
08140149 +0x01:  mov    %esp,%ebp
0814014b +0x03:  push   %esi
0814014c +0x04:  push   %ebx
0814014d +0x05:  sub    $0x20,%esp
08140150 +0x08:  mov    0x10(%ebp),%eax
08140153 +0x0b:  mov    %eax,-0xc(%ebp)
08140156 +0x0e:  lea    -0x18(%ebp),%eax
08140159 +0x11:  mov    %eax,(%esp)
0814015c +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08140161 +0x19:  movl   $0x23e,0x8(%esp)
08140169 +0x21:  movl   $0x1,0x4(%esp)
08140171 +0x29:  lea    -0x18(%ebp),%eax
08140174 +0x2c:  mov    %eax,(%esp)
08140177 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814017c +0x34:  movl   $0x1,0x4(%esp)
08140184 +0x3c:  lea    -0x18(%ebp),%eax
08140187 +0x3f:  mov    %eax,(%esp)
0814018a +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814018f +0x47:  mov    -0xc(%ebp),%eax
08140192 +0x4a:  movl   $0x1c,0x8(%esp)
0814019a +0x52:  mov    %eax,0x4(%esp)
0814019e +0x56:  lea    -0x18(%ebp),%eax
081401a1 +0x59:  mov    %eax,(%esp)
081401a4 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081401a9 +0x61:  movl   $0x1,0x4(%esp)
081401b1 +0x69:  lea    -0x18(%ebp),%eax
081401b4 +0x6c:  mov    %eax,(%esp)
081401b7 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081401bc +0x74:  lea    -0x18(%ebp),%eax
081401bf +0x77:  mov    %eax,0x4(%esp)
081401c3 +0x7b:  mov    0xc(%ebp),%eax
081401c6 +0x7e:  mov    %eax,(%esp)
081401c9 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081401ce +0x86:  jmp    081401eb <+0xa3>
081401d0 +0x88:  mov    %edx,%ebx
081401d2 +0x8a:  mov    %eax,%esi
081401d4 +0x8c:  lea    -0x18(%ebp),%eax
081401d7 +0x8f:  mov    %eax,(%esp)
081401da +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081401df +0x97:  mov    %esi,%eax
081401e1 +0x99:  mov    %ebx,%edx
081401e3 +0x9b:  mov    %eax,(%esp)
081401e6 +0x9e:  call   08ae3750 <_Unwind_Resume>
081401eb +0xa3:  lea    -0x18(%ebp),%eax
081401ee +0xa6:  mov    %eax,(%esp)
081401f1 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081401f6 +0xae:  add    $0x20,%esp
081401f9 +0xb1:  pop    %ebx
081401fa +0xb2:  pop    %esi
081401fb +0xb3:  pop    %ebp
081401fc +0xb4:  ret
081401fd +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_SetSlot::send_packet @ 0x8140148

/* advancealtar::Dispatcher_SetSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_SetSlot::send_packet
          (Dispatcher_SetSlot *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140177 to 081401cd has its CatchHandler @ 081401d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x1c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

# send_packet

`_ZN12advancealtar23Dispatcher_ExchangeSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_ExchangeSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ExchangeSlot` | `0x08140966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140966  _ZN12advancealtar23Dispatcher_ExchangeSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_ExchangeSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x08140966, 0x08140a1b]
08140966 +0x00:  push   %ebp
08140967 +0x01:  mov    %esp,%ebp
08140969 +0x03:  push   %esi
0814096a +0x04:  push   %ebx
0814096b +0x05:  sub    $0x20,%esp
0814096e +0x08:  mov    0x10(%ebp),%eax
08140971 +0x0b:  mov    %eax,-0xc(%ebp)
08140974 +0x0e:  lea    -0x18(%ebp),%eax
08140977 +0x11:  mov    %eax,(%esp)
0814097a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814097f +0x19:  movl   $0x241,0x8(%esp)
08140987 +0x21:  movl   $0x1,0x4(%esp)
0814098f +0x29:  lea    -0x18(%ebp),%eax
08140992 +0x2c:  mov    %eax,(%esp)
08140995 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814099a +0x34:  movl   $0x1,0x4(%esp)
081409a2 +0x3c:  lea    -0x18(%ebp),%eax
081409a5 +0x3f:  mov    %eax,(%esp)
081409a8 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081409ad +0x47:  mov    -0xc(%ebp),%eax
081409b0 +0x4a:  movl   $0x24,0x8(%esp)
081409b8 +0x52:  mov    %eax,0x4(%esp)
081409bc +0x56:  lea    -0x18(%ebp),%eax
081409bf +0x59:  mov    %eax,(%esp)
081409c2 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081409c7 +0x61:  movl   $0x1,0x4(%esp)
081409cf +0x69:  lea    -0x18(%ebp),%eax
081409d2 +0x6c:  mov    %eax,(%esp)
081409d5 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081409da +0x74:  lea    -0x18(%ebp),%eax
081409dd +0x77:  mov    %eax,0x4(%esp)
081409e1 +0x7b:  mov    0xc(%ebp),%eax
081409e4 +0x7e:  mov    %eax,(%esp)
081409e7 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081409ec +0x86:  jmp    08140a09 <+0xa3>
081409ee +0x88:  mov    %edx,%ebx
081409f0 +0x8a:  mov    %eax,%esi
081409f2 +0x8c:  lea    -0x18(%ebp),%eax
081409f5 +0x8f:  mov    %eax,(%esp)
081409f8 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081409fd +0x97:  mov    %esi,%eax
081409ff +0x99:  mov    %ebx,%edx
08140a01 +0x9b:  mov    %eax,(%esp)
08140a04 +0x9e:  call   08ae3750 <_Unwind_Resume>
08140a09 +0xa3:  lea    -0x18(%ebp),%eax
08140a0c +0xa6:  mov    %eax,(%esp)
08140a0f +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140a14 +0xae:  add    $0x20,%esp
08140a17 +0xb1:  pop    %ebx
08140a18 +0xb2:  pop    %esi
08140a19 +0xb3:  pop    %ebp
08140a1a +0xb4:  ret
08140a1b +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_ExchangeSlot::send_packet @ 0x8140966

/* advancealtar::Dispatcher_ExchangeSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_ExchangeSlot::send_packet
          (Dispatcher_ExchangeSlot *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140995 to 081409eb has its CatchHandler @ 081409ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x241);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x24);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

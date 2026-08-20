# send_packet

`_ZN12advancealtar21Dispatcher_SummonUnit11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_SummonUnit::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SummonUnit` | `0x081406b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081406b8  _ZN12advancealtar21Dispatcher_SummonUnit11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_SummonUnit::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x081406b8, 0x0814076d]
081406b8 +0x00:  push   %ebp
081406b9 +0x01:  mov    %esp,%ebp
081406bb +0x03:  push   %esi
081406bc +0x04:  push   %ebx
081406bd +0x05:  sub    $0x20,%esp
081406c0 +0x08:  mov    0x10(%ebp),%eax
081406c3 +0x0b:  mov    %eax,-0xc(%ebp)
081406c6 +0x0e:  lea    -0x18(%ebp),%eax
081406c9 +0x11:  mov    %eax,(%esp)
081406cc +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081406d1 +0x19:  movl   $0x240,0x8(%esp)
081406d9 +0x21:  movl   $0x1,0x4(%esp)
081406e1 +0x29:  lea    -0x18(%ebp),%eax
081406e4 +0x2c:  mov    %eax,(%esp)
081406e7 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081406ec +0x34:  movl   $0x1,0x4(%esp)
081406f4 +0x3c:  lea    -0x18(%ebp),%eax
081406f7 +0x3f:  mov    %eax,(%esp)
081406fa +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081406ff +0x47:  mov    -0xc(%ebp),%eax
08140702 +0x4a:  movl   $0x14,0x8(%esp)
0814070a +0x52:  mov    %eax,0x4(%esp)
0814070e +0x56:  lea    -0x18(%ebp),%eax
08140711 +0x59:  mov    %eax,(%esp)
08140714 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08140719 +0x61:  movl   $0x1,0x4(%esp)
08140721 +0x69:  lea    -0x18(%ebp),%eax
08140724 +0x6c:  mov    %eax,(%esp)
08140727 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814072c +0x74:  lea    -0x18(%ebp),%eax
0814072f +0x77:  mov    %eax,0x4(%esp)
08140733 +0x7b:  mov    0xc(%ebp),%eax
08140736 +0x7e:  mov    %eax,(%esp)
08140739 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814073e +0x86:  jmp    0814075b <+0xa3>
08140740 +0x88:  mov    %edx,%ebx
08140742 +0x8a:  mov    %eax,%esi
08140744 +0x8c:  lea    -0x18(%ebp),%eax
08140747 +0x8f:  mov    %eax,(%esp)
0814074a +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814074f +0x97:  mov    %esi,%eax
08140751 +0x99:  mov    %ebx,%edx
08140753 +0x9b:  mov    %eax,(%esp)
08140756 +0x9e:  call   08ae3750 <_Unwind_Resume>
0814075b +0xa3:  lea    -0x18(%ebp),%eax
0814075e +0xa6:  mov    %eax,(%esp)
08140761 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140766 +0xae:  add    $0x20,%esp
08140769 +0xb1:  pop    %ebx
0814076a +0xb2:  pop    %esi
0814076b +0xb3:  pop    %ebp
0814076c +0xb4:  ret
0814076d +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_SummonUnit::send_packet @ 0x81406b8

/* advancealtar::Dispatcher_SummonUnit::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_SummonUnit::send_packet
          (Dispatcher_SummonUnit *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081406e7 to 0814073d has its CatchHandler @ 08140740 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x240);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

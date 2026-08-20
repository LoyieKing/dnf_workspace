# send_packet

`_ZN12advancealtar18Dispatcher_BuyItem11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_BuyItem::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_BuyItem` | `0x0813fe82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813fe82  _ZN12advancealtar18Dispatcher_BuyItem11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_BuyItem::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x0813fe82, 0x0813ff37]
0813fe82 +0x00:  push   %ebp
0813fe83 +0x01:  mov    %esp,%ebp
0813fe85 +0x03:  push   %esi
0813fe86 +0x04:  push   %ebx
0813fe87 +0x05:  sub    $0x20,%esp
0813fe8a +0x08:  mov    0x10(%ebp),%eax
0813fe8d +0x0b:  mov    %eax,-0xc(%ebp)
0813fe90 +0x0e:  lea    -0x18(%ebp),%eax
0813fe93 +0x11:  mov    %eax,(%esp)
0813fe96 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0813fe9b +0x19:  movl   $0x23d,0x8(%esp)
0813fea3 +0x21:  movl   $0x1,0x4(%esp)
0813feab +0x29:  lea    -0x18(%ebp),%eax
0813feae +0x2c:  mov    %eax,(%esp)
0813feb1 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0813feb6 +0x34:  movl   $0x1,0x4(%esp)
0813febe +0x3c:  lea    -0x18(%ebp),%eax
0813fec1 +0x3f:  mov    %eax,(%esp)
0813fec4 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0813fec9 +0x47:  mov    -0xc(%ebp),%eax
0813fecc +0x4a:  movl   $0x1c,0x8(%esp)
0813fed4 +0x52:  mov    %eax,0x4(%esp)
0813fed8 +0x56:  lea    -0x18(%ebp),%eax
0813fedb +0x59:  mov    %eax,(%esp)
0813fede +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0813fee3 +0x61:  movl   $0x1,0x4(%esp)
0813feeb +0x69:  lea    -0x18(%ebp),%eax
0813feee +0x6c:  mov    %eax,(%esp)
0813fef1 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813fef6 +0x74:  lea    -0x18(%ebp),%eax
0813fef9 +0x77:  mov    %eax,0x4(%esp)
0813fefd +0x7b:  mov    0xc(%ebp),%eax
0813ff00 +0x7e:  mov    %eax,(%esp)
0813ff03 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0813ff08 +0x86:  jmp    0813ff25 <+0xa3>
0813ff0a +0x88:  mov    %edx,%ebx
0813ff0c +0x8a:  mov    %eax,%esi
0813ff0e +0x8c:  lea    -0x18(%ebp),%eax
0813ff11 +0x8f:  mov    %eax,(%esp)
0813ff14 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813ff19 +0x97:  mov    %esi,%eax
0813ff1b +0x99:  mov    %ebx,%edx
0813ff1d +0x9b:  mov    %eax,(%esp)
0813ff20 +0x9e:  call   08ae3750 <_Unwind_Resume>
0813ff25 +0xa3:  lea    -0x18(%ebp),%eax
0813ff28 +0xa6:  mov    %eax,(%esp)
0813ff2b +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813ff30 +0xae:  add    $0x20,%esp
0813ff33 +0xb1:  pop    %ebx
0813ff34 +0xb2:  pop    %esi
0813ff35 +0xb3:  pop    %ebp
0813ff36 +0xb4:  ret
0813ff37 +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_BuyItem::send_packet @ 0x813fe82

/* advancealtar::Dispatcher_BuyItem::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_BuyItem::send_packet
          (Dispatcher_BuyItem *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0813feb1 to 0813ff07 has its CatchHandler @ 0813ff0a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x1c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

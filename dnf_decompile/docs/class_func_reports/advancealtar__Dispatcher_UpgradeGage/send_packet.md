# send_packet

`_ZN12advancealtar22Dispatcher_UpgradeGage11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_UpgradeGage::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_UpgradeGage` | `0x081403e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081403e2  _ZN12advancealtar22Dispatcher_UpgradeGage11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_UpgradeGage::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x081403e2, 0x08140497]
081403e2 +0x00:  push   %ebp
081403e3 +0x01:  mov    %esp,%ebp
081403e5 +0x03:  push   %esi
081403e6 +0x04:  push   %ebx
081403e7 +0x05:  sub    $0x20,%esp
081403ea +0x08:  mov    0x10(%ebp),%eax
081403ed +0x0b:  mov    %eax,-0xc(%ebp)
081403f0 +0x0e:  lea    -0x18(%ebp),%eax
081403f3 +0x11:  mov    %eax,(%esp)
081403f6 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081403fb +0x19:  movl   $0x23f,0x8(%esp)
08140403 +0x21:  movl   $0x1,0x4(%esp)
0814040b +0x29:  lea    -0x18(%ebp),%eax
0814040e +0x2c:  mov    %eax,(%esp)
08140411 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08140416 +0x34:  movl   $0x1,0x4(%esp)
0814041e +0x3c:  lea    -0x18(%ebp),%eax
08140421 +0x3f:  mov    %eax,(%esp)
08140424 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08140429 +0x47:  mov    -0xc(%ebp),%eax
0814042c +0x4a:  movl   $0x14,0x8(%esp)
08140434 +0x52:  mov    %eax,0x4(%esp)
08140438 +0x56:  lea    -0x18(%ebp),%eax
0814043b +0x59:  mov    %eax,(%esp)
0814043e +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08140443 +0x61:  movl   $0x1,0x4(%esp)
0814044b +0x69:  lea    -0x18(%ebp),%eax
0814044e +0x6c:  mov    %eax,(%esp)
08140451 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08140456 +0x74:  lea    -0x18(%ebp),%eax
08140459 +0x77:  mov    %eax,0x4(%esp)
0814045d +0x7b:  mov    0xc(%ebp),%eax
08140460 +0x7e:  mov    %eax,(%esp)
08140463 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08140468 +0x86:  jmp    08140485 <+0xa3>
0814046a +0x88:  mov    %edx,%ebx
0814046c +0x8a:  mov    %eax,%esi
0814046e +0x8c:  lea    -0x18(%ebp),%eax
08140471 +0x8f:  mov    %eax,(%esp)
08140474 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140479 +0x97:  mov    %esi,%eax
0814047b +0x99:  mov    %ebx,%edx
0814047d +0x9b:  mov    %eax,(%esp)
08140480 +0x9e:  call   08ae3750 <_Unwind_Resume>
08140485 +0xa3:  lea    -0x18(%ebp),%eax
08140488 +0xa6:  mov    %eax,(%esp)
0814048b +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140490 +0xae:  add    $0x20,%esp
08140493 +0xb1:  pop    %ebx
08140494 +0xb2:  pop    %esi
08140495 +0xb3:  pop    %ebp
08140496 +0xb4:  ret
08140497 +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_UpgradeGage::send_packet @ 0x81403e2

/* advancealtar::Dispatcher_UpgradeGage::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_UpgradeGage::send_packet
          (Dispatcher_UpgradeGage *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140411 to 08140467 has its CatchHandler @ 0814046a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23f);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

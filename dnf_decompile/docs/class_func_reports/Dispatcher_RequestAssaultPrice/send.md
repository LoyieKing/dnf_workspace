# send

`_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase`

`Dispatcher_RequestAssaultPrice::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestAssaultPrice` | `0x081df294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df294  _ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase
#           Dispatcher_RequestAssaultPrice::send(CUser*, ParamBase&)
# range [0x081df294, 0x081df3c5]
081df294 +0x000:  push   %ebp
081df295 +0x001:  mov    %esp,%ebp
081df297 +0x003:  push   %esi
081df298 +0x004:  push   %ebx
081df299 +0x005:  sub    $0x20,%esp
081df29c +0x008:  mov    0x10(%ebp),%eax
081df29f +0x00b:  mov    %eax,-0xc(%ebp)
081df2a2 +0x00e:  lea    -0x18(%ebp),%eax
081df2a5 +0x011:  mov    %eax,(%esp)
081df2a8 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081df2ad +0x019:  lea    -0x18(%ebp),%eax
081df2b0 +0x01c:  mov    %eax,(%esp)
081df2b3 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081df2b8 +0x024:  movl   $0x1bf,0x8(%esp)
081df2c0 +0x02c:  movl   $0x1,0x4(%esp)
081df2c8 +0x034:  lea    -0x18(%ebp),%eax
081df2cb +0x037:  mov    %eax,(%esp)
081df2ce +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081df2d3 +0x03f:  mov    -0xc(%ebp),%eax
081df2d6 +0x042:  mov    0x4(%eax),%eax
081df2d9 +0x045:  test   %eax,%eax
081df2db +0x047:  jne    081df307 <+0x73>
081df2dd +0x049:  movl   $0x1,0x4(%esp)
081df2e5 +0x051:  lea    -0x18(%ebp),%eax
081df2e8 +0x054:  mov    %eax,(%esp)
081df2eb +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081df2f0 +0x05c:  mov    -0xc(%ebp),%eax
081df2f3 +0x05f:  mov    0x8(%eax),%eax
081df2f6 +0x062:  mov    %eax,0x4(%esp)
081df2fa +0x066:  lea    -0x18(%ebp),%eax
081df2fd +0x069:  mov    %eax,(%esp)
081df300 +0x06c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081df305 +0x071:  jmp    081df371 <+0xdd>
081df307 +0x073:  mov    -0xc(%ebp),%eax
081df30a +0x076:  mov    0x4(%eax),%eax
081df30d +0x079:  cmp    $0x7fffffff,%eax
081df312 +0x07e:  je     081df3b3 <+0x11f>
081df318 +0x084:  movl   $0x0,0x4(%esp)
081df320 +0x08c:  lea    -0x18(%ebp),%eax
081df323 +0x08f:  mov    %eax,(%esp)
081df326 +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081df32b +0x097:  mov    -0xc(%ebp),%eax
081df32e +0x09a:  mov    0x4(%eax),%eax
081df331 +0x09d:  mov    %eax,0x4(%esp)
081df335 +0x0a1:  lea    -0x18(%ebp),%eax
081df338 +0x0a4:  mov    %eax,(%esp)
081df33b +0x0a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081df340 +0x0ac:  mov    -0xc(%ebp),%eax
081df343 +0x0af:  mov    0x4(%eax),%eax
081df346 +0x0b2:  cmp    $0xa,%eax
081df349 +0x0b5:  jne    081df371 <+0xdd>
081df34b +0x0b7:  mov    -0xc(%ebp),%eax
081df34e +0x0ba:  mov    0x8(%eax),%ebx
081df351 +0x0bd:  mov    0xc(%ebp),%eax
081df354 +0x0c0:  mov    %eax,(%esp)
081df357 +0x0c3:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081df35c +0x0c8:  mov    %ebx,%edx
081df35e +0x0ca:  sub    %eax,%edx
081df360 +0x0cc:  mov    %edx,%eax
081df362 +0x0ce:  mov    %eax,0x4(%esp)
081df366 +0x0d2:  lea    -0x18(%ebp),%eax
081df369 +0x0d5:  mov    %eax,(%esp)
081df36c +0x0d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081df371 +0x0dd:  movl   $0x1,0x4(%esp)
081df379 +0x0e5:  lea    -0x18(%ebp),%eax
081df37c +0x0e8:  mov    %eax,(%esp)
081df37f +0x0eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081df384 +0x0f0:  lea    -0x18(%ebp),%eax
081df387 +0x0f3:  mov    %eax,0x4(%esp)
081df38b +0x0f7:  mov    0xc(%ebp),%eax
081df38e +0x0fa:  mov    %eax,(%esp)
081df391 +0x0fd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081df396 +0x102:  jmp    081df3b3 <+0x11f>
081df398 +0x104:  mov    %edx,%ebx
081df39a +0x106:  mov    %eax,%esi
081df39c +0x108:  lea    -0x18(%ebp),%eax
081df39f +0x10b:  mov    %eax,(%esp)
081df3a2 +0x10e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081df3a7 +0x113:  mov    %esi,%eax
081df3a9 +0x115:  mov    %ebx,%edx
081df3ab +0x117:  mov    %eax,(%esp)
081df3ae +0x11a:  call   08ae3750 <_Unwind_Resume>
081df3b3 +0x11f:  lea    -0x18(%ebp),%eax
081df3b6 +0x122:  mov    %eax,(%esp)
081df3b9 +0x125:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081df3be +0x12a:  add    $0x20,%esp
081df3c1 +0x12d:  pop    %ebx
081df3c2 +0x12e:  pop    %esi
081df3c3 +0x12f:  pop    %ebp
081df3c4 +0x130:  ret
081df3c5 +0x131:  nop
```

## 反编译 C

```c
// Dispatcher_RequestAssaultPrice::send @ 0x81df294

/* Dispatcher_RequestAssaultPrice::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestAssaultPrice::send
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081df2b3 to 081df395 has its CatchHandler @ 081df398 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bf);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  else {
    if (*(int *)(local_10 + 4) == 0x7fffffff) goto LAB_081df3b3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 10) {
      iVar1 = *(int *)(local_10 + 8);
      iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1 - iVar2);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
LAB_081df3b3:
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

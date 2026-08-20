# send

`_ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase`

`Dispatcher_PcRoomPlayTimeReward::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomPlayTimeReward` | `0x081e5020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5020  _ZN31Dispatcher_PcRoomPlayTimeReward4sendEP5CUserR9ParamBase
#           Dispatcher_PcRoomPlayTimeReward::send(CUser*, ParamBase&)
# range [0x081e5020, 0x081e512d]
081e5020 +0x000:  push   %ebp
081e5021 +0x001:  mov    %esp,%ebp
081e5023 +0x003:  push   %esi
081e5024 +0x004:  push   %ebx
081e5025 +0x005:  sub    $0x20,%esp
081e5028 +0x008:  mov    0x10(%ebp),%eax
081e502b +0x00b:  mov    %eax,-0xc(%ebp)
081e502e +0x00e:  lea    -0x18(%ebp),%eax
081e5031 +0x011:  mov    %eax,(%esp)
081e5034 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e5039 +0x019:  movl   $0x1ed,0x8(%esp)
081e5041 +0x021:  movl   $0x1,0x4(%esp)
081e5049 +0x029:  lea    -0x18(%ebp),%eax
081e504c +0x02c:  mov    %eax,(%esp)
081e504f +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e5054 +0x034:  mov    -0xc(%ebp),%eax
081e5057 +0x037:  mov    0x4(%eax),%eax
081e505a +0x03a:  test   %eax,%eax
081e505c +0x03c:  jne    081e508d <+0x6d>
081e505e +0x03e:  movl   $0x1,0x4(%esp)
081e5066 +0x046:  lea    -0x18(%ebp),%eax
081e5069 +0x049:  mov    %eax,(%esp)
081e506c +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5071 +0x051:  mov    0xc(%ebp),%eax
081e5074 +0x054:  mov    %eax,(%esp)
081e5077 +0x057:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
081e507c +0x05c:  mov    %eax,0x4(%esp)
081e5080 +0x060:  lea    -0x18(%ebp),%eax
081e5083 +0x063:  mov    %eax,(%esp)
081e5086 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e508b +0x06b:  jmp    081e50da <+0xba>
081e508d +0x06d:  movl   $0x0,0x4(%esp)
081e5095 +0x075:  lea    -0x18(%ebp),%eax
081e5098 +0x078:  mov    %eax,(%esp)
081e509b +0x07b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e50a0 +0x080:  mov    -0xc(%ebp),%eax
081e50a3 +0x083:  mov    0x4(%eax),%eax
081e50a6 +0x086:  mov    %eax,0x4(%esp)
081e50aa +0x08a:  lea    -0x18(%ebp),%eax
081e50ad +0x08d:  mov    %eax,(%esp)
081e50b0 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e50b5 +0x095:  mov    -0xc(%ebp),%eax
081e50b8 +0x098:  mov    0x4(%eax),%eax
081e50bb +0x09b:  cmp    $0x13,%eax
081e50be +0x09e:  jne    081e50da <+0xba>
081e50c0 +0x0a0:  mov    0xc(%ebp),%eax
081e50c3 +0x0a3:  mov    %eax,(%esp)
081e50c6 +0x0a6:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
081e50cb +0x0ab:  mov    %eax,0x4(%esp)
081e50cf +0x0af:  lea    -0x18(%ebp),%eax
081e50d2 +0x0b2:  mov    %eax,(%esp)
081e50d5 +0x0b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e50da +0x0ba:  movl   $0x1,0x4(%esp)
081e50e2 +0x0c2:  lea    -0x18(%ebp),%eax
081e50e5 +0x0c5:  mov    %eax,(%esp)
081e50e8 +0x0c8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e50ed +0x0cd:  lea    -0x18(%ebp),%eax
081e50f0 +0x0d0:  mov    %eax,0x4(%esp)
081e50f4 +0x0d4:  mov    0xc(%ebp),%eax
081e50f7 +0x0d7:  mov    %eax,(%esp)
081e50fa +0x0da:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e50ff +0x0df:  jmp    081e511c <+0xfc>
081e5101 +0x0e1:  mov    %edx,%ebx
081e5103 +0x0e3:  mov    %eax,%esi
081e5105 +0x0e5:  lea    -0x18(%ebp),%eax
081e5108 +0x0e8:  mov    %eax,(%esp)
081e510b +0x0eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5110 +0x0f0:  mov    %esi,%eax
081e5112 +0x0f2:  mov    %ebx,%edx
081e5114 +0x0f4:  mov    %eax,(%esp)
081e5117 +0x0f7:  call   08ae3750 <_Unwind_Resume>
081e511c +0x0fc:  lea    -0x18(%ebp),%eax
081e511f +0x0ff:  mov    %eax,(%esp)
081e5122 +0x102:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5127 +0x107:  add    $0x20,%esp
081e512a +0x10a:  pop    %ebx
081e512b +0x10b:  pop    %esi
081e512c +0x10c:  pop    %ebp
081e512d +0x10d:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomPlayTimeReward::send @ 0x81e5020

/* Dispatcher_PcRoomPlayTimeReward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PcRoomPlayTimeReward::send
          (Dispatcher_PcRoomPlayTimeReward *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e504f to 081e50fe has its CatchHandler @ 081e5101 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ed);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    iVar1 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 0x13) {
      iVar1 = CUser::getTotalPcRoomPlayTime(param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

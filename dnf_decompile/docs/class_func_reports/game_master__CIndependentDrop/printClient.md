# printClient

`_ZN11game_master16CIndependentDrop11printClientEP5CUserPKcS4_`

`game_master::CIndependentDrop::printClient(CUser*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDrop` | `0x084b14b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b14b8  _ZN11game_master16CIndependentDrop11printClientEP5CUserPKcS4_
#           game_master::CIndependentDrop::printClient(CUser*, char const*, char const*)
# range [0x084b14b8, 0x084b15c3]
084b14b8 +0x000:  push   %ebp
084b14b9 +0x001:  mov    %esp,%ebp
084b14bb +0x003:  push   %esi
084b14bc +0x004:  push   %ebx
084b14bd +0x005:  sub    $0x20,%esp
084b14c0 +0x008:  lea    -0x14(%ebp),%eax
084b14c3 +0x00b:  mov    %eax,(%esp)
084b14c6 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b14cb +0x013:  movl   $0x13e,0x8(%esp)
084b14d3 +0x01b:  movl   $0x0,0x4(%esp)
084b14db +0x023:  lea    -0x14(%ebp),%eax
084b14de +0x026:  mov    %eax,(%esp)
084b14e1 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b14e6 +0x02e:  movl   $0x1,0x4(%esp)
084b14ee +0x036:  lea    -0x14(%ebp),%eax
084b14f1 +0x039:  mov    %eax,(%esp)
084b14f4 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084b14f9 +0x041:  mov    0x10(%ebp),%eax
084b14fc +0x044:  mov    %eax,(%esp)
084b14ff +0x047:  call   0807e3b0 <_init+0xca8>
084b1504 +0x04c:  mov    %eax,0x4(%esp)
084b1508 +0x050:  lea    -0x14(%ebp),%eax
084b150b +0x053:  mov    %eax,(%esp)
084b150e +0x056:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b1513 +0x05b:  mov    0x10(%ebp),%eax
084b1516 +0x05e:  mov    %eax,(%esp)
084b1519 +0x061:  call   0807e3b0 <_init+0xca8>
084b151e +0x066:  mov    %eax,0x8(%esp)
084b1522 +0x06a:  mov    0x10(%ebp),%eax
084b1525 +0x06d:  mov    %eax,0x4(%esp)
084b1529 +0x071:  lea    -0x14(%ebp),%eax
084b152c +0x074:  mov    %eax,(%esp)
084b152f +0x077:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084b1534 +0x07c:  mov    0x14(%ebp),%eax
084b1537 +0x07f:  mov    %eax,(%esp)
084b153a +0x082:  call   0807e3b0 <_init+0xca8>
084b153f +0x087:  mov    %eax,0x4(%esp)
084b1543 +0x08b:  lea    -0x14(%ebp),%eax
084b1546 +0x08e:  mov    %eax,(%esp)
084b1549 +0x091:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b154e +0x096:  mov    0x14(%ebp),%eax
084b1551 +0x099:  mov    %eax,(%esp)
084b1554 +0x09c:  call   0807e3b0 <_init+0xca8>
084b1559 +0x0a1:  mov    %eax,0x8(%esp)
084b155d +0x0a5:  mov    0x14(%ebp),%eax
084b1560 +0x0a8:  mov    %eax,0x4(%esp)
084b1564 +0x0ac:  lea    -0x14(%ebp),%eax
084b1567 +0x0af:  mov    %eax,(%esp)
084b156a +0x0b2:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084b156f +0x0b7:  movl   $0x1,0x4(%esp)
084b1577 +0x0bf:  lea    -0x14(%ebp),%eax
084b157a +0x0c2:  mov    %eax,(%esp)
084b157d +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b1582 +0x0ca:  lea    -0x14(%ebp),%eax
084b1585 +0x0cd:  mov    %eax,0x4(%esp)
084b1589 +0x0d1:  mov    0xc(%ebp),%eax
084b158c +0x0d4:  mov    %eax,(%esp)
084b158f +0x0d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b1594 +0x0dc:  jmp    084b15b1 <+0xf9>
084b1596 +0x0de:  mov    %edx,%ebx
084b1598 +0x0e0:  mov    %eax,%esi
084b159a +0x0e2:  lea    -0x14(%ebp),%eax
084b159d +0x0e5:  mov    %eax,(%esp)
084b15a0 +0x0e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b15a5 +0x0ed:  mov    %esi,%eax
084b15a7 +0x0ef:  mov    %ebx,%edx
084b15a9 +0x0f1:  mov    %eax,(%esp)
084b15ac +0x0f4:  call   08ae3750 <_Unwind_Resume>
084b15b1 +0x0f9:  lea    -0x14(%ebp),%eax
084b15b4 +0x0fc:  mov    %eax,(%esp)
084b15b7 +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b15bc +0x104:  add    $0x20,%esp
084b15bf +0x107:  pop    %ebx
084b15c0 +0x108:  pop    %esi
084b15c1 +0x109:  pop    %ebp
084b15c2 +0x10a:  ret
084b15c3 +0x10b:  nop
```

## 反编译 C

```c
// game_master::CIndependentDrop::printClient @ 0x84b14b8

/* game_master::CIndependentDrop::printClient(CUser*, char const*, char const*) */

void __thiscall
game_master::CIndependentDrop::printClient
          (CIndependentDrop *this,CUser *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b14e1 to 084b1593 has its CatchHandler @ 084b1596 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  sVar1 = strlen(param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_2);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_3,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

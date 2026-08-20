# printClient

`_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_`

`game_master::CClearRewardTest::printClient(CUser*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `game_master::CClearRewardTest` | `0x084b3398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3398  _ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_
#           game_master::CClearRewardTest::printClient(CUser*, char const*, char const*)
# range [0x084b3398, 0x084b34a3]
084b3398 +0x000:  push   %ebp
084b3399 +0x001:  mov    %esp,%ebp
084b339b +0x003:  push   %esi
084b339c +0x004:  push   %ebx
084b339d +0x005:  sub    $0x20,%esp
084b33a0 +0x008:  lea    -0x14(%ebp),%eax
084b33a3 +0x00b:  mov    %eax,(%esp)
084b33a6 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b33ab +0x013:  movl   $0x13e,0x8(%esp)
084b33b3 +0x01b:  movl   $0x0,0x4(%esp)
084b33bb +0x023:  lea    -0x14(%ebp),%eax
084b33be +0x026:  mov    %eax,(%esp)
084b33c1 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b33c6 +0x02e:  movl   $0x1,0x4(%esp)
084b33ce +0x036:  lea    -0x14(%ebp),%eax
084b33d1 +0x039:  mov    %eax,(%esp)
084b33d4 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084b33d9 +0x041:  mov    0x10(%ebp),%eax
084b33dc +0x044:  mov    %eax,(%esp)
084b33df +0x047:  call   0807e3b0 <_init+0xca8>
084b33e4 +0x04c:  mov    %eax,0x4(%esp)
084b33e8 +0x050:  lea    -0x14(%ebp),%eax
084b33eb +0x053:  mov    %eax,(%esp)
084b33ee +0x056:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b33f3 +0x05b:  mov    0x10(%ebp),%eax
084b33f6 +0x05e:  mov    %eax,(%esp)
084b33f9 +0x061:  call   0807e3b0 <_init+0xca8>
084b33fe +0x066:  mov    %eax,0x8(%esp)
084b3402 +0x06a:  mov    0x10(%ebp),%eax
084b3405 +0x06d:  mov    %eax,0x4(%esp)
084b3409 +0x071:  lea    -0x14(%ebp),%eax
084b340c +0x074:  mov    %eax,(%esp)
084b340f +0x077:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084b3414 +0x07c:  mov    0x14(%ebp),%eax
084b3417 +0x07f:  mov    %eax,(%esp)
084b341a +0x082:  call   0807e3b0 <_init+0xca8>
084b341f +0x087:  mov    %eax,0x4(%esp)
084b3423 +0x08b:  lea    -0x14(%ebp),%eax
084b3426 +0x08e:  mov    %eax,(%esp)
084b3429 +0x091:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b342e +0x096:  mov    0x14(%ebp),%eax
084b3431 +0x099:  mov    %eax,(%esp)
084b3434 +0x09c:  call   0807e3b0 <_init+0xca8>
084b3439 +0x0a1:  mov    %eax,0x8(%esp)
084b343d +0x0a5:  mov    0x14(%ebp),%eax
084b3440 +0x0a8:  mov    %eax,0x4(%esp)
084b3444 +0x0ac:  lea    -0x14(%ebp),%eax
084b3447 +0x0af:  mov    %eax,(%esp)
084b344a +0x0b2:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084b344f +0x0b7:  movl   $0x1,0x4(%esp)
084b3457 +0x0bf:  lea    -0x14(%ebp),%eax
084b345a +0x0c2:  mov    %eax,(%esp)
084b345d +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b3462 +0x0ca:  lea    -0x14(%ebp),%eax
084b3465 +0x0cd:  mov    %eax,0x4(%esp)
084b3469 +0x0d1:  mov    0xc(%ebp),%eax
084b346c +0x0d4:  mov    %eax,(%esp)
084b346f +0x0d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b3474 +0x0dc:  jmp    084b3491 <+0xf9>
084b3476 +0x0de:  mov    %edx,%ebx
084b3478 +0x0e0:  mov    %eax,%esi
084b347a +0x0e2:  lea    -0x14(%ebp),%eax
084b347d +0x0e5:  mov    %eax,(%esp)
084b3480 +0x0e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b3485 +0x0ed:  mov    %esi,%eax
084b3487 +0x0ef:  mov    %ebx,%edx
084b3489 +0x0f1:  mov    %eax,(%esp)
084b348c +0x0f4:  call   08ae3750 <_Unwind_Resume>
084b3491 +0x0f9:  lea    -0x14(%ebp),%eax
084b3494 +0x0fc:  mov    %eax,(%esp)
084b3497 +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b349c +0x104:  add    $0x20,%esp
084b349f +0x107:  pop    %ebx
084b34a0 +0x108:  pop    %esi
084b34a1 +0x109:  pop    %ebp
084b34a2 +0x10a:  ret
084b34a3 +0x10b:  nop
```

## 反编译 C

```c
// game_master::CClearRewardTest::printClient @ 0x84b3398

/* game_master::CClearRewardTest::printClient(CUser*, char const*, char const*) */

void __thiscall
game_master::CClearRewardTest::printClient
          (CClearRewardTest *this,CUser *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b33c1 to 084b3473 has its CatchHandler @ 084b3476 */
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

# send_noti_time

`_ZN28TimerGeneratePowerUpNotiTime14send_noti_timeEi`

`TimerGeneratePowerUpNotiTime::send_noti_time(int)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUpNotiTime` | `0x086384c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086384c2  _ZN28TimerGeneratePowerUpNotiTime14send_noti_timeEi
#           TimerGeneratePowerUpNotiTime::send_noti_time(int)
# range [0x086384c2, 0x0863855f]
086384c2 +0x00:  push   %ebp
086384c3 +0x01:  mov    %esp,%ebp
086384c5 +0x03:  push   %esi
086384c6 +0x04:  push   %ebx
086384c7 +0x05:  sub    $0x20,%esp
086384ca +0x08:  lea    -0x14(%ebp),%eax
086384cd +0x0b:  mov    %eax,(%esp)
086384d0 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086384d5 +0x13:  movl   $0xdc,0x8(%esp)
086384dd +0x1b:  movl   $0x0,0x4(%esp)
086384e5 +0x23:  lea    -0x14(%ebp),%eax
086384e8 +0x26:  mov    %eax,(%esp)
086384eb +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086384f0 +0x2e:  mov    0xc(%ebp),%eax
086384f3 +0x31:  mov    %eax,0x4(%esp)
086384f7 +0x35:  lea    -0x14(%ebp),%eax
086384fa +0x38:  mov    %eax,(%esp)
086384fd +0x3b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08638502 +0x40:  movl   $0x1,0x4(%esp)
0863850a +0x48:  lea    -0x14(%ebp),%eax
0863850d +0x4b:  mov    %eax,(%esp)
08638510 +0x4e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08638515 +0x53:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863851a +0x58:  lea    -0x14(%ebp),%edx
0863851d +0x5b:  mov    %edx,0x8(%esp)
08638521 +0x5f:  movl   $0x7,0x4(%esp)
08638529 +0x67:  mov    %eax,(%esp)
0863852c +0x6a:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
08638531 +0x6f:  jmp    0863854e <+0x8c>
08638533 +0x71:  mov    %edx,%ebx
08638535 +0x73:  mov    %eax,%esi
08638537 +0x75:  lea    -0x14(%ebp),%eax
0863853a +0x78:  mov    %eax,(%esp)
0863853d +0x7b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638542 +0x80:  mov    %esi,%eax
08638544 +0x82:  mov    %ebx,%edx
08638546 +0x84:  mov    %eax,(%esp)
08638549 +0x87:  call   08ae3750 <_Unwind_Resume>
0863854e +0x8c:  lea    -0x14(%ebp),%eax
08638551 +0x8f:  mov    %eax,(%esp)
08638554 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638559 +0x97:  add    $0x20,%esp
0863855c +0x9a:  pop    %ebx
0863855d +0x9b:  pop    %esi
0863855e +0x9c:  pop    %ebp
0863855f +0x9d:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUpNotiTime::send_noti_time @ 0x86384c2

/* TimerGeneratePowerUpNotiTime::send_noti_time(int) */

void __thiscall
TimerGeneratePowerUpNotiTime::send_noti_time(TimerGeneratePowerUpNotiTime *this,int param_1)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086384eb to 08638530 has its CatchHandler @ 08638533 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xdc);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

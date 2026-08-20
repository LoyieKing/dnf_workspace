# SendWalkOut

`_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE`

`PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd3f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd3f8  _ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE
#           PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE)
# range [0x085dd3f8, 0x085dd4a3]
085dd3f8 +0x00:  push   %ebp
085dd3f9 +0x01:  mov    %esp,%ebp
085dd3fb +0x03:  push   %esi
085dd3fc +0x04:  push   %ebx
085dd3fd +0x05:  sub    $0x20,%esp
085dd400 +0x08:  lea    -0x14(%ebp),%eax
085dd403 +0x0b:  mov    %eax,(%esp)
085dd406 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dd40b +0x13:  movl   $0xa,0x8(%esp)
085dd413 +0x1b:  movl   $0x0,0x4(%esp)
085dd41b +0x23:  lea    -0x14(%ebp),%eax
085dd41e +0x26:  mov    %eax,(%esp)
085dd421 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dd426 +0x2e:  mov    0xc(%ebp),%eax
085dd429 +0x31:  mov    %eax,0x4(%esp)
085dd42d +0x35:  lea    -0x14(%ebp),%eax
085dd430 +0x38:  mov    %eax,(%esp)
085dd433 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd438 +0x40:  mov    0x10(%ebp),%eax
085dd43b +0x43:  mov    %eax,0x4(%esp)
085dd43f +0x47:  lea    -0x14(%ebp),%eax
085dd442 +0x4a:  mov    %eax,(%esp)
085dd445 +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd44a +0x52:  movl   $0x1,0x4(%esp)
085dd452 +0x5a:  lea    -0x14(%ebp),%eax
085dd455 +0x5d:  mov    %eax,(%esp)
085dd458 +0x60:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dd45d +0x65:  lea    -0x14(%ebp),%eax
085dd460 +0x68:  mov    %eax,0x4(%esp)
085dd464 +0x6c:  mov    0x8(%ebp),%eax
085dd467 +0x6f:  mov    %eax,(%esp)
085dd46a +0x72:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085dd46f +0x77:  mov    $0x1,%ebx
085dd474 +0x7c:  lea    -0x14(%ebp),%eax
085dd477 +0x7f:  mov    %eax,(%esp)
085dd47a +0x82:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd47f +0x87:  mov    %ebx,%eax
085dd481 +0x89:  add    $0x20,%esp
085dd484 +0x8c:  pop    %ebx
085dd485 +0x8d:  pop    %esi
085dd486 +0x8e:  pop    %ebp
085dd487 +0x8f:  ret
085dd488 +0x90:  mov    %edx,%ebx
085dd48a +0x92:  mov    %eax,%esi
085dd48c +0x94:  lea    -0x14(%ebp),%eax
085dd48f +0x97:  mov    %eax,(%esp)
085dd492 +0x9a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd497 +0x9f:  mov    %esi,%eax
085dd499 +0xa1:  mov    %ebx,%edx
085dd49b +0xa3:  mov    %eax,(%esp)
085dd49e +0xa6:  call   08ae3750 <_Unwind_Resume>
085dd4a3 +0xab:  nop
```

## 反编译 C

```c
// PvP_Room::SendWalkOut @ 0x85dd3f8

/* PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall PvP_Room::SendWalkOut(PvP_Room *this,int param_1,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd421 to 085dd46e has its CatchHandler @ 085dd488 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  send_to_pvp(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}
```

# sendList

`_ZN12CAchievement8sendListEv`

`CAchievement::sendList()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c4de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c4de  _ZN12CAchievement8sendListEv
#           CAchievement::sendList()
# range [0x0828c4de, 0x0828c675]
0828c4de +0x000:  push   %ebp
0828c4df +0x001:  mov    %esp,%ebp
0828c4e1 +0x003:  push   %esi
0828c4e2 +0x004:  push   %ebx
0828c4e3 +0x005:  sub    $0x1830,%esp
0828c4e9 +0x00b:  lea    -0x1820(%ebp),%eax
0828c4ef +0x011:  mov    %eax,(%esp)
0828c4f2 +0x014:  call   0828d8d8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x85>  ; global constructors keyed to CAchievement::CAchievement()+0x85
0828c4f7 +0x019:  mov    0x8(%ebp),%eax
0828c4fa +0x01c:  mov    (%eax),%eax
0828c4fc +0x01e:  add    $0x8,%eax
0828c4ff +0x021:  mov    (%eax),%edx
0828c501 +0x023:  lea    -0x1820(%ebp),%eax
0828c507 +0x029:  mov    %eax,0x4(%esp)
0828c50b +0x02d:  mov    0x8(%ebp),%eax
0828c50e +0x030:  mov    %eax,(%esp)
0828c511 +0x033:  call   *%edx
0828c513 +0x035:  lea    -0x18(%ebp),%eax
0828c516 +0x038:  mov    %eax,(%esp)
0828c519 +0x03b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828c51e +0x040:  movl   $0x166,0x8(%esp)
0828c526 +0x048:  movl   $0x0,0x4(%esp)
0828c52e +0x050:  lea    -0x18(%ebp),%eax
0828c531 +0x053:  mov    %eax,(%esp)
0828c534 +0x056:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828c539 +0x05b:  mov    -0x20(%ebp),%eax
0828c53c +0x05e:  mov    %eax,0x4(%esp)
0828c540 +0x062:  lea    -0x18(%ebp),%eax
0828c543 +0x065:  mov    %eax,(%esp)
0828c546 +0x068:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c54b +0x06d:  movl   $0x0,-0xc(%ebp)
0828c552 +0x074:  jmp    0828c60a <+0x12c>
0828c557 +0x079:  mov    -0xc(%ebp),%edx
0828c55a +0x07c:  mov    %edx,%eax
0828c55c +0x07e:  add    %eax,%eax
0828c55e +0x080:  add    %edx,%eax
0828c560 +0x082:  shl    $0x2,%eax
0828c563 +0x085:  lea    -0x8(%ebp),%edx
0828c566 +0x088:  lea    (%edx,%eax,1),%eax
0828c569 +0x08b:  sub    $0x1818,%eax
0828c56e +0x090:  mov    (%eax),%eax
0828c570 +0x092:  mov    %eax,0x4(%esp)
0828c574 +0x096:  lea    -0x18(%ebp),%eax
0828c577 +0x099:  mov    %eax,(%esp)
0828c57a +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c57f +0x0a1:  mov    -0xc(%ebp),%edx
0828c582 +0x0a4:  mov    %edx,%eax
0828c584 +0x0a6:  add    %eax,%eax
0828c586 +0x0a8:  add    %edx,%eax
0828c588 +0x0aa:  shl    $0x2,%eax
0828c58b +0x0ad:  lea    -0x8(%ebp),%edx
0828c58e +0x0b0:  lea    (%edx,%eax,1),%eax
0828c591 +0x0b3:  sub    $0x1818,%eax
0828c596 +0x0b8:  movzwl 0x4(%eax),%eax
0828c59a +0x0bc:  movzwl %ax,%eax
0828c59d +0x0bf:  mov    %eax,0x4(%esp)
0828c5a1 +0x0c3:  lea    -0x18(%ebp),%eax
0828c5a4 +0x0c6:  mov    %eax,(%esp)
0828c5a7 +0x0c9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c5ac +0x0ce:  mov    -0xc(%ebp),%edx
0828c5af +0x0d1:  mov    %edx,%eax
0828c5b1 +0x0d3:  add    %eax,%eax
0828c5b3 +0x0d5:  add    %edx,%eax
0828c5b5 +0x0d7:  shl    $0x2,%eax
0828c5b8 +0x0da:  lea    -0x8(%ebp),%edx
0828c5bb +0x0dd:  lea    (%edx,%eax,1),%eax
0828c5be +0x0e0:  sub    $0x1818,%eax
0828c5c3 +0x0e5:  movzwl 0x6(%eax),%eax
0828c5c7 +0x0e9:  movzwl %ax,%eax
0828c5ca +0x0ec:  mov    %eax,0x4(%esp)
0828c5ce +0x0f0:  lea    -0x18(%ebp),%eax
0828c5d1 +0x0f3:  mov    %eax,(%esp)
0828c5d4 +0x0f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c5d9 +0x0fb:  mov    -0xc(%ebp),%edx
0828c5dc +0x0fe:  mov    %edx,%eax
0828c5de +0x100:  add    %eax,%eax
0828c5e0 +0x102:  add    %edx,%eax
0828c5e2 +0x104:  shl    $0x2,%eax
0828c5e5 +0x107:  lea    -0x8(%ebp),%edx
0828c5e8 +0x10a:  lea    (%edx,%eax,1),%eax
0828c5eb +0x10d:  sub    $0x1818,%eax
0828c5f0 +0x112:  movzwl 0x8(%eax),%eax
0828c5f4 +0x116:  movzwl %ax,%eax
0828c5f7 +0x119:  mov    %eax,0x4(%esp)
0828c5fb +0x11d:  lea    -0x18(%ebp),%eax
0828c5fe +0x120:  mov    %eax,(%esp)
0828c601 +0x123:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c606 +0x128:  addl   $0x1,-0xc(%ebp)
0828c60a +0x12c:  mov    -0x20(%ebp),%eax
0828c60d +0x12f:  cmp    -0xc(%ebp),%eax
0828c610 +0x132:  setg   %al
0828c613 +0x135:  test   %al,%al
0828c615 +0x137:  jne    0828c557 <+0x79>
0828c61b +0x13d:  movl   $0x1,0x4(%esp)
0828c623 +0x145:  lea    -0x18(%ebp),%eax
0828c626 +0x148:  mov    %eax,(%esp)
0828c629 +0x14b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828c62e +0x150:  mov    0x8(%ebp),%eax
0828c631 +0x153:  mov    0x8(%eax),%eax
0828c634 +0x156:  lea    -0x18(%ebp),%edx
0828c637 +0x159:  mov    %edx,0x4(%esp)
0828c63b +0x15d:  mov    %eax,(%esp)
0828c63e +0x160:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828c643 +0x165:  jmp    0828c660 <+0x182>
0828c645 +0x167:  mov    %edx,%ebx
0828c647 +0x169:  mov    %eax,%esi
0828c649 +0x16b:  lea    -0x18(%ebp),%eax
0828c64c +0x16e:  mov    %eax,(%esp)
0828c64f +0x171:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c654 +0x176:  mov    %esi,%eax
0828c656 +0x178:  mov    %ebx,%edx
0828c658 +0x17a:  mov    %eax,(%esp)
0828c65b +0x17d:  call   08ae3750 <_Unwind_Resume>
0828c660 +0x182:  lea    -0x18(%ebp),%eax
0828c663 +0x185:  mov    %eax,(%esp)
0828c666 +0x188:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c66b +0x18d:  add    $0x1830,%esp
0828c671 +0x193:  pop    %ebx
0828c672 +0x194:  pop    %esi
0828c673 +0x195:  pop    %ebp
0828c674 +0x196:  ret
0828c675 +0x197:  nop
```

## 反编译 C

```c
// CAchievement::sendList @ 0x828c4de

/* CAchievement::sendList() */

void __thiscall CAchievement::sendList(CAchievement *this)

{
  stAchievement_DBData local_1824 [4];
  ushort auStack_1820 [3070];
  int local_24;
  PacketGuard local_1c [12];
  int local_10;
  
  stAchievement_DBData::stAchievement_DBData(local_1824);
  (**(code **)(*(int *)this + 8))(this,local_1824);
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0828c534 to 0828c642 has its CatchHandler @ 0828c645 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x166);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_24);
  for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_1c,*(int *)(local_1824 + local_10 * 0xc));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6]);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6 + 1]);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6 + 2]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(*(CUser **)(this + 8),local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

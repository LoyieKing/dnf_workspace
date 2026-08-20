# _sendSetTrigger

`_ZN12CAchievement15_sendSetTriggerEjh`

`CAchievement::_sendSetTrigger(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c252  _ZN12CAchievement15_sendSetTriggerEjh
#           CAchievement::_sendSetTrigger(unsigned int, unsigned char)
# range [0x0828c252, 0x0828c3a3]
0828c252 +0x000:  push   %ebp
0828c253 +0x001:  mov    %esp,%ebp
0828c255 +0x003:  push   %esi
0828c256 +0x004:  push   %ebx
0828c257 +0x005:  sub    $0x40,%esp
0828c25a +0x008:  mov    0x10(%ebp),%eax
0828c25d +0x00b:  mov    %al,-0x2c(%ebp)
0828c260 +0x00e:  lea    -0x14(%ebp),%eax
0828c263 +0x011:  mov    0xc(%ebp),%edx
0828c266 +0x014:  mov    %edx,0x8(%esp)
0828c26a +0x018:  mov    0x8(%ebp),%edx
0828c26d +0x01b:  mov    %edx,0x4(%esp)
0828c271 +0x01f:  mov    %eax,(%esp)
0828c274 +0x022:  call   0828bb14 <_ZN12CAchievement11_getTriggerEj>  ; CAchievement::_getTrigger(unsigned int)
0828c279 +0x027:  sub    $0x4,%esp
0828c27c +0x02a:  lea    -0x20(%ebp),%eax
0828c27f +0x02d:  mov    %eax,(%esp)
0828c282 +0x030:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828c287 +0x035:  movl   $0x1a1,0x8(%esp)
0828c28f +0x03d:  movl   $0x1,0x4(%esp)
0828c297 +0x045:  lea    -0x20(%ebp),%eax
0828c29a +0x048:  mov    %eax,(%esp)
0828c29d +0x04b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828c2a2 +0x050:  cmpb   $0x0,-0x2c(%ebp)
0828c2a6 +0x054:  je     0828c2e2 <+0x90>
0828c2a8 +0x056:  movl   $0x0,0x4(%esp)
0828c2b0 +0x05e:  lea    -0x20(%ebp),%eax
0828c2b3 +0x061:  mov    %eax,(%esp)
0828c2b6 +0x064:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828c2bb +0x069:  movzbl -0x2c(%ebp),%eax
0828c2bf +0x06d:  mov    %eax,0x4(%esp)
0828c2c3 +0x071:  lea    -0x20(%ebp),%eax
0828c2c6 +0x074:  mov    %eax,(%esp)
0828c2c9 +0x077:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828c2ce +0x07c:  mov    -0x14(%ebp),%eax
0828c2d1 +0x07f:  mov    %eax,0x4(%esp)
0828c2d5 +0x083:  lea    -0x20(%ebp),%eax
0828c2d8 +0x086:  mov    %eax,(%esp)
0828c2db +0x089:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c2e0 +0x08e:  jmp    0828c349 <+0xf7>
0828c2e2 +0x090:  movl   $0x1,0x4(%esp)
0828c2ea +0x098:  lea    -0x20(%ebp),%eax
0828c2ed +0x09b:  mov    %eax,(%esp)
0828c2f0 +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828c2f5 +0x0a3:  mov    -0x14(%ebp),%eax
0828c2f8 +0x0a6:  mov    %eax,0x4(%esp)
0828c2fc +0x0aa:  lea    -0x20(%ebp),%eax
0828c2ff +0x0ad:  mov    %eax,(%esp)
0828c302 +0x0b0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c307 +0x0b5:  movzwl -0x10(%ebp),%eax
0828c30b +0x0b9:  movzwl %ax,%eax
0828c30e +0x0bc:  mov    %eax,0x4(%esp)
0828c312 +0x0c0:  lea    -0x20(%ebp),%eax
0828c315 +0x0c3:  mov    %eax,(%esp)
0828c318 +0x0c6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c31d +0x0cb:  movzwl -0xe(%ebp),%eax
0828c321 +0x0cf:  movzwl %ax,%eax
0828c324 +0x0d2:  mov    %eax,0x4(%esp)
0828c328 +0x0d6:  lea    -0x20(%ebp),%eax
0828c32b +0x0d9:  mov    %eax,(%esp)
0828c32e +0x0dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c333 +0x0e1:  movzwl -0xc(%ebp),%eax
0828c337 +0x0e5:  movzwl %ax,%eax
0828c33a +0x0e8:  mov    %eax,0x4(%esp)
0828c33e +0x0ec:  lea    -0x20(%ebp),%eax
0828c341 +0x0ef:  mov    %eax,(%esp)
0828c344 +0x0f2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c349 +0x0f7:  movl   $0x1,0x4(%esp)
0828c351 +0x0ff:  lea    -0x20(%ebp),%eax
0828c354 +0x102:  mov    %eax,(%esp)
0828c357 +0x105:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828c35c +0x10a:  mov    0x8(%ebp),%eax
0828c35f +0x10d:  mov    0x8(%eax),%eax
0828c362 +0x110:  lea    -0x20(%ebp),%edx
0828c365 +0x113:  mov    %edx,0x4(%esp)
0828c369 +0x117:  mov    %eax,(%esp)
0828c36c +0x11a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828c371 +0x11f:  jmp    0828c38e <+0x13c>
0828c373 +0x121:  mov    %edx,%ebx
0828c375 +0x123:  mov    %eax,%esi
0828c377 +0x125:  lea    -0x20(%ebp),%eax
0828c37a +0x128:  mov    %eax,(%esp)
0828c37d +0x12b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c382 +0x130:  mov    %esi,%eax
0828c384 +0x132:  mov    %ebx,%edx
0828c386 +0x134:  mov    %eax,(%esp)
0828c389 +0x137:  call   08ae3750 <_Unwind_Resume>
0828c38e +0x13c:  lea    -0x20(%ebp),%eax
0828c391 +0x13f:  mov    %eax,(%esp)
0828c394 +0x142:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c399 +0x147:  lea    -0x8(%ebp),%esp
0828c39c +0x14a:  add    $0x0,%esp
0828c39f +0x14d:  pop    %ebx
0828c3a0 +0x14e:  pop    %esi
0828c3a1 +0x14f:  pop    %ebp
0828c3a2 +0x150:  ret
0828c3a3 +0x151:  nop
```

## 反编译 C

```c
// CAchievement::_sendSetTrigger @ 0x828c252

/* CAchievement::_sendSetTrigger(unsigned int, unsigned char) */

void __thiscall CAchievement::_sendSetTrigger(CAchievement *this,uint param_1,uchar param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  
  _getTrigger((uint)&local_18);
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0828c29d to 0828c370 has its CatchHandler @ 0828c373 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1a1);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_12);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_10);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(*(CUser **)(this + 8),local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```

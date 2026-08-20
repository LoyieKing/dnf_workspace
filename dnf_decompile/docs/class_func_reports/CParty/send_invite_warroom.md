# send_invite_warroom

`_ZN6CParty19send_invite_warroomEi`

`CParty::send_invite_warroom(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d388  _ZN6CParty19send_invite_warroomEi
#           CParty::send_invite_warroom(int)
# range [0x0859d388, 0x0859d4b7]
0859d388 +0x000:  push   %ebp
0859d389 +0x001:  mov    %esp,%ebp
0859d38b +0x003:  push   %esi
0859d38c +0x004:  push   %ebx
0859d38d +0x005:  sub    $0x20,%esp
0859d390 +0x008:  lea    -0x18(%ebp),%eax
0859d393 +0x00b:  mov    %eax,(%esp)
0859d396 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859d39b +0x013:  movl   $0x0,-0xc(%ebp)
0859d3a2 +0x01a:  jmp    0859d47a <+0xf2>
0859d3a7 +0x01f:  mov    -0xc(%ebp),%eax
0859d3aa +0x022:  mov    %eax,0x4(%esp)
0859d3ae +0x026:  mov    0x8(%ebp),%eax
0859d3b1 +0x029:  mov    %eax,(%esp)
0859d3b4 +0x02c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d3b9 +0x031:  test   %al,%al
0859d3bb +0x033:  je     0859d476 <+0xee>
0859d3c1 +0x039:  lea    -0x18(%ebp),%eax
0859d3c4 +0x03c:  mov    %eax,(%esp)
0859d3c7 +0x03f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0859d3cc +0x044:  movl   $0x7,0x8(%esp)
0859d3d4 +0x04c:  movl   $0x0,0x4(%esp)
0859d3dc +0x054:  lea    -0x18(%ebp),%eax
0859d3df +0x057:  mov    %eax,(%esp)
0859d3e2 +0x05a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859d3e7 +0x05f:  mov    0xc(%ebp),%eax
0859d3ea +0x062:  mov    %eax,0x4(%esp)
0859d3ee +0x066:  lea    -0x18(%ebp),%eax
0859d3f1 +0x069:  mov    %eax,(%esp)
0859d3f4 +0x06c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859d3f9 +0x071:  movl   $0x3,0x4(%esp)
0859d401 +0x079:  lea    -0x18(%ebp),%eax
0859d404 +0x07c:  mov    %eax,(%esp)
0859d407 +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d40c +0x084:  mov    -0xc(%ebp),%edx
0859d40f +0x087:  mov    0x8(%ebp),%ecx
0859d412 +0x08a:  mov    %edx,%eax
0859d414 +0x08c:  add    %eax,%eax
0859d416 +0x08e:  add    %edx,%eax
0859d418 +0x090:  shl    $0x3,%eax
0859d41b +0x093:  lea    (%ecx,%eax,1),%eax
0859d41e +0x096:  add    $0x78,%eax
0859d421 +0x099:  mov    (%eax),%eax
0859d423 +0x09b:  mov    %eax,(%esp)
0859d426 +0x09e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859d42b +0x0a3:  movzwl %ax,%eax
0859d42e +0x0a6:  mov    %eax,0x4(%esp)
0859d432 +0x0aa:  lea    -0x18(%ebp),%eax
0859d435 +0x0ad:  mov    %eax,(%esp)
0859d438 +0x0b0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859d43d +0x0b5:  movl   $0x1,0x4(%esp)
0859d445 +0x0bd:  lea    -0x18(%ebp),%eax
0859d448 +0x0c0:  mov    %eax,(%esp)
0859d44b +0x0c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859d450 +0x0c8:  mov    -0xc(%ebp),%edx
0859d453 +0x0cb:  mov    0x8(%ebp),%ecx
0859d456 +0x0ce:  mov    %edx,%eax
0859d458 +0x0d0:  add    %eax,%eax
0859d45a +0x0d2:  add    %edx,%eax
0859d45c +0x0d4:  shl    $0x3,%eax
0859d45f +0x0d7:  lea    (%ecx,%eax,1),%eax
0859d462 +0x0da:  add    $0x78,%eax
0859d465 +0x0dd:  mov    (%eax),%eax
0859d467 +0x0df:  lea    -0x18(%ebp),%edx
0859d46a +0x0e2:  mov    %edx,0x4(%esp)
0859d46e +0x0e6:  mov    %eax,(%esp)
0859d471 +0x0e9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859d476 +0x0ee:  addl   $0x1,-0xc(%ebp)
0859d47a +0x0f2:  cmpl   $0x3,-0xc(%ebp)
0859d47e +0x0f6:  setle  %al
0859d481 +0x0f9:  test   %al,%al
0859d483 +0x0fb:  jne    0859d3a7 <+0x1f>
0859d489 +0x101:  jmp    0859d4a6 <+0x11e>
0859d48b +0x103:  mov    %edx,%ebx
0859d48d +0x105:  mov    %eax,%esi
0859d48f +0x107:  lea    -0x18(%ebp),%eax
0859d492 +0x10a:  mov    %eax,(%esp)
0859d495 +0x10d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d49a +0x112:  mov    %esi,%eax
0859d49c +0x114:  mov    %ebx,%edx
0859d49e +0x116:  mov    %eax,(%esp)
0859d4a1 +0x119:  call   08ae3750 <_Unwind_Resume>
0859d4a6 +0x11e:  lea    -0x18(%ebp),%eax
0859d4a9 +0x121:  mov    %eax,(%esp)
0859d4ac +0x124:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d4b1 +0x129:  add    $0x20,%esp
0859d4b4 +0x12c:  pop    %ebx
0859d4b5 +0x12d:  pop    %esi
0859d4b6 +0x12e:  pop    %ebp
0859d4b7 +0x12f:  ret
```

## 反编译 C

```c
// CParty::send_invite_warroom @ 0x859d388

/* CParty::send_invite_warroom(int) */

void __thiscall CParty::send_invite_warroom(CParty *this,int param_1)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                    /* try { // try from 0859d3b4 to 0859d475 has its CatchHandler @ 0859d48b */
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,7);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,3);
      uVar2 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(*(CUser **)(this + local_10 * 0x18 + 0x78),local_1c);
    }
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

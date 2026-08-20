# send_invite_bluemarble

`_ZN6CParty22send_invite_bluemarbleEi`

`CParty::send_invite_bluemarble(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d4b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d4b8  _ZN6CParty22send_invite_bluemarbleEi
#           CParty::send_invite_bluemarble(int)
# range [0x0859d4b8, 0x0859d5e7]
0859d4b8 +0x000:  push   %ebp
0859d4b9 +0x001:  mov    %esp,%ebp
0859d4bb +0x003:  push   %esi
0859d4bc +0x004:  push   %ebx
0859d4bd +0x005:  sub    $0x20,%esp
0859d4c0 +0x008:  lea    -0x18(%ebp),%eax
0859d4c3 +0x00b:  mov    %eax,(%esp)
0859d4c6 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859d4cb +0x013:  movl   $0x0,-0xc(%ebp)
0859d4d2 +0x01a:  jmp    0859d5aa <+0xf2>
0859d4d7 +0x01f:  mov    -0xc(%ebp),%eax
0859d4da +0x022:  mov    %eax,0x4(%esp)
0859d4de +0x026:  mov    0x8(%ebp),%eax
0859d4e1 +0x029:  mov    %eax,(%esp)
0859d4e4 +0x02c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d4e9 +0x031:  test   %al,%al
0859d4eb +0x033:  je     0859d5a6 <+0xee>
0859d4f1 +0x039:  lea    -0x18(%ebp),%eax
0859d4f4 +0x03c:  mov    %eax,(%esp)
0859d4f7 +0x03f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0859d4fc +0x044:  movl   $0x7,0x8(%esp)
0859d504 +0x04c:  movl   $0x0,0x4(%esp)
0859d50c +0x054:  lea    -0x18(%ebp),%eax
0859d50f +0x057:  mov    %eax,(%esp)
0859d512 +0x05a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859d517 +0x05f:  mov    0xc(%ebp),%eax
0859d51a +0x062:  mov    %eax,0x4(%esp)
0859d51e +0x066:  lea    -0x18(%ebp),%eax
0859d521 +0x069:  mov    %eax,(%esp)
0859d524 +0x06c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859d529 +0x071:  movl   $0x9,0x4(%esp)
0859d531 +0x079:  lea    -0x18(%ebp),%eax
0859d534 +0x07c:  mov    %eax,(%esp)
0859d537 +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d53c +0x084:  mov    -0xc(%ebp),%edx
0859d53f +0x087:  mov    0x8(%ebp),%ecx
0859d542 +0x08a:  mov    %edx,%eax
0859d544 +0x08c:  add    %eax,%eax
0859d546 +0x08e:  add    %edx,%eax
0859d548 +0x090:  shl    $0x3,%eax
0859d54b +0x093:  lea    (%ecx,%eax,1),%eax
0859d54e +0x096:  add    $0x78,%eax
0859d551 +0x099:  mov    (%eax),%eax
0859d553 +0x09b:  mov    %eax,(%esp)
0859d556 +0x09e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859d55b +0x0a3:  movzwl %ax,%eax
0859d55e +0x0a6:  mov    %eax,0x4(%esp)
0859d562 +0x0aa:  lea    -0x18(%ebp),%eax
0859d565 +0x0ad:  mov    %eax,(%esp)
0859d568 +0x0b0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859d56d +0x0b5:  movl   $0x1,0x4(%esp)
0859d575 +0x0bd:  lea    -0x18(%ebp),%eax
0859d578 +0x0c0:  mov    %eax,(%esp)
0859d57b +0x0c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859d580 +0x0c8:  mov    -0xc(%ebp),%edx
0859d583 +0x0cb:  mov    0x8(%ebp),%ecx
0859d586 +0x0ce:  mov    %edx,%eax
0859d588 +0x0d0:  add    %eax,%eax
0859d58a +0x0d2:  add    %edx,%eax
0859d58c +0x0d4:  shl    $0x3,%eax
0859d58f +0x0d7:  lea    (%ecx,%eax,1),%eax
0859d592 +0x0da:  add    $0x78,%eax
0859d595 +0x0dd:  mov    (%eax),%eax
0859d597 +0x0df:  lea    -0x18(%ebp),%edx
0859d59a +0x0e2:  mov    %edx,0x4(%esp)
0859d59e +0x0e6:  mov    %eax,(%esp)
0859d5a1 +0x0e9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859d5a6 +0x0ee:  addl   $0x1,-0xc(%ebp)
0859d5aa +0x0f2:  cmpl   $0x3,-0xc(%ebp)
0859d5ae +0x0f6:  setle  %al
0859d5b1 +0x0f9:  test   %al,%al
0859d5b3 +0x0fb:  jne    0859d4d7 <+0x1f>
0859d5b9 +0x101:  jmp    0859d5d6 <+0x11e>
0859d5bb +0x103:  mov    %edx,%ebx
0859d5bd +0x105:  mov    %eax,%esi
0859d5bf +0x107:  lea    -0x18(%ebp),%eax
0859d5c2 +0x10a:  mov    %eax,(%esp)
0859d5c5 +0x10d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d5ca +0x112:  mov    %esi,%eax
0859d5cc +0x114:  mov    %ebx,%edx
0859d5ce +0x116:  mov    %eax,(%esp)
0859d5d1 +0x119:  call   08ae3750 <_Unwind_Resume>
0859d5d6 +0x11e:  lea    -0x18(%ebp),%eax
0859d5d9 +0x121:  mov    %eax,(%esp)
0859d5dc +0x124:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d5e1 +0x129:  add    $0x20,%esp
0859d5e4 +0x12c:  pop    %ebx
0859d5e5 +0x12d:  pop    %esi
0859d5e6 +0x12e:  pop    %ebp
0859d5e7 +0x12f:  ret
```

## 反编译 C

```c
// CParty::send_invite_bluemarble @ 0x859d4b8

/* CParty::send_invite_bluemarble(int) */

void __thiscall CParty::send_invite_bluemarble(CParty *this,int param_1)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                    /* try { // try from 0859d4e4 to 0859d5a5 has its CatchHandler @ 0859d5bb */
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,7);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,9);
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

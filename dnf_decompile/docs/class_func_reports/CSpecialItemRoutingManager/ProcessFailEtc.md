# ProcessFailEtc

`_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi`

`CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860b332` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b332  _ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi
#           CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int)
# range [0x0860b332, 0x0860b45b]
0860b332 +0x000:  push   %ebp
0860b333 +0x001:  mov    %esp,%ebp
0860b335 +0x003:  push   %esi
0860b336 +0x004:  push   %ebx
0860b337 +0x005:  sub    $0x20,%esp
0860b33a +0x008:  cmpl   $0x0,0xc(%ebp)
0860b33e +0x00c:  je     0860b454 <+0x122>
0860b344 +0x012:  mov    0xc(%ebp),%eax
0860b347 +0x015:  mov    %eax,(%esp)
0860b34a +0x018:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
0860b34f +0x01d:  test   %al,%al
0860b351 +0x01f:  je     0860b378 <+0x46>
0860b353 +0x021:  mov    0xc(%ebp),%eax
0860b356 +0x024:  mov    %eax,(%esp)
0860b359 +0x027:  call   085ba574 <_ZN6CParty24GetFirstValidMemberStateEv>  ; CParty::GetFirstValidMemberState()
0860b35e +0x02c:  cmp    $0x5,%al
0860b360 +0x02e:  je     0860b371 <+0x3f>
0860b362 +0x030:  mov    0xc(%ebp),%eax
0860b365 +0x033:  mov    %eax,(%esp)
0860b368 +0x036:  call   085ba574 <_ZN6CParty24GetFirstValidMemberStateEv>  ; CParty::GetFirstValidMemberState()
0860b36d +0x03b:  cmp    $0xc,%al
0860b36f +0x03d:  jne    0860b378 <+0x46>
0860b371 +0x03f:  mov    $0x1,%eax
0860b376 +0x044:  jmp    0860b37d <+0x4b>
0860b378 +0x046:  mov    $0x0,%eax
0860b37d +0x04b:  test   %al,%al
0860b37f +0x04d:  je     0860b455 <+0x123>
0860b385 +0x053:  lea    -0x14(%ebp),%eax
0860b388 +0x056:  mov    %eax,(%esp)
0860b38b +0x059:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0860b390 +0x05e:  movl   $0x11a,0x8(%esp)
0860b398 +0x066:  movl   $0x0,0x4(%esp)
0860b3a0 +0x06e:  lea    -0x14(%ebp),%eax
0860b3a3 +0x071:  mov    %eax,(%esp)
0860b3a6 +0x074:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0860b3ab +0x079:  movl   $0x0,0x4(%esp)
0860b3b3 +0x081:  lea    -0x14(%ebp),%eax
0860b3b6 +0x084:  mov    %eax,(%esp)
0860b3b9 +0x087:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b3be +0x08c:  mov    0x10(%ebp),%eax
0860b3c1 +0x08f:  mov    %eax,0x4(%esp)
0860b3c5 +0x093:  lea    -0x14(%ebp),%eax
0860b3c8 +0x096:  mov    %eax,(%esp)
0860b3cb +0x099:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860b3d0 +0x09e:  mov    0xc(%ebp),%eax
0860b3d3 +0x0a1:  mov    %eax,(%esp)
0860b3d6 +0x0a4:  call   0860b616 <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xf9>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xf9
0860b3db +0x0a9:  mov    %eax,0x4(%esp)
0860b3df +0x0ad:  lea    -0x14(%ebp),%eax
0860b3e2 +0x0b0:  mov    %eax,(%esp)
0860b3e5 +0x0b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0860b3ea +0x0b8:  movl   $0x1,0x4(%esp)
0860b3f2 +0x0c0:  lea    -0x14(%ebp),%eax
0860b3f5 +0x0c3:  mov    %eax,(%esp)
0860b3f8 +0x0c6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0860b3fd +0x0cb:  lea    -0x14(%ebp),%eax
0860b400 +0x0ce:  mov    %eax,0x4(%esp)
0860b404 +0x0d2:  mov    0xc(%ebp),%eax
0860b407 +0x0d5:  mov    %eax,(%esp)
0860b40a +0x0d8:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0860b40f +0x0dd:  mov    0xc(%ebp),%eax
0860b412 +0x0e0:  mov    %eax,0x4(%esp)
0860b416 +0x0e4:  mov    0x8(%ebp),%eax
0860b419 +0x0e7:  mov    %eax,(%esp)
0860b41c +0x0ea:  call   0860b4c2 <_ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty>  ; CSpecialItemRoutingManager::cancelTimer(CParty*)
0860b421 +0x0ef:  mov    0xc(%ebp),%eax
0860b424 +0x0f2:  mov    %eax,(%esp)
0860b427 +0x0f5:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
0860b42c +0x0fa:  lea    -0x14(%ebp),%eax
0860b42f +0x0fd:  mov    %eax,(%esp)
0860b432 +0x100:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860b437 +0x105:  jmp    0860b455 <+0x123>
0860b439 +0x107:  mov    %edx,%ebx
0860b43b +0x109:  mov    %eax,%esi
0860b43d +0x10b:  lea    -0x14(%ebp),%eax
0860b440 +0x10e:  mov    %eax,(%esp)
0860b443 +0x111:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860b448 +0x116:  mov    %esi,%eax
0860b44a +0x118:  mov    %ebx,%edx
0860b44c +0x11a:  mov    %eax,(%esp)
0860b44f +0x11d:  call   08ae3750 <_Unwind_Resume>
0860b454 +0x122:  nop
0860b455 +0x123:  add    $0x20,%esp
0860b458 +0x126:  pop    %ebx
0860b459 +0x127:  pop    %esi
0860b45a +0x128:  pop    %ebp
0860b45b +0x129:  ret
```

## 反编译 C

```c
// CSpecialItemRoutingManager::ProcessFailEtc @ 0x860b332

/* CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int) */

void __thiscall
CSpecialItemRoutingManager::ProcessFailEtc
          (CSpecialItemRoutingManager *this,CParty *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_18 [12];
  
  if (param_1 != (CParty *)0x0) {
    cVar2 = CParty::IsRoutingState(param_1);
    if ((cVar2 == '\0') ||
       ((cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\x05' &&
        (cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\f')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0860b3a6 to 0860b420 has its CatchHandler @ 0860b439 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x11a);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
      iVar3 = CParty::GetRoutingItemUniqueID(param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CParty::send_to_party(param_1,local_18);
      cancelTimer(this,param_1);
      CParty::SetEndRouting(param_1);
      PacketGuard::~PacketGuard(local_18);
    }
    return;
  }
  return;
}
```

# OnStart

`_ZN15CRelayBattleMgr7OnStartEv`

`CRelayBattleMgr::OnStart()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de29c  _ZN15CRelayBattleMgr7OnStartEv
#           CRelayBattleMgr::OnStart()
# range [0x085de29c, 0x085de357]
085de29c +0x00:  push   %ebp
085de29d +0x01:  mov    %esp,%ebp
085de29f +0x03:  push   %esi
085de2a0 +0x04:  push   %ebx
085de2a1 +0x05:  sub    $0x30,%esp
085de2a4 +0x08:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085de2ab +0x0f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085de2b0 +0x14:  mov    0x8(%ebp),%edx
085de2b3 +0x17:  mov    %eax,0x70(%edx)
085de2b6 +0x1a:  mov    0x8(%ebp),%eax
085de2b9 +0x1d:  movl   $0x0,0x78(%eax)
085de2c0 +0x24:  movl   $0x0,-0xc(%ebp)
085de2c7 +0x2b:  jmp    085de2f3 <+0x57>
085de2c9 +0x2d:  mov    -0xc(%ebp),%edx
085de2cc +0x30:  mov    0x8(%ebp),%ecx
085de2cf +0x33:  mov    %edx,%eax
085de2d1 +0x35:  add    %eax,%eax
085de2d3 +0x37:  add    %edx,%eax
085de2d5 +0x39:  shl    $0x2,%eax
085de2d8 +0x3c:  mov    (%eax,%ecx,1),%eax
085de2db +0x3f:  cmp    $0x1,%eax
085de2de +0x42:  jne    085de2ef <+0x53>
085de2e0 +0x44:  mov    0x8(%ebp),%eax
085de2e3 +0x47:  mov    0x78(%eax),%eax
085de2e6 +0x4a:  lea    0x1(%eax),%edx
085de2e9 +0x4d:  mov    0x8(%ebp),%eax
085de2ec +0x50:  mov    %edx,0x78(%eax)
085de2ef +0x53:  addl   $0x1,-0xc(%ebp)
085de2f3 +0x57:  cmpl   $0x7,-0xc(%ebp)
085de2f7 +0x5b:  setle  %al
085de2fa +0x5e:  test   %al,%al
085de2fc +0x60:  jne    085de2c9 <+0x2d>
085de2fe +0x62:  mov    0x8(%ebp),%eax
085de301 +0x65:  mov    0x70(%eax),%esi
085de304 +0x68:  mov    0x8(%ebp),%eax
085de307 +0x6b:  mov    0x6c(%eax),%eax
085de30a +0x6e:  mov    %eax,(%esp)
085de30d +0x71:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085de312 +0x76:  mov    %eax,%ebx
085de314 +0x78:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085de319 +0x7d:  movl   $0x0,0x1c(%esp)
085de321 +0x85:  mov    %esi,0x18(%esp)
085de325 +0x89:  movl   $0x1b58,0x10(%esp)
085de32d +0x91:  movl   $0x0,0x14(%esp)
085de335 +0x99:  movl   $0x63,0xc(%esp)
085de33d +0xa1:  mov    %ebx,0x8(%esp)
085de341 +0xa5:  movl   $0x1,0x4(%esp)
085de349 +0xad:  mov    %eax,(%esp)
085de34c +0xb0:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085de351 +0xb5:  add    $0x30,%esp
085de354 +0xb8:  pop    %ebx
085de355 +0xb9:  pop    %esi
085de356 +0xba:  pop    %ebp
085de357 +0xbb:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnStart @ 0x85de29c

/* CRelayBattleMgr::OnStart() */

void __thiscall CRelayBattleMgr::OnStart(CRelayBattleMgr *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_10;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x78) = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 0xc) == 1) {
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    }
  }
  uVar1 = *(undefined4 *)(this + 0x70);
  uVar2 = PvP_Room::get_index(*(PvP_Room **)(this + 0x6c));
  uVar3 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar2,99,7000,0,uVar1,0);
  return;
}
```

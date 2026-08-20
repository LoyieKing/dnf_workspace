# OnDiePlayer

`_ZN15CRelayBattleMgr11OnDiePlayerEiib`

`CRelayBattleMgr::OnDiePlayer(int, int, bool)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de38a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de38a  _ZN15CRelayBattleMgr11OnDiePlayerEiib
#           CRelayBattleMgr::OnDiePlayer(int, int, bool)
# range [0x085de38a, 0x085de473]
085de38a +0x00:  push   %ebp
085de38b +0x01:  mov    %esp,%ebp
085de38d +0x03:  push   %esi
085de38e +0x04:  push   %ebx
085de38f +0x05:  sub    $0x30,%esp
085de392 +0x08:  mov    0x14(%ebp),%eax
085de395 +0x0b:  mov    %al,-0xc(%ebp)
085de398 +0x0e:  cmpl   $0x0,0xc(%ebp)
085de39c +0x12:  js     085de3ba <+0x30>
085de39e +0x14:  cmpl   $0x7,0xc(%ebp)
085de3a2 +0x18:  jg     085de3ba <+0x30>
085de3a4 +0x1a:  mov    0xc(%ebp),%edx
085de3a7 +0x1d:  mov    0x8(%ebp),%ecx
085de3aa +0x20:  mov    %edx,%eax
085de3ac +0x22:  add    %eax,%eax
085de3ae +0x24:  add    %edx,%eax
085de3b0 +0x26:  shl    $0x2,%eax
085de3b3 +0x29:  movl   $0x3,(%eax,%ecx,1)
085de3ba +0x30:  cmpl   $0x0,0x10(%ebp)
085de3be +0x34:  js     085de3ed <+0x63>
085de3c0 +0x36:  cmpl   $0x7,0x10(%ebp)
085de3c4 +0x3a:  jg     085de3ed <+0x63>
085de3c6 +0x3c:  mov    0x10(%ebp),%edx
085de3c9 +0x3f:  mov    0x8(%ebp),%ecx
085de3cc +0x42:  mov    %edx,%eax
085de3ce +0x44:  add    %eax,%eax
085de3d0 +0x46:  add    %edx,%eax
085de3d2 +0x48:  shl    $0x2,%eax
085de3d5 +0x4b:  movzbl 0x8(%eax,%ecx,1),%eax
085de3da +0x50:  lea    0x1(%eax),%ebx
085de3dd +0x53:  mov    0x8(%ebp),%ecx
085de3e0 +0x56:  mov    %edx,%eax
085de3e2 +0x58:  add    %eax,%eax
085de3e4 +0x5a:  add    %edx,%eax
085de3e6 +0x5c:  shl    $0x2,%eax
085de3e9 +0x5f:  mov    %bl,0x8(%eax,%ecx,1)
085de3ed +0x63:  cmpb   $0x0,-0xc(%ebp)
085de3f1 +0x67:  je     085de46d <+0xe3>
085de3f3 +0x69:  mov    0x8(%ebp),%eax
085de3f6 +0x6c:  mov    0x74(%eax),%eax
085de3f9 +0x6f:  cmp    $0x1,%eax
085de3fc +0x72:  jne    085de46d <+0xe3>
085de3fe +0x74:  mov    0x8(%ebp),%eax
085de401 +0x77:  movl   $0x2,0x74(%eax)
085de408 +0x7e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085de40f +0x85:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085de414 +0x8a:  mov    0x8(%ebp),%edx
085de417 +0x8d:  mov    %eax,0x70(%edx)
085de41a +0x90:  mov    0x8(%ebp),%eax
085de41d +0x93:  mov    0x70(%eax),%esi
085de420 +0x96:  mov    0x8(%ebp),%eax
085de423 +0x99:  mov    0x6c(%eax),%eax
085de426 +0x9c:  mov    %eax,(%esp)
085de429 +0x9f:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085de42e +0xa4:  mov    %eax,%ebx
085de430 +0xa6:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085de435 +0xab:  movl   $0x0,0x1c(%esp)
085de43d +0xb3:  mov    %esi,0x18(%esp)
085de441 +0xb7:  movl   $0xbb8,0x10(%esp)
085de449 +0xbf:  movl   $0x0,0x14(%esp)
085de451 +0xc7:  movl   $0x63,0xc(%esp)
085de459 +0xcf:  mov    %ebx,0x8(%esp)
085de45d +0xd3:  movl   $0x1,0x4(%esp)
085de465 +0xdb:  mov    %eax,(%esp)
085de468 +0xde:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085de46d +0xe3:  add    $0x30,%esp
085de470 +0xe6:  pop    %ebx
085de471 +0xe7:  pop    %esi
085de472 +0xe8:  pop    %ebp
085de473 +0xe9:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnDiePlayer @ 0x85de38a

/* CRelayBattleMgr::OnDiePlayer(int, int, bool) */

void __thiscall
CRelayBattleMgr::OnDiePlayer(CRelayBattleMgr *this,int param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    *(undefined4 *)(this + param_1 * 0xc) = 3;
  }
  if ((-1 < param_2) && (param_2 < 8)) {
    this[param_2 * 0xc + 8] = (CRelayBattleMgr)((char)this[param_2 * 0xc + 8] + '\x01');
  }
  if ((param_3) && (*(int *)(this + 0x74) == 1)) {
    *(undefined4 *)(this + 0x74) = 2;
    uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x70) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x70);
    uVar2 = PvP_Room::get_index(*(PvP_Room **)(this + 0x6c));
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar2,99,3000,0,uVar1,0);
  }
  return;
}
```

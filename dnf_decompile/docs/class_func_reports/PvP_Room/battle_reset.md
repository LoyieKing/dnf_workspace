# battle_reset

`_ZN8PvP_Room12battle_resetEv`

`PvP_Room::battle_reset()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6430  _ZN8PvP_Room12battle_resetEv
#           PvP_Room::battle_reset()
# range [0x085d6430, 0x085d65b3]
085d6430 +0x000:  push   %ebp
085d6431 +0x001:  mov    %esp,%ebp
085d6433 +0x003:  sub    $0x28,%esp
085d6436 +0x006:  mov    0x8(%ebp),%eax
085d6439 +0x009:  mov    %eax,(%esp)
085d643c +0x00c:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d6441 +0x011:  movl   $0x0,-0x10(%ebp)
085d6448 +0x018:  jmp    085d64bd <+0x8d>
085d644a +0x01a:  mov    -0x10(%ebp),%eax
085d644d +0x01d:  mov    0x8(%ebp),%edx
085d6450 +0x020:  movb   $0x0,0x5c8(%edx,%eax,1)
085d6458 +0x028:  mov    -0x10(%ebp),%eax
085d645b +0x02b:  mov    0x8(%ebp),%edx
085d645e +0x02e:  movb   $0x0,0x5d0(%edx,%eax,1)
085d6466 +0x036:  mov    -0x10(%ebp),%eax
085d6469 +0x039:  mov    0x8(%ebp),%edx
085d646c +0x03c:  movb   $0x0,0x70(%edx,%eax,1)
085d6471 +0x041:  mov    -0x10(%ebp),%edx
085d6474 +0x044:  mov    0x8(%ebp),%eax
085d6477 +0x047:  add    $0xc,%edx
085d647a +0x04a:  mov    (%eax,%edx,4),%eax
085d647d +0x04d:  test   %eax,%eax
085d647f +0x04f:  je     085d64b9 <+0x89>
085d6481 +0x051:  mov    -0x10(%ebp),%edx
085d6484 +0x054:  mov    0x8(%ebp),%eax
085d6487 +0x057:  add    $0xc,%edx
085d648a +0x05a:  mov    (%eax,%edx,4),%eax
085d648d +0x05d:  mov    %eax,(%esp)
085d6490 +0x060:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085d6495 +0x065:  mov    %eax,(%esp)
085d6498 +0x068:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
085d649d +0x06d:  mov    -0x10(%ebp),%edx
085d64a0 +0x070:  mov    0x8(%ebp),%eax
085d64a3 +0x073:  add    $0xc,%edx
085d64a6 +0x076:  mov    (%eax,%edx,4),%eax
085d64a9 +0x079:  mov    %eax,(%esp)
085d64ac +0x07c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085d64b1 +0x081:  mov    %eax,(%esp)
085d64b4 +0x084:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
085d64b9 +0x089:  addl   $0x1,-0x10(%ebp)
085d64bd +0x08d:  cmpl   $0x7,-0x10(%ebp)
085d64c1 +0x091:  setle  %al
085d64c4 +0x094:  test   %al,%al
085d64c6 +0x096:  jne    085d644a <+0x1a>
085d64c8 +0x098:  mov    0x8(%ebp),%eax
085d64cb +0x09b:  add    $0x5dc,%eax
085d64d0 +0x0a0:  movl   $0xc,0x8(%esp)
085d64d8 +0x0a8:  movl   $0x0,0x4(%esp)
085d64e0 +0x0b0:  mov    %eax,(%esp)
085d64e3 +0x0b3:  call   0807dcc0 <_init+0x5b8>
085d64e8 +0x0b8:  mov    0x8(%ebp),%eax
085d64eb +0x0bb:  movl   $0x0,0x5d8(%eax)
085d64f5 +0x0c5:  mov    0x8(%ebp),%eax
085d64f8 +0x0c8:  movl   $0x1,0xb8(%eax)
085d6502 +0x0d2:  mov    0x8(%ebp),%eax
085d6505 +0x0d5:  add    $0x5b4,%eax
085d650a +0x0da:  mov    %eax,(%esp)
085d650d +0x0dd:  call   085d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>  ; PvpResultRecvFlag::Clear()
085d6512 +0x0e2:  mov    0x8(%ebp),%eax
085d6515 +0x0e5:  add    $0x5bc,%eax
085d651a +0x0ea:  mov    %eax,(%esp)
085d651d +0x0ed:  call   085d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>  ; PvpResultRecvFlag::Clear()
085d6522 +0x0f2:  mov    0x8(%ebp),%eax
085d6525 +0x0f5:  add    $0x268,%eax
085d652a +0x0fa:  mov    %eax,(%esp)
085d652d +0x0fd:  call   085d490a <_ZN12PvpUserTable5ClearEv>  ; PvpUserTable::Clear()
085d6532 +0x102:  mov    0x8(%ebp),%eax
085d6535 +0x105:  movb   $0x0,0xc0(%eax)
085d653c +0x10c:  mov    0x8(%ebp),%eax
085d653f +0x10f:  add    $0x620,%eax
085d6544 +0x114:  mov    %eax,(%esp)
085d6547 +0x117:  call   085de046 <_ZN15CRelayBattleMgr5ResetEv>  ; CRelayBattleMgr::Reset()
085d654c +0x11c:  mov    0x8(%ebp),%eax
085d654f +0x11f:  movb   $0x0,0x614(%eax)
085d6556 +0x126:  mov    0x8(%ebp),%eax
085d6559 +0x129:  movb   $0x0,0x615(%eax)
085d6560 +0x130:  mov    0x8(%ebp),%eax
085d6563 +0x133:  movb   $0x0,0x616(%eax)
085d656a +0x13a:  mov    0x8(%ebp),%eax
085d656d +0x13d:  movb   $0x0,0x617(%eax)
085d6574 +0x144:  movl   $0x31,-0xc(%ebp)
085d657b +0x14b:  jmp    085d659c <+0x16c>
085d657d +0x14d:  cmpl   $0x3e,-0xc(%ebp)
085d6581 +0x151:  je     085d6597 <+0x167>
085d6583 +0x153:  mov    -0xc(%ebp),%eax
085d6586 +0x156:  mov    %eax,0x4(%esp)
085d658a +0x15a:  mov    0x8(%ebp),%eax
085d658d +0x15d:  mov    %eax,(%esp)
085d6590 +0x160:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085d6595 +0x165:  jmp    085d6598 <+0x168>
085d6597 +0x167:  nop
085d6598 +0x168:  addl   $0x1,-0xc(%ebp)
085d659c +0x16c:  cmpl   $0x3e,-0xc(%ebp)
085d65a0 +0x170:  setle  %al
085d65a3 +0x173:  test   %al,%al
085d65a5 +0x175:  jne    085d657d <+0x14d>
085d65a7 +0x177:  mov    0x8(%ebp),%eax
085d65aa +0x17a:  mov    %eax,(%esp)
085d65ad +0x17d:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d65b2 +0x182:  leave
085d65b3 +0x183:  ret
```

## 反编译 C

```c
// PvP_Room::battle_reset @ 0x85d6430

/* PvP_Room::battle_reset() */

void __thiscall PvP_Room::battle_reset(PvP_Room *this)

{
  CHackAnalyzer *this_00;
  int local_14;
  int local_10;
  
  lock();
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this[local_14 + 0x5c8] = (PvP_Room)0x0;
    this[local_14 + 0x5d0] = (PvP_Room)0x0;
    this[local_14 + 0x70] = (PvP_Room)0x0;
    if (*(int *)(this + (local_14 + 0xc) * 4) != 0) {
      CUser::getHackAnalyzer(*(CUser **)(this + (local_14 + 0xc) * 4));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + (local_14 + 0xc) * 4));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
    }
  }
  memset(this + 0x5dc,0,0xc);
  *(undefined4 *)(this + 0x5d8) = 0;
  *(undefined4 *)(this + 0xb8) = 1;
  PvpResultRecvFlag::Clear((PvpResultRecvFlag *)(this + 0x5b4));
  PvpResultRecvFlag::Clear((PvpResultRecvFlag *)(this + 0x5bc));
  PvpUserTable::Clear((PvpUserTable *)(this + 0x268));
  this[0xc0] = (PvP_Room)0x0;
  CRelayBattleMgr::Reset((CRelayBattleMgr *)(this + 0x620));
  this[0x614] = (PvP_Room)0x0;
  this[0x615] = (PvP_Room)0x0;
  this[0x616] = (PvP_Room)0x0;
  this[0x617] = (PvP_Room)0x0;
  for (local_10 = 0x31; local_10 < 0x3f; local_10 = local_10 + 1) {
    if (local_10 != 0x3e) {
      gen_timer_key(this,local_10);
    }
  }
  unlock();
  return;
}
```

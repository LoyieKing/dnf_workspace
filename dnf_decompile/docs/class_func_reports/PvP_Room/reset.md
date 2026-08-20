# reset

`_ZN8PvP_Room5resetEv`

`PvP_Room::reset()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d62c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d62c8  _ZN8PvP_Room5resetEv
#           PvP_Room::reset()
# range [0x085d62c8, 0x085d642f]
085d62c8 +0x000:  push   %ebp
085d62c9 +0x001:  mov    %esp,%ebp
085d62cb +0x003:  sub    $0x28,%esp
085d62ce +0x006:  mov    0x8(%ebp),%eax
085d62d1 +0x009:  mov    %eax,(%esp)
085d62d4 +0x00c:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
085d62d9 +0x011:  mov    0x8(%ebp),%eax
085d62dc +0x014:  mov    %eax,(%esp)
085d62df +0x017:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d62e4 +0x01c:  mov    0x8(%ebp),%eax
085d62e7 +0x01f:  movl   $0x0,0x600(%eax)
085d62f1 +0x029:  mov    0x8(%ebp),%eax
085d62f4 +0x02c:  movl   $0x0,0xb8(%eax)
085d62fe +0x036:  mov    0x8(%ebp),%eax
085d6301 +0x039:  movl   $0x2,0x4(%eax)
085d6308 +0x040:  mov    0x8(%ebp),%eax
085d630b +0x043:  movb   $0x0,0x8(%eax)
085d630f +0x047:  mov    0x8(%ebp),%eax
085d6312 +0x04a:  add    $0x9,%eax
085d6315 +0x04d:  movl   $0x1e,0x8(%esp)
085d631d +0x055:  movl   $0x0,0x4(%esp)
085d6325 +0x05d:  mov    %eax,(%esp)
085d6328 +0x060:  call   0807dcc0 <_init+0x5b8>
085d632d +0x065:  mov    0x8(%ebp),%eax
085d6330 +0x068:  movl   $0x0,0x28(%eax)
085d6337 +0x06f:  mov    0x8(%ebp),%eax
085d633a +0x072:  movl   $0x0,0x2c(%eax)
085d6341 +0x079:  movl   $0x0,-0xc(%ebp)
085d6348 +0x080:  jmp    085d6379 <+0xb1>
085d634a +0x082:  mov    -0xc(%ebp),%edx
085d634d +0x085:  mov    0x8(%ebp),%eax
085d6350 +0x088:  add    $0xc,%edx
085d6353 +0x08b:  movl   $0x0,(%eax,%edx,4)
085d635a +0x092:  mov    -0xc(%ebp),%edx
085d635d +0x095:  mov    0x8(%ebp),%eax
085d6360 +0x098:  add    $0x14,%edx
085d6363 +0x09b:  movl   $0xff,(%eax,%edx,4)
085d636a +0x0a2:  mov    -0xc(%ebp),%eax
085d636d +0x0a5:  mov    0x8(%ebp),%edx
085d6370 +0x0a8:  movb   $0x0,0x70(%edx,%eax,1)
085d6375 +0x0ad:  addl   $0x1,-0xc(%ebp)
085d6379 +0x0b1:  cmpl   $0x7,-0xc(%ebp)
085d637d +0x0b5:  setle  %al
085d6380 +0x0b8:  test   %al,%al
085d6382 +0x0ba:  jne    085d634a <+0x82>
085d6384 +0x0bc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d6389 +0x0c1:  mov    %eax,(%esp)
085d638c +0x0c4:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d6391 +0x0c9:  cmp    $0x6,%eax
085d6394 +0x0cc:  sete   %al
085d6397 +0x0cf:  test   %al,%al
085d6399 +0x0d1:  je     085d63ab <+0xe3>
085d639b +0x0d3:  mov    0x8(%ebp),%eax
085d639e +0x0d6:  add    $0xc4,%eax
085d63a3 +0x0db:  mov    %eax,(%esp)
085d63a6 +0x0de:  call   085dda9a <_ZN16PvP_GuildWar_Log5ClearEv>  ; PvP_GuildWar_Log::Clear()
085d63ab +0x0e3:  mov    0x8(%ebp),%eax
085d63ae +0x0e6:  add    $0x620,%eax
085d63b3 +0x0eb:  mov    %eax,(%esp)
085d63b6 +0x0ee:  call   085de046 <_ZN15CRelayBattleMgr5ResetEv>  ; CRelayBattleMgr::Reset()
085d63bb +0x0f3:  mov    0x8(%ebp),%eax
085d63be +0x0f6:  lea    0x620(%eax),%edx
085d63c4 +0x0fc:  mov    0x8(%ebp),%eax
085d63c7 +0x0ff:  mov    %eax,0x4(%esp)
085d63cb +0x103:  mov    %edx,(%esp)
085d63ce +0x106:  call   085df91e <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1a5>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1a5
085d63d3 +0x10b:  mov    0x8(%ebp),%eax
085d63d6 +0x10e:  add    $0x69c,%eax
085d63db +0x113:  mov    %eax,(%esp)
085d63de +0x116:  call   085dee22 <_ZN20CDeathMatchBattleMgr5ResetEv>  ; CDeathMatchBattleMgr::Reset()
085d63e3 +0x11b:  mov    0x8(%ebp),%eax
085d63e6 +0x11e:  lea    0x69c(%eax),%edx
085d63ec +0x124:  mov    0x8(%ebp),%eax
085d63ef +0x127:  mov    %eax,0x4(%esp)
085d63f3 +0x12b:  mov    %edx,(%esp)
085d63f6 +0x12e:  call   085df92c <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1b3>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1b3
085d63fb +0x133:  mov    0x8(%ebp),%eax
085d63fe +0x136:  movb   $0x0,0x614(%eax)
085d6405 +0x13d:  mov    0x8(%ebp),%eax
085d6408 +0x140:  movb   $0x0,0x615(%eax)
085d640f +0x147:  mov    0x8(%ebp),%eax
085d6412 +0x14a:  movb   $0x0,0x616(%eax)
085d6419 +0x151:  mov    0x8(%ebp),%eax
085d641c +0x154:  movb   $0x0,0x617(%eax)
085d6423 +0x15b:  mov    0x8(%ebp),%eax
085d6426 +0x15e:  mov    %eax,(%esp)
085d6429 +0x161:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d642e +0x166:  leave
085d642f +0x167:  ret
```

## 反编译 C

```c
// PvP_Room::reset @ 0x85d62c8

/* PvP_Room::reset() */

void __thiscall PvP_Room::reset(PvP_Room *this)

{
  GameWorld *this_00;
  int iVar1;
  int local_10;
  
  battle_reset(this);
  lock();
  *(undefined4 *)(this + 0x600) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 4) = 2;
  this[8] = (PvP_Room)0x0;
  memset(this + 9,0,0x1e);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0xc) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 0x14) * 4) = 0xff;
    this[local_10 + 0x70] = (PvP_Room)0x0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 6) {
    PvP_GuildWar_Log::Clear((PvP_GuildWar_Log *)(this + 0xc4));
  }
  CRelayBattleMgr::Reset((CRelayBattleMgr *)(this + 0x620));
  CRelayBattleMgr::SetParent((CRelayBattleMgr *)(this + 0x620),this);
  CDeathMatchBattleMgr::Reset((CDeathMatchBattleMgr *)(this + 0x69c));
  CDeathMatchBattleMgr::SetParent((CDeathMatchBattleMgr *)(this + 0x69c),this);
  this[0x614] = (PvP_Room)0x0;
  this[0x615] = (PvP_Room)0x0;
  this[0x616] = (PvP_Room)0x0;
  this[0x617] = (PvP_Room)0x0;
  unlock();
  return;
}
```

# TurnPlayer

`_ZN15CRelayBattleMgr10TurnPlayerEv`

`CRelayBattleMgr::TurnPlayer()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085dead6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dead6  _ZN15CRelayBattleMgr10TurnPlayerEv
#           CRelayBattleMgr::TurnPlayer()
# range [0x085dead6, 0x085decd7]
085dead6 +0x000:  push   %ebp
085dead7 +0x001:  mov    %esp,%ebp
085dead9 +0x003:  push   %esi
085deada +0x004:  push   %ebx
085deadb +0x005:  sub    $0x30,%esp
085deade +0x008:  mov    0x8(%ebp),%eax
085deae1 +0x00b:  mov    0x6c(%eax),%eax
085deae4 +0x00e:  mov    %eax,(%esp)
085deae7 +0x011:  call   082a4332 <_GLOBAL__I__ZN4CLog5this_E+0x759>  ; global constructors keyed to CLog::this_+0x759
085deaec +0x016:  test   %al,%al
085deaee +0x018:  je     085deafa <+0x24>
085deaf0 +0x01a:  mov    $0x1,%ebx
085deaf5 +0x01f:  jmp    085decce <+0x1f8>
085deafa +0x024:  lea    -0x24(%ebp),%eax
085deafd +0x027:  mov    %eax,(%esp)
085deb00 +0x02a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085deb05 +0x02f:  movl   $0x70,0x8(%esp)
085deb0d +0x037:  movl   $0x0,0x4(%esp)
085deb15 +0x03f:  lea    -0x24(%ebp),%eax
085deb18 +0x042:  mov    %eax,(%esp)
085deb1b +0x045:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085deb20 +0x04a:  movl   $0x2,0x4(%esp)
085deb28 +0x052:  lea    -0x24(%ebp),%eax
085deb2b +0x055:  mov    %eax,(%esp)
085deb2e +0x058:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085deb33 +0x05d:  movl   $0x1,-0x14(%ebp)
085deb3a +0x064:  jmp    085dec5f <+0x189>
085deb3f +0x069:  mov    -0x14(%ebp),%eax
085deb42 +0x06c:  mov    %eax,0x4(%esp)
085deb46 +0x070:  mov    0x8(%ebp),%eax
085deb49 +0x073:  mov    %eax,(%esp)
085deb4c +0x076:  call   085dea14 <_ZN15CRelayBattleMgr13GetNextPlayerEi>  ; CRelayBattleMgr::GetNextPlayer(int)
085deb51 +0x07b:  mov    %eax,-0x18(%ebp)
085deb54 +0x07e:  mov    -0x18(%ebp),%eax
085deb57 +0x081:  mov    %eax,0x4(%esp)
085deb5b +0x085:  lea    -0x24(%ebp),%eax
085deb5e +0x088:  mov    %eax,(%esp)
085deb61 +0x08b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085deb66 +0x090:  lea    -0x24(%ebp),%eax
085deb69 +0x093:  mov    %eax,(%esp)
085deb6c +0x096:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085deb71 +0x09b:  mov    %eax,-0x28(%ebp)
085deb74 +0x09e:  movl   $0x0,-0x10(%ebp)
085deb7b +0x0a5:  mov    -0x10(%ebp),%eax
085deb7e +0x0a8:  mov    %eax,0x4(%esp)
085deb82 +0x0ac:  lea    -0x24(%ebp),%eax
085deb85 +0x0af:  mov    %eax,(%esp)
085deb88 +0x0b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085deb8d +0x0b7:  mov    -0x14(%ebp),%edx
085deb90 +0x0ba:  mov    0x8(%ebp),%eax
085deb93 +0x0bd:  add    $0x18,%edx
085deb96 +0x0c0:  mov    (%eax,%edx,4),%eax
085deb99 +0x0c3:  test   %eax,%eax
085deb9b +0x0c5:  jle    085dec42 <+0x16c>
085deba1 +0x0cb:  movl   $0x0,-0xc(%ebp)
085deba8 +0x0d2:  jmp    085dec33 <+0x15d>
085debad +0x0d7:  mov    -0xc(%ebp),%edx
085debb0 +0x0da:  mov    0x8(%ebp),%ecx
085debb3 +0x0dd:  mov    %edx,%eax
085debb5 +0x0df:  add    %eax,%eax
085debb7 +0x0e1:  add    %edx,%eax
085debb9 +0x0e3:  shl    $0x2,%eax
085debbc +0x0e6:  movzbl 0x7(%eax,%ecx,1),%eax
085debc1 +0x0eb:  test   %al,%al
085debc3 +0x0ed:  je     085dec2f <+0x159>
085debc5 +0x0ef:  mov    -0xc(%ebp),%edx
085debc8 +0x0f2:  mov    0x8(%ebp),%ecx
085debcb +0x0f5:  mov    %edx,%eax
085debcd +0x0f7:  add    %eax,%eax
085debcf +0x0f9:  add    %edx,%eax
085debd1 +0x0fb:  shl    $0x2,%eax
085debd4 +0x0fe:  movzbl 0x6(%eax,%ecx,1),%eax
085debd9 +0x103:  movsbl %al,%eax
085debdc +0x106:  cmp    -0x14(%ebp),%eax
085debdf +0x109:  jne    085dec2f <+0x159>
085debe1 +0x10b:  mov    -0xc(%ebp),%eax
085debe4 +0x10e:  mov    %eax,0x4(%esp)
085debe8 +0x112:  lea    -0x24(%ebp),%eax
085debeb +0x115:  mov    %eax,(%esp)
085debee +0x118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085debf3 +0x11d:  mov    -0xc(%ebp),%edx
085debf6 +0x120:  mov    0x8(%ebp),%ecx
085debf9 +0x123:  mov    %edx,%eax
085debfb +0x125:  add    %eax,%eax
085debfd +0x127:  add    %edx,%eax
085debff +0x129:  shl    $0x2,%eax
085dec02 +0x12c:  movzwl 0x4(%eax,%ecx,1),%eax
085dec07 +0x131:  cwtl
085dec08 +0x132:  mov    %eax,0x4(%esp)
085dec0c +0x136:  lea    -0x24(%ebp),%eax
085dec0f +0x139:  mov    %eax,(%esp)
085dec12 +0x13c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dec17 +0x141:  addl   $0x1,-0x10(%ebp)
085dec1b +0x145:  mov    -0xc(%ebp),%edx
085dec1e +0x148:  mov    0x8(%ebp),%ecx
085dec21 +0x14b:  mov    %edx,%eax
085dec23 +0x14d:  add    %eax,%eax
085dec25 +0x14f:  add    %edx,%eax
085dec27 +0x151:  shl    $0x2,%eax
085dec2a +0x154:  movb   $0x0,0x7(%eax,%ecx,1)
085dec2f +0x159:  addl   $0x1,-0xc(%ebp)
085dec33 +0x15d:  cmpl   $0x7,-0xc(%ebp)
085dec37 +0x161:  setle  %al
085dec3a +0x164:  test   %al,%al
085dec3c +0x166:  jne    085debad <+0xd7>
085dec42 +0x16c:  mov    -0x10(%ebp),%eax
085dec45 +0x16f:  mov    %eax,0x8(%esp)
085dec49 +0x173:  lea    -0x28(%ebp),%eax
085dec4c +0x176:  mov    %eax,0x4(%esp)
085dec50 +0x17a:  lea    -0x24(%ebp),%eax
085dec53 +0x17d:  mov    %eax,(%esp)
085dec56 +0x180:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
085dec5b +0x185:  addl   $0x1,-0x14(%ebp)
085dec5f +0x189:  cmpl   $0x2,-0x14(%ebp)
085dec63 +0x18d:  setle  %al
085dec66 +0x190:  test   %al,%al
085dec68 +0x192:  jne    085deb3f <+0x69>
085dec6e +0x198:  movl   $0x1,0x4(%esp)
085dec76 +0x1a0:  lea    -0x24(%ebp),%eax
085dec79 +0x1a3:  mov    %eax,(%esp)
085dec7c +0x1a6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dec81 +0x1ab:  mov    0x8(%ebp),%eax
085dec84 +0x1ae:  mov    0x6c(%eax),%eax
085dec87 +0x1b1:  lea    -0x24(%ebp),%edx
085dec8a +0x1b4:  mov    %edx,0x4(%esp)
085dec8e +0x1b8:  mov    %eax,(%esp)
085dec91 +0x1bb:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085dec96 +0x1c0:  mov    0x8(%ebp),%eax
085dec99 +0x1c3:  mov    %eax,(%esp)
085dec9c +0x1c6:  call   085de09c <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv>  ; CRelayBattleMgr::ResetChangeSequenceCount()
085deca1 +0x1cb:  mov    $0x1,%ebx
085deca6 +0x1d0:  lea    -0x24(%ebp),%eax
085deca9 +0x1d3:  mov    %eax,(%esp)
085decac +0x1d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085decb1 +0x1db:  jmp    085decce <+0x1f8>
085decb3 +0x1dd:  mov    %edx,%ebx
085decb5 +0x1df:  mov    %eax,%esi
085decb7 +0x1e1:  lea    -0x24(%ebp),%eax
085decba +0x1e4:  mov    %eax,(%esp)
085decbd +0x1e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085decc2 +0x1ec:  mov    %esi,%eax
085decc4 +0x1ee:  mov    %ebx,%edx
085decc6 +0x1f0:  mov    %eax,(%esp)
085decc9 +0x1f3:  call   08ae3750 <_Unwind_Resume>
085decce +0x1f8:  mov    %ebx,%eax
085decd0 +0x1fa:  add    $0x30,%esp
085decd3 +0x1fd:  pop    %ebx
085decd4 +0x1fe:  pop    %esi
085decd5 +0x1ff:  pop    %ebp
085decd6 +0x200:  ret
085decd7 +0x201:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::TurnPlayer @ 0x85dead6

/* CRelayBattleMgr::TurnPlayer() */

undefined4 __thiscall CRelayBattleMgr::TurnPlayer(CRelayBattleMgr *this)

{
  char cVar1;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = PvP_Room::IsEndPvpBattle(*(PvP_Room **)(this + 0x6c));
  if (cVar1 == '\0') {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085deb1b to 085dec95 has its CatchHandler @ 085decb3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x70);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
    for (local_18 = 1; local_18 < 3; local_18 = local_18 + 1) {
      local_1c = GetNextPlayer(this,local_18);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_1c);
      local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
      local_14 = 0;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
      if (0 < *(int *)(this + (local_18 + 0x18) * 4)) {
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          if ((this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x0) &&
             ((char)this[local_10 * 0xc + 6] == local_18)) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_28,(int)*(short *)(this + local_10 * 0xc + 4));
            local_14 = local_14 + 1;
            this[local_10 * 0xc + 7] = (CRelayBattleMgr)0x0;
          }
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    PvP_Room::send_to_pvp(*(PvP_Room **)(this + 0x6c),local_28);
    ResetChangeSequenceCount(this);
    PacketGuard::~PacketGuard(local_28);
  }
  return 1;
}
```

# makeBestClearTimePacket

`_ZN6CParty23makeBestClearTimePacketER11PacketGuardi`

`CParty::makeBestClearTimePacket(PacketGuard&, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be1f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be1f8  _ZN6CParty23makeBestClearTimePacketER11PacketGuardi
#           CParty::makeBestClearTimePacket(PacketGuard&, int)
# range [0x085be1f8, 0x085be399]
085be1f8 +0x000:  push   %ebp
085be1f9 +0x001:  mov    %esp,%ebp
085be1fb +0x003:  push   %esi
085be1fc +0x004:  push   %ebx
085be1fd +0x005:  sub    $0x20,%esp
085be200 +0x008:  mov    0x8(%ebp),%eax
085be203 +0x00b:  add    $0xb24,%eax
085be208 +0x010:  mov    %eax,(%esp)
085be20b +0x013:  call   0830e31e <_ZN13CBattle_Field11isQuestMazeEv>  ; CBattle_Field::isQuestMaze()
085be210 +0x018:  test   %al,%al
085be212 +0x01a:  je     085be21b <+0x23>
085be214 +0x01c:  mov    $0x1,%eax
085be219 +0x021:  jmp    085be220 <+0x28>
085be21b +0x023:  mov    $0x0,%eax
085be220 +0x028:  mov    0xc(%ebp),%edx
085be223 +0x02b:  mov    %eax,0x4(%esp)
085be227 +0x02f:  mov    %edx,(%esp)
085be22a +0x032:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085be22f +0x037:  mov    0x8(%ebp),%eax
085be232 +0x03a:  mov    %eax,(%esp)
085be235 +0x03d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085be23a +0x042:  mov    0xc(%ebp),%edx
085be23d +0x045:  mov    %eax,0x4(%esp)
085be241 +0x049:  mov    %edx,(%esp)
085be244 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085be249 +0x051:  movl   $0x0,-0x14(%ebp)
085be250 +0x058:  movb   $0x0,-0xd(%ebp)
085be254 +0x05c:  movl   $0x0,-0xc(%ebp)
085be25b +0x063:  jmp    085be384 <+0x18c>
085be260 +0x068:  mov    -0xc(%ebp),%eax
085be263 +0x06b:  mov    %eax,0x4(%esp)
085be267 +0x06f:  mov    0x8(%ebp),%eax
085be26a +0x072:  mov    %eax,(%esp)
085be26d +0x075:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085be272 +0x07a:  xor    $0x1,%eax
085be275 +0x07d:  test   %al,%al
085be277 +0x07f:  jne    085be37f <+0x187>
085be27d +0x085:  mov    0x8(%ebp),%eax
085be280 +0x088:  add    $0xb24,%eax
085be285 +0x08d:  mov    %eax,(%esp)
085be288 +0x090:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085be28d +0x095:  mov    %eax,%esi
085be28f +0x097:  mov    0x8(%ebp),%eax
085be292 +0x09a:  add    $0xb24,%eax
085be297 +0x09f:  mov    %eax,(%esp)
085be29a +0x0a2:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085be29f +0x0a7:  mov    %eax,%ebx
085be2a1 +0x0a9:  mov    -0xc(%ebp),%edx
085be2a4 +0x0ac:  mov    0x8(%ebp),%ecx
085be2a7 +0x0af:  mov    %edx,%eax
085be2a9 +0x0b1:  add    %eax,%eax
085be2ab +0x0b3:  add    %edx,%eax
085be2ad +0x0b5:  shl    $0x3,%eax
085be2b0 +0x0b8:  lea    (%ecx,%eax,1),%eax
085be2b3 +0x0bb:  add    $0x78,%eax
085be2b6 +0x0be:  mov    (%eax),%eax
085be2b8 +0x0c0:  movl   $0x12,0x4(%esp)
085be2c0 +0x0c8:  mov    %eax,(%esp)
085be2c3 +0x0cb:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085be2c8 +0x0d0:  mov    %esi,0x8(%esp)
085be2cc +0x0d4:  mov    %ebx,0x4(%esp)
085be2d0 +0x0d8:  mov    %eax,(%esp)
085be2d3 +0x0db:  call   080c8ac0 <_ZN13BestClearTime16getBestClearTimeEii>  ; BestClearTime::getBestClearTime(int, int)
085be2d8 +0x0e0:  mov    %eax,-0x14(%ebp)
085be2db +0x0e3:  mov    -0xc(%ebp),%edx
085be2de +0x0e6:  mov    0x8(%ebp),%ecx
085be2e1 +0x0e9:  mov    %edx,%eax
085be2e3 +0x0eb:  add    %eax,%eax
085be2e5 +0x0ed:  add    %edx,%eax
085be2e7 +0x0ef:  shl    $0x3,%eax
085be2ea +0x0f2:  lea    (%ecx,%eax,1),%eax
085be2ed +0x0f5:  add    $0x78,%eax
085be2f0 +0x0f8:  mov    (%eax),%eax
085be2f2 +0x0fa:  movl   $0x12,0x4(%esp)
085be2fa +0x102:  mov    %eax,(%esp)
085be2fd +0x105:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085be302 +0x10a:  mov    %eax,(%esp)
085be305 +0x10d:  call   080c8b5c <_ZN13BestClearTime14checkNewRecordEv>  ; BestClearTime::checkNewRecord()
085be30a +0x112:  mov    %al,-0xd(%ebp)
085be30d +0x115:  cmpl   $0x0,-0x14(%ebp)
085be311 +0x119:  jne    085be319 <+0x121>
085be313 +0x11b:  mov    0x10(%ebp),%eax
085be316 +0x11e:  mov    %eax,-0x14(%ebp)
085be319 +0x121:  mov    -0xc(%ebp),%edx
085be31c +0x124:  mov    0x8(%ebp),%ecx
085be31f +0x127:  mov    %edx,%eax
085be321 +0x129:  add    %eax,%eax
085be323 +0x12b:  add    %edx,%eax
085be325 +0x12d:  shl    $0x3,%eax
085be328 +0x130:  lea    (%ecx,%eax,1),%eax
085be32b +0x133:  add    $0x78,%eax
085be32e +0x136:  mov    (%eax),%eax
085be330 +0x138:  mov    %eax,(%esp)
085be333 +0x13b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085be338 +0x140:  movzwl %ax,%edx
085be33b +0x143:  mov    0xc(%ebp),%eax
085be33e +0x146:  mov    %edx,0x4(%esp)
085be342 +0x14a:  mov    %eax,(%esp)
085be345 +0x14d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085be34a +0x152:  mov    0xc(%ebp),%eax
085be34d +0x155:  mov    -0x14(%ebp),%edx
085be350 +0x158:  mov    %edx,0x4(%esp)
085be354 +0x15c:  mov    %eax,(%esp)
085be357 +0x15f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085be35c +0x164:  cmpb   $0x0,-0xd(%ebp)
085be360 +0x168:  je     085be369 <+0x171>
085be362 +0x16a:  mov    $0x1,%eax
085be367 +0x16f:  jmp    085be36e <+0x176>
085be369 +0x171:  mov    $0x0,%eax
085be36e +0x176:  mov    0xc(%ebp),%edx
085be371 +0x179:  mov    %eax,0x4(%esp)
085be375 +0x17d:  mov    %edx,(%esp)
085be378 +0x180:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085be37d +0x185:  jmp    085be380 <+0x188>
085be37f +0x187:  nop
085be380 +0x188:  addl   $0x1,-0xc(%ebp)
085be384 +0x18c:  cmpl   $0x3,-0xc(%ebp)
085be388 +0x190:  setle  %al
085be38b +0x193:  test   %al,%al
085be38d +0x195:  jne    085be260 <+0x68>
085be393 +0x19b:  add    $0x20,%esp
085be396 +0x19e:  pop    %ebx
085be397 +0x19f:  pop    %esi
085be398 +0x1a0:  pop    %ebp
085be399 +0x1a1:  ret
```

## 反编译 C

```c
// CParty::makeBestClearTimePacket @ 0x85be1f8

/* CParty::makeBestClearTimePacket(PacketGuard&, int) */

void __thiscall CParty::makeBestClearTimePacket(CParty *this,PacketGuard *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BestClearTime *pBVar4;
  uint uVar5;
  int local_18;
  int local_10;
  
  cVar1 = CBattle_Field::isQuestMaze((CBattle_Field *)(this + 0xb24));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(cVar1 != '\0'));
  iVar2 = get_member_count(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
      iVar3 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
      pBVar4 = (BestClearTime *)
               CUser::GetCharacExpandData(*(CUser **)(this + local_10 * 0x18 + 0x78),0x12);
      local_18 = BestClearTime::getBestClearTime(pBVar4,iVar3,iVar2);
      pBVar4 = (BestClearTime *)
               CUser::GetCharacExpandData(*(CUser **)(this + local_10 * 0x18 + 0x78),0x12);
      cVar1 = BestClearTime::checkNewRecord(pBVar4);
      if (local_18 == 0) {
        local_18 = param_2;
      }
      uVar5 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar5 & 0xffff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_18);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(cVar1 != '\0'));
    }
  }
  return;
}
```

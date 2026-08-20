# _onFinishStage

`_ZN8WongWork11CDeathTower14_onFinishStageEv`

`WongWork::CDeathTower::_onFinishStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467cc2  _ZN8WongWork11CDeathTower14_onFinishStageEv
#           WongWork::CDeathTower::_onFinishStage()
# range [0x08467cc2, 0x08467dff]
08467cc2 +0x000:  push   %ebp
08467cc3 +0x001:  mov    %esp,%ebp
08467cc5 +0x003:  push   %ebx
08467cc6 +0x004:  sub    $0x34,%esp
08467cc9 +0x007:  mov    0x8(%ebp),%eax
08467ccc +0x00a:  add    $0x14,%eax
08467ccf +0x00d:  mov    %eax,(%esp)
08467cd2 +0x010:  call   08461c40 <_ZN8WongWork11CDeathTower6CStage13onFinishStageEv>  ; WongWork::CDeathTower::CStage::onFinishStage()
08467cd7 +0x015:  mov    0x8(%ebp),%eax
08467cda +0x018:  add    $0x14,%eax
08467cdd +0x01b:  mov    %eax,(%esp)
08467ce0 +0x01e:  call   082345fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ca4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ca4
08467ce5 +0x023:  mov    0x8(%ebp),%edx
08467ce8 +0x026:  add    $0x110,%edx
08467cee +0x02c:  mov    %eax,0x4(%esp)
08467cf2 +0x030:  mov    %edx,(%esp)
08467cf5 +0x033:  call   08469bb2 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x295>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x295
08467cfa +0x038:  movl   $0x0,-0x10(%ebp)
08467d01 +0x03f:  jmp    08467deb <+0x129>
08467d06 +0x044:  movl   $0x0,-0xc(%ebp)
08467d0d +0x04b:  mov    0x8(%ebp),%eax
08467d10 +0x04e:  mov    (%eax),%eax
08467d12 +0x050:  mov    -0x10(%ebp),%edx
08467d15 +0x053:  mov    %edx,0x4(%esp)
08467d19 +0x057:  mov    %eax,(%esp)
08467d1c +0x05a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08467d21 +0x05f:  mov    %eax,-0xc(%ebp)
08467d24 +0x062:  cmpl   $0x0,-0xc(%ebp)
08467d28 +0x066:  je     08467d45 <+0x83>
08467d2a +0x068:  mov    0x8(%ebp),%eax
08467d2d +0x06b:  mov    (%eax),%eax
08467d2f +0x06d:  mov    -0x10(%ebp),%edx
08467d32 +0x070:  mov    %edx,0x4(%esp)
08467d36 +0x074:  mov    %eax,(%esp)
08467d39 +0x077:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08467d3e +0x07c:  xor    $0x1,%eax
08467d41 +0x07f:  test   %al,%al
08467d43 +0x081:  je     08467d4c <+0x8a>
08467d45 +0x083:  mov    $0x1,%eax
08467d4a +0x088:  jmp    08467d51 <+0x8f>
08467d4c +0x08a:  mov    $0x0,%eax
08467d51 +0x08f:  test   %al,%al
08467d53 +0x091:  jne    08467de6 <+0x124>
08467d59 +0x097:  mov    0x8(%ebp),%eax
08467d5c +0x09a:  add    $0x14,%eax
08467d5f +0x09d:  mov    %eax,(%esp)
08467d62 +0x0a0:  call   082345fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ca4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ca4
08467d67 +0x0a5:  cmp    $0x176f,%eax
08467d6c +0x0aa:  setbe  %al
08467d6f +0x0ad:  test   %al,%al
08467d71 +0x0af:  je     08467dad <+0xeb>
08467d73 +0x0b1:  mov    -0xc(%ebp),%eax
08467d76 +0x0b4:  mov    %eax,(%esp)
08467d79 +0x0b7:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08467d7e +0x0bc:  movl   $0x0,0x14(%esp)
08467d86 +0x0c4:  movl   $0x0,0x10(%esp)
08467d8e +0x0cc:  movl   $0x1,0xc(%esp)
08467d96 +0x0d4:  movl   $0x19a,0x8(%esp)
08467d9e +0x0dc:  mov    -0xc(%ebp),%edx
08467da1 +0x0df:  mov    %edx,0x4(%esp)
08467da5 +0x0e3:  mov    %eax,(%esp)
08467da8 +0x0e6:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08467dad +0x0eb:  mov    0x8(%ebp),%eax
08467db0 +0x0ee:  add    $0x14,%eax
08467db3 +0x0f1:  mov    %eax,(%esp)
08467db6 +0x0f4:  call   08469b0c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1ef>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1ef
08467dbb +0x0f9:  mov    %eax,%ebx
08467dbd +0x0fb:  mov    -0xc(%ebp),%eax
08467dc0 +0x0fe:  mov    %eax,(%esp)
08467dc3 +0x101:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08467dc8 +0x106:  movl   $0x0,0xc(%esp)
08467dd0 +0x10e:  mov    %ebx,0x8(%esp)
08467dd4 +0x112:  movl   $0x1,0x4(%esp)
08467ddc +0x11a:  mov    %eax,(%esp)
08467ddf +0x11d:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
08467de4 +0x122:  jmp    08467de7 <+0x125>
08467de6 +0x124:  nop
08467de7 +0x125:  addl   $0x1,-0x10(%ebp)
08467deb +0x129:  cmpl   $0x3,-0x10(%ebp)
08467def +0x12d:  setle  %al
08467df2 +0x130:  test   %al,%al
08467df4 +0x132:  jne    08467d06 <+0x44>
08467dfa +0x138:  add    $0x34,%esp
08467dfd +0x13b:  pop    %ebx
08467dfe +0x13c:  pop    %ebp
08467dff +0x13d:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_onFinishStage @ 0x8467cc2

/* WongWork::CDeathTower::_onFinishStage() */

void __thiscall WongWork::CDeathTower::_onFinishStage(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CUser *this_00;
  CHackAnalyzer *pCVar4;
  undefined4 uVar5;
  UserQuest *pUVar6;
  int local_14;
  
  CStage::onFinishStage((CStage *)(this + 0x14));
  uVar3 = CStage::getStageClearTime((CStage *)(this + 0x14));
  CPlayData::addPlayTime((CPlayData *)(this + 0x110),uVar3);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (this_00 == (CUser *)0x0) {
LAB_08467d45:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467d45;
      bVar1 = false;
    }
    if (!bVar1) {
      uVar3 = CStage::getStageClearTime((CStage *)(this + 0x14));
      if (uVar3 < 6000) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
        CHackAnalyzer::addServerHackCnt(pCVar4,this_00,0x19a,1,0,0);
      }
      uVar5 = CStage::getStageMapIndex((CStage *)(this + 0x14));
      pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(this_00);
      UserQuest::set_authen_data(pUVar6,1,uVar5,0);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```

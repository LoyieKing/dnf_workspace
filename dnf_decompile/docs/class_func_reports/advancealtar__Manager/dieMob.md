# dieMob

`_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE`

`advancealtar::Manager::dieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130bb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130bb8  _ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE
#           advancealtar::Manager::dieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&)
# range [0x08130bb8, 0x08130eb1]
08130bb8 +0x000:  push   %ebp
08130bb9 +0x001:  mov    %esp,%ebp
08130bbb +0x003:  push   %esi
08130bbc +0x004:  push   %ebx
08130bbd +0x005:  sub    $0x40,%esp
08130bc0 +0x008:  mov    0xc(%ebp),%edx
08130bc3 +0x00b:  mov    0x10(%ebp),%eax
08130bc6 +0x00e:  mov    %dx,-0x2c(%ebp)
08130bca +0x012:  mov    %ax,-0x30(%ebp)
08130bce +0x016:  cmpl   $0x0,0x8(%ebp)
08130bd2 +0x01a:  jne    08130bde <+0x26>
08130bd4 +0x01c:  mov    $0x0,%eax
08130bd9 +0x021:  jmp    08130eaa <+0x2f2>
08130bde +0x026:  mov    0x8(%ebp),%eax
08130be1 +0x029:  mov    %eax,(%esp)
08130be4 +0x02c:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08130be9 +0x031:  mov    %eax,-0x10(%ebp)
08130bec +0x034:  cmpl   $0x0,-0x10(%ebp)
08130bf0 +0x038:  je     08130ea5 <+0x2ed>
08130bf6 +0x03e:  movzwl -0x30(%ebp),%esi
08130bfa +0x042:  movzwl -0x2c(%ebp),%ebx
08130bfe +0x046:  mov    -0x10(%ebp),%eax
08130c01 +0x049:  mov    %eax,(%esp)
08130c04 +0x04c:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130c09 +0x051:  mov    0x14(%ebp),%edx
08130c0c +0x054:  mov    %edx,0xc(%esp)
08130c10 +0x058:  mov    %esi,0x8(%esp)
08130c14 +0x05c:  mov    %ebx,0x4(%esp)
08130c18 +0x060:  mov    %eax,(%esp)
08130c1b +0x063:  call   0812e1de <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE>  ; advancealtar::ProcStage::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)
08130c20 +0x068:  mov    %al,-0xa(%ebp)
08130c23 +0x06b:  cmpb   $0x0,-0xa(%ebp)
08130c27 +0x06f:  je     08130d12 <+0x15a>
08130c2d +0x075:  lea    -0x20(%ebp),%eax
08130c30 +0x078:  mov    %eax,(%esp)
08130c33 +0x07b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08130c38 +0x080:  movl   $0x26,0x8(%esp)
08130c40 +0x088:  movl   $0x0,0x4(%esp)
08130c48 +0x090:  lea    -0x20(%ebp),%eax
08130c4b +0x093:  mov    %eax,(%esp)
08130c4e +0x096:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08130c53 +0x09b:  movzwl -0x2c(%ebp),%eax
08130c57 +0x09f:  mov    %eax,0x4(%esp)
08130c5b +0x0a3:  lea    -0x20(%ebp),%eax
08130c5e +0x0a6:  mov    %eax,(%esp)
08130c61 +0x0a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08130c66 +0x0ae:  movl   $0x0,0x4(%esp)
08130c6e +0x0b6:  lea    -0x20(%ebp),%eax
08130c71 +0x0b9:  mov    %eax,(%esp)
08130c74 +0x0bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130c79 +0x0c1:  movl   $0x0,0x4(%esp)
08130c81 +0x0c9:  lea    -0x20(%ebp),%eax
08130c84 +0x0cc:  mov    %eax,(%esp)
08130c87 +0x0cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130c8c +0x0d4:  movl   $0x0,0x4(%esp)
08130c94 +0x0dc:  lea    -0x20(%ebp),%eax
08130c97 +0x0df:  mov    %eax,(%esp)
08130c9a +0x0e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130c9f +0x0e7:  movl   $0x0,0x4(%esp)
08130ca7 +0x0ef:  lea    -0x20(%ebp),%eax
08130caa +0x0f2:  mov    %eax,(%esp)
08130cad +0x0f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130cb2 +0x0fa:  movl   $0x0,0x4(%esp)
08130cba +0x102:  lea    -0x20(%ebp),%eax
08130cbd +0x105:  mov    %eax,(%esp)
08130cc0 +0x108:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130cc5 +0x10d:  movl   $0x1,0x4(%esp)
08130ccd +0x115:  lea    -0x20(%ebp),%eax
08130cd0 +0x118:  mov    %eax,(%esp)
08130cd3 +0x11b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08130cd8 +0x120:  lea    -0x20(%ebp),%eax
08130cdb +0x123:  mov    %eax,0x4(%esp)
08130cdf +0x127:  mov    0x8(%ebp),%eax
08130ce2 +0x12a:  mov    %eax,(%esp)
08130ce5 +0x12d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08130cea +0x132:  jmp    08130d07 <+0x14f>
08130cec +0x134:  mov    %edx,%ebx
08130cee +0x136:  mov    %eax,%esi
08130cf0 +0x138:  lea    -0x20(%ebp),%eax
08130cf3 +0x13b:  mov    %eax,(%esp)
08130cf6 +0x13e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130cfb +0x143:  mov    %esi,%eax
08130cfd +0x145:  mov    %ebx,%edx
08130cff +0x147:  mov    %eax,(%esp)
08130d02 +0x14a:  call   08ae3750 <_Unwind_Resume>
08130d07 +0x14f:  lea    -0x20(%ebp),%eax
08130d0a +0x152:  mov    %eax,(%esp)
08130d0d +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130d12 +0x15a:  mov    -0x10(%ebp),%eax
08130d15 +0x15d:  mov    %eax,(%esp)
08130d18 +0x160:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130d1d +0x165:  lea    -0x14(%ebp),%edx
08130d20 +0x168:  mov    %edx,0x4(%esp)
08130d24 +0x16c:  mov    %eax,(%esp)
08130d27 +0x16f:  call   0812e2c6 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE>  ; advancealtar::ProcStage::isEndStage(advancealtar::StageEndType::T&) const
08130d2c +0x174:  mov    %al,-0x9(%ebp)
08130d2f +0x177:  cmpb   $0x0,-0x9(%ebp)
08130d33 +0x17b:  je     08130d53 <+0x19b>
08130d35 +0x17d:  mov    -0x10(%ebp),%eax
08130d38 +0x180:  mov    %eax,(%esp)
08130d3b +0x183:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130d40 +0x188:  mov    %eax,(%esp)
08130d43 +0x18b:  call   0812f770 <_ZNK12advancealtar9ProcStage13isRewardStateEv>  ; advancealtar::ProcStage::isRewardState() const
08130d48 +0x190:  test   %al,%al
08130d4a +0x192:  je     08130d53 <+0x19b>
08130d4c +0x194:  mov    $0x1,%eax
08130d51 +0x199:  jmp    08130d58 <+0x1a0>
08130d53 +0x19b:  mov    $0x0,%eax
08130d58 +0x1a0:  test   %al,%al
08130d5a +0x1a2:  je     08130ea5 <+0x2ed>
08130d60 +0x1a8:  mov    -0x14(%ebp),%eax
08130d63 +0x1ab:  test   %eax,%eax
08130d65 +0x1ad:  je     08130def <+0x237>
08130d6b +0x1b3:  cmp    $0x3,%eax
08130d6e +0x1b6:  jne    08130ea5 <+0x2ed>
08130d74 +0x1bc:  mov    -0x10(%ebp),%eax
08130d77 +0x1bf:  mov    %eax,(%esp)
08130d7a +0x1c2:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130d7f +0x1c7:  mov    %eax,(%esp)
08130d82 +0x1ca:  call   0812ea00 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv>  ; advancealtar::ProcStage::endProcAllKillMonster()
08130d87 +0x1cf:  test   %al,%al
08130d89 +0x1d1:  je     08130ddf <+0x227>
08130d8b +0x1d3:  mov    -0x10(%ebp),%eax
08130d8e +0x1d6:  mov    %eax,(%esp)
08130d91 +0x1d9:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130d96 +0x1de:  movl   $0x5,0x4(%esp)
08130d9e +0x1e6:  mov    %eax,(%esp)
08130da1 +0x1e9:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130da6 +0x1ee:  mov    -0x14(%ebp),%ebx
08130da9 +0x1f1:  mov    -0x10(%ebp),%eax
08130dac +0x1f4:  mov    %eax,(%esp)
08130daf +0x1f7:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130db4 +0x1fc:  mov    %ebx,0x4(%esp)
08130db8 +0x200:  mov    %eax,(%esp)
08130dbb +0x203:  call   0812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T)
08130dc0 +0x208:  movl   $0x1,0x8(%esp)
08130dc8 +0x210:  mov    -0x10(%ebp),%eax
08130dcb +0x213:  mov    %eax,0x4(%esp)
08130dcf +0x217:  mov    0x8(%ebp),%eax
08130dd2 +0x21a:  mov    %eax,(%esp)
08130dd5 +0x21d:  call   08133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>  ; advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)
08130dda +0x222:  jmp    08130ea5 <+0x2ed>
08130ddf +0x227:  mov    -0x10(%ebp),%eax
08130de2 +0x22a:  mov    %eax,(%esp)
08130de5 +0x22d:  call   081301e0 <_ZN12advancealtar12StageControl11sendMapInfoEv>  ; advancealtar::StageControl::sendMapInfo()
08130dea +0x232:  jmp    08130ea5 <+0x2ed>
08130def +0x237:  mov    -0x10(%ebp),%eax
08130df2 +0x23a:  mov    %eax,(%esp)
08130df5 +0x23d:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130dfa +0x242:  mov    %eax,(%esp)
08130dfd +0x245:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
08130e02 +0x24a:  cmp    $0x1,%eax
08130e05 +0x24d:  sete   %al
08130e08 +0x250:  test   %al,%al
08130e0a +0x252:  je     08130e56 <+0x29e>
08130e0c +0x254:  mov    -0x10(%ebp),%eax
08130e0f +0x257:  mov    %eax,(%esp)
08130e12 +0x25a:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130e17 +0x25f:  movl   $0x5,0x4(%esp)
08130e1f +0x267:  mov    %eax,(%esp)
08130e22 +0x26a:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130e27 +0x26f:  mov    -0x10(%ebp),%eax
08130e2a +0x272:  mov    %eax,(%esp)
08130e2d +0x275:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130e32 +0x27a:  mov    %eax,(%esp)
08130e35 +0x27d:  call   0812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>  ; advancealtar::ProcStage::clearStageAndReward()
08130e3a +0x282:  mov    -0x14(%ebp),%ebx
08130e3d +0x285:  mov    -0x10(%ebp),%eax
08130e40 +0x288:  mov    %eax,(%esp)
08130e43 +0x28b:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130e48 +0x290:  mov    %ebx,0x4(%esp)
08130e4c +0x294:  mov    %eax,(%esp)
08130e4f +0x297:  call   0812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T)
08130e54 +0x29c:  jmp    08130ea5 <+0x2ed>
08130e56 +0x29e:  mov    -0x10(%ebp),%eax
08130e59 +0x2a1:  mov    %eax,(%esp)
08130e5c +0x2a4:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130e61 +0x2a9:  movl   $0x6,0x4(%esp)
08130e69 +0x2b1:  mov    %eax,(%esp)
08130e6c +0x2b4:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130e71 +0x2b9:  mov    -0x14(%ebp),%ebx
08130e74 +0x2bc:  mov    -0x10(%ebp),%eax
08130e77 +0x2bf:  mov    %eax,(%esp)
08130e7a +0x2c2:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130e7f +0x2c7:  mov    %ebx,0x4(%esp)
08130e83 +0x2cb:  mov    %eax,(%esp)
08130e86 +0x2ce:  call   0812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)
08130e8b +0x2d3:  movl   $0x0,0x8(%esp)
08130e93 +0x2db:  mov    -0x10(%ebp),%eax
08130e96 +0x2de:  mov    %eax,0x4(%esp)
08130e9a +0x2e2:  mov    0x8(%ebp),%eax
08130e9d +0x2e5:  mov    %eax,(%esp)
08130ea0 +0x2e8:  call   08133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>  ; advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)
08130ea5 +0x2ed:  mov    $0x1,%eax
08130eaa +0x2f2:  add    $0x40,%esp
08130ead +0x2f5:  pop    %ebx
08130eae +0x2f6:  pop    %esi
08130eaf +0x2f7:  pop    %ebp
08130eb0 +0x2f8:  ret
08130eb1 +0x2f9:  nop
```

## 反编译 C

```c
// advancealtar::Manager::dieMob @ 0x8130bb8

/* advancealtar::Manager::dieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&) */

undefined4
advancealtar::Manager::dieMob(CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4)

{
  bool bVar1;
  char cVar2;
  ProcStage *pPVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_24 [12];
  int local_18;
  StageControl *local_14;
  char local_e;
  char local_d;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  local_14 = (StageControl *)CUser::getAdvanceAltar(param_1);
  if (local_14 == (StageControl *)0x0) {
    return 1;
  }
  pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
  local_e = ProcStage::dieMob(pPVar3,param_2,param_3,param_4);
  if (local_e != '\0') {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08130c4e to 08130ce9 has its CatchHandler @ 08130cec */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x26);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
  local_d = ProcStage::isEndStage(pPVar3,(T *)&local_18);
  if (local_d != '\0') {
    pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
    cVar2 = ProcStage::isRewardState(pPVar3);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08130d58;
    }
  }
  bVar1 = false;
LAB_08130d58:
  if (bVar1) {
    if (local_18 == 0) {
      pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
      iVar5 = ProcStage::getStageType(pPVar3);
      if (iVar5 == 1) {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,5);
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::clearStageAndReward(pPVar3);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerClearReward(uVar4,local_18);
      }
      else {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,6);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerEPLP(uVar4,local_18);
        HistoryLog::dungeonClearInfo(param_1,local_14,false);
      }
    }
    else if (local_18 == 3) {
      pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
      cVar2 = ProcStage::endProcAllKillMonster(pPVar3);
      if (cVar2 == '\0') {
        StageControl::sendMapInfo(local_14);
      }
      else {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,5);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerClearReward(uVar4,local_18);
        HistoryLog::dungeonClearInfo(param_1,local_14,true);
      }
    }
  }
  return 1;
}
```

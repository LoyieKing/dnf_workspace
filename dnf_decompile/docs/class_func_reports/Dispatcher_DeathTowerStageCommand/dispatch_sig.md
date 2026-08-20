# dispatch_sig

`_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DeathTowerStageCommand` | `0x08208a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08208a9e  _ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)
# range [0x08208a9e, 0x08208d3f]
08208a9e +0x000:  push   %ebp
08208a9f +0x001:  mov    %esp,%ebp
08208aa1 +0x003:  push   %esi
08208aa2 +0x004:  push   %ebx
08208aa3 +0x005:  sub    $0x50,%esp
08208aa6 +0x008:  mov    0xc(%ebp),%eax
08208aa9 +0x00b:  mov    %eax,(%esp)
08208aac +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08208ab1 +0x013:  cmp    $0xa,%eax
08208ab4 +0x016:  setne  %al
08208ab7 +0x019:  test   %al,%al
08208ab9 +0x01b:  je     08208ac5 <+0x27>
08208abb +0x01d:  mov    $0x0,%eax
08208ac0 +0x022:  jmp    08208d38 <+0x29a>
08208ac5 +0x027:  lea    -0x15(%ebp),%eax
08208ac8 +0x02a:  mov    %eax,0x4(%esp)
08208acc +0x02e:  mov    0x10(%ebp),%eax
08208acf +0x031:  mov    %eax,(%esp)
08208ad2 +0x034:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08208ad7 +0x039:  xor    $0x1,%eax
08208ada +0x03c:  test   %al,%al
08208adc +0x03e:  je     08208b07 <+0x69>
08208ade +0x040:  movl   $0x0,0xc(%esp)
08208ae6 +0x048:  movl   $0x0,0x8(%esp)
08208aee +0x050:  movl   $&_ZZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208af6 +0x058:  movl   $0xa3f2,(%esp)
08208afd +0x05f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208b02 +0x064:  jmp    08208d38 <+0x29a>
08208b07 +0x069:  mov    0xc(%ebp),%eax
08208b0a +0x06c:  mov    %eax,(%esp)
08208b0d +0x06f:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
08208b12 +0x074:  mov    %eax,-0x14(%ebp)
08208b15 +0x077:  cmpl   $0x0,-0x14(%ebp)
08208b19 +0x07b:  je     08208d33 <+0x295>
08208b1f +0x081:  movzbl -0x15(%ebp),%eax
08208b23 +0x085:  movzbl %al,%eax
08208b26 +0x088:  mov    %eax,0x8(%esp)
08208b2a +0x08c:  mov    0xc(%ebp),%eax
08208b2d +0x08f:  mov    %eax,0x4(%esp)
08208b31 +0x093:  mov    -0x14(%ebp),%eax
08208b34 +0x096:  mov    %eax,(%esp)
08208b37 +0x099:  call   08466150 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh>  ; WongWork::CDeathTower::handleStageCommand(CUser*, unsigned char)
08208b3c +0x09e:  xor    $0x1,%eax
08208b3f +0x0a1:  test   %al,%al
08208b41 +0x0a3:  je     08208b6c <+0xce>
08208b43 +0x0a5:  movl   $0x0,0xc(%esp)
08208b4b +0x0ad:  movl   $0x0,0x8(%esp)
08208b53 +0x0b5:  movl   $&_ZZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208b5b +0x0bd:  movl   $0xa3f9,(%esp)
08208b62 +0x0c4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208b67 +0x0c9:  jmp    08208d38 <+0x29a>
08208b6c +0x0ce:  mov    0xc(%ebp),%eax
08208b6f +0x0d1:  mov    %eax,(%esp)
08208b72 +0x0d4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08208b77 +0x0d9:  mov    %eax,-0x10(%ebp)
08208b7a +0x0dc:  cmpl   $0x0,-0x10(%ebp)
08208b7e +0x0e0:  je     08208d33 <+0x295>
08208b84 +0x0e6:  movzbl -0x15(%ebp),%eax
08208b88 +0x0ea:  cmp    $0x2,%al
08208b8a +0x0ec:  jne    08208d33 <+0x295>
08208b90 +0x0f2:  mov    -0x14(%ebp),%eax
08208b93 +0x0f5:  mov    %eax,(%esp)
08208b96 +0x0f8:  call   0823461e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cc8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cc8
08208b9b +0x0fd:  mov    %eax,(%esp)
08208b9e +0x100:  call   08461c40 <_ZN8WongWork11CDeathTower6CStage13onFinishStageEv>  ; WongWork::CDeathTower::CStage::onFinishStage()
08208ba3 +0x105:  movl   $0x0,-0xc(%ebp)
08208baa +0x10c:  jmp    08208d24 <+0x286>
08208baf +0x111:  mov    -0xc(%ebp),%edx
08208bb2 +0x114:  lea    -0x1e(%ebp),%eax
08208bb5 +0x117:  add    %edx,%edx
08208bb7 +0x119:  add    %edx,%eax
08208bb9 +0x11b:  mov    %eax,0x4(%esp)
08208bbd +0x11f:  mov    0x10(%ebp),%eax
08208bc0 +0x122:  mov    %eax,(%esp)
08208bc3 +0x125:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08208bc8 +0x12a:  xor    $0x1,%eax
08208bcb +0x12d:  test   %al,%al
08208bcd +0x12f:  je     08208bf8 <+0x15a>
08208bcf +0x131:  movl   $0x0,0xc(%esp)
08208bd7 +0x139:  movl   $0x0,0x8(%esp)
08208bdf +0x141:  movl   $&_ZZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208be7 +0x149:  movl   $0xa405,(%esp)
08208bee +0x150:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208bf3 +0x155:  jmp    08208d38 <+0x29a>
08208bf8 +0x15a:  mov    -0xc(%ebp),%eax
08208bfb +0x15d:  mov    %eax,0x4(%esp)
08208bff +0x161:  mov    -0x10(%ebp),%eax
08208c02 +0x164:  mov    %eax,(%esp)
08208c05 +0x167:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08208c0a +0x16c:  test   %al,%al
08208c0c +0x16e:  je     08208d20 <+0x282>
08208c12 +0x174:  mov    -0xc(%ebp),%eax
08208c15 +0x177:  movzwl -0x1e(%ebp,%eax,2),%eax
08208c1a +0x17c:  test   %ax,%ax
08208c1d +0x17f:  jne    08208c35 <+0x197>
08208c1f +0x181:  mov    -0x10(%ebp),%eax
08208c22 +0x184:  mov    %eax,(%esp)
08208c25 +0x187:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
08208c2a +0x18c:  test   %al,%al
08208c2c +0x18e:  je     08208c35 <+0x197>
08208c2e +0x190:  mov    $0x1,%eax
08208c33 +0x195:  jmp    08208c3a <+0x19c>
08208c35 +0x197:  mov    $0x0,%eax
08208c3a +0x19c:  test   %al,%al
08208c3c +0x19e:  je     08208c98 <+0x1fa>
08208c3e +0x1a0:  mov    -0xc(%ebp),%eax
08208c41 +0x1a3:  mov    %eax,0x4(%esp)
08208c45 +0x1a7:  mov    -0x10(%ebp),%eax
08208c48 +0x1aa:  mov    %eax,(%esp)
08208c4b +0x1ad:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08208c50 +0x1b2:  mov    %eax,%ebx
08208c52 +0x1b4:  mov    -0xc(%ebp),%eax
08208c55 +0x1b7:  mov    %eax,0x4(%esp)
08208c59 +0x1bb:  mov    -0x10(%ebp),%eax
08208c5c +0x1be:  mov    %eax,(%esp)
08208c5f +0x1c1:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08208c64 +0x1c6:  mov    %eax,(%esp)
08208c67 +0x1c9:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08208c6c +0x1ce:  movl   $0x0,0x14(%esp)
08208c74 +0x1d6:  movl   $0x0,0x10(%esp)
08208c7c +0x1de:  movl   $0x1,0xc(%esp)
08208c84 +0x1e6:  movl   $0xd5,0x8(%esp)
08208c8c +0x1ee:  mov    %ebx,0x4(%esp)
08208c90 +0x1f2:  mov    %eax,(%esp)
08208c93 +0x1f5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08208c98 +0x1fa:  mov    -0xc(%ebp),%eax
08208c9b +0x1fd:  mov    %eax,0x4(%esp)
08208c9f +0x201:  mov    -0x10(%ebp),%eax
08208ca2 +0x204:  mov    %eax,(%esp)
08208ca5 +0x207:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08208caa +0x20c:  mov    %eax,(%esp)
08208cad +0x20f:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
08208cb2 +0x214:  add    $0xb58,%eax
08208cb7 +0x219:  mov    %eax,(%esp)
08208cba +0x21c:  call   0823462a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cd4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cd4
08208cbf +0x221:  mov    -0x14(%ebp),%eax
08208cc2 +0x224:  mov    %eax,(%esp)
08208cc5 +0x227:  call   0823461e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cc8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cc8
08208cca +0x22c:  mov    %eax,(%esp)
08208ccd +0x22f:  call   082345fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ca4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ca4
08208cd2 +0x234:  mov    %eax,-0x2c(%ebp)
08208cd5 +0x237:  mov    $0x10624dd3,%edx
08208cda +0x23c:  mov    -0x2c(%ebp),%eax
08208cdd +0x23f:  mul    %edx
08208cdf +0x241:  mov    %edx,%eax
08208ce1 +0x243:  shr    $0x6,%eax
08208ce4 +0x246:  mov    %eax,%esi
08208ce6 +0x248:  mov    -0xc(%ebp),%eax
08208ce9 +0x24b:  movzwl -0x1e(%ebp,%eax,2),%eax
08208cee +0x250:  movzwl %ax,%ebx
08208cf1 +0x253:  mov    -0xc(%ebp),%eax
08208cf4 +0x256:  mov    %eax,0x4(%esp)
08208cf8 +0x25a:  mov    -0x10(%ebp),%eax
08208cfb +0x25d:  mov    %eax,(%esp)
08208cfe +0x260:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08208d03 +0x265:  add    $0x79700,%eax
08208d08 +0x26a:  movl   $0x0,0xc(%esp)
08208d10 +0x272:  mov    %esi,0x8(%esp)
08208d14 +0x276:  mov    %ebx,0x4(%esp)
08208d18 +0x27a:  mov    %eax,(%esp)
08208d1b +0x27d:  call   08684b22 <_ZN15cUserHistoryLog8MapClearEtii>  ; cUserHistoryLog::MapClear(unsigned short, int, int)
08208d20 +0x282:  addl   $0x1,-0xc(%ebp)
08208d24 +0x286:  cmpl   $0x3,-0xc(%ebp)
08208d28 +0x28a:  setle  %al
08208d2b +0x28d:  test   %al,%al
08208d2d +0x28f:  jne    08208baf <+0x111>
08208d33 +0x295:  mov    $0x0,%eax
08208d38 +0x29a:  add    $0x50,%esp
08208d3b +0x29d:  pop    %ebx
08208d3c +0x29e:  pop    %esi
08208d3d +0x29f:  pop    %ebp
08208d3e +0x2a0:  ret
08208d3f +0x2a1:  nop
```

## 反编译 C

```c
// Dispatcher_DeathTowerStageCommand::dispatch_sig @ 0x8208a9e

/* Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DeathTowerStageCommand::dispatch_sig
          (Dispatcher_DeathTowerStageCommand *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CStage *pCVar6;
  CUser *pCVar7;
  CHackAnalyzer *pCVar8;
  uint uVar9;
  ushort local_22 [4];
  uchar local_19;
  CDeathTower *local_18;
  CParty *local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 10) {
    cVar3 = PacketBuf::get_byte(param_2,&local_19);
    if (cVar3 == '\x01') {
      local_18 = (CDeathTower *)CUser::getDeathTower(param_1);
      if (local_18 != (CDeathTower *)0x0) {
        cVar3 = WongWork::CDeathTower::handleStageCommand(local_18,param_1,local_19);
        if (cVar3 != '\x01') {
          uVar5 = LineFunc(0xa3f9,
                           "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar5;
        }
        local_14 = (CParty *)CUser::GetParty(param_1);
        if ((local_14 != (CParty *)0x0) && (local_19 == '\x02')) {
          pCVar6 = (CStage *)WongWork::CDeathTower::getCStage(local_18);
          WongWork::CDeathTower::CStage::onFinishStage(pCVar6);
          for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
            cVar3 = PacketBuf::get_short(param_2,local_22 + local_10);
            if (cVar3 != '\x01') {
              uVar5 = LineFunc(0xa405,
                               "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar5;
            }
            cVar3 = CParty::checkValidUser(local_14,local_10);
            if (cVar3 != '\0') {
              if ((local_22[local_10] == 0) &&
                 (cVar3 = CParty::IsSinglePlay(local_14), cVar3 != '\0')) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                uVar5 = CParty::get_user(local_14,local_10);
                pCVar7 = (CUser *)CParty::get_user(local_14,local_10);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar7);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar5,0xd5,1,0,0);
              }
              pCVar7 = (CUser *)CParty::get_user(local_14,local_10);
              iVar4 = CUser::getDeathTower(pCVar7);
              WongWork::CDeathTower::stMapMonsterKillChecker_t::init
                        ((stMapMonsterKillChecker_t *)(iVar4 + 0xb58));
              pCVar6 = (CStage *)WongWork::CDeathTower::getCStage(local_18);
              uVar9 = WongWork::CDeathTower::CStage::getStageClearTime(pCVar6);
              uVar1 = local_22[local_10];
              iVar4 = CParty::get_user(local_14,local_10);
              cUserHistoryLog::MapClear((cUserHistoryLog *)(iVar4 + 0x79700),uVar1,uVar9 / 1000,0);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0xa3f2,
                       "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

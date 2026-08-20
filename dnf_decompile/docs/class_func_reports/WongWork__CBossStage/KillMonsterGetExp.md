# KillMonsterGetExp

`_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj`

`WongWork::CBossStage::KillMonsterGetExp(map_monster const&, unsigned int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814d300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814d300  _ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj
#           WongWork::CBossStage::KillMonsterGetExp(map_monster const&, unsigned int&)
# range [0x0814d300, 0x0814d627]
0814d300 +0x000:  push   %ebp
0814d301 +0x001:  mov    %esp,%ebp
0814d303 +0x003:  push   %esi
0814d304 +0x004:  push   %ebx
0814d305 +0x005:  sub    $0x70,%esp
0814d308 +0x008:  mov    0x8(%ebp),%eax
0814d30b +0x00b:  mov    0x4(%eax),%eax
0814d30e +0x00e:  mov    %eax,(%esp)
0814d311 +0x011:  call   08151a70 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13a5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13a5
0814d316 +0x016:  mov    %eax,-0x1c(%ebp)
0814d319 +0x019:  movl   $0x0,-0x18(%ebp)
0814d320 +0x020:  jmp    0814d60c <+0x30c>
0814d325 +0x025:  movl   $0x0,-0x14(%ebp)
0814d32c +0x02c:  mov    0x8(%ebp),%eax
0814d32f +0x02f:  mov    0x4(%eax),%eax
0814d332 +0x032:  mov    -0x18(%ebp),%edx
0814d335 +0x035:  mov    %edx,0x4(%esp)
0814d339 +0x039:  mov    %eax,(%esp)
0814d33c +0x03c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0814d341 +0x041:  mov    %eax,-0x14(%ebp)
0814d344 +0x044:  cmpl   $0x0,-0x14(%ebp)
0814d348 +0x048:  je     0814d366 <+0x66>
0814d34a +0x04a:  mov    0x8(%ebp),%eax
0814d34d +0x04d:  mov    0x4(%eax),%eax
0814d350 +0x050:  mov    -0x18(%ebp),%edx
0814d353 +0x053:  mov    %edx,0x4(%esp)
0814d357 +0x057:  mov    %eax,(%esp)
0814d35a +0x05a:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0814d35f +0x05f:  xor    $0x1,%eax
0814d362 +0x062:  test   %al,%al
0814d364 +0x064:  je     0814d36d <+0x6d>
0814d366 +0x066:  mov    $0x1,%eax
0814d36b +0x06b:  jmp    0814d372 <+0x72>
0814d36d +0x06d:  mov    $0x0,%eax
0814d372 +0x072:  test   %al,%al
0814d374 +0x074:  jne    0814d604 <+0x304>
0814d37a +0x07a:  mov    0x8(%ebp),%eax
0814d37d +0x07d:  mov    0x4(%eax),%eax
0814d380 +0x080:  mov    0xcd8(%eax),%eax
0814d386 +0x086:  cmp    $0x1,%eax
0814d389 +0x089:  je     0814d607 <+0x307>
0814d38f +0x08f:  mov    -0x14(%ebp),%eax
0814d392 +0x092:  mov    %eax,(%esp)
0814d395 +0x095:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0814d39a +0x09a:  mov    %eax,%ebx
0814d39c +0x09c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814d3a1 +0x0a1:  mov    0x10(%ebp),%edx
0814d3a4 +0x0a4:  mov    %edx,0x8(%esp)
0814d3a8 +0x0a8:  mov    %ebx,0x4(%esp)
0814d3ac +0x0ac:  mov    %eax,(%esp)
0814d3af +0x0af:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
0814d3b4 +0x0b4:  mov    0x8(%ebp),%eax
0814d3b7 +0x0b7:  mov    0xaec(%eax),%eax
0814d3bd +0x0bd:  mov    %eax,%ebx
0814d3bf +0x0bf:  mov    0xc(%ebp),%eax
0814d3c2 +0x0c2:  movzbl 0x8(%eax),%eax
0814d3c6 +0x0c6:  movsbl %al,%ecx
0814d3c9 +0x0c9:  mov    0x10(%ebp),%eax
0814d3cc +0x0cc:  mov    (%eax),%edx
0814d3ce +0x0ce:  mov    0x8(%ebp),%eax
0814d3d1 +0x0d1:  mov    0x4(%eax),%eax
0814d3d4 +0x0d4:  movl   $0x0,0x18(%esp)
0814d3dc +0x0dc:  mov    $0x3f800000,%esi
0814d3e1 +0x0e1:  mov    %esi,0x14(%esp)
0814d3e5 +0x0e5:  mov    $0x3f800000,%esi
0814d3ea +0x0ea:  mov    %esi,0x10(%esp)
0814d3ee +0x0ee:  mov    %ebx,0xc(%esp)
0814d3f2 +0x0f2:  mov    %ecx,0x8(%esp)
0814d3f6 +0x0f6:  mov    %edx,0x4(%esp)
0814d3fa +0x0fa:  mov    %eax,(%esp)
0814d3fd +0x0fd:  call   085a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>  ; CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
0814d402 +0x102:  mov    0x10(%ebp),%edx
0814d405 +0x105:  mov    %eax,(%edx)
0814d407 +0x107:  mov    0xc(%ebp),%eax
0814d40a +0x10a:  movzbl 0x8(%eax),%eax
0814d40e +0x10e:  cmp    $0x5,%al
0814d410 +0x110:  jne    0814d471 <+0x171>
0814d412 +0x112:  mov    0x10(%ebp),%eax
0814d415 +0x115:  mov    (%eax),%eax
0814d417 +0x117:  mov    $0x0,%edx
0814d41c +0x11c:  mov    %eax,-0x40(%ebp)
0814d41f +0x11f:  mov    %edx,-0x3c(%ebp)
0814d422 +0x122:  fildll -0x40(%ebp)
0814d425 +0x125:  fstps  -0x50(%ebp)
0814d428 +0x128:  mov    0x8(%ebp),%eax
0814d42b +0x12b:  mov    0x9f0(%eax),%eax
0814d431 +0x131:  mov    %eax,(%esp)
0814d434 +0x134:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0814d439 +0x139:  mov    %eax,%ebx
0814d43b +0x13b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814d440 +0x140:  mov    %ebx,0x4(%esp)
0814d444 +0x144:  mov    %eax,(%esp)
0814d447 +0x147:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
0814d44c +0x14c:  flds   (%eax)
0814d44e +0x14e:  fmuls  -0x50(%ebp)
0814d451 +0x151:  fnstcw -0x42(%ebp)
0814d454 +0x154:  movzwl -0x42(%ebp),%eax
0814d458 +0x158:  mov    $0xc,%ah
0814d45a +0x15a:  mov    %ax,-0x44(%ebp)
0814d45e +0x15e:  fldcw  -0x44(%ebp)
0814d461 +0x161:  fistpl -0x48(%ebp)
0814d464 +0x164:  fldcw  -0x42(%ebp)
0814d467 +0x167:  mov    -0x48(%ebp),%eax
0814d46a +0x16a:  mov    %eax,%edx
0814d46c +0x16c:  mov    0x10(%ebp),%eax
0814d46f +0x16f:  mov    %edx,(%eax)
0814d471 +0x171:  mov    0x10(%ebp),%eax
0814d474 +0x174:  mov    (%eax),%eax
0814d476 +0x176:  mov    $0x0,%edx
0814d47b +0x17b:  mov    %eax,-0x40(%ebp)
0814d47e +0x17e:  mov    %edx,-0x3c(%ebp)
0814d481 +0x181:  fildll -0x40(%ebp)
0814d484 +0x184:  fstps  -0x4c(%ebp)
0814d487 +0x187:  mov    0x8(%ebp),%eax
0814d48a +0x18a:  mov    0x9f0(%eax),%eax
0814d490 +0x190:  mov    %eax,(%esp)
0814d493 +0x193:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0814d498 +0x198:  mov    %eax,%ebx
0814d49a +0x19a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814d49f +0x19f:  mov    %ebx,0x4(%esp)
0814d4a3 +0x1a3:  mov    %eax,(%esp)
0814d4a6 +0x1a6:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
0814d4ab +0x1ab:  flds   0xc84(%eax)
0814d4b1 +0x1b1:  fmuls  -0x4c(%ebp)
0814d4b4 +0x1b4:  fnstcw -0x42(%ebp)
0814d4b7 +0x1b7:  movzwl -0x42(%ebp),%eax
0814d4bb +0x1bb:  mov    $0xc,%ah
0814d4bd +0x1bd:  mov    %ax,-0x44(%ebp)
0814d4c1 +0x1c1:  fldcw  -0x44(%ebp)
0814d4c4 +0x1c4:  fistpl -0x48(%ebp)
0814d4c7 +0x1c7:  fldcw  -0x42(%ebp)
0814d4ca +0x1ca:  mov    -0x48(%ebp),%eax
0814d4cd +0x1cd:  mov    %eax,%edx
0814d4cf +0x1cf:  mov    0x10(%ebp),%eax
0814d4d2 +0x1d2:  mov    %edx,(%eax)
0814d4d4 +0x1d4:  lea    -0x24(%ebp),%eax
0814d4d7 +0x1d7:  mov    %eax,(%esp)
0814d4da +0x1da:  call   08151a56 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x138b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x138b
0814d4df +0x1df:  mov    0x10(%ebp),%eax
0814d4e2 +0x1e2:  mov    (%eax),%eax
0814d4e4 +0x1e4:  mov    %eax,-0x24(%ebp)
0814d4e7 +0x1e7:  mov    0x8(%ebp),%eax
0814d4ea +0x1ea:  mov    0x4(%eax),%eax
0814d4ed +0x1ed:  lea    -0x24(%ebp),%edx
0814d4f0 +0x1f0:  mov    %edx,0x8(%esp)
0814d4f4 +0x1f4:  mov    -0x14(%ebp),%edx
0814d4f7 +0x1f7:  mov    %edx,0x4(%esp)
0814d4fb +0x1fb:  mov    %eax,(%esp)
0814d4fe +0x1fe:  call   085a2488 <_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData>  ; CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&)
0814d503 +0x203:  mov    0x10(%ebp),%edx
0814d506 +0x206:  mov    %eax,(%edx)
0814d508 +0x208:  mov    0x10(%ebp),%eax
0814d50b +0x20b:  mov    (%eax),%edx
0814d50d +0x20d:  mov    -0x14(%ebp),%eax
0814d510 +0x210:  movl   $0x0,0x8(%esp)
0814d518 +0x218:  mov    %edx,0x4(%esp)
0814d51c +0x21c:  mov    %eax,(%esp)
0814d51f +0x21f:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
0814d524 +0x224:  movl   $0x0,-0x28(%ebp)
0814d52b +0x22b:  movl   $0x0,-0x2c(%ebp)
0814d532 +0x232:  movl   $0xb,-0x10(%ebp)
0814d539 +0x239:  mov    0xc(%ebp),%eax
0814d53c +0x23c:  movzbl 0x8(%eax),%eax
0814d540 +0x240:  cmp    $0x5,%al
0814d542 +0x242:  jne    0814d54b <+0x24b>
0814d544 +0x244:  movl   $0xc,-0x10(%ebp)
0814d54b +0x24b:  mov    0xc(%ebp),%eax
0814d54e +0x24e:  mov    0xc(%eax),%edx
0814d551 +0x251:  mov    0x10(%ebp),%eax
0814d554 +0x254:  mov    (%eax),%eax
0814d556 +0x256:  movl   $0x0,0x18(%esp)
0814d55e +0x25e:  mov    %edx,0x14(%esp)
0814d562 +0x262:  mov    -0x10(%ebp),%edx
0814d565 +0x265:  mov    %edx,0x10(%esp)
0814d569 +0x269:  lea    -0x2c(%ebp),%edx
0814d56c +0x26c:  mov    %edx,0xc(%esp)
0814d570 +0x270:  lea    -0x28(%ebp),%edx
0814d573 +0x273:  mov    %edx,0x8(%esp)
0814d577 +0x277:  mov    %eax,0x4(%esp)
0814d57b +0x27b:  mov    -0x14(%ebp),%eax
0814d57e +0x27e:  mov    %eax,(%esp)
0814d581 +0x281:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
0814d586 +0x286:  test   %al,%al
0814d588 +0x288:  je     0814d5ad <+0x2ad>
0814d58a +0x28a:  movl   $0x1,0xc(%esp)
0814d592 +0x292:  movl   $0x2,0x8(%esp)
0814d59a +0x29a:  movl   $0x2,0x4(%esp)
0814d5a2 +0x2a2:  mov    -0x14(%ebp),%eax
0814d5a5 +0x2a5:  mov    %eax,(%esp)
0814d5a8 +0x2a8:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0814d5ad +0x2ad:  movl   $0x1,-0xc(%ebp)
0814d5b4 +0x2b4:  mov    0xc(%ebp),%eax
0814d5b7 +0x2b7:  movzbl 0x8(%eax),%eax
0814d5bb +0x2bb:  cmp    $0x4,%al
0814d5bd +0x2bd:  jle    0814d5d1 <+0x2d1>
0814d5bf +0x2bf:  mov    0xc(%ebp),%eax
0814d5c2 +0x2c2:  movzbl 0x8(%eax),%eax
0814d5c6 +0x2c6:  cmp    $0x8,%al
0814d5c8 +0x2c8:  jg     0814d5d1 <+0x2d1>
0814d5ca +0x2ca:  movl   $0x2,-0xc(%ebp)
0814d5d1 +0x2d1:  mov    0xc(%ebp),%eax
0814d5d4 +0x2d4:  mov    0xc(%eax),%ebx
0814d5d7 +0x2d7:  mov    0x8(%ebp),%eax
0814d5da +0x2da:  mov    0x9f0(%eax),%eax
0814d5e0 +0x2e0:  mov    %eax,(%esp)
0814d5e3 +0x2e3:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0814d5e8 +0x2e8:  mov    -0xc(%ebp),%edx
0814d5eb +0x2eb:  mov    %edx,0xc(%esp)
0814d5ef +0x2ef:  mov    %ebx,0x8(%esp)
0814d5f3 +0x2f3:  mov    %eax,0x4(%esp)
0814d5f7 +0x2f7:  mov    -0x14(%ebp),%eax
0814d5fa +0x2fa:  mov    %eax,(%esp)
0814d5fd +0x2fd:  call   0866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>  ; CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
0814d602 +0x302:  jmp    0814d608 <+0x308>
0814d604 +0x304:  nop
0814d605 +0x305:  jmp    0814d608 <+0x308>
0814d607 +0x307:  nop
0814d608 +0x308:  addl   $0x1,-0x18(%ebp)
0814d60c +0x30c:  cmpl   $0x3,-0x18(%ebp)
0814d610 +0x310:  setle  %al
0814d613 +0x313:  test   %al,%al
0814d615 +0x315:  jne    0814d325 <+0x25>
0814d61b +0x31b:  mov    $0x1,%eax
0814d620 +0x320:  add    $0x70,%esp
0814d623 +0x323:  pop    %ebx
0814d624 +0x324:  pop    %esi
0814d625 +0x325:  pop    %ebp
0814d626 +0x326:  ret
0814d627 +0x327:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::KillMonsterGetExp @ 0x814d300

/* WongWork::CBossStage::KillMonsterGetExp(map_monster const&, unsigned int&) */

undefined4 __thiscall
WongWork::CBossStage::KillMonsterGetExp(CBossStage *this,map_monster *param_1,uint *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CDataManager *pCVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [2];
  undefined4 local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = CParty::getMemberLevelGap(*(CParty **)(this + 4));
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_18 = (CUserCharacInfo *)0x0;
    local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_1c);
    if ((local_18 == (CUserCharacInfo *)0x0) ||
       (cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c), cVar3 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) && (*(int *)(*(int *)(this + 4) + 0xcd8) != 1)) {
      iVar4 = CUserCharacInfo::get_charac_level(local_18);
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(pCVar5,iVar4,param_2);
      uVar6 = CParty::getMonsterTotalExp
                        (*(CParty **)(this + 4),*param_2,(char)param_1[8],*(int *)(this + 0xaec),1.0
                         ,1.0,false);
      *param_2 = uVar6;
      if (param_1[8] == (map_monster)0x5) {
        uVar6 = *param_2;
        uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
        pCVar5 = (CDataManager *)G_CDataManager();
        pfVar8 = (float *)CDataManager::GetTowerScript(pCVar5,uVar7);
        *param_2 = (int)ROUND(*pfVar8 * (float)uVar6);
      }
      uVar6 = *param_2;
      uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      pCVar5 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::GetTowerScript(pCVar5,uVar7);
      *param_2 = (int)ROUND(*(float *)(iVar4 + 0xc84) * (float)uVar6);
      STGainedEachExpData::STGainedEachExpData((STGainedEachExpData *)local_28);
      local_28[0] = *param_2;
      uVar6 = CParty::sumGainedEachExp
                        (*(CParty **)(this + 4),(CUser *)local_18,(STGainedEachExpData *)local_28);
      *param_2 = uVar6;
      CUserCharacInfo::calcHelpAbuseRatio((uint)local_18,SUB41(*param_2,0));
      local_2c = 0;
      local_30 = 0;
      local_14 = 0xb;
      if (param_1[8] == (map_monster)0x5) {
        local_14 = 0xc;
      }
      cVar3 = CUser::gain_exp_sp((CUser *)local_18,*param_2,&local_2c,&local_30,local_14,
                                 *(undefined4 *)(param_1 + 0xc),0);
      if (cVar3 != '\0') {
        CUser::SendNotiPacket((CUser *)local_18,2,2,1);
      }
      local_10 = 1;
      if (('\x04' < (char)param_1[8]) && ((char)param_1[8] < '\t')) {
        local_10 = 2;
      }
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      uVar9 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      CUser::CheckQuestMonster((CUser *)local_18,uVar9,uVar1,local_10);
    }
  }
  return 1;
}
```

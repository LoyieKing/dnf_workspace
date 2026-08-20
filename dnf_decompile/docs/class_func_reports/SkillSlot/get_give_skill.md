# get_give_skill

`_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE`

`SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860714a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860714a  _ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE
#           SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0860714a, 0x0860745f]
0860714a +0x000:  push   %ebp
0860714b +0x001:  mov    %esp,%ebp
0860714d +0x003:  push   %edi
0860714e +0x004:  push   %esi
0860714f +0x005:  push   %ebx
08607150 +0x006:  sub    $0x5c,%esp
08607153 +0x009:  cmpl   $0x0,0xc(%ebp)
08607157 +0x00d:  jns    08607163 <+0x19>
08607159 +0x00f:  mov    $0xffffffff,%ebx
0860715e +0x014:  jmp    08607452 <+0x308>
08607163 +0x019:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08607168 +0x01e:  mov    %eax,(%esp)
0860716b +0x021:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08607170 +0x026:  test   %al,%al
08607172 +0x028:  je     086071de <+0x94>
08607174 +0x02a:  mov    0x18(%ebp),%eax
08607177 +0x02d:  mov    %eax,(%esp)
0860717a +0x030:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0860717f +0x035:  mov    0x8(%ebp),%eax
08607182 +0x038:  mov    (%eax),%eax
08607184 +0x03a:  mov    %eax,(%esp)
08607187 +0x03d:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0860718c +0x042:  movsbl %al,%edi
0860718f +0x045:  mov    0x8(%ebp),%eax
08607192 +0x048:  mov    (%eax),%eax
08607194 +0x04a:  mov    %eax,(%esp)
08607197 +0x04d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0860719c +0x052:  movsbl %al,%esi
0860719f +0x055:  mov    0x8(%ebp),%eax
086071a2 +0x058:  mov    (%eax),%eax
086071a4 +0x05a:  mov    %eax,(%esp)
086071a7 +0x05d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086071ac +0x062:  mov    %eax,%ebx
086071ae +0x064:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086071b3 +0x069:  lea    0xa800(%eax),%edx
086071b9 +0x06f:  mov    0x18(%ebp),%eax
086071bc +0x072:  mov    %eax,0x10(%esp)
086071c0 +0x076:  mov    %edi,0xc(%esp)
086071c4 +0x07a:  mov    %esi,0x8(%esp)
086071c8 +0x07e:  mov    %ebx,0x4(%esp)
086071cc +0x082:  mov    %edx,(%esp)
086071cf +0x085:  call   08a5e178 <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE>  ; PvPSkillTreeParameterScript::getGiveSkill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
086071d4 +0x08a:  mov    $0x1,%ebx
086071d9 +0x08f:  jmp    08607452 <+0x308>
086071de +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086071e3 +0x099:  mov    0x14(%eax),%eax
086071e6 +0x09c:  mov    0xc(%ebp),%edx
086071e9 +0x09f:  imul   $0x7dc,%edx,%edx
086071ef +0x0a5:  add    $0x240,%edx
086071f5 +0x0ab:  add    %edx,%eax
086071f7 +0x0ad:  mov    %eax,0x4(%esp)
086071fb +0x0b1:  mov    0x18(%ebp),%eax
086071fe +0x0b4:  mov    %eax,(%esp)
08607201 +0x0b7:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08607206 +0x0bc:  lea    -0x38(%ebp),%eax
08607209 +0x0bf:  mov    %eax,(%esp)
0860720c +0x0c2:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08607211 +0x0c7:  movb   $0x1,-0x19(%ebp)
08607215 +0x0cb:  cmpl   $0x0,0x14(%ebp)
08607219 +0x0cf:  jne    08607258 <+0x10e>
0860721b +0x0d1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08607220 +0x0d6:  mov    0x14(%eax),%edx
08607223 +0x0d9:  mov    0xc(%ebp),%eax
08607226 +0x0dc:  imul   $0x7dc,%eax,%eax
0860722c +0x0e2:  add    %eax,%edx
0860722e +0x0e4:  movl   $0x1,0x10(%esp)
08607236 +0x0ec:  lea    -0x38(%ebp),%eax
08607239 +0x0ef:  mov    %eax,0xc(%esp)
0860723d +0x0f3:  mov    0x14(%ebp),%eax
08607240 +0x0f6:  mov    %eax,0x8(%esp)
08607244 +0x0fa:  mov    0x10(%ebp),%eax
08607247 +0x0fd:  mov    %eax,0x4(%esp)
0860724b +0x101:  mov    %edx,(%esp)
0860724e +0x104:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08607253 +0x109:  mov    %al,-0x19(%ebp)
08607256 +0x10c:  jmp    08607293 <+0x149>
08607258 +0x10e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860725d +0x113:  mov    0x14(%eax),%edx
08607260 +0x116:  mov    0xc(%ebp),%eax
08607263 +0x119:  imul   $0x7dc,%eax,%eax
08607269 +0x11f:  add    %eax,%edx
0860726b +0x121:  movl   $0x0,0x10(%esp)
08607273 +0x129:  lea    -0x38(%ebp),%eax
08607276 +0x12c:  mov    %eax,0xc(%esp)
0860727a +0x130:  mov    0x14(%ebp),%eax
0860727d +0x133:  mov    %eax,0x8(%esp)
08607281 +0x137:  mov    0x10(%ebp),%eax
08607284 +0x13a:  mov    %eax,0x4(%esp)
08607288 +0x13e:  mov    %edx,(%esp)
0860728b +0x141:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08607290 +0x146:  mov    %al,-0x19(%ebp)
08607293 +0x149:  movzbl -0x19(%ebp),%eax
08607297 +0x14d:  xor    $0x1,%eax
0860729a +0x150:  test   %al,%al
0860729c +0x152:  je     086072a8 <+0x15e>
0860729e +0x154:  mov    $0xffffffff,%ebx
086072a3 +0x159:  jmp    08607447 <+0x2fd>
086072a8 +0x15e:  lea    -0x2c(%ebp),%eax
086072ab +0x161:  lea    -0x38(%ebp),%edx
086072ae +0x164:  mov    %edx,0x4(%esp)
086072b2 +0x168:  mov    %eax,(%esp)
086072b5 +0x16b:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086072ba +0x170:  sub    $0x4,%esp
086072bd +0x173:  lea    -0x2c(%ebp),%eax
086072c0 +0x176:  mov    %eax,0x4(%esp)
086072c4 +0x17a:  lea    -0x3c(%ebp),%eax
086072c7 +0x17d:  mov    %eax,(%esp)
086072ca +0x180:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
086072cf +0x185:  lea    -0x28(%ebp),%eax
086072d2 +0x188:  lea    -0x38(%ebp),%edx
086072d5 +0x18b:  mov    %edx,0x4(%esp)
086072d9 +0x18f:  mov    %eax,(%esp)
086072dc +0x192:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086072e1 +0x197:  sub    $0x4,%esp
086072e4 +0x19a:  lea    -0x28(%ebp),%eax
086072e7 +0x19d:  mov    %eax,0x4(%esp)
086072eb +0x1a1:  lea    -0x40(%ebp),%eax
086072ee +0x1a4:  mov    %eax,(%esp)
086072f1 +0x1a7:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
086072f6 +0x1ac:  jmp    0860740b <+0x2c1>
086072fb +0x1b1:  lea    -0x44(%ebp),%eax
086072fe +0x1b4:  mov    0x18(%ebp),%edx
08607301 +0x1b7:  mov    %edx,0x4(%esp)
08607305 +0x1bb:  mov    %eax,(%esp)
08607308 +0x1be:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0860730d +0x1c3:  sub    $0x4,%esp
08607310 +0x1c6:  lea    -0x48(%ebp),%eax
08607313 +0x1c9:  mov    0x18(%ebp),%edx
08607316 +0x1cc:  mov    %edx,0x4(%esp)
0860731a +0x1d0:  mov    %eax,(%esp)
0860731d +0x1d3:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08607322 +0x1d8:  sub    $0x4,%esp
08607325 +0x1db:  jmp    08607391 <+0x247>
08607327 +0x1dd:  lea    -0x44(%ebp),%eax
0860732a +0x1e0:  mov    %eax,(%esp)
0860732d +0x1e3:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08607332 +0x1e8:  mov    (%eax),%ebx
08607334 +0x1ea:  lea    -0x3c(%ebp),%eax
08607337 +0x1ed:  mov    %eax,(%esp)
0860733a +0x1f0:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0860733f +0x1f5:  mov    (%eax),%eax
08607341 +0x1f7:  cmp    %eax,%ebx
08607343 +0x1f9:  sete   %al
08607346 +0x1fc:  test   %al,%al
08607348 +0x1fe:  je     08607386 <+0x23c>
0860734a +0x200:  lea    -0x44(%ebp),%eax
0860734d +0x203:  mov    %eax,(%esp)
08607350 +0x206:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08607355 +0x20b:  mov    %eax,%ebx
08607357 +0x20d:  lea    -0x3c(%ebp),%eax
0860735a +0x210:  mov    %eax,(%esp)
0860735d +0x213:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08607362 +0x218:  lea    0x4(%eax),%esi
08607365 +0x21b:  lea    -0x44(%ebp),%eax
08607368 +0x21e:  mov    %eax,(%esp)
0860736b +0x221:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08607370 +0x226:  add    $0x4,%eax
08607373 +0x229:  mov    %esi,0x4(%esp)
08607377 +0x22d:  mov    %eax,(%esp)
0860737a +0x230:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0860737f +0x235:  mov    (%eax),%eax
08607381 +0x237:  mov    %eax,0x4(%ebx)
08607384 +0x23a:  jmp    086073a7 <+0x25d>
08607386 +0x23c:  lea    -0x44(%ebp),%eax
08607389 +0x23f:  mov    %eax,(%esp)
0860738c +0x242:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08607391 +0x247:  lea    -0x48(%ebp),%eax
08607394 +0x24a:  mov    %eax,0x4(%esp)
08607398 +0x24e:  lea    -0x44(%ebp),%eax
0860739b +0x251:  mov    %eax,(%esp)
0860739e +0x254:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086073a3 +0x259:  test   %al,%al
086073a5 +0x25b:  jne    08607327 <+0x1dd>
086073a7 +0x25d:  lea    -0x48(%ebp),%eax
086073aa +0x260:  mov    %eax,0x4(%esp)
086073ae +0x264:  lea    -0x44(%ebp),%eax
086073b1 +0x267:  mov    %eax,(%esp)
086073b4 +0x26a:  call   081bab8c <_GLOBAL__I_correctQuestIds+0x34a>  ; global constructors keyed to correctQuestIds+0x34a
086073b9 +0x26f:  test   %al,%al
086073bb +0x271:  je     08607400 <+0x2b6>
086073bd +0x273:  lea    -0x3c(%ebp),%eax
086073c0 +0x276:  mov    %eax,(%esp)
086073c3 +0x279:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086073c8 +0x27e:  lea    0x4(%eax),%ebx
086073cb +0x281:  lea    -0x3c(%ebp),%eax
086073ce +0x284:  mov    %eax,(%esp)
086073d1 +0x287:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086073d6 +0x28c:  mov    %eax,%edx
086073d8 +0x28e:  lea    -0x24(%ebp),%eax
086073db +0x291:  mov    %ebx,0x8(%esp)
086073df +0x295:  mov    %edx,0x4(%esp)
086073e3 +0x299:  mov    %eax,(%esp)
086073e6 +0x29c:  call   08609439 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x10c>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x10c
086073eb +0x2a1:  sub    $0x4,%esp
086073ee +0x2a4:  lea    -0x24(%ebp),%eax
086073f1 +0x2a7:  mov    %eax,0x4(%esp)
086073f5 +0x2ab:  mov    0x18(%ebp),%eax
086073f8 +0x2ae:  mov    %eax,(%esp)
086073fb +0x2b1:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08607400 +0x2b6:  lea    -0x3c(%ebp),%eax
08607403 +0x2b9:  mov    %eax,(%esp)
08607406 +0x2bc:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0860740b +0x2c1:  lea    -0x40(%ebp),%eax
0860740e +0x2c4:  mov    %eax,0x4(%esp)
08607412 +0x2c8:  lea    -0x3c(%ebp),%eax
08607415 +0x2cb:  mov    %eax,(%esp)
08607418 +0x2ce:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0860741d +0x2d3:  test   %al,%al
0860741f +0x2d5:  jne    086072fb <+0x1b1>
08607425 +0x2db:  mov    $0x1,%ebx
0860742a +0x2e0:  jmp    08607447 <+0x2fd>
0860742c +0x2e2:  mov    %edx,%ebx
0860742e +0x2e4:  mov    %eax,%esi
08607430 +0x2e6:  lea    -0x38(%ebp),%eax
08607433 +0x2e9:  mov    %eax,(%esp)
08607436 +0x2ec:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0860743b +0x2f1:  mov    %esi,%eax
0860743d +0x2f3:  mov    %ebx,%edx
0860743f +0x2f5:  mov    %eax,(%esp)
08607442 +0x2f8:  call   08ae3750 <_Unwind_Resume>
08607447 +0x2fd:  lea    -0x38(%ebp),%eax
0860744a +0x300:  mov    %eax,(%esp)
0860744d +0x303:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607452 +0x308:  mov    %ebx,%eax
08607454 +0x30a:  lea    -0xc(%ebp),%esp
08607457 +0x30d:  add    $0x0,%esp
0860745a +0x310:  pop    %ebx
0860745b +0x311:  pop    %esi
0860745c +0x312:  pop    %edi
0860745d +0x313:  pop    %ebp
0860745e +0x314:  ret
0860745f +0x315:  nop
```

## 反编译 C

```c
// SkillSlot::get_give_skill @ 0x860714a

/* SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
SkillSlot::get_give_skill(SkillSlot *this,int param_1,int param_2,int param_3,vector *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  GameWorld *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  __normal_iterator local_4c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28 [2];
  char local_1d;
  
  if (param_1 < 0) {
    uVar8 = 0xffffffff;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      iVar4 = G_CDataManager();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,
                 (vector *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc + 0x240));
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
      local_1d = 1;
      if (param_3 == 0) {
                    /* try { // try from 0860721b to 0860741c has its CatchHandler @ 0860742c */
        iVar4 = G_CDataManager();
        local_1d = CCharacter::get_give_skill
                             ((CCharacter *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc),param_2,0,
                              (vector *)local_3c,1);
      }
      else {
        iVar4 = G_CDataManager();
        local_1d = CCharacter::get_give_skill
                             ((CCharacter *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc),param_2,
                              param_3,(vector *)local_3c,0);
      }
      if (local_1d == '\x01') {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_40,local_30);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_44,local_2c);
        while( true ) {
          bVar3 = __gnu_cxx::operator!=(local_40,local_44);
          if (!bVar3) break;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          while( true ) {
            bVar3 = __gnu_cxx::operator!=(local_48,local_4c);
            if (!bVar3) break;
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_48);
            iVar4 = *piVar7;
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_40);
            if (iVar4 == *piVar7) {
              iVar4 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_48);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_40);
              iVar6 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_48);
              piVar7 = std::max<int>((int *)(iVar6 + 4),(int *)(iVar5 + 4));
              *(int *)(iVar4 + 4) = *piVar7;
              break;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_48);
          }
          bVar3 = __gnu_cxx::operator==(local_48,local_4c);
          if (bVar3) {
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_40);
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_40);
            std::make_pair<int_const&,int_const&>(local_28,piVar7);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,
                       (pair *)local_28);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_40);
        }
        uVar8 = 1;
      }
      else {
        uVar8 = 0xffffffff;
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
    }
    else {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      PvPSkillTreeParameterScript::getGiveSkill
                ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,(int)cVar1,param_4
                );
      uVar8 = 1;
    }
  }
  return uVar8;
}
```

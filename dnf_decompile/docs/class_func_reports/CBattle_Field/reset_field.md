# reset_field

`_ZN13CBattle_Field11reset_fieldEv`

`CBattle_Field::reset_field()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a1f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a1f6  _ZN13CBattle_Field11reset_fieldEv
#           CBattle_Field::reset_field()
# range [0x0830a1f6, 0x0830a57b]
0830a1f6 +0x000:  push   %ebp
0830a1f7 +0x001:  mov    %esp,%ebp
0830a1f9 +0x003:  push   %ebx
0830a1fa +0x004:  sub    $0x34,%esp
0830a1fd +0x007:  mov    0x8(%ebp),%eax
0830a200 +0x00a:  movl   $0x0,0x194(%eax)
0830a20a +0x014:  mov    0x8(%ebp),%eax
0830a20d +0x017:  movl   $0x0,0x190(%eax)
0830a217 +0x021:  mov    0x8(%ebp),%eax
0830a21a +0x024:  mov    0x190(%eax),%edx
0830a220 +0x02a:  mov    0x8(%ebp),%eax
0830a223 +0x02d:  mov    %edx,0x18c(%eax)
0830a229 +0x033:  mov    0x8(%ebp),%eax
0830a22c +0x036:  movl   $0x0,0x18(%eax)
0830a233 +0x03d:  mov    0x8(%ebp),%eax
0830a236 +0x040:  mov    0x18(%eax),%edx
0830a239 +0x043:  mov    0x8(%ebp),%eax
0830a23c +0x046:  mov    %edx,0x14(%eax)
0830a23f +0x049:  mov    0x8(%ebp),%eax
0830a242 +0x04c:  mov    0x14(%eax),%edx
0830a245 +0x04f:  mov    0x8(%ebp),%eax
0830a248 +0x052:  mov    %edx,0x64(%eax)
0830a24b +0x055:  mov    0x8(%ebp),%eax
0830a24e +0x058:  mov    0x64(%eax),%edx
0830a251 +0x05b:  mov    0x8(%ebp),%eax
0830a254 +0x05e:  mov    %edx,0x60(%eax)
0830a257 +0x061:  mov    0x8(%ebp),%eax
0830a25a +0x064:  mov    0x60(%eax),%edx
0830a25d +0x067:  mov    0x8(%ebp),%eax
0830a260 +0x06a:  mov    %edx,0x10(%eax)
0830a263 +0x06d:  mov    0x8(%ebp),%eax
0830a266 +0x070:  mov    0x10(%eax),%edx
0830a269 +0x073:  mov    0x8(%ebp),%eax
0830a26c +0x076:  mov    %edx,0xc(%eax)
0830a26f +0x079:  mov    0x8(%ebp),%eax
0830a272 +0x07c:  mov    0xc(%eax),%edx
0830a275 +0x07f:  mov    0x8(%ebp),%eax
0830a278 +0x082:  mov    %edx,0x8(%eax)
0830a27b +0x085:  mov    0x8(%ebp),%eax
0830a27e +0x088:  mov    0x8(%eax),%edx
0830a281 +0x08b:  mov    0x8(%ebp),%eax
0830a284 +0x08e:  mov    %edx,0x4(%eax)
0830a287 +0x091:  movl   $0x0,-0xc(%ebp)
0830a28e +0x098:  jmp    0830a2d8 <+0xe2>
0830a290 +0x09a:  mov    -0xc(%ebp),%edx
0830a293 +0x09d:  mov    0x8(%ebp),%eax
0830a296 +0x0a0:  add    $0x2,%edx
0830a299 +0x0a3:  movl   $0x0,0xc(%eax,%edx,8)
0830a2a1 +0x0ab:  mov    -0xc(%ebp),%edx
0830a2a4 +0x0ae:  mov    0x8(%ebp),%eax
0830a2a7 +0x0b1:  add    $0x2,%edx
0830a2aa +0x0b4:  movl   $0x0,0x10(%eax,%edx,8)
0830a2b2 +0x0bc:  mov    -0xc(%ebp),%edx
0830a2b5 +0x0bf:  mov    0x8(%ebp),%eax
0830a2b8 +0x0c2:  add    $0x6,%edx
0830a2bb +0x0c5:  movl   $0x0,0xc(%eax,%edx,8)
0830a2c3 +0x0cd:  mov    -0xc(%ebp),%edx
0830a2c6 +0x0d0:  mov    0x8(%ebp),%eax
0830a2c9 +0x0d3:  add    $0x6,%edx
0830a2cc +0x0d6:  movl   $0x0,0x10(%eax,%edx,8)
0830a2d4 +0x0de:  addl   $0x1,-0xc(%ebp)
0830a2d8 +0x0e2:  cmpl   $0x3,-0xc(%ebp)
0830a2dc +0x0e6:  setle  %al
0830a2df +0x0e9:  test   %al,%al
0830a2e1 +0x0eb:  jne    0830a290 <+0x9a>
0830a2e3 +0x0ed:  mov    0x8(%ebp),%eax
0830a2e6 +0x0f0:  movb   $0x1,0x5c(%eax)
0830a2ea +0x0f4:  mov    0x8(%ebp),%eax
0830a2ed +0x0f7:  movl   $0x0,0x1a0(%eax)
0830a2f7 +0x101:  mov    0x8(%ebp),%eax
0830a2fa +0x104:  mov    0x1a0(%eax),%edx
0830a300 +0x10a:  mov    0x8(%ebp),%eax
0830a303 +0x10d:  mov    %edx,0x19c(%eax)
0830a309 +0x113:  mov    0x8(%ebp),%eax
0830a30c +0x116:  mov    0x19c(%eax),%edx
0830a312 +0x11c:  mov    0x8(%ebp),%eax
0830a315 +0x11f:  mov    %edx,0x198(%eax)
0830a31b +0x125:  mov    0x8(%ebp),%eax
0830a31e +0x128:  mov    0x198(%eax),%edx
0830a324 +0x12e:  mov    0x8(%ebp),%eax
0830a327 +0x131:  mov    %edx,0x70(%eax)
0830a32a +0x134:  mov    0x8(%ebp),%eax
0830a32d +0x137:  movl   $0x0,0x1a8(%eax)
0830a337 +0x141:  mov    0x8(%ebp),%eax
0830a33a +0x144:  movl   $0x0,0x188(%eax)
0830a344 +0x14e:  mov    0x8(%ebp),%eax
0830a347 +0x151:  movl   $0x0,0x1b0(%eax)
0830a351 +0x15b:  mov    0x8(%ebp),%eax
0830a354 +0x15e:  movl   $0x0,0x1b4(%eax)
0830a35e +0x168:  mov    0x8(%ebp),%eax
0830a361 +0x16b:  movb   $0x0,0x1b8(%eax)
0830a368 +0x172:  mov    0x8(%ebp),%eax
0830a36b +0x175:  movl   $0xffffffff,0x1bc(%eax)
0830a375 +0x17f:  mov    0x8(%ebp),%eax
0830a378 +0x182:  movl   $0xffffffff,0x1c0(%eax)
0830a382 +0x18c:  mov    0x8(%ebp),%eax
0830a385 +0x18f:  movl   $0xffffffff,0x1c4(%eax)
0830a38f +0x199:  mov    0x8(%ebp),%eax
0830a392 +0x19c:  movb   $0x0,0x1c8(%eax)
0830a399 +0x1a3:  mov    0x8(%ebp),%eax
0830a39c +0x1a6:  add    $0xd0,%eax
0830a3a1 +0x1ab:  mov    %eax,(%esp)
0830a3a4 +0x1ae:  call   082fe6bc <_ZN8CRidable5ClearEv>  ; CRidable::Clear()
0830a3a9 +0x1b3:  mov    0x8(%ebp),%eax
0830a3ac +0x1b6:  movb   $0x0,0x1c9(%eax)
0830a3b3 +0x1bd:  mov    0x8(%ebp),%eax
0830a3b6 +0x1c0:  movb   $0x0,0x1ce(%eax)
0830a3bd +0x1c7:  mov    0x8(%ebp),%eax
0830a3c0 +0x1ca:  movb   $0x0,0x1cf(%eax)
0830a3c7 +0x1d1:  mov    0x8(%ebp),%eax
0830a3ca +0x1d4:  add    $0x1d0,%eax
0830a3cf +0x1d9:  movl   $0x18,0x8(%esp)
0830a3d7 +0x1e1:  movl   $0x0,0x4(%esp)
0830a3df +0x1e9:  mov    %eax,(%esp)
0830a3e2 +0x1ec:  call   0807dcc0 <_init+0x5b8>
0830a3e7 +0x1f1:  mov    0x8(%ebp),%eax
0830a3ea +0x1f4:  movb   $0x0,0x1cb(%eax)
0830a3f1 +0x1fb:  mov    0x8(%ebp),%eax
0830a3f4 +0x1fe:  movb   $0x0,0x1cc(%eax)
0830a3fb +0x205:  mov    0x8(%ebp),%eax
0830a3fe +0x208:  movb   $0x0,0x1ca(%eax)
0830a405 +0x20f:  mov    0x8(%ebp),%eax
0830a408 +0x212:  add    $0x78,%eax
0830a40b +0x215:  mov    %eax,(%esp)
0830a40e +0x218:  call   08311cee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x38d3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x38d3
0830a413 +0x21d:  mov    0x8(%ebp),%eax
0830a416 +0x220:  add    $0x170,%eax
0830a41b +0x225:  mov    %eax,(%esp)
0830a41e +0x228:  call   08311d02 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x38e7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x38e7
0830a423 +0x22d:  mov    0x8(%ebp),%eax
0830a426 +0x230:  add    $0x118,%eax
0830a42b +0x235:  mov    %eax,(%esp)
0830a42e +0x238:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0830a433 +0x23d:  mov    0x8(%ebp),%eax
0830a436 +0x240:  movl   $0x0,0x124(%eax)
0830a440 +0x24a:  mov    0x8(%ebp),%eax
0830a443 +0x24d:  add    $0x17c,%eax
0830a448 +0x252:  mov    %eax,(%esp)
0830a44b +0x255:  call   08311d1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3903>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3903
0830a450 +0x25a:  mov    0x8(%ebp),%eax
0830a453 +0x25d:  mov    %eax,(%esp)
0830a456 +0x260:  call   08306d86 <_ZN13CBattle_Field18reset_blood_valuesEv>  ; CBattle_Field::reset_blood_values()
0830a45b +0x265:  mov    0x8(%ebp),%eax
0830a45e +0x268:  add    $0x2ac,%eax
0830a463 +0x26d:  mov    %eax,(%esp)
0830a466 +0x270:  call   08306d66 <_ZN13CBattle_Field11CBloodRound18reset_blood_valuesEv>  ; CBattle_Field::CBloodRound::reset_blood_values()
0830a46b +0x275:  mov    0x8(%ebp),%eax
0830a46e +0x278:  movl   $0x0,0x2b4(%eax)
0830a478 +0x282:  mov    0x8(%ebp),%eax
0830a47b +0x285:  add    $0x2b8,%eax
0830a480 +0x28a:  mov    %eax,(%esp)
0830a483 +0x28d:  call   08306ee0 <_ZN13CBattle_Field21CBloodClearRewardData5resetEv>  ; CBattle_Field::CBloodClearRewardData::reset()
0830a488 +0x292:  mov    0x8(%ebp),%eax
0830a48b +0x295:  add    $0xc84,%eax
0830a490 +0x29a:  mov    %eax,(%esp)
0830a493 +0x29d:  call   083071a6 <_ZN13CBattle_Field25CTowerOfDespairRewardData9reset_todEv>  ; CBattle_Field::CTowerOfDespairRewardData::reset_tod()
0830a498 +0x2a2:  mov    0x8(%ebp),%eax
0830a49b +0x2a5:  movzwl 0x128(%eax),%eax
0830a4a2 +0x2ac:  test   %ax,%ax
0830a4a5 +0x2af:  je     0830a4e7 <+0x2f1>
0830a4a7 +0x2b1:  mov    0x8(%ebp),%eax
0830a4aa +0x2b4:  movzwl 0x128(%eax),%eax
0830a4b1 +0x2bb:  movzwl %ax,%ebx
0830a4b4 +0x2be:  mov    0x8(%ebp),%eax
0830a4b7 +0x2c1:  mov    0x130(%eax),%ecx
0830a4bd +0x2c7:  mov    0x8(%ebp),%eax
0830a4c0 +0x2ca:  mov    0x12c(%eax),%edx
0830a4c6 +0x2d0:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0830a4cb +0x2d5:  movl   $0x0,0x10(%esp)
0830a4d3 +0x2dd:  mov    %ebx,0xc(%esp)
0830a4d7 +0x2e1:  mov    %ecx,0x8(%esp)
0830a4db +0x2e5:  mov    %edx,0x4(%esp)
0830a4df +0x2e9:  mov    %eax,(%esp)
0830a4e2 +0x2ec:  call   086b4964 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEiitb>  ; village_attacked::CVillageMonsterMgr::OnKillVillageMonster(int, int, unsigned short, bool)
0830a4e7 +0x2f1:  mov    0x8(%ebp),%eax
0830a4ea +0x2f4:  movw   $0x0,0x128(%eax)
0830a4f3 +0x2fd:  mov    0x8(%ebp),%eax
0830a4f6 +0x300:  movl   $0x0,0x12c(%eax)
0830a500 +0x30a:  mov    0x8(%ebp),%eax
0830a503 +0x30d:  movl   $0x0,0x130(%eax)
0830a50d +0x317:  mov    0x8(%ebp),%eax
0830a510 +0x31a:  movl   $0x0,0x134(%eax)
0830a51a +0x324:  mov    0x8(%ebp),%eax
0830a51d +0x327:  movb   $0x2,0x138(%eax)
0830a524 +0x32e:  mov    0x8(%ebp),%eax
0830a527 +0x331:  movb   $0x0,0x139(%eax)
0830a52e +0x338:  mov    0x8(%ebp),%eax
0830a531 +0x33b:  movb   $0x1,0x13a(%eax)
0830a538 +0x342:  mov    0x8(%ebp),%eax
0830a53b +0x345:  movb   $0x0,0x1cd(%eax)
0830a542 +0x34c:  mov    0x8(%ebp),%eax
0830a545 +0x34f:  movb   $0x0,0x23c(%eax)
0830a54c +0x356:  mov    0x8(%ebp),%eax
0830a54f +0x359:  movl   $0xffffffff,0x10c(%eax)
0830a559 +0x363:  mov    0x8(%ebp),%eax
0830a55c +0x366:  movb   $0x0,0x110(%eax)
0830a563 +0x36d:  movl   $0xff,0x4(%esp)
0830a56b +0x375:  mov    0x8(%ebp),%eax
0830a56e +0x378:  mov    %eax,(%esp)
0830a571 +0x37b:  call   082a43cc <_GLOBAL__I__ZN4CLog5this_E+0x7f3>  ; global constructors keyed to CLog::this_+0x7f3
0830a576 +0x380:  add    $0x34,%esp
0830a579 +0x383:  pop    %ebx
0830a57a +0x384:  pop    %ebp
0830a57b +0x385:  ret
```

## 反编译 C

```c
// CBattle_Field::reset_field @ 0x830a1f6

/* CBattle_Field::reset_field() */

void __thiscall CBattle_Field::reset_field(CBattle_Field *this)

{
  int local_10;
  
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(this + 400);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 100);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 2) * 8 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 2) * 8 + 0x10) = 0;
    *(undefined4 *)(this + (local_10 + 6) * 8 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 6) * 8 + 0x10) = 0;
  }
  this[0x5c] = (CBattle_Field)0x1;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(this + 0x1a0);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(this + 0x19c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x198);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  this[0x1b8] = (CBattle_Field)0x0;
  *(undefined4 *)(this + 0x1bc) = 0xffffffff;
  *(undefined4 *)(this + 0x1c0) = 0xffffffff;
  *(undefined4 *)(this + 0x1c4) = 0xffffffff;
  this[0x1c8] = (CBattle_Field)0x0;
  CRidable::Clear((CRidable *)(this + 0xd0));
  this[0x1c9] = (CBattle_Field)0x0;
  this[0x1ce] = (CBattle_Field)0x0;
  this[0x1cf] = (CBattle_Field)0x0;
  memset(this + 0x1d0,0,0x18);
  this[0x1cb] = (CBattle_Field)0x0;
  this[0x1cc] = (CBattle_Field)0x0;
  this[0x1ca] = (CBattle_Field)0x0;
  std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::clear
            ((map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>> *)
             (this + 0x78));
  std::
  vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
  ::clear((vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
           *)(this + 0x170));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x118));
  *(undefined4 *)(this + 0x124) = 0;
  std::
  vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
  ::clear((vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
           *)(this + 0x17c));
  reset_blood_values(this);
  CBloodRound::reset_blood_values((CBloodRound *)(this + 0x2ac));
  *(undefined4 *)(this + 0x2b4) = 0;
  CBloodClearRewardData::reset((CBloodClearRewardData *)(this + 0x2b8));
  CTowerOfDespairRewardData::reset_tod((CTowerOfDespairRewardData *)(this + 0xc84));
  if (*(short *)(this + 0x128) != 0) {
    village_attacked::CVillageMonsterMgr::OnKillVillageMonster
              (GlobalData::s_villageMonsterMgr,*(int *)(this + 300),*(int *)(this + 0x130),
               *(ushort *)(this + 0x128),false);
  }
  *(undefined2 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (CBattle_Field)0x2;
  this[0x139] = (CBattle_Field)0x0;
  this[0x13a] = (CBattle_Field)0x1;
  this[0x1cd] = (CBattle_Field)0x0;
  this[0x23c] = (CBattle_Field)0x0;
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  this[0x110] = (CBattle_Field)0x0;
  SetCurSeatNo(this,0xff);
  return;
}
```

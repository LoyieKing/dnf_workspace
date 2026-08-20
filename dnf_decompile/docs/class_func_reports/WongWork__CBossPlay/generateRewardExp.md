# generateRewardExp

`_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon`

`WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149e20  _ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon
#           WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, CDungeon const*)
# range [0x08149e20, 0x0814a220]
08149e20 +0x000:  push   %ebp
08149e21 +0x001:  mov    %esp,%ebp
08149e23 +0x003:  push   %edi
08149e24 +0x004:  push   %esi
08149e25 +0x005:  push   %ebx
08149e26 +0x006:  sub    $0x13c,%esp
08149e2c +0x00c:  mov    0x8(%ebp),%eax
08149e2f +0x00f:  mov    0x4(%eax),%eax
08149e32 +0x012:  mov    0xc(%ebp),%edx
08149e35 +0x015:  mov    %edx,0x4(%esp)
08149e39 +0x019:  mov    %eax,(%esp)
08149e3c +0x01c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08149e41 +0x021:  mov    %eax,-0x20(%ebp)
08149e44 +0x024:  cmpl   $0x0,-0x20(%ebp)
08149e48 +0x028:  jne    08149e54 <+0x34>
08149e4a +0x02a:  mov    $0x0,%eax
08149e4f +0x02f:  jmp    0814a216 <+0x3f6>
08149e54 +0x034:  mov    0x10(%ebp),%eax
08149e57 +0x037:  imul   0x14(%ebp),%eax
08149e5b +0x03b:  mov    $0x0,%edx
08149e60 +0x040:  mov    %eax,-0xe8(%ebp)
08149e66 +0x046:  mov    %edx,-0xe4(%ebp)
08149e6c +0x04c:  fildll -0xe8(%ebp)
08149e72 +0x052:  fstps  -0xf0(%ebp)
08149e78 +0x058:  mov    0x18(%ebp),%eax
08149e7b +0x05b:  mov    %eax,(%esp)
08149e7e +0x05e:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08149e83 +0x063:  mov    %eax,%ebx
08149e85 +0x065:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149e8a +0x06a:  mov    %ebx,0x4(%esp)
08149e8e +0x06e:  mov    %eax,(%esp)
08149e91 +0x071:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
08149e96 +0x076:  mov    0x10(%ebp),%edx
08149e99 +0x079:  flds   0x4(%eax,%edx,4)
08149e9d +0x07d:  fmuls  -0xf0(%ebp)
08149ea3 +0x083:  fnstcw -0xea(%ebp)
08149ea9 +0x089:  movzwl -0xea(%ebp),%eax
08149eb0 +0x090:  mov    $0xc,%ah
08149eb2 +0x092:  mov    %ax,-0xec(%ebp)
08149eb9 +0x099:  fldcw  -0xec(%ebp)
08149ebf +0x09f:  fistpll -0xe8(%ebp)
08149ec5 +0x0a5:  fldcw  -0xea(%ebp)
08149ecb +0x0ab:  mov    -0xe8(%ebp),%eax
08149ed1 +0x0b1:  mov    -0xe4(%ebp),%edx
08149ed7 +0x0b7:  mov    %eax,-0x24(%ebp)
08149eda +0x0ba:  lea    -0x6c(%ebp),%eax
08149edd +0x0bd:  mov    %eax,(%esp)
08149ee0 +0x0c0:  call   0814a800 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x59f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x59f
08149ee5 +0x0c5:  lea    -0xcc(%ebp),%eax
08149eeb +0x0cb:  mov    %eax,(%esp)
08149eee +0x0ce:  call   0814a8b8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x657>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x657
08149ef3 +0x0d3:  mov    0x8(%ebp),%eax
08149ef6 +0x0d6:  mov    0x4(%eax),%eax
08149ef9 +0x0d9:  mov    %eax,(%esp)
08149efc +0x0dc:  call   0814a9c2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x761>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x761
08149f01 +0x0e1:  fstps  -0xc4(%ebp)
08149f07 +0x0e7:  mov    0x8(%ebp),%eax
08149f0a +0x0ea:  mov    0x4(%eax),%eax
08149f0d +0x0ed:  mov    -0x20(%ebp),%edx
08149f10 +0x0f0:  mov    %edx,0x4(%esp)
08149f14 +0x0f4:  mov    %eax,(%esp)
08149f17 +0x0f7:  call   0814a9e2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x781>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x781
08149f1c +0x0fc:  fstps  -0xc0(%ebp)
08149f22 +0x102:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
08149f27 +0x107:  mov    %eax,-0xdc(%ebp)
08149f2d +0x10d:  fildl  -0xdc(%ebp)
08149f33 +0x113:  flds   ""
08149f39 +0x119:  fdivrp %st,%st(1)
08149f3b +0x11b:  fstps  -0xa4(%ebp)
08149f41 +0x121:  mov    0x18(%ebp),%eax
08149f44 +0x124:  mov    %eax,(%esp)
08149f47 +0x127:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08149f4c +0x12c:  mov    %eax,%edi
08149f4e +0x12e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08149f53 +0x133:  mov    %eax,(%esp)
08149f56 +0x136:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08149f5b +0x13b:  mov    %eax,%esi
08149f5d +0x13d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08149f62 +0x142:  mov    0x378(%eax),%eax
08149f68 +0x148:  movzbl %al,%ebx
08149f6b +0x14b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149f70 +0x150:  mov    %eax,(%esp)
08149f73 +0x153:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
08149f78 +0x158:  mov    %edi,0xc(%esp)
08149f7c +0x15c:  mov    %esi,0x8(%esp)
08149f80 +0x160:  mov    %ebx,0x4(%esp)
08149f84 +0x164:  mov    %eax,(%esp)
08149f87 +0x167:  call   088dce3c <_ZNK16channel_script_t12getBonusRateEhjj>  ; channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
08149f8c +0x16c:  fstps  -0xac(%ebp)
08149f92 +0x172:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08149f97 +0x177:  movl   $0x8,0x4(%esp)
08149f9f +0x17f:  mov    %eax,(%esp)
08149fa2 +0x182:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08149fa7 +0x187:  mov    (%eax),%edx
08149fa9 +0x189:  add    $0x34,%edx
08149fac +0x18c:  mov    (%edx),%ecx
08149fae +0x18e:  mov    -0x20(%ebp),%edx
08149fb1 +0x191:  mov    %edx,0x4(%esp)
08149fb5 +0x195:  mov    %eax,(%esp)
08149fb8 +0x198:  call   *%ecx
08149fba +0x19a:  test   %al,%al
08149fbc +0x19c:  je     0814a006 <+0x1e6>
08149fbe +0x19e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08149fc3 +0x1a3:  movl   $0x8,0x4(%esp)
08149fcb +0x1ab:  mov    %eax,(%esp)
08149fce +0x1ae:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08149fd3 +0x1b3:  mov    %eax,(%esp)
08149fd6 +0x1b6:  call   0814aae4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x883>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x883
08149fdb +0x1bb:  mov    %eax,%ecx
08149fdd +0x1bd:  mov    $0x51eb851f,%edx
08149fe2 +0x1c2:  mov    %ecx,%eax
08149fe4 +0x1c4:  imul   %edx
08149fe6 +0x1c6:  sar    $0x5,%edx
08149fe9 +0x1c9:  mov    %ecx,%eax
08149feb +0x1cb:  sar    $0x1f,%eax
08149fee +0x1ce:  mov    %edx,%ecx
08149ff0 +0x1d0:  sub    %eax,%ecx
08149ff2 +0x1d2:  mov    %ecx,%eax
08149ff4 +0x1d4:  mov    %eax,-0xdc(%ebp)
08149ffa +0x1da:  fildl  -0xdc(%ebp)
0814a000 +0x1e0:  fstps  -0xbc(%ebp)
0814a006 +0x1e6:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0814a00b +0x1eb:  movl   $0x3,0x4(%esp)
0814a013 +0x1f3:  mov    %eax,(%esp)
0814a016 +0x1f6:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0814a01b +0x1fb:  mov    (%eax),%edx
0814a01d +0x1fd:  add    $0x34,%edx
0814a020 +0x200:  mov    (%edx),%edx
0814a022 +0x202:  movl   $0x0,0x4(%esp)
0814a02a +0x20a:  mov    %eax,(%esp)
0814a02d +0x20d:  call   *%edx
0814a02f +0x20f:  test   %al,%al
0814a031 +0x211:  je     0814a06a <+0x24a>
0814a033 +0x213:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0814a038 +0x218:  movl   $0x3,0x4(%esp)
0814a040 +0x220:  mov    %eax,(%esp)
0814a043 +0x223:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0814a048 +0x228:  mov    %eax,(%esp)
0814a04b +0x22b:  call   0814aad8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x877>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x877
0814a050 +0x230:  mov    %eax,-0xdc(%ebp)
0814a056 +0x236:  fildl  -0xdc(%ebp)
0814a05c +0x23c:  flds   ""
0814a062 +0x242:  fdivrp %st,%st(1)
0814a064 +0x244:  fstps  -0xb8(%ebp)
0814a06a +0x24a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0814a06f +0x24f:  movl   $0xf,0x4(%esp)
0814a077 +0x257:  mov    %eax,(%esp)
0814a07a +0x25a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0814a07f +0x25f:  mov    (%eax),%edx
0814a081 +0x261:  add    $0x34,%edx
0814a084 +0x264:  mov    (%edx),%edx
0814a086 +0x266:  movl   $0x0,0x4(%esp)
0814a08e +0x26e:  mov    %eax,(%esp)
0814a091 +0x271:  call   *%edx
0814a093 +0x273:  test   %al,%al
0814a095 +0x275:  je     0814a0cc <+0x2ac>
0814a097 +0x277:  mov    -0x20(%ebp),%eax
0814a09a +0x27a:  mov    %eax,(%esp)
0814a09d +0x27d:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0814a0a2 +0x282:  movzwl %ax,%ebx
0814a0a5 +0x285:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0814a0aa +0x28a:  movl   $0xf,0x4(%esp)
0814a0b2 +0x292:  mov    %eax,(%esp)
0814a0b5 +0x295:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0814a0ba +0x29a:  mov    %ebx,0x4(%esp)
0814a0be +0x29e:  mov    %eax,(%esp)
0814a0c1 +0x2a1:  call   0810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>  ; CBurningFatigueEvent::getBonusExpRate(unsigned short) const
0814a0c6 +0x2a6:  mov    %eax,-0xb0(%ebp)
0814a0cc +0x2ac:  mov    -0x20(%ebp),%eax
0814a0cf +0x2af:  mov    %eax,(%esp)
0814a0d2 +0x2b2:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0814a0d7 +0x2b7:  test   %al,%al
0814a0d9 +0x2b9:  je     0814a108 <+0x2e8>
0814a0db +0x2bb:  mov    -0x20(%ebp),%eax
0814a0de +0x2be:  mov    %eax,(%esp)
0814a0e1 +0x2c1:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0814a0e6 +0x2c6:  mov    %eax,(%esp)
0814a0e9 +0x2c9:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
0814a0ee +0x2ce:  mov    %eax,-0xdc(%ebp)
0814a0f4 +0x2d4:  fildl  -0xdc(%ebp)
0814a0fa +0x2da:  flds   ""
0814a100 +0x2e0:  fdivrp %st,%st(1)
0814a102 +0x2e2:  fstps  -0xa8(%ebp)
0814a108 +0x2e8:  mov    0x8(%ebp),%eax
0814a10b +0x2eb:  mov    0x4(%eax),%eax
0814a10e +0x2ee:  lea    -0x6c(%ebp),%edx
0814a111 +0x2f1:  mov    %edx,0x10(%esp)
0814a115 +0x2f5:  lea    -0xcc(%ebp),%edx
0814a11b +0x2fb:  mov    %edx,0xc(%esp)
0814a11f +0x2ff:  lea    -0x24(%ebp),%edx
0814a122 +0x302:  mov    %edx,0x8(%esp)
0814a126 +0x306:  mov    -0x20(%ebp),%edx
0814a129 +0x309:  mov    %edx,0x4(%esp)
0814a12d +0x30d:  mov    %eax,(%esp)
0814a130 +0x310:  call   085ad278 <_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t>  ; CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&, stClearRewardBonusExp_t&)
0814a135 +0x315:  mov    %eax,-0x1c(%ebp)
0814a138 +0x318:  cmpl   $0x10c8e0,-0x1c(%ebp)
0814a13f +0x31f:  jbe    0814a201 <+0x3e1>
0814a145 +0x325:  mov    -0x1c(%ebp),%eax
0814a148 +0x328:  mov    %eax,0x14(%esp)
0814a14c +0x32c:  movl   $"BOSS_LOG : EROOR BOSSTOWER CLEAR REWARD EXP(%u)\n",0x10(%esp)
0814a154 +0x334:  movl   $0x159,0xc(%esp)
0814a15c +0x33c:  movl   $&_ZZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeonE19__PRETTY_FUNCTION__,0x8(%esp)
0814a164 +0x344:  movl   $"localglobal/global_PlayUser.cpp",0x4(%esp)
0814a16c +0x34c:  movl   $0x1,(%esp)
0814a173 +0x353:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0814a178 +0x358:  mov    -0xb0(%ebp),%eax
0814a17e +0x35e:  flds   -0xa4(%ebp)
0814a184 +0x364:  flds   -0xa8(%ebp)
0814a18a +0x36a:  flds   -0xac(%ebp)
0814a190 +0x370:  flds   -0xb8(%ebp)
0814a196 +0x376:  flds   -0xbc(%ebp)
0814a19c +0x37c:  flds   -0xc0(%ebp)
0814a1a2 +0x382:  flds   -0xc4(%ebp)
0814a1a8 +0x388:  fxch   %st(6)
0814a1aa +0x38a:  mov    %eax,0x4c(%esp)
0814a1ae +0x38e:  fstpl  0x44(%esp)
0814a1b2 +0x392:  fxch   %st(4)
0814a1b4 +0x394:  fstpl  0x3c(%esp)
0814a1b8 +0x398:  fxch   %st(2)
0814a1ba +0x39a:  fstpl  0x34(%esp)
0814a1be +0x39e:  fstpl  0x2c(%esp)
0814a1c2 +0x3a2:  fstpl  0x24(%esp)
0814a1c6 +0x3a6:  fstpl  0x1c(%esp)
0814a1ca +0x3aa:  fstpl  0x14(%esp)
0814a1ce +0x3ae:  movl   $"BOSS_LOG : BOSSTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",0x10(%esp)
0814a1d6 +0x3b6:  movl   $0x163,0xc(%esp)
0814a1de +0x3be:  movl   $&_ZZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeonE19__PRETTY_FUNCTION__,0x8(%esp)
0814a1e6 +0x3c6:  movl   $"localglobal/global_PlayUser.cpp",0x4(%esp)
0814a1ee +0x3ce:  movl   $0x1,(%esp)
0814a1f5 +0x3d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0814a1fa +0x3da:  movl   $0x10c8e0,-0x1c(%ebp)
0814a201 +0x3e1:  mov    0xc(%ebp),%edx
0814a204 +0x3e4:  mov    0x8(%ebp),%eax
0814a207 +0x3e7:  lea    0x4(%edx),%ecx
0814a20a +0x3ea:  mov    -0x1c(%ebp),%edx
0814a20d +0x3ed:  mov    %edx,0x8(%eax,%ecx,4)
0814a211 +0x3f1:  mov    $0x1,%eax
0814a216 +0x3f6:  add    $0x13c,%esp
0814a21c +0x3fc:  pop    %ebx
0814a21d +0x3fd:  pop    %esi
0814a21e +0x3fe:  pop    %edi
0814a21f +0x3ff:  pop    %ebp
0814a220 +0x400:  ret
```

## 反编译 C

```c
// WongWork::CBossPlay::generateRewardExp @ 0x8149e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, CDungeon const*) */

undefined4 __thiscall
WongWork::CBossPlay::generateRewardExp
          (CBossPlay *this,int param_1,uint param_2,uint param_3,CDungeon *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  CDataManager *pCVar5;
  int iVar6;
  CEnvironment *this_00;
  uint uVar7;
  channel_script_t *this_01;
  int *piVar8;
  CPCRoomBurningEvent *this_02;
  CExpDoubleEvent *this_03;
  CBurningFatigueEvent *this_04;
  CUserPremium *this_05;
  longdouble lVar9;
  ulonglong local_ec;
  stClearRewardExpParameter_t local_d0 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  stClearRewardBonusExp_t local_70 [72];
  uint local_28;
  CUser *local_24;
  uint local_20;
  
  local_24 = (CUser *)CParty::get_user(*(CParty **)(this + 4),param_1);
  if (local_24 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    local_ec = (ulonglong)(param_2 * param_3);
    uVar4 = CDungeon::get_index(param_4);
    pCVar5 = (CDataManager *)G_CDataManager();
    iVar6 = CDataManager::GetTowerScript(pCVar5,uVar4);
    local_ec._0_4_ = (uint)(longlong)ROUND(*(float *)(iVar6 + 4 + param_2 * 4) * (float)local_ec);
    local_28 = (uint)local_ec;
    stClearRewardBonusExp_t::stClearRewardBonusExp_t(local_70);
    stClearRewardExpParameter_t::stClearRewardExpParameter_t(local_d0);
    lVar9 = (longdouble)CParty::getAvatarBonus(*(CParty **)(this + 4));
    local_c8 = (float)lVar9;
    lVar9 = (longdouble)CParty::getCreatureBonus(*(CParty **)(this + 4),local_24);
    local_c4 = (float)lVar9;
    iVar6 = CServerEvent::GetExpRate();
    local_a8 = (float)iVar6 / _DAT_08b7507c;
    uVar4 = CDungeon::get_index(param_4);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    iVar6 = G_CEnvironment();
    uVar3 = *(undefined4 *)(iVar6 + 0x378);
    pCVar5 = (CDataManager *)G_CDataManager();
    this_01 = (channel_script_t *)CDataManager::GetChannelScript(pCVar5);
    lVar9 = (longdouble)channel_script_t::getBonusRate(this_01,(uchar)uVar3,uVar7,uVar4);
    local_b0 = (float)lVar9;
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,local_24);
    if (cVar1 != '\0') {
      this_02 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
      iVar6 = CPCRoomBurningEvent::GetExpFactor(this_02);
      local_c0 = (float)(iVar6 / 100);
    }
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
    if (cVar1 != '\0') {
      this_03 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
      iVar6 = CExpDoubleEvent::GetExpFactor(this_03);
      local_bc = (float)iVar6 / _DAT_08b7507c;
    }
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
    if (cVar1 != '\0') {
      uVar2 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)local_24);
      this_04 = (CBurningFatigueEvent *)
                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
      local_b4 = CBurningFatigueEvent::getBonusExpRate(this_04,uVar2);
    }
    cVar1 = CUser::IsHavePremiumAdvantage(local_24);
    if (cVar1 != '\0') {
      this_05 = (CUserPremium *)CUser::GetPremiumInfo(local_24);
      iVar6 = CUserPremium::GetAdvantageExpRate(this_05);
      local_ac = (float)iVar6 / _DAT_08b7507c;
    }
    local_20 = CParty::getClearRewardBonusExp
                         (*(CParty **)(this + 4),local_24,&local_28,local_d0,local_70);
    if (1100000 < local_20) {
      LogManager::logFormat
                (1,"localglobal/global_PlayUser.cpp",
                 "virtual bool WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, const CDungeon*)"
                 ,0x159,"BOSS_LOG : EROOR BOSSTOWER CLEAR REWARD EXP(%u)\n",local_20);
      LogManager::logFormat
                (1,"localglobal/global_PlayUser.cpp",
                 "virtual bool WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, const CDungeon*)"
                 ,0x163,"BOSS_LOG : BOSSTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",
                 (double)local_c8,(double)local_c4,(double)local_c0,(double)local_bc,
                 (double)local_b0,(double)local_ac,(double)local_a8,local_b4);
      local_20 = 1100000;
    }
    *(uint *)(this + (param_1 + 4) * 4 + 8) = local_20;
    uVar3 = 1;
  }
  return uVar3;
}
```

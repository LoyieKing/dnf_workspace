# checkKilledSpawnBloodMonsters

`_ZN13CBattle_Field29checkKilledSpawnBloodMonstersEi`

`CBattle_Field::checkKilledSpawnBloodMonsters(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08304f8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08304f8e  _ZN13CBattle_Field29checkKilledSpawnBloodMonstersEi
#           CBattle_Field::checkKilledSpawnBloodMonsters(int)
# range [0x08304f8e, 0x083053d1]
08304f8e +0x000:  push   %ebp
08304f8f +0x001:  mov    %esp,%ebp
08304f91 +0x003:  push   %esi
08304f92 +0x004:  push   %ebx
08304f93 +0x005:  sub    $0x3a0,%esp
08304f99 +0x00b:  mov    0x8(%ebp),%eax
08304f9c +0x00e:  add    $0x2ac,%eax
08304fa1 +0x013:  mov    %eax,(%esp)
08304fa4 +0x016:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
08304fa9 +0x01b:  mov    %ax,-0x26(%ebp)
08304fad +0x01f:  mov    0x8(%ebp),%eax
08304fb0 +0x022:  add    $0x2ac,%eax
08304fb5 +0x027:  mov    %eax,(%esp)
08304fb8 +0x02a:  call   0830ebce <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7b3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7b3
08304fbd +0x02f:  mov    %ax,-0x24(%ebp)
08304fc1 +0x033:  mov    0x8(%ebp),%eax
08304fc4 +0x036:  add    $0x2ac,%eax
08304fc9 +0x03b:  mov    %eax,(%esp)
08304fcc +0x03e:  call   0830ebda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7bf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7bf
08304fd1 +0x043:  mov    %ax,-0x22(%ebp)
08304fd5 +0x047:  movzwl -0x22(%ebp),%eax
08304fd9 +0x04b:  cmp    -0x24(%ebp),%ax
08304fdd +0x04f:  jge    0830504b <+0xbd>
08304fdf +0x051:  cmpl   $0x0,0xc(%ebp)
08304fe3 +0x055:  jne    08305002 <+0x74>
08304fe5 +0x057:  mov    0x8(%ebp),%eax
08304fe8 +0x05a:  mov    0x108(%eax),%eax
08304fee +0x060:  mov    %eax,(%esp)
08304ff1 +0x063:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
08304ff6 +0x068:  cmp    $0x1,%eax
08304ff9 +0x06b:  je     08305002 <+0x74>
08304ffb +0x06d:  mov    $0x1,%eax
08305000 +0x072:  jmp    08305007 <+0x79>
08305002 +0x074:  mov    $0x0,%eax
08305007 +0x079:  test   %al,%al
08305009 +0x07b:  je     083053c6 <+0x438>
0830500f +0x081:  mov    0x8(%ebp),%eax
08305012 +0x084:  mov    0x188(%eax),%ecx
08305018 +0x08a:  mov    0x8(%ebp),%eax
0830501b +0x08d:  mov    (%eax),%edx
0830501d +0x08f:  movswl -0x26(%ebp),%eax
08305021 +0x093:  mov    0x8(%ebp),%ebx
08305024 +0x096:  add    $0x2b8,%ebx
0830502a +0x09c:  mov    %ecx,0x10(%esp)
0830502e +0x0a0:  mov    %edx,0xc(%esp)
08305032 +0x0a4:  mov    %eax,0x8(%esp)
08305036 +0x0a8:  movl   $0x0,0x4(%esp)
0830503e +0x0b0:  mov    %ebx,(%esp)
08305041 +0x0b3:  call   08306fc4 <_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon>  ; CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
08305046 +0x0b8:  jmp    083053c7 <+0x439>
0830504b +0x0bd:  movl   $0x0,-0x20(%ebp)
08305052 +0x0c4:  lea    -0x37c(%ebp),%eax
08305058 +0x0ca:  mov    %eax,(%esp)
0830505b +0x0cd:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08305060 +0x0d2:  mov    0x8(%ebp),%eax
08305063 +0x0d5:  mov    %eax,(%esp)
08305066 +0x0d8:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830506b +0x0dd:  lea    0xc(%eax),%edx
0830506e +0x0e0:  lea    -0x30(%ebp),%eax
08305071 +0x0e3:  mov    %edx,0x4(%esp)
08305075 +0x0e7:  mov    %eax,(%esp)
08305078 +0x0ea:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
0830507d +0x0ef:  sub    $0x4,%esp
08305080 +0x0f2:  jmp    0830535b <+0x3cd>
08305085 +0x0f7:  lea    -0x30(%ebp),%eax
08305088 +0x0fa:  mov    %eax,(%esp)
0830508b +0x0fd:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305090 +0x102:  movzwl 0x33e(%eax),%eax
08305097 +0x109:  cmp    -0x24(%ebp),%ax
0830509b +0x10d:  setl   %al
0830509e +0x110:  test   %al,%al
083050a0 +0x112:  jne    083053b5 <+0x427>
083050a6 +0x118:  movswl -0x24(%ebp),%eax
083050aa +0x11c:  mov    %eax,0x4(%esp)
083050ae +0x120:  mov    0x8(%ebp),%eax
083050b1 +0x123:  mov    %eax,(%esp)
083050b4 +0x126:  call   083065f8 <_ZN13CBattle_Field30get_blood_round_of_small_roundEs>  ; CBattle_Field::get_blood_round_of_small_round(short)
083050b9 +0x12b:  mov    %eax,-0x1c(%ebp)
083050bc +0x12e:  movzwl -0x24(%ebp),%eax
083050c0 +0x132:  sub    $0x1,%eax
083050c3 +0x135:  cwtl
083050c4 +0x136:  mov    %eax,0x4(%esp)
083050c8 +0x13a:  mov    0x8(%ebp),%eax
083050cb +0x13d:  mov    %eax,(%esp)
083050ce +0x140:  call   083065f8 <_ZN13CBattle_Field30get_blood_round_of_small_roundEs>  ; CBattle_Field::get_blood_round_of_small_round(short)
083050d3 +0x145:  mov    %eax,-0x18(%ebp)
083050d6 +0x148:  movswl -0x24(%ebp),%eax
083050da +0x14c:  mov    %eax,0x4(%esp)
083050de +0x150:  mov    0x8(%ebp),%eax
083050e1 +0x153:  mov    %eax,(%esp)
083050e4 +0x156:  call   083062fe <_ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs>  ; CBattle_Field::get_blood_round_difficylty_of_small_round(short)
083050e9 +0x15b:  mov    %eax,-0x14(%ebp)
083050ec +0x15e:  movzwl -0x24(%ebp),%eax
083050f0 +0x162:  sub    $0x1,%eax
083050f3 +0x165:  cwtl
083050f4 +0x166:  mov    %eax,0x4(%esp)
083050f8 +0x16a:  mov    0x8(%ebp),%eax
083050fb +0x16d:  mov    %eax,(%esp)
083050fe +0x170:  call   083062fe <_ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs>  ; CBattle_Field::get_blood_round_difficylty_of_small_round(short)
08305103 +0x175:  mov    %eax,-0x10(%ebp)
08305106 +0x178:  cmpl   $0x0,-0x1c(%ebp)
0830510a +0x17c:  js     08305112 <+0x184>
0830510c +0x17e:  cmpl   $0x0,-0x18(%ebp)
08305110 +0x182:  jns    0830514b <+0x1bd>
08305112 +0x184:  movswl -0x24(%ebp),%eax
08305116 +0x188:  mov    %eax,0x14(%esp)
0830511a +0x18c:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ROUND!!\n",0x10(%esp)
08305122 +0x194:  movl   $0xd59,0xc(%esp)
0830512a +0x19c:  movl   $&_ZZN13CBattle_Field29checkKilledSpawnBloodMonstersEiE19__PRETTY_FUNCTION__,0x8(%esp)
08305132 +0x1a4:  movl   $"battle_field.cpp",0x4(%esp)
0830513a +0x1ac:  movl   $0x1,(%esp)
08305141 +0x1b3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08305146 +0x1b8:  jmp    083053b6 <+0x428>
0830514b +0x1bd:  movb   $0x0,-0x9(%ebp)
0830514f +0x1c1:  mov    -0x18(%ebp),%eax
08305152 +0x1c4:  cmp    -0x1c(%ebp),%eax
08305155 +0x1c7:  je     0830515d <+0x1cf>
08305157 +0x1c9:  movb   $0x1,-0x9(%ebp)
0830515b +0x1cd:  jmp    08305169 <+0x1db>
0830515d +0x1cf:  mov    -0x14(%ebp),%eax
08305160 +0x1d2:  cmp    -0x10(%ebp),%eax
08305163 +0x1d5:  je     08305169 <+0x1db>
08305165 +0x1d7:  movb   $0x1,-0x9(%ebp)
08305169 +0x1db:  cmpb   $0x0,-0x9(%ebp)
0830516d +0x1df:  je     08305350 <+0x3c2>
08305173 +0x1e5:  mov    0x8(%ebp),%eax
08305176 +0x1e8:  mov    0x188(%eax),%ecx
0830517c +0x1ee:  mov    0x8(%ebp),%eax
0830517f +0x1f1:  mov    (%eax),%edx
08305181 +0x1f3:  movswl -0x26(%ebp),%eax
08305185 +0x1f7:  mov    0x8(%ebp),%ebx
08305188 +0x1fa:  mov    (%ebx),%ebx
0830518a +0x1fc:  add    $0xddc,%ebx
08305190 +0x202:  mov    %ecx,0x10(%esp)
08305194 +0x206:  mov    %edx,0xc(%esp)
08305198 +0x20a:  mov    %eax,0x8(%esp)
0830519c +0x20e:  movl   $0x0,0x4(%esp)
083051a4 +0x216:  mov    %ebx,(%esp)
083051a7 +0x219:  call   08306fc4 <_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon>  ; CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
083051ac +0x21e:  mov    0x8(%ebp),%eax
083051af +0x221:  mov    0x188(%eax),%eax
083051b5 +0x227:  movzbl 0x89f(%eax),%eax
083051bc +0x22e:  cmp    $0x2,%al
083051be +0x230:  jne    08305333 <+0x3a5>
083051c4 +0x236:  movzwl -0x26(%ebp),%eax
083051c8 +0x23a:  sub    $0x1,%eax
083051cb +0x23d:  cwtl
083051cc +0x23e:  mov    %eax,0x4(%esp)
083051d0 +0x242:  mov    0x8(%ebp),%eax
083051d3 +0x245:  mov    %eax,(%esp)
083051d6 +0x248:  call   083061b6 <_ZN13CBattle_Field22getNextRoundDifficultyEs>  ; CBattle_Field::getNextRoundDifficulty(short)
083051db +0x24d:  mov    0x8(%ebp),%edx
083051de +0x250:  add    $0x2b8,%edx
083051e4 +0x256:  mov    %eax,0x4(%esp)
083051e8 +0x25a:  mov    %edx,(%esp)
083051eb +0x25d:  call   08307096 <_ZN13CBattle_Field21CBloodClearRewardData26incUltimateRoundClearPointEi>  ; CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int)
083051f0 +0x262:  movswl -0x24(%ebp),%edx
083051f4 +0x266:  movswl -0x26(%ebp),%eax
083051f8 +0x26a:  movl   $0x1,0xc(%esp)
08305200 +0x272:  mov    %edx,0x8(%esp)
08305204 +0x276:  mov    %eax,0x4(%esp)
08305208 +0x27a:  mov    0x8(%ebp),%eax
0830520b +0x27d:  mov    %eax,(%esp)
0830520e +0x280:  call   08305f50 <_ZN13CBattle_Field24forceValuesToChangeRoundEssi>  ; CBattle_Field::forceValuesToChangeRound(short, short, int)
08305213 +0x285:  xor    $0x1,%eax
08305216 +0x288:  test   %al,%al
08305218 +0x28a:  jne    083053b6 <+0x428>
0830521e +0x290:  movl   $0x0,0x4(%esp)
08305226 +0x298:  mov    0x8(%ebp),%eax
08305229 +0x29b:  mov    %eax,(%esp)
0830522c +0x29e:  call   0822d012 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26bc
08305231 +0x2a3:  movswl -0x26(%ebp),%ebx
08305235 +0x2a7:  mov    0x8(%ebp),%eax
08305238 +0x2aa:  mov    %eax,(%esp)
0830523b +0x2ad:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
08305240 +0x2b2:  sub    $0x1,%eax
08305243 +0x2b5:  cmp    %eax,%ebx
08305245 +0x2b7:  setne  %al
08305248 +0x2ba:  test   %al,%al
0830524a +0x2bc:  je     083052d3 <+0x345>
08305250 +0x2c2:  mov    0x8(%ebp),%eax
08305253 +0x2c5:  mov    (%eax),%eax
08305255 +0x2c7:  movl   $0x26,0x4(%esp)
0830525d +0x2cf:  mov    %eax,(%esp)
08305260 +0x2d2:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
08305265 +0x2d7:  mov    %eax,%esi
08305267 +0x2d9:  mov    0x8(%ebp),%eax
0830526a +0x2dc:  mov    (%eax),%eax
0830526c +0x2de:  mov    %eax,(%esp)
0830526f +0x2e1:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08305274 +0x2e6:  mov    %eax,%ebx
08305276 +0x2e8:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0830527b +0x2ed:  movl   $0x26,0x18(%esp)
08305283 +0x2f5:  mov    %esi,0x14(%esp)
08305287 +0x2f9:  movl   $0xa,0x10(%esp)
0830528f +0x301:  movl   $0x26,0xc(%esp)
08305297 +0x309:  mov    %ebx,0x8(%esp)
0830529b +0x30d:  movl   $0x1,0x4(%esp)
083052a3 +0x315:  mov    %eax,(%esp)
083052a6 +0x318:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
083052ab +0x31d:  movswl -0x26(%ebp),%eax
083052af +0x321:  movl   $0xa,0xc(%esp)
083052b7 +0x329:  mov    %eax,0x8(%esp)
083052bb +0x32d:  movl   $0x0,0x4(%esp)
083052c3 +0x335:  mov    0x8(%ebp),%eax
083052c6 +0x338:  mov    %eax,(%esp)
083052c9 +0x33b:  call   0830637c <_ZN13CBattle_Field28sendUltimateRandomDifficultyEiii>  ; CBattle_Field::sendUltimateRandomDifficulty(int, int, int)
083052ce +0x340:  jmp    083053b6 <+0x428>
083052d3 +0x345:  mov    0x8(%ebp),%eax
083052d6 +0x348:  mov    (%eax),%eax
083052d8 +0x34a:  movl   $0x26,0x4(%esp)
083052e0 +0x352:  mov    %eax,(%esp)
083052e3 +0x355:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
083052e8 +0x35a:  mov    %eax,%esi
083052ea +0x35c:  mov    0x8(%ebp),%eax
083052ed +0x35f:  mov    (%eax),%eax
083052ef +0x361:  mov    %eax,(%esp)
083052f2 +0x364:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
083052f7 +0x369:  mov    %eax,%ebx
083052f9 +0x36b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
083052fe +0x370:  movl   $0x26,0x18(%esp)
08305306 +0x378:  mov    %esi,0x14(%esp)
0830530a +0x37c:  movl   $0x1,0x10(%esp)
08305312 +0x384:  movl   $0x26,0xc(%esp)
0830531a +0x38c:  mov    %ebx,0x8(%esp)
0830531e +0x390:  movl   $0x1,0x4(%esp)
08305326 +0x398:  mov    %eax,(%esp)
08305329 +0x39b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0830532e +0x3a0:  jmp    083053b6 <+0x428>
08305333 +0x3a5:  movl   $0x0,0x8(%esp)
0830533b +0x3ad:  movl   $0x1,0x4(%esp)
08305343 +0x3b5:  mov    0x8(%ebp),%eax
08305346 +0x3b8:  mov    %eax,(%esp)
08305349 +0x3bb:  call   08304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>  ; CBattle_Field::BloodSpawnTimerManager(bool, bool)
0830534e +0x3c0:  jmp    083053b6 <+0x428>
08305350 +0x3c2:  lea    -0x30(%ebp),%eax
08305353 +0x3c5:  mov    %eax,(%esp)
08305356 +0x3c8:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
0830535b +0x3cd:  mov    0x8(%ebp),%eax
0830535e +0x3d0:  mov    %eax,(%esp)
08305361 +0x3d3:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08305366 +0x3d8:  lea    0xc(%eax),%edx
08305369 +0x3db:  lea    -0x2c(%ebp),%eax
0830536c +0x3de:  mov    %edx,0x4(%esp)
08305370 +0x3e2:  mov    %eax,(%esp)
08305373 +0x3e5:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08305378 +0x3ea:  sub    $0x4,%esp
0830537b +0x3ed:  lea    -0x2c(%ebp),%eax
0830537e +0x3f0:  mov    %eax,0x4(%esp)
08305382 +0x3f4:  lea    -0x30(%ebp),%eax
08305385 +0x3f7:  mov    %eax,(%esp)
08305388 +0x3fa:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
0830538d +0x3ff:  test   %al,%al
0830538f +0x401:  jne    08305085 <+0xf7>
08305395 +0x407:  jmp    083053b6 <+0x428>
08305397 +0x409:  mov    %edx,%ebx
08305399 +0x40b:  mov    %eax,%esi
0830539b +0x40d:  lea    -0x37c(%ebp),%eax
083053a1 +0x413:  mov    %eax,(%esp)
083053a4 +0x416:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
083053a9 +0x41b:  mov    %esi,%eax
083053ab +0x41d:  mov    %ebx,%edx
083053ad +0x41f:  mov    %eax,(%esp)
083053b0 +0x422:  call   08ae3750 <_Unwind_Resume>
083053b5 +0x427:  nop
083053b6 +0x428:  lea    -0x37c(%ebp),%eax
083053bc +0x42e:  mov    %eax,(%esp)
083053bf +0x431:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
083053c4 +0x436:  jmp    083053c7 <+0x439>
083053c6 +0x438:  nop
083053c7 +0x439:  lea    -0x8(%ebp),%esp
083053ca +0x43c:  add    $0x0,%esp
083053cd +0x43f:  pop    %ebx
083053ce +0x440:  pop    %esi
083053cf +0x441:  pop    %ebp
083053d0 +0x442:  ret
083053d1 +0x443:  nop
```

## 反编译 C

```c
// CBattle_Field::checkKilledSpawnBloodMonsters @ 0x8304f8e

/* CBattle_Field::checkKilledSpawnBloodMonsters(int) */

void __thiscall CBattle_Field::checkKilledSpawnBloodMonsters(CBattle_Field *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  int iVar7;
  map_monster local_380 [844];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_34 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_30 [6];
  short local_2a;
  short local_28;
  short local_26;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  
  local_2a = CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0x2ac));
  local_28 = CBloodRound::getBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  local_26 = CBloodRound::getBloodLastSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  if (local_26 < local_28) {
    if ((param_1 == 0) && (iVar3 = CMap::get_map_type(*(CMap **)(this + 0x108)), iVar3 != 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CBloodClearRewardData::onFinishBloodRound
                ((CBloodClearRewardData *)(this + 0x2b8),false,local_2a,*(CParty **)this,
                 *(CDungeon **)(this + 0x188));
    }
  }
  else {
    local_24 = 0;
    map_monster::map_monster(local_380);
                    /* try { // try from 08305066 to 08305377 has its CatchHandler @ 08305397 */
    GetCurrentMapInfo(this);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_34);
    while( true ) {
      GetCurrentMapInfo(this);
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_30);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34,
                         (_Rb_tree_iterator *)local_30);
      if ((cVar2 == '\0') ||
         (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34),
         *(short *)(iVar3 + 0x33e) < local_28)) goto LAB_083053b6;
      local_20 = get_blood_round_of_small_round(this,local_28);
      local_1c = get_blood_round_of_small_round(this,local_28 + -1);
      local_18 = get_blood_round_difficylty_of_small_round(this,local_28);
      local_14 = get_blood_round_difficylty_of_small_round(this,local_28 + -1);
      if ((local_20 < 0) || (local_1c < 0)) {
        LogManager::logFormat
                  (1,"battle_field.cpp","void CBattle_Field::checkKilledSpawnBloodMonsters(int)",
                   0xd59,"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ROUND!!\n",(int)local_28);
        goto LAB_083053b6;
      }
      local_d = '\0';
      if (local_1c == local_20) {
        if (local_18 != local_14) {
          local_d = '\x01';
        }
      }
      else {
        local_d = '\x01';
      }
      if (local_d != '\0') break;
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34);
    }
    CBloodClearRewardData::onFinishBloodRound
              ((CBloodClearRewardData *)(*(int *)this + 0xddc),false,local_2a,*(CParty **)this,
               *(CDungeon **)(this + 0x188));
    if (*(char *)(*(int *)(this + 0x188) + 0x89f) == '\x02') {
      iVar3 = getNextRoundDifficulty(this,local_2a + -1);
      CBloodClearRewardData::incUltimateRoundClearPoint
                ((CBloodClearRewardData *)(this + 0x2b8),iVar3);
      cVar2 = forceValuesToChangeRound(this,local_2a,local_28,1);
      if (cVar2 == '\x01') {
        setUltimateDifficulty(this,'\0');
        iVar7 = (int)local_2a;
        iVar3 = getBloodMaxRound(this);
        if (iVar7 == iVar3 + -1) {
          uVar4 = CParty::gen_timer_key(*(CParty **)this,0x26);
          uVar5 = CParty::GetPartyIndex(*(CParty **)this);
          pTVar6 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar6,1,uVar5,0x26,1,uVar4,0x26);
        }
        else {
          uVar4 = CParty::gen_timer_key(*(CParty **)this,0x26);
          uVar5 = CParty::GetPartyIndex(*(CParty **)this);
          pTVar6 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar6,1,uVar5,0x26,10,uVar4,0x26);
          sendUltimateRandomDifficulty(this,0,(int)local_2a,10);
        }
      }
    }
    else {
      BloodSpawnTimerManager(this,true,false);
    }
LAB_083053b6:
    map_monster::~map_monster(local_380);
  }
  return;
}
```

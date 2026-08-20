# LoadBloodDungeonReward

`_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA`

`DB_LoadNoCacheData::LoadBloodDungeonReward(SIG_LOAD_NO_CACHE_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_LoadNoCacheData` | `0x08437f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437f58  _ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA
#           DB_LoadNoCacheData::LoadBloodDungeonReward(SIG_LOAD_NO_CACHE_DATA*)
# range [0x08437f58, 0x084382ff]
08437f58 +0x000:  push   %ebp
08437f59 +0x001:  mov    %esp,%ebp
08437f5b +0x003:  sub    $0x68,%esp
08437f5e +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08437f63 +0x00b:  movl   $0x0,0x8(%esp)
08437f6b +0x013:  movl   $0x2,0x4(%esp)
08437f73 +0x01b:  mov    %eax,(%esp)
08437f76 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437f7b +0x023:  mov    %eax,-0x24(%ebp)
08437f7e +0x026:  movl   $0x0,0x8(%esp)
08437f86 +0x02e:  movl   $0x0,0x4(%esp)
08437f8e +0x036:  movl   $0x6,(%esp)
08437f95 +0x03d:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
08437f9a +0x042:  mov    %eax,-0x28(%ebp)
08437f9d +0x045:  lea    -0x58(%ebp),%eax
08437fa0 +0x048:  mov    %eax,0x4(%esp)
08437fa4 +0x04c:  lea    -0x28(%ebp),%eax
08437fa7 +0x04f:  mov    %eax,(%esp)
08437faa +0x052:  call   0807e360 <_init+0xc58>
08437faf +0x057:  mov    %eax,-0x20(%ebp)
08437fb2 +0x05a:  movl   $0x0,-0x1c(%ebp)
08437fb9 +0x061:  mov    -0x20(%ebp),%eax
08437fbc +0x064:  mov    0x18(%eax),%eax
08437fbf +0x067:  test   %eax,%eax
08437fc1 +0x069:  jne    08437fcc <+0x74>
08437fc3 +0x06b:  movl   $0x7e900,-0x1c(%ebp)
08437fca +0x072:  jmp    08437fde <+0x86>
08437fcc +0x074:  mov    -0x20(%ebp),%eax
08437fcf +0x077:  mov    0x18(%eax),%eax
08437fd2 +0x07a:  sub    $0x1,%eax
08437fd5 +0x07d:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08437fdb +0x083:  mov    %eax,-0x1c(%ebp)
08437fde +0x086:  mov    -0x28(%ebp),%eax
08437fe1 +0x089:  mov    %eax,%edx
08437fe3 +0x08b:  sub    -0x1c(%ebp),%edx
08437fe6 +0x08e:  mov    0xc(%ebp),%eax
08437fe9 +0x091:  mov    (%eax),%eax
08437feb +0x093:  mov    %edx,0xc(%esp)
08437fef +0x097:  mov    %eax,0x8(%esp)
08437ff3 +0x09b:  movl   $"seLect week_point,week_enter_count,week_use_gold,unix_timestamp(last_play_date),enter_count,rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)",0x4(%esp)
08437ffb +0x0a3:  mov    -0x24(%ebp),%eax
08437ffe +0x0a6:  mov    %eax,(%esp)
08438001 +0x0a9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438006 +0x0ae:  movl   $0x1,0x4(%esp)
0843800e +0x0b6:  mov    -0x24(%ebp),%eax
08438011 +0x0b9:  mov    %eax,(%esp)
08438014 +0x0bc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438019 +0x0c1:  xor    $0x1,%eax
0843801c +0x0c4:  test   %al,%al
0843801e +0x0c6:  je     0843802a <+0xd2>
08438020 +0x0c8:  mov    $0x0,%eax
08438025 +0x0cd:  jmp    084382fe <+0x3a6>
0843802a +0x0d2:  mov    -0x24(%ebp),%eax
0843802d +0x0d5:  mov    %eax,(%esp)
08438030 +0x0d8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08438035 +0x0dd:  mov    %eax,-0x18(%ebp)
08438038 +0x0e0:  cmpl   $0x1,-0x18(%ebp)
0843803c +0x0e4:  jne    084381a3 <+0x24b>
08438042 +0x0ea:  mov    -0x24(%ebp),%eax
08438045 +0x0ed:  mov    %eax,(%esp)
08438048 +0x0f0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843804d +0x0f5:  xor    $0x1,%eax
08438050 +0x0f8:  test   %al,%al
08438052 +0x0fa:  je     0843805e <+0x106>
08438054 +0x0fc:  mov    $0x0,%eax
08438059 +0x101:  jmp    084382fe <+0x3a6>
0843805e +0x106:  movl   $0x0,-0x14(%ebp)
08438065 +0x10d:  mov    0xc(%ebp),%eax
08438068 +0x110:  lea    0x8(%eax),%edx
0843806b +0x113:  mov    -0x14(%ebp),%eax
0843806e +0x116:  addl   $0x1,-0x14(%ebp)
08438072 +0x11a:  mov    %edx,0x8(%esp)
08438076 +0x11e:  mov    %eax,0x4(%esp)
0843807a +0x122:  mov    -0x24(%ebp),%eax
0843807d +0x125:  mov    %eax,(%esp)
08438080 +0x128:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08438085 +0x12d:  xor    $0x1,%eax
08438088 +0x130:  test   %al,%al
0843808a +0x132:  je     08438096 <+0x13e>
0843808c +0x134:  mov    $0x0,%eax
08438091 +0x139:  jmp    084382fe <+0x3a6>
08438096 +0x13e:  mov    0xc(%ebp),%eax
08438099 +0x141:  lea    0xc(%eax),%edx
0843809c +0x144:  mov    -0x14(%ebp),%eax
0843809f +0x147:  addl   $0x1,-0x14(%ebp)
084380a3 +0x14b:  mov    %edx,0x8(%esp)
084380a7 +0x14f:  mov    %eax,0x4(%esp)
084380ab +0x153:  mov    -0x24(%ebp),%eax
084380ae +0x156:  mov    %eax,(%esp)
084380b1 +0x159:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084380b6 +0x15e:  xor    $0x1,%eax
084380b9 +0x161:  test   %al,%al
084380bb +0x163:  je     084380c7 <+0x16f>
084380bd +0x165:  mov    $0x0,%eax
084380c2 +0x16a:  jmp    084382fe <+0x3a6>
084380c7 +0x16f:  mov    0xc(%ebp),%eax
084380ca +0x172:  lea    0x10(%eax),%edx
084380cd +0x175:  mov    -0x14(%ebp),%eax
084380d0 +0x178:  addl   $0x1,-0x14(%ebp)
084380d4 +0x17c:  mov    %edx,0x8(%esp)
084380d8 +0x180:  mov    %eax,0x4(%esp)
084380dc +0x184:  mov    -0x24(%ebp),%eax
084380df +0x187:  mov    %eax,(%esp)
084380e2 +0x18a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084380e7 +0x18f:  xor    $0x1,%eax
084380ea +0x192:  test   %al,%al
084380ec +0x194:  je     084380f8 <+0x1a0>
084380ee +0x196:  mov    $0x0,%eax
084380f3 +0x19b:  jmp    084382fe <+0x3a6>
084380f8 +0x1a0:  mov    0xc(%ebp),%eax
084380fb +0x1a3:  lea    0x14(%eax),%edx
084380fe +0x1a6:  mov    -0x14(%ebp),%eax
08438101 +0x1a9:  addl   $0x1,-0x14(%ebp)
08438105 +0x1ad:  mov    %edx,0x8(%esp)
08438109 +0x1b1:  mov    %eax,0x4(%esp)
0843810d +0x1b5:  mov    -0x24(%ebp),%eax
08438110 +0x1b8:  mov    %eax,(%esp)
08438113 +0x1bb:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438118 +0x1c0:  xor    $0x1,%eax
0843811b +0x1c3:  test   %al,%al
0843811d +0x1c5:  je     08438129 <+0x1d1>
0843811f +0x1c7:  mov    $0x0,%eax
08438124 +0x1cc:  jmp    084382fe <+0x3a6>
08438129 +0x1d1:  mov    0xc(%ebp),%eax
0843812c +0x1d4:  lea    0x18(%eax),%edx
0843812f +0x1d7:  mov    -0x14(%ebp),%eax
08438132 +0x1da:  addl   $0x1,-0x14(%ebp)
08438136 +0x1de:  mov    %edx,0x8(%esp)
0843813a +0x1e2:  mov    %eax,0x4(%esp)
0843813e +0x1e6:  mov    -0x24(%ebp),%eax
08438141 +0x1e9:  mov    %eax,(%esp)
08438144 +0x1ec:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08438149 +0x1f1:  xor    $0x1,%eax
0843814c +0x1f4:  test   %al,%al
0843814e +0x1f6:  je     0843815a <+0x202>
08438150 +0x1f8:  mov    $0x0,%eax
08438155 +0x1fd:  jmp    084382fe <+0x3a6>
0843815a +0x202:  mov    -0x20(%ebp),%eax
0843815d +0x205:  movl   $0x0,0x8(%eax)
08438164 +0x20c:  mov    -0x20(%ebp),%eax
08438167 +0x20f:  movl   $0x0,0x4(%eax)
0843816e +0x216:  mov    -0x20(%ebp),%eax
08438171 +0x219:  movl   $0x0,(%eax)
08438177 +0x21f:  mov    -0x20(%ebp),%eax
0843817a +0x222:  mov    %eax,(%esp)
0843817d +0x225:  call   0807e820 <_init+0x1118>
08438182 +0x22a:  mov    %eax,-0x10(%ebp)
08438185 +0x22d:  mov    0xc(%ebp),%eax
08438188 +0x230:  mov    0x14(%eax),%eax
0843818b +0x233:  cmp    -0x10(%ebp),%eax
0843818e +0x236:  je     084381a3 <+0x24b>
08438190 +0x238:  mov    0xc(%ebp),%eax
08438193 +0x23b:  movl   $0x0,0x18(%eax)
0843819a +0x242:  mov    0xc(%ebp),%eax
0843819d +0x245:  mov    -0x10(%ebp),%edx
084381a0 +0x248:  mov    %edx,0x14(%eax)
084381a3 +0x24b:  mov    -0x28(%ebp),%eax
084381a6 +0x24e:  sub    -0x1c(%ebp),%eax
084381a9 +0x251:  lea    -0x93a80(%eax),%edx
084381af +0x257:  mov    0xc(%ebp),%eax
084381b2 +0x25a:  mov    (%eax),%eax
084381b4 +0x25c:  mov    %edx,0xc(%esp)
084381b8 +0x260:  mov    %eax,0x8(%esp)
084381bc +0x264:  movl   $"seLect rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)",0x4(%esp)
084381c4 +0x26c:  mov    -0x24(%ebp),%eax
084381c7 +0x26f:  mov    %eax,(%esp)
084381ca +0x272:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084381cf +0x277:  movl   $0x1,0x4(%esp)
084381d7 +0x27f:  mov    -0x24(%ebp),%eax
084381da +0x282:  mov    %eax,(%esp)
084381dd +0x285:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084381e2 +0x28a:  xor    $0x1,%eax
084381e5 +0x28d:  test   %al,%al
084381e7 +0x28f:  je     084381f3 <+0x29b>
084381e9 +0x291:  mov    $0x0,%eax
084381ee +0x296:  jmp    084382fe <+0x3a6>
084381f3 +0x29b:  mov    -0x24(%ebp),%eax
084381f6 +0x29e:  mov    %eax,(%esp)
084381f9 +0x2a1:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084381fe +0x2a6:  mov    %eax,-0x18(%ebp)
08438201 +0x2a9:  cmpl   $0x1,-0x18(%ebp)
08438205 +0x2ad:  jne    084382f9 <+0x3a1>
0843820b +0x2b3:  mov    -0x24(%ebp),%eax
0843820e +0x2b6:  mov    %eax,(%esp)
08438211 +0x2b9:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08438216 +0x2be:  xor    $0x1,%eax
08438219 +0x2c1:  test   %al,%al
0843821b +0x2c3:  je     08438227 <+0x2cf>
0843821d +0x2c5:  mov    $0x0,%eax
08438222 +0x2ca:  jmp    084382fe <+0x3a6>
08438227 +0x2cf:  movl   $0x0,-0xc(%ebp)
0843822e +0x2d6:  mov    0xc(%ebp),%eax
08438231 +0x2d9:  lea    0x1c(%eax),%edx
08438234 +0x2dc:  mov    -0xc(%ebp),%eax
08438237 +0x2df:  addl   $0x1,-0xc(%ebp)
0843823b +0x2e3:  mov    %edx,0x8(%esp)
0843823f +0x2e7:  mov    %eax,0x4(%esp)
08438243 +0x2eb:  mov    -0x24(%ebp),%eax
08438246 +0x2ee:  mov    %eax,(%esp)
08438249 +0x2f1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843824e +0x2f6:  xor    $0x1,%eax
08438251 +0x2f9:  test   %al,%al
08438253 +0x2fb:  je     0843825f <+0x307>
08438255 +0x2fd:  mov    $0x0,%eax
0843825a +0x302:  jmp    084382fe <+0x3a6>
0843825f +0x307:  movb   $0x0,-0x29(%ebp)
08438263 +0x30b:  mov    -0xc(%ebp),%eax
08438266 +0x30e:  addl   $0x1,-0xc(%ebp)
0843826a +0x312:  lea    -0x29(%ebp),%edx
0843826d +0x315:  mov    %edx,0x8(%esp)
08438271 +0x319:  mov    %eax,0x4(%esp)
08438275 +0x31d:  mov    -0x24(%ebp),%eax
08438278 +0x320:  mov    %eax,(%esp)
0843827b +0x323:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08438280 +0x328:  xor    $0x1,%eax
08438283 +0x32b:  test   %al,%al
08438285 +0x32d:  je     0843828e <+0x336>
08438287 +0x32f:  mov    $0x0,%eax
0843828c +0x334:  jmp    084382fe <+0x3a6>
0843828e +0x336:  movzbl -0x29(%ebp),%eax
08438292 +0x33a:  test   %al,%al
08438294 +0x33c:  sete   %dl
08438297 +0x33f:  mov    0xc(%ebp),%eax
0843829a +0x342:  mov    %dl,0x20(%eax)
0843829d +0x345:  mov    0xc(%ebp),%eax
084382a0 +0x348:  lea    0x24(%eax),%edx
084382a3 +0x34b:  mov    -0xc(%ebp),%eax
084382a6 +0x34e:  addl   $0x1,-0xc(%ebp)
084382aa +0x352:  mov    %edx,0x8(%esp)
084382ae +0x356:  mov    %eax,0x4(%esp)
084382b2 +0x35a:  mov    -0x24(%ebp),%eax
084382b5 +0x35d:  mov    %eax,(%esp)
084382b8 +0x360:  call   0844d66a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x280>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x280
084382bd +0x365:  xor    $0x1,%eax
084382c0 +0x368:  test   %al,%al
084382c2 +0x36a:  je     084382cb <+0x373>
084382c4 +0x36c:  mov    $0x0,%eax
084382c9 +0x371:  jmp    084382fe <+0x3a6>
084382cb +0x373:  mov    0xc(%ebp),%eax
084382ce +0x376:  lea    0x28(%eax),%edx
084382d1 +0x379:  mov    -0xc(%ebp),%eax
084382d4 +0x37c:  addl   $0x1,-0xc(%ebp)
084382d8 +0x380:  mov    %edx,0x8(%esp)
084382dc +0x384:  mov    %eax,0x4(%esp)
084382e0 +0x388:  mov    -0x24(%ebp),%eax
084382e3 +0x38b:  mov    %eax,(%esp)
084382e6 +0x38e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084382eb +0x393:  xor    $0x1,%eax
084382ee +0x396:  test   %al,%al
084382f0 +0x398:  je     084382f9 <+0x3a1>
084382f2 +0x39a:  mov    $0x0,%eax
084382f7 +0x39f:  jmp    084382fe <+0x3a6>
084382f9 +0x3a1:  mov    $0x1,%eax
084382fe +0x3a6:  leave
084382ff +0x3a7:  ret
```

## 反编译 C

```c
// DB_LoadNoCacheData::LoadBloodDungeonReward @ 0x8437f58

/* DB_LoadNoCacheData::LoadBloodDungeonReward(SIG_LOAD_NO_CACHE_DATA*) */

undefined4 __thiscall
DB_LoadNoCacheData::LoadBloodDungeonReward(DB_LoadNoCacheData *this,SIG_LOAD_NO_CACHE_DATA *param_1)

{
  int iVar1;
  char cVar2;
  tm local_5c;
  char local_2d;
  int local_2c;
  MySQL *local_28;
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  time_t local_14;
  int local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = getDailyInitializeTime(6,0,0);
  local_24 = localtime_r(&local_2c,&local_5c);
  if (local_24->tm_wday == 0) {
    local_20 = 0x7e900;
  }
  else {
    local_20 = (local_24->tm_wday + -1) * 0x15180;
  }
  MySQL::set_query(local_28,
                   "seLect week_point,week_enter_count,week_use_gold,unix_timestamp(last_play_date),enter_count,rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)"
                   ,*(undefined4 *)param_1,local_2c - local_20);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = MySQL::get_n_rows(local_28);
  if (local_1c == 1) {
    cVar2 = MySQL::fetch(local_28);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = 1;
    cVar2 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 8));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0xc));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x10));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_int(local_28,iVar1,(int *)(param_1 + 0x14));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x18));
    if (cVar2 != '\x01') {
      return 0;
    }
    local_24->tm_hour = 0;
    local_24->tm_min = 0;
    local_24->tm_sec = 0;
    local_14 = mktime(local_24);
    if (*(int *)(param_1 + 0x14) != local_14) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(time_t *)(param_1 + 0x14) = local_14;
    }
  }
  MySQL::set_query(local_28,
                   "seLect rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)"
                   ,*(undefined4 *)param_1,(local_2c - local_20) + -0x93a80);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = MySQL::get_n_rows(local_28);
  if (local_1c == 1) {
    cVar2 = MySQL::fetch(local_28);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_10 = 1;
    cVar2 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x1c));
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_2d = '\0';
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_byte(local_28,iVar1,&local_2d);
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    param_1[0x20] = (SIG_LOAD_NO_CACHE_DATA)(local_2d == '\0');
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_ulong(local_28,iVar1,(ulong *)(param_1 + 0x24));
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x28));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

# _GetTagCharacInfo

`_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA`

`DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08409fa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08409fa6  _ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA
#           DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*)
# range [0x08409fa6, 0x0840a4cd]
08409fa6 +0x000:  push   %ebp
08409fa7 +0x001:  mov    %esp,%ebp
08409fa9 +0x003:  sub    $0x28,%esp
08409fac +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08409fb1 +0x00b:  movl   $0x0,0x8(%esp)
08409fb9 +0x013:  movl   $0x2,0x4(%esp)
08409fc1 +0x01b:  mov    %eax,(%esp)
08409fc4 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08409fc9 +0x023:  mov    %eax,-0x10(%ebp)
08409fcc +0x026:  mov    0x8(%ebp),%eax
08409fcf +0x029:  mov    %eax,0x8(%esp)
08409fd3 +0x02d:  movl   $"seLect charac_no, charac_name, job, lev, grow_type, skill_tree_index, maxHP, maxMP, phy_attack, phy_defense, mag_attack, mag_defense, element_resist, spec_property, inven_weight, hp_regen, mp_regen, move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight from charac_info where charac_no = %d and delete_flag != 1",0x4(%esp)
08409fdb +0x035:  mov    -0x10(%ebp),%eax
08409fde +0x038:  mov    %eax,(%esp)
08409fe1 +0x03b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08409fe6 +0x040:  movl   $0x1,0x4(%esp)
08409fee +0x048:  mov    -0x10(%ebp),%eax
08409ff1 +0x04b:  mov    %eax,(%esp)
08409ff4 +0x04e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08409ff9 +0x053:  xor    $0x1,%eax
08409ffc +0x056:  test   %al,%al
08409ffe +0x058:  jne    0840a012 <+0x6c>
0840a000 +0x05a:  mov    -0x10(%ebp),%eax
0840a003 +0x05d:  mov    %eax,(%esp)
0840a006 +0x060:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840a00b +0x065:  xor    $0x1,%eax
0840a00e +0x068:  test   %al,%al
0840a010 +0x06a:  je     0840a019 <+0x73>
0840a012 +0x06c:  mov    $0x1,%eax
0840a017 +0x071:  jmp    0840a01e <+0x78>
0840a019 +0x073:  mov    $0x0,%eax
0840a01e +0x078:  test   %al,%al
0840a020 +0x07a:  je     0840a02c <+0x86>
0840a022 +0x07c:  mov    $0x0,%eax
0840a027 +0x081:  jmp    0840a4cb <+0x525>
0840a02c +0x086:  mov    -0x10(%ebp),%eax
0840a02f +0x089:  mov    %eax,(%esp)
0840a032 +0x08c:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840a037 +0x091:  or     %edx,%eax
0840a039 +0x093:  test   %eax,%eax
0840a03b +0x095:  sete   %al
0840a03e +0x098:  test   %al,%al
0840a040 +0x09a:  je     0840a04c <+0xa6>
0840a042 +0x09c:  mov    $0x0,%eax
0840a047 +0x0a1:  jmp    0840a4cb <+0x525>
0840a04c +0x0a6:  movl   $0x0,-0xc(%ebp)
0840a053 +0x0ad:  mov    0xc(%ebp),%edx
0840a056 +0x0b0:  mov    -0xc(%ebp),%eax
0840a059 +0x0b3:  addl   $0x1,-0xc(%ebp)
0840a05d +0x0b7:  mov    %edx,0x8(%esp)
0840a061 +0x0bb:  mov    %eax,0x4(%esp)
0840a065 +0x0bf:  mov    -0x10(%ebp),%eax
0840a068 +0x0c2:  mov    %eax,(%esp)
0840a06b +0x0c5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840a070 +0x0ca:  xor    $0x1,%eax
0840a073 +0x0cd:  test   %al,%al
0840a075 +0x0cf:  je     0840a081 <+0xdb>
0840a077 +0x0d1:  mov    $0x0,%eax
0840a07c +0x0d6:  jmp    0840a4cb <+0x525>
0840a081 +0x0db:  mov    0xc(%ebp),%eax
0840a084 +0x0de:  lea    0x4(%eax),%edx
0840a087 +0x0e1:  mov    -0xc(%ebp),%eax
0840a08a +0x0e4:  addl   $0x1,-0xc(%ebp)
0840a08e +0x0e8:  movl   $0x1d,0xc(%esp)
0840a096 +0x0f0:  mov    %edx,0x8(%esp)
0840a09a +0x0f4:  mov    %eax,0x4(%esp)
0840a09e +0x0f8:  mov    -0x10(%ebp),%eax
0840a0a1 +0x0fb:  mov    %eax,(%esp)
0840a0a4 +0x0fe:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0840a0a9 +0x103:  xor    $0x1,%eax
0840a0ac +0x106:  test   %al,%al
0840a0ae +0x108:  je     0840a0ba <+0x114>
0840a0b0 +0x10a:  mov    $0x0,%eax
0840a0b5 +0x10f:  jmp    0840a4cb <+0x525>
0840a0ba +0x114:  mov    0xc(%ebp),%eax
0840a0bd +0x117:  lea    0x21(%eax),%edx
0840a0c0 +0x11a:  mov    -0xc(%ebp),%eax
0840a0c3 +0x11d:  addl   $0x1,-0xc(%ebp)
0840a0c7 +0x121:  mov    %edx,0x8(%esp)
0840a0cb +0x125:  mov    %eax,0x4(%esp)
0840a0cf +0x129:  mov    -0x10(%ebp),%eax
0840a0d2 +0x12c:  mov    %eax,(%esp)
0840a0d5 +0x12f:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0840a0da +0x134:  xor    $0x1,%eax
0840a0dd +0x137:  test   %al,%al
0840a0df +0x139:  je     0840a0eb <+0x145>
0840a0e1 +0x13b:  mov    $0x0,%eax
0840a0e6 +0x140:  jmp    0840a4cb <+0x525>
0840a0eb +0x145:  mov    0xc(%ebp),%eax
0840a0ee +0x148:  lea    0x22(%eax),%edx
0840a0f1 +0x14b:  mov    -0xc(%ebp),%eax
0840a0f4 +0x14e:  addl   $0x1,-0xc(%ebp)
0840a0f8 +0x152:  mov    %edx,0x8(%esp)
0840a0fc +0x156:  mov    %eax,0x4(%esp)
0840a100 +0x15a:  mov    -0x10(%ebp),%eax
0840a103 +0x15d:  mov    %eax,(%esp)
0840a106 +0x160:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840a10b +0x165:  xor    $0x1,%eax
0840a10e +0x168:  test   %al,%al
0840a110 +0x16a:  je     0840a11c <+0x176>
0840a112 +0x16c:  mov    $0x0,%eax
0840a117 +0x171:  jmp    0840a4cb <+0x525>
0840a11c +0x176:  mov    0xc(%ebp),%eax
0840a11f +0x179:  lea    0x24(%eax),%edx
0840a122 +0x17c:  mov    -0xc(%ebp),%eax
0840a125 +0x17f:  addl   $0x1,-0xc(%ebp)
0840a129 +0x183:  mov    %edx,0x8(%esp)
0840a12d +0x187:  mov    %eax,0x4(%esp)
0840a131 +0x18b:  mov    -0x10(%ebp),%eax
0840a134 +0x18e:  mov    %eax,(%esp)
0840a137 +0x191:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0840a13c +0x196:  xor    $0x1,%eax
0840a13f +0x199:  test   %al,%al
0840a141 +0x19b:  je     0840a14d <+0x1a7>
0840a143 +0x19d:  mov    $0x0,%eax
0840a148 +0x1a2:  jmp    0840a4cb <+0x525>
0840a14d +0x1a7:  mov    0xc(%ebp),%eax
0840a150 +0x1aa:  lea    0x25(%eax),%edx
0840a153 +0x1ad:  mov    -0xc(%ebp),%eax
0840a156 +0x1b0:  addl   $0x1,-0xc(%ebp)
0840a15a +0x1b4:  mov    %edx,0x8(%esp)
0840a15e +0x1b8:  mov    %eax,0x4(%esp)
0840a162 +0x1bc:  mov    -0x10(%ebp),%eax
0840a165 +0x1bf:  mov    %eax,(%esp)
0840a168 +0x1c2:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0840a16d +0x1c7:  xor    $0x1,%eax
0840a170 +0x1ca:  test   %al,%al
0840a172 +0x1cc:  je     0840a17e <+0x1d8>
0840a174 +0x1ce:  mov    $0x0,%eax
0840a179 +0x1d3:  jmp    0840a4cb <+0x525>
0840a17e +0x1d8:  mov    0xc(%ebp),%eax
0840a181 +0x1db:  lea    0x26(%eax),%edx
0840a184 +0x1de:  mov    -0xc(%ebp),%eax
0840a187 +0x1e1:  addl   $0x1,-0xc(%ebp)
0840a18b +0x1e5:  mov    %edx,0x8(%esp)
0840a18f +0x1e9:  mov    %eax,0x4(%esp)
0840a193 +0x1ed:  mov    -0x10(%ebp),%eax
0840a196 +0x1f0:  mov    %eax,(%esp)
0840a199 +0x1f3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840a19e +0x1f8:  xor    $0x1,%eax
0840a1a1 +0x1fb:  test   %al,%al
0840a1a3 +0x1fd:  je     0840a1af <+0x209>
0840a1a5 +0x1ff:  mov    $0x0,%eax
0840a1aa +0x204:  jmp    0840a4cb <+0x525>
0840a1af +0x209:  mov    0xc(%ebp),%eax
0840a1b2 +0x20c:  lea    0x2a(%eax),%edx
0840a1b5 +0x20f:  mov    -0xc(%ebp),%eax
0840a1b8 +0x212:  addl   $0x1,-0xc(%ebp)
0840a1bc +0x216:  mov    %edx,0x8(%esp)
0840a1c0 +0x21a:  mov    %eax,0x4(%esp)
0840a1c4 +0x21e:  mov    -0x10(%ebp),%eax
0840a1c7 +0x221:  mov    %eax,(%esp)
0840a1ca +0x224:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840a1cf +0x229:  xor    $0x1,%eax
0840a1d2 +0x22c:  test   %al,%al
0840a1d4 +0x22e:  je     0840a1e0 <+0x23a>
0840a1d6 +0x230:  mov    $0x0,%eax
0840a1db +0x235:  jmp    0840a4cb <+0x525>
0840a1e0 +0x23a:  mov    0xc(%ebp),%eax
0840a1e3 +0x23d:  lea    0x2e(%eax),%edx
0840a1e6 +0x240:  mov    -0xc(%ebp),%eax
0840a1e9 +0x243:  addl   $0x1,-0xc(%ebp)
0840a1ed +0x247:  mov    %edx,0x8(%esp)
0840a1f1 +0x24b:  mov    %eax,0x4(%esp)
0840a1f5 +0x24f:  mov    -0x10(%ebp),%eax
0840a1f8 +0x252:  mov    %eax,(%esp)
0840a1fb +0x255:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a200 +0x25a:  xor    $0x1,%eax
0840a203 +0x25d:  test   %al,%al
0840a205 +0x25f:  je     0840a211 <+0x26b>
0840a207 +0x261:  mov    $0x0,%eax
0840a20c +0x266:  jmp    0840a4cb <+0x525>
0840a211 +0x26b:  mov    0xc(%ebp),%eax
0840a214 +0x26e:  lea    0x30(%eax),%edx
0840a217 +0x271:  mov    -0xc(%ebp),%eax
0840a21a +0x274:  addl   $0x1,-0xc(%ebp)
0840a21e +0x278:  mov    %edx,0x8(%esp)
0840a222 +0x27c:  mov    %eax,0x4(%esp)
0840a226 +0x280:  mov    -0x10(%ebp),%eax
0840a229 +0x283:  mov    %eax,(%esp)
0840a22c +0x286:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a231 +0x28b:  xor    $0x1,%eax
0840a234 +0x28e:  test   %al,%al
0840a236 +0x290:  je     0840a242 <+0x29c>
0840a238 +0x292:  mov    $0x0,%eax
0840a23d +0x297:  jmp    0840a4cb <+0x525>
0840a242 +0x29c:  mov    0xc(%ebp),%eax
0840a245 +0x29f:  lea    0x32(%eax),%edx
0840a248 +0x2a2:  mov    -0xc(%ebp),%eax
0840a24b +0x2a5:  addl   $0x1,-0xc(%ebp)
0840a24f +0x2a9:  mov    %edx,0x8(%esp)
0840a253 +0x2ad:  mov    %eax,0x4(%esp)
0840a257 +0x2b1:  mov    -0x10(%ebp),%eax
0840a25a +0x2b4:  mov    %eax,(%esp)
0840a25d +0x2b7:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a262 +0x2bc:  xor    $0x1,%eax
0840a265 +0x2bf:  test   %al,%al
0840a267 +0x2c1:  je     0840a273 <+0x2cd>
0840a269 +0x2c3:  mov    $0x0,%eax
0840a26e +0x2c8:  jmp    0840a4cb <+0x525>
0840a273 +0x2cd:  mov    0xc(%ebp),%eax
0840a276 +0x2d0:  lea    0x34(%eax),%edx
0840a279 +0x2d3:  mov    -0xc(%ebp),%eax
0840a27c +0x2d6:  addl   $0x1,-0xc(%ebp)
0840a280 +0x2da:  mov    %edx,0x8(%esp)
0840a284 +0x2de:  mov    %eax,0x4(%esp)
0840a288 +0x2e2:  mov    -0x10(%ebp),%eax
0840a28b +0x2e5:  mov    %eax,(%esp)
0840a28e +0x2e8:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a293 +0x2ed:  xor    $0x1,%eax
0840a296 +0x2f0:  test   %al,%al
0840a298 +0x2f2:  je     0840a2a4 <+0x2fe>
0840a29a +0x2f4:  mov    $0x0,%eax
0840a29f +0x2f9:  jmp    0840a4cb <+0x525>
0840a2a4 +0x2fe:  mov    0xc(%ebp),%eax
0840a2a7 +0x301:  lea    0x36(%eax),%edx
0840a2aa +0x304:  mov    -0xc(%ebp),%eax
0840a2ad +0x307:  addl   $0x1,-0xc(%ebp)
0840a2b1 +0x30b:  movl   $0x8,0xc(%esp)
0840a2b9 +0x313:  mov    %edx,0x8(%esp)
0840a2bd +0x317:  mov    %eax,0x4(%esp)
0840a2c1 +0x31b:  mov    -0x10(%ebp),%eax
0840a2c4 +0x31e:  mov    %eax,(%esp)
0840a2c7 +0x321:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840a2cc +0x326:  xor    $0x1,%eax
0840a2cf +0x329:  test   %al,%al
0840a2d1 +0x32b:  je     0840a2dd <+0x337>
0840a2d3 +0x32d:  mov    $0x0,%eax
0840a2d8 +0x332:  jmp    0840a4cb <+0x525>
0840a2dd +0x337:  mov    0xc(%ebp),%eax
0840a2e0 +0x33a:  lea    0x3e(%eax),%edx
0840a2e3 +0x33d:  mov    -0xc(%ebp),%eax
0840a2e6 +0x340:  addl   $0x1,-0xc(%ebp)
0840a2ea +0x344:  movl   $0x22,0xc(%esp)
0840a2f2 +0x34c:  mov    %edx,0x8(%esp)
0840a2f6 +0x350:  mov    %eax,0x4(%esp)
0840a2fa +0x354:  mov    -0x10(%ebp),%eax
0840a2fd +0x357:  mov    %eax,(%esp)
0840a300 +0x35a:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840a305 +0x35f:  xor    $0x1,%eax
0840a308 +0x362:  test   %al,%al
0840a30a +0x364:  je     0840a316 <+0x370>
0840a30c +0x366:  mov    $0x0,%eax
0840a311 +0x36b:  jmp    0840a4cb <+0x525>
0840a316 +0x370:  mov    0xc(%ebp),%eax
0840a319 +0x373:  lea    0x60(%eax),%edx
0840a31c +0x376:  mov    -0xc(%ebp),%eax
0840a31f +0x379:  addl   $0x1,-0xc(%ebp)
0840a323 +0x37d:  mov    %edx,0x8(%esp)
0840a327 +0x381:  mov    %eax,0x4(%esp)
0840a32b +0x385:  mov    -0x10(%ebp),%eax
0840a32e +0x388:  mov    %eax,(%esp)
0840a331 +0x38b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840a336 +0x390:  xor    $0x1,%eax
0840a339 +0x393:  test   %al,%al
0840a33b +0x395:  je     0840a347 <+0x3a1>
0840a33d +0x397:  mov    $0x0,%eax
0840a342 +0x39c:  jmp    0840a4cb <+0x525>
0840a347 +0x3a1:  mov    0xc(%ebp),%eax
0840a34a +0x3a4:  lea    0x64(%eax),%edx
0840a34d +0x3a7:  mov    -0xc(%ebp),%eax
0840a350 +0x3aa:  addl   $0x1,-0xc(%ebp)
0840a354 +0x3ae:  mov    %edx,0x8(%esp)
0840a358 +0x3b2:  mov    %eax,0x4(%esp)
0840a35c +0x3b6:  mov    -0x10(%ebp),%eax
0840a35f +0x3b9:  mov    %eax,(%esp)
0840a362 +0x3bc:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840a367 +0x3c1:  xor    $0x1,%eax
0840a36a +0x3c4:  test   %al,%al
0840a36c +0x3c6:  je     0840a378 <+0x3d2>
0840a36e +0x3c8:  mov    $0x0,%eax
0840a373 +0x3cd:  jmp    0840a4cb <+0x525>
0840a378 +0x3d2:  mov    0xc(%ebp),%eax
0840a37b +0x3d5:  lea    0x66(%eax),%edx
0840a37e +0x3d8:  mov    -0xc(%ebp),%eax
0840a381 +0x3db:  addl   $0x1,-0xc(%ebp)
0840a385 +0x3df:  mov    %edx,0x8(%esp)
0840a389 +0x3e3:  mov    %eax,0x4(%esp)
0840a38d +0x3e7:  mov    -0x10(%ebp),%eax
0840a390 +0x3ea:  mov    %eax,(%esp)
0840a393 +0x3ed:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840a398 +0x3f2:  xor    $0x1,%eax
0840a39b +0x3f5:  test   %al,%al
0840a39d +0x3f7:  je     0840a3a9 <+0x403>
0840a39f +0x3f9:  mov    $0x0,%eax
0840a3a4 +0x3fe:  jmp    0840a4cb <+0x525>
0840a3a9 +0x403:  mov    0xc(%ebp),%eax
0840a3ac +0x406:  lea    0x68(%eax),%edx
0840a3af +0x409:  mov    -0xc(%ebp),%eax
0840a3b2 +0x40c:  addl   $0x1,-0xc(%ebp)
0840a3b6 +0x410:  mov    %edx,0x8(%esp)
0840a3ba +0x414:  mov    %eax,0x4(%esp)
0840a3be +0x418:  mov    -0x10(%ebp),%eax
0840a3c1 +0x41b:  mov    %eax,(%esp)
0840a3c4 +0x41e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840a3c9 +0x423:  xor    $0x1,%eax
0840a3cc +0x426:  test   %al,%al
0840a3ce +0x428:  je     0840a3da <+0x434>
0840a3d0 +0x42a:  mov    $0x0,%eax
0840a3d5 +0x42f:  jmp    0840a4cb <+0x525>
0840a3da +0x434:  mov    0xc(%ebp),%eax
0840a3dd +0x437:  lea    0x6c(%eax),%edx
0840a3e0 +0x43a:  mov    -0xc(%ebp),%eax
0840a3e3 +0x43d:  addl   $0x1,-0xc(%ebp)
0840a3e7 +0x441:  mov    %edx,0x8(%esp)
0840a3eb +0x445:  mov    %eax,0x4(%esp)
0840a3ef +0x449:  mov    -0x10(%ebp),%eax
0840a3f2 +0x44c:  mov    %eax,(%esp)
0840a3f5 +0x44f:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a3fa +0x454:  xor    $0x1,%eax
0840a3fd +0x457:  test   %al,%al
0840a3ff +0x459:  je     0840a40b <+0x465>
0840a401 +0x45b:  mov    $0x0,%eax
0840a406 +0x460:  jmp    0840a4cb <+0x525>
0840a40b +0x465:  mov    0xc(%ebp),%eax
0840a40e +0x468:  lea    0x6e(%eax),%edx
0840a411 +0x46b:  mov    -0xc(%ebp),%eax
0840a414 +0x46e:  addl   $0x1,-0xc(%ebp)
0840a418 +0x472:  mov    %edx,0x8(%esp)
0840a41c +0x476:  mov    %eax,0x4(%esp)
0840a420 +0x47a:  mov    -0x10(%ebp),%eax
0840a423 +0x47d:  mov    %eax,(%esp)
0840a426 +0x480:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840a42b +0x485:  xor    $0x1,%eax
0840a42e +0x488:  test   %al,%al
0840a430 +0x48a:  je     0840a43c <+0x496>
0840a432 +0x48c:  mov    $0x0,%eax
0840a437 +0x491:  jmp    0840a4cb <+0x525>
0840a43c +0x496:  mov    0xc(%ebp),%eax
0840a43f +0x499:  lea    0x70(%eax),%edx
0840a442 +0x49c:  mov    -0xc(%ebp),%eax
0840a445 +0x49f:  addl   $0x1,-0xc(%ebp)
0840a449 +0x4a3:  mov    %edx,0x8(%esp)
0840a44d +0x4a7:  mov    %eax,0x4(%esp)
0840a451 +0x4ab:  mov    -0x10(%ebp),%eax
0840a454 +0x4ae:  mov    %eax,(%esp)
0840a457 +0x4b1:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840a45c +0x4b6:  xor    $0x1,%eax
0840a45f +0x4b9:  test   %al,%al
0840a461 +0x4bb:  je     0840a46a <+0x4c4>
0840a463 +0x4bd:  mov    $0x0,%eax
0840a468 +0x4c2:  jmp    0840a4cb <+0x525>
0840a46a +0x4c4:  mov    0xc(%ebp),%eax
0840a46d +0x4c7:  lea    0x72(%eax),%edx
0840a470 +0x4ca:  mov    -0xc(%ebp),%eax
0840a473 +0x4cd:  addl   $0x1,-0xc(%ebp)
0840a477 +0x4d1:  mov    %edx,0x8(%esp)
0840a47b +0x4d5:  mov    %eax,0x4(%esp)
0840a47f +0x4d9:  mov    -0x10(%ebp),%eax
0840a482 +0x4dc:  mov    %eax,(%esp)
0840a485 +0x4df:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840a48a +0x4e4:  xor    $0x1,%eax
0840a48d +0x4e7:  test   %al,%al
0840a48f +0x4e9:  je     0840a498 <+0x4f2>
0840a491 +0x4eb:  mov    $0x0,%eax
0840a496 +0x4f0:  jmp    0840a4cb <+0x525>
0840a498 +0x4f2:  mov    0xc(%ebp),%eax
0840a49b +0x4f5:  lea    0x74(%eax),%edx
0840a49e +0x4f8:  mov    -0xc(%ebp),%eax
0840a4a1 +0x4fb:  addl   $0x1,-0xc(%ebp)
0840a4a5 +0x4ff:  mov    %edx,0x8(%esp)
0840a4a9 +0x503:  mov    %eax,0x4(%esp)
0840a4ad +0x507:  mov    -0x10(%ebp),%eax
0840a4b0 +0x50a:  mov    %eax,(%esp)
0840a4b3 +0x50d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840a4b8 +0x512:  xor    $0x1,%eax
0840a4bb +0x515:  test   %al,%al
0840a4bd +0x517:  je     0840a4c6 <+0x520>
0840a4bf +0x519:  mov    $0x0,%eax
0840a4c4 +0x51e:  jmp    0840a4cb <+0x525>
0840a4c6 +0x520:  mov    $0x1,%eax
0840a4cb +0x525:  leave
0840a4cc +0x526:  ret
0840a4cd +0x527:  nop
```

## 反编译 C

```c
// DB_LoadCharac::_GetTagCharacInfo @ 0x8409fa6

/* DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*) */

undefined4 DB_LoadCharac::_GetTagCharacInfo(uint param_1,TAG_CHARAC_DATA *param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  undefined4 uVar3;
  longlong lVar4;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this,
                   "seLect charac_no, charac_name, job, lev, grow_type, skill_tree_index, maxHP, maxMP, phy_attack, phy_defense, mag_attack, mag_defense, element_resist, spec_property, inven_weight, hp_regen, mp_regen, move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight from charac_info where charac_no = %d and delete_flag != 1"
                   ,param_1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(this);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0840a01e;
    }
  }
  bVar1 = true;
LAB_0840a01e:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::get_int(this,0,(int *)param_2);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(this,1,(char *)(param_2 + 4),0x1d);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_byte(this,2,(char *)(param_2 + 0x21));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_short(this,3,(short *)(param_2 + 0x22));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_byte(this,4,(char *)(param_2 + 0x24));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_byte(this,5,(char *)(param_2 + 0x25));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this,6,(uint *)(param_2 + 0x26));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_uint(this,7,(uint *)(param_2 + 0x2a));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_ushort(this,8,(ushort *)(param_2 + 0x2e));
                      if (cVar2 == '\x01') {
                        cVar2 = MySQL::get_ushort(this,9,(ushort *)(param_2 + 0x30));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_ushort(this,10,(ushort *)(param_2 + 0x32));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_ushort(this,0xb,(ushort *)(param_2 + 0x34));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_binary(this,0xc,param_2 + 0x36,8);
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_binary(this,0xd,param_2 + 0x3e,0x22);
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_int(this,0xe,(int *)(param_2 + 0x60));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_short(this,0xf,(short *)(param_2 + 100));
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_short(this,0x10,(short *)(param_2 + 0x66));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_uint(this,0x11,(uint *)(param_2 + 0x68));
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_ushort(this,0x12,
                                                                    (ushort *)(param_2 + 0x6c));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_ushort(this,0x13,
                                                                      (ushort *)(param_2 + 0x6e));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_short(this,0x14,
                                                                       (short *)(param_2 + 0x70));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_short(this,0x15,
                                                                         (short *)(param_2 + 0x72));
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_int(this,0x16,
                                                                         (int *)(param_2 + 0x74));
                                                  if (cVar2 == '\x01') {
                                                    uVar3 = 1;
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                }
                                                else {
                                                  uVar3 = 0;
                                                }
                                              }
                                              else {
                                                uVar3 = 0;
                                              }
                                            }
                                            else {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0;
                                          }
                                        }
                                        else {
                                          uVar3 = 0;
                                        }
                                      }
                                      else {
                                        uVar3 = 0;
                                      }
                                    }
                                    else {
                                      uVar3 = 0;
                                    }
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```

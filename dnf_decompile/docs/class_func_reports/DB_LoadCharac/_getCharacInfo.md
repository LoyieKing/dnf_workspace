# _getCharacInfo

`_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC`

`DB_LoadCharac::_getCharacInfo(SIG_LOAD_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08408cf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408cf4  _ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC
#           DB_LoadCharac::_getCharacInfo(SIG_LOAD_CHARAC*)
# range [0x08408cf4, 0x084093f5]
08408cf4 +0x000:  push   %ebp
08408cf5 +0x001:  mov    %esp,%ebp
08408cf7 +0x003:  sub    $0x28,%esp
08408cfa +0x006:  mov    0x8(%ebp),%eax
08408cfd +0x009:  mov    %eax,(%esp)
08408d00 +0x00c:  call   08408c0a <_ZN13DB_LoadCharac10_getGameDBEv>  ; DB_LoadCharac::_getGameDB()
08408d05 +0x011:  mov    %eax,-0x10(%ebp)
08408d08 +0x014:  mov    0xc(%ebp),%eax
08408d0b +0x017:  mov    0x4(%eax),%eax
08408d0e +0x01a:  mov    %eax,0x8(%esp)
08408d12 +0x01e:  movl   $"seLect charac_no,charac_name,job,lev,grow_type,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,inven_weight,hp_regen,mp_regen,move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight, max_fatigue, create_time,guild_id,guild_right,max_premium_fatigue,member_flag,element_resist,spec_property,m_id,expert_job, skill_tree_index, event_charac_level, guild_secede from charac_info where charac_no=%d and delete_flag!=1",0x4(%esp)
08408d1a +0x026:  mov    -0x10(%ebp),%eax
08408d1d +0x029:  mov    %eax,(%esp)
08408d20 +0x02c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08408d25 +0x031:  movl   $0x1,0x4(%esp)
08408d2d +0x039:  mov    -0x10(%ebp),%eax
08408d30 +0x03c:  mov    %eax,(%esp)
08408d33 +0x03f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08408d38 +0x044:  xor    $0x1,%eax
08408d3b +0x047:  test   %al,%al
08408d3d +0x049:  jne    08408d51 <+0x5d>
08408d3f +0x04b:  mov    -0x10(%ebp),%eax
08408d42 +0x04e:  mov    %eax,(%esp)
08408d45 +0x051:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08408d4a +0x056:  xor    $0x1,%eax
08408d4d +0x059:  test   %al,%al
08408d4f +0x05b:  je     08408d58 <+0x64>
08408d51 +0x05d:  mov    $0x1,%eax
08408d56 +0x062:  jmp    08408d5d <+0x69>
08408d58 +0x064:  mov    $0x0,%eax
08408d5d +0x069:  test   %al,%al
08408d5f +0x06b:  je     08408d6b <+0x77>
08408d61 +0x06d:  mov    $0x0,%eax
08408d66 +0x072:  jmp    084093f4 <+0x700>
08408d6b +0x077:  mov    -0x10(%ebp),%eax
08408d6e +0x07a:  mov    %eax,(%esp)
08408d71 +0x07d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08408d76 +0x082:  cmp    $0x1,%eax
08408d79 +0x085:  setne  %al
08408d7c +0x088:  test   %al,%al
08408d7e +0x08a:  je     08408d8a <+0x96>
08408d80 +0x08c:  mov    $0x0,%eax
08408d85 +0x091:  jmp    084093f4 <+0x700>
08408d8a +0x096:  mov    0xc(%ebp),%eax
08408d8d +0x099:  add    $0xc,%eax
08408d90 +0x09c:  mov    %eax,0x8(%esp)
08408d94 +0x0a0:  movl   $0x0,0x4(%esp)
08408d9c +0x0a8:  mov    -0x10(%ebp),%eax
08408d9f +0x0ab:  mov    %eax,(%esp)
08408da2 +0x0ae:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408da7 +0x0b3:  xor    $0x1,%eax
08408daa +0x0b6:  test   %al,%al
08408dac +0x0b8:  je     08408db8 <+0xc4>
08408dae +0x0ba:  mov    $0x0,%eax
08408db3 +0x0bf:  jmp    084093f4 <+0x700>
08408db8 +0x0c4:  mov    0xc(%ebp),%eax
08408dbb +0x0c7:  add    $0x10,%eax
08408dbe +0x0ca:  movl   $0x1d,0xc(%esp)
08408dc6 +0x0d2:  mov    %eax,0x8(%esp)
08408dca +0x0d6:  movl   $0x1,0x4(%esp)
08408dd2 +0x0de:  mov    -0x10(%ebp),%eax
08408dd5 +0x0e1:  mov    %eax,(%esp)
08408dd8 +0x0e4:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08408ddd +0x0e9:  xor    $0x1,%eax
08408de0 +0x0ec:  test   %al,%al
08408de2 +0x0ee:  je     08408dee <+0xfa>
08408de4 +0x0f0:  mov    $0x0,%eax
08408de9 +0x0f5:  jmp    084093f4 <+0x700>
08408dee +0x0fa:  mov    0xc(%ebp),%eax
08408df1 +0x0fd:  add    $0x30,%eax
08408df4 +0x100:  mov    %eax,0x8(%esp)
08408df8 +0x104:  movl   $0x2,0x4(%esp)
08408e00 +0x10c:  mov    -0x10(%ebp),%eax
08408e03 +0x10f:  mov    %eax,(%esp)
08408e06 +0x112:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08408e0b +0x117:  xor    $0x1,%eax
08408e0e +0x11a:  test   %al,%al
08408e10 +0x11c:  je     08408e1c <+0x128>
08408e12 +0x11e:  mov    $0x0,%eax
08408e17 +0x123:  jmp    084093f4 <+0x700>
08408e1c +0x128:  mov    0xc(%ebp),%eax
08408e1f +0x12b:  add    $0x31,%eax
08408e22 +0x12e:  mov    %eax,0x8(%esp)
08408e26 +0x132:  movl   $0x3,0x4(%esp)
08408e2e +0x13a:  mov    -0x10(%ebp),%eax
08408e31 +0x13d:  mov    %eax,(%esp)
08408e34 +0x140:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08408e39 +0x145:  xor    $0x1,%eax
08408e3c +0x148:  test   %al,%al
08408e3e +0x14a:  je     08408e4a <+0x156>
08408e40 +0x14c:  mov    $0x0,%eax
08408e45 +0x151:  jmp    084093f4 <+0x700>
08408e4a +0x156:  mov    0xc(%ebp),%eax
08408e4d +0x159:  add    $0x33,%eax
08408e50 +0x15c:  mov    %eax,0x8(%esp)
08408e54 +0x160:  movl   $0x4,0x4(%esp)
08408e5c +0x168:  mov    -0x10(%ebp),%eax
08408e5f +0x16b:  mov    %eax,(%esp)
08408e62 +0x16e:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08408e67 +0x173:  xor    $0x1,%eax
08408e6a +0x176:  test   %al,%al
08408e6c +0x178:  je     08408e78 <+0x184>
08408e6e +0x17a:  mov    $0x0,%eax
08408e73 +0x17f:  jmp    084093f4 <+0x700>
08408e78 +0x184:  mov    0xc(%ebp),%eax
08408e7b +0x187:  add    $0x6c,%eax
08408e7e +0x18a:  mov    %eax,0x8(%esp)
08408e82 +0x18e:  movl   $0x5,0x4(%esp)
08408e8a +0x196:  mov    -0x10(%ebp),%eax
08408e8d +0x199:  mov    %eax,(%esp)
08408e90 +0x19c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08408e95 +0x1a1:  xor    $0x1,%eax
08408e98 +0x1a4:  test   %al,%al
08408e9a +0x1a6:  je     08408ea6 <+0x1b2>
08408e9c +0x1a8:  mov    $0x0,%eax
08408ea1 +0x1ad:  jmp    084093f4 <+0x700>
08408ea6 +0x1b2:  mov    0xc(%ebp),%eax
08408ea9 +0x1b5:  add    $0x70,%eax
08408eac +0x1b8:  mov    %eax,0x8(%esp)
08408eb0 +0x1bc:  movl   $0x6,0x4(%esp)
08408eb8 +0x1c4:  mov    -0x10(%ebp),%eax
08408ebb +0x1c7:  mov    %eax,(%esp)
08408ebe +0x1ca:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08408ec3 +0x1cf:  xor    $0x1,%eax
08408ec6 +0x1d2:  test   %al,%al
08408ec8 +0x1d4:  je     08408ed4 <+0x1e0>
08408eca +0x1d6:  mov    $0x0,%eax
08408ecf +0x1db:  jmp    084093f4 <+0x700>
08408ed4 +0x1e0:  mov    0xc(%ebp),%eax
08408ed7 +0x1e3:  add    $0x74,%eax
08408eda +0x1e6:  mov    %eax,0x8(%esp)
08408ede +0x1ea:  movl   $0x7,0x4(%esp)
08408ee6 +0x1f2:  mov    -0x10(%ebp),%eax
08408ee9 +0x1f5:  mov    %eax,(%esp)
08408eec +0x1f8:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08408ef1 +0x1fd:  xor    $0x1,%eax
08408ef4 +0x200:  test   %al,%al
08408ef6 +0x202:  je     08408f02 <+0x20e>
08408ef8 +0x204:  mov    $0x0,%eax
08408efd +0x209:  jmp    084093f4 <+0x700>
08408f02 +0x20e:  mov    0xc(%ebp),%eax
08408f05 +0x211:  add    $0x76,%eax
08408f08 +0x214:  mov    %eax,0x8(%esp)
08408f0c +0x218:  movl   $0x8,0x4(%esp)
08408f14 +0x220:  mov    -0x10(%ebp),%eax
08408f17 +0x223:  mov    %eax,(%esp)
08408f1a +0x226:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08408f1f +0x22b:  xor    $0x1,%eax
08408f22 +0x22e:  test   %al,%al
08408f24 +0x230:  je     08408f30 <+0x23c>
08408f26 +0x232:  mov    $0x0,%eax
08408f2b +0x237:  jmp    084093f4 <+0x700>
08408f30 +0x23c:  mov    0xc(%ebp),%eax
08408f33 +0x23f:  add    $0x78,%eax
08408f36 +0x242:  mov    %eax,0x8(%esp)
08408f3a +0x246:  movl   $0x9,0x4(%esp)
08408f42 +0x24e:  mov    -0x10(%ebp),%eax
08408f45 +0x251:  mov    %eax,(%esp)
08408f48 +0x254:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08408f4d +0x259:  xor    $0x1,%eax
08408f50 +0x25c:  test   %al,%al
08408f52 +0x25e:  je     08408f5e <+0x26a>
08408f54 +0x260:  mov    $0x0,%eax
08408f59 +0x265:  jmp    084093f4 <+0x700>
08408f5e +0x26a:  mov    0xc(%ebp),%eax
08408f61 +0x26d:  add    $0x7a,%eax
08408f64 +0x270:  mov    %eax,0x8(%esp)
08408f68 +0x274:  movl   $0xa,0x4(%esp)
08408f70 +0x27c:  mov    -0x10(%ebp),%eax
08408f73 +0x27f:  mov    %eax,(%esp)
08408f76 +0x282:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08408f7b +0x287:  xor    $0x1,%eax
08408f7e +0x28a:  test   %al,%al
08408f80 +0x28c:  je     08408f8c <+0x298>
08408f82 +0x28e:  mov    $0x0,%eax
08408f87 +0x293:  jmp    084093f4 <+0x700>
08408f8c +0x298:  mov    0xc(%ebp),%eax
08408f8f +0x29b:  add    $0xa6,%eax
08408f94 +0x2a0:  mov    %eax,0x8(%esp)
08408f98 +0x2a4:  movl   $0xb,0x4(%esp)
08408fa0 +0x2ac:  mov    -0x10(%ebp),%eax
08408fa3 +0x2af:  mov    %eax,(%esp)
08408fa6 +0x2b2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408fab +0x2b7:  xor    $0x1,%eax
08408fae +0x2ba:  test   %al,%al
08408fb0 +0x2bc:  je     08408fbc <+0x2c8>
08408fb2 +0x2be:  mov    $0x0,%eax
08408fb7 +0x2c3:  jmp    084093f4 <+0x700>
08408fbc +0x2c8:  mov    0xc(%ebp),%eax
08408fbf +0x2cb:  add    $0xaa,%eax
08408fc4 +0x2d0:  mov    %eax,0x8(%esp)
08408fc8 +0x2d4:  movl   $0xc,0x4(%esp)
08408fd0 +0x2dc:  mov    -0x10(%ebp),%eax
08408fd3 +0x2df:  mov    %eax,(%esp)
08408fd6 +0x2e2:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08408fdb +0x2e7:  xor    $0x1,%eax
08408fde +0x2ea:  test   %al,%al
08408fe0 +0x2ec:  je     08408fec <+0x2f8>
08408fe2 +0x2ee:  mov    $0x0,%eax
08408fe7 +0x2f3:  jmp    084093f4 <+0x700>
08408fec +0x2f8:  mov    0xc(%ebp),%eax
08408fef +0x2fb:  add    $0xac,%eax
08408ff4 +0x300:  mov    %eax,0x8(%esp)
08408ff8 +0x304:  movl   $0xd,0x4(%esp)
08409000 +0x30c:  mov    -0x10(%ebp),%eax
08409003 +0x30f:  mov    %eax,(%esp)
08409006 +0x312:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840900b +0x317:  xor    $0x1,%eax
0840900e +0x31a:  test   %al,%al
08409010 +0x31c:  je     0840901c <+0x328>
08409012 +0x31e:  mov    $0x0,%eax
08409017 +0x323:  jmp    084093f4 <+0x700>
0840901c +0x328:  mov    0xc(%ebp),%eax
0840901f +0x32b:  add    $0xae,%eax
08409024 +0x330:  mov    %eax,0x8(%esp)
08409028 +0x334:  movl   $0xe,0x4(%esp)
08409030 +0x33c:  mov    -0x10(%ebp),%eax
08409033 +0x33f:  mov    %eax,(%esp)
08409036 +0x342:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840903b +0x347:  xor    $0x1,%eax
0840903e +0x34a:  test   %al,%al
08409040 +0x34c:  je     0840904c <+0x358>
08409042 +0x34e:  mov    $0x0,%eax
08409047 +0x353:  jmp    084093f4 <+0x700>
0840904c +0x358:  mov    0xc(%ebp),%eax
0840904f +0x35b:  add    $0xb2,%eax
08409054 +0x360:  mov    %eax,0x8(%esp)
08409058 +0x364:  movl   $0xf,0x4(%esp)
08409060 +0x36c:  mov    -0x10(%ebp),%eax
08409063 +0x36f:  mov    %eax,(%esp)
08409066 +0x372:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840906b +0x377:  xor    $0x1,%eax
0840906e +0x37a:  test   %al,%al
08409070 +0x37c:  je     0840907c <+0x388>
08409072 +0x37e:  mov    $0x0,%eax
08409077 +0x383:  jmp    084093f4 <+0x700>
0840907c +0x388:  mov    0xc(%ebp),%eax
0840907f +0x38b:  add    $0xb4,%eax
08409084 +0x390:  mov    %eax,0x8(%esp)
08409088 +0x394:  movl   $0x10,0x4(%esp)
08409090 +0x39c:  mov    -0x10(%ebp),%eax
08409093 +0x39f:  mov    %eax,(%esp)
08409096 +0x3a2:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840909b +0x3a7:  xor    $0x1,%eax
0840909e +0x3aa:  test   %al,%al
084090a0 +0x3ac:  je     084090ac <+0x3b8>
084090a2 +0x3ae:  mov    $0x0,%eax
084090a7 +0x3b3:  jmp    084093f4 <+0x700>
084090ac +0x3b8:  mov    0xc(%ebp),%eax
084090af +0x3bb:  add    $0xb6,%eax
084090b4 +0x3c0:  mov    %eax,0x8(%esp)
084090b8 +0x3c4:  movl   $0x11,0x4(%esp)
084090c0 +0x3cc:  mov    -0x10(%ebp),%eax
084090c3 +0x3cf:  mov    %eax,(%esp)
084090c6 +0x3d2:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
084090cb +0x3d7:  xor    $0x1,%eax
084090ce +0x3da:  test   %al,%al
084090d0 +0x3dc:  je     084090dc <+0x3e8>
084090d2 +0x3de:  mov    $0x0,%eax
084090d7 +0x3e3:  jmp    084093f4 <+0x700>
084090dc +0x3e8:  mov    0xc(%ebp),%eax
084090df +0x3eb:  add    $0xb8,%eax
084090e4 +0x3f0:  mov    %eax,0x8(%esp)
084090e8 +0x3f4:  movl   $0x12,0x4(%esp)
084090f0 +0x3fc:  mov    -0x10(%ebp),%eax
084090f3 +0x3ff:  mov    %eax,(%esp)
084090f6 +0x402:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
084090fb +0x407:  xor    $0x1,%eax
084090fe +0x40a:  test   %al,%al
08409100 +0x40c:  je     0840910c <+0x418>
08409102 +0x40e:  mov    $0x0,%eax
08409107 +0x413:  jmp    084093f4 <+0x700>
0840910c +0x418:  mov    0xc(%ebp),%eax
0840910f +0x41b:  add    $0xba,%eax
08409114 +0x420:  mov    %eax,0x8(%esp)
08409118 +0x424:  movl   $0x13,0x4(%esp)
08409120 +0x42c:  mov    -0x10(%ebp),%eax
08409123 +0x42f:  mov    %eax,(%esp)
08409126 +0x432:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840912b +0x437:  xor    $0x1,%eax
0840912e +0x43a:  test   %al,%al
08409130 +0x43c:  je     0840913c <+0x448>
08409132 +0x43e:  mov    $0x0,%eax
08409137 +0x443:  jmp    084093f4 <+0x700>
0840913c +0x448:  mov    0xc(%ebp),%eax
0840913f +0x44b:  add    $0x3a,%eax
08409142 +0x44e:  mov    %eax,0x8(%esp)
08409146 +0x452:  movl   $0x14,0x4(%esp)
0840914e +0x45a:  mov    -0x10(%ebp),%eax
08409151 +0x45d:  mov    %eax,(%esp)
08409154 +0x460:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08409159 +0x465:  xor    $0x1,%eax
0840915c +0x468:  test   %al,%al
0840915e +0x46a:  je     0840916a <+0x476>
08409160 +0x46c:  mov    $0x0,%eax
08409165 +0x471:  jmp    084093f4 <+0x700>
0840916a +0x476:  mov    0xc(%ebp),%eax
0840916d +0x479:  add    $0x40,%eax
08409170 +0x47c:  movl   $0x18,0xc(%esp)
08409178 +0x484:  mov    %eax,0x8(%esp)
0840917c +0x488:  movl   $0x15,0x4(%esp)
08409184 +0x490:  mov    -0x10(%ebp),%eax
08409187 +0x493:  mov    %eax,(%esp)
0840918a +0x496:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0840918f +0x49b:  xor    $0x1,%eax
08409192 +0x49e:  test   %al,%al
08409194 +0x4a0:  je     084091a0 <+0x4ac>
08409196 +0x4a2:  mov    $0x0,%eax
0840919b +0x4a7:  jmp    084093f4 <+0x700>
084091a0 +0x4ac:  mov    0xc(%ebp),%eax
084091a3 +0x4af:  add    $0x62,%eax
084091a6 +0x4b2:  mov    %eax,0x8(%esp)
084091aa +0x4b6:  movl   $0x16,0x4(%esp)
084091b2 +0x4be:  mov    -0x10(%ebp),%eax
084091b5 +0x4c1:  mov    %eax,(%esp)
084091b8 +0x4c4:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084091bd +0x4c9:  xor    $0x1,%eax
084091c0 +0x4cc:  test   %al,%al
084091c2 +0x4ce:  je     084091ce <+0x4da>
084091c4 +0x4d0:  mov    $0x0,%eax
084091c9 +0x4d5:  jmp    084093f4 <+0x700>
084091ce +0x4da:  mov    0xc(%ebp),%eax
084091d1 +0x4dd:  add    $0x66,%eax
084091d4 +0x4e0:  mov    %eax,0x8(%esp)
084091d8 +0x4e4:  movl   $0x17,0x4(%esp)
084091e0 +0x4ec:  mov    -0x10(%ebp),%eax
084091e3 +0x4ef:  mov    %eax,(%esp)
084091e6 +0x4f2:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084091eb +0x4f7:  xor    $0x1,%eax
084091ee +0x4fa:  test   %al,%al
084091f0 +0x4fc:  je     084091fc <+0x508>
084091f2 +0x4fe:  mov    $0x0,%eax
084091f7 +0x503:  jmp    084093f4 <+0x700>
084091fc +0x508:  mov    0xc(%ebp),%eax
084091ff +0x50b:  add    $0x69,%eax
08409202 +0x50e:  mov    %eax,0x8(%esp)
08409206 +0x512:  movl   $0x18,0x4(%esp)
0840920e +0x51a:  mov    -0x10(%ebp),%eax
08409211 +0x51d:  mov    %eax,(%esp)
08409214 +0x520:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08409219 +0x525:  xor    $0x1,%eax
0840921c +0x528:  test   %al,%al
0840921e +0x52a:  je     0840922a <+0x536>
08409220 +0x52c:  mov    $0x0,%eax
08409225 +0x531:  jmp    084093f4 <+0x700>
0840922a +0x536:  mov    0xc(%ebp),%eax
0840922d +0x539:  add    $0x6b,%eax
08409230 +0x53c:  mov    %eax,0x8(%esp)
08409234 +0x540:  movl   $0x19,0x4(%esp)
0840923c +0x548:  mov    -0x10(%ebp),%eax
0840923f +0x54b:  mov    %eax,(%esp)
08409242 +0x54e:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08409247 +0x553:  xor    $0x1,%eax
0840924a +0x556:  test   %al,%al
0840924c +0x558:  je     08409258 <+0x564>
0840924e +0x55a:  mov    $0x0,%eax
08409253 +0x55f:  jmp    084093f4 <+0x700>
08409258 +0x564:  mov    0xc(%ebp),%eax
0840925b +0x567:  add    $0x7c,%eax
0840925e +0x56a:  movl   $0x8,0xc(%esp)
08409266 +0x572:  mov    %eax,0x8(%esp)
0840926a +0x576:  movl   $0x1a,0x4(%esp)
08409272 +0x57e:  mov    -0x10(%ebp),%eax
08409275 +0x581:  mov    %eax,(%esp)
08409278 +0x584:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840927d +0x589:  xor    $0x1,%eax
08409280 +0x58c:  test   %al,%al
08409282 +0x58e:  je     0840928e <+0x59a>
08409284 +0x590:  mov    $0x0,%eax
08409289 +0x595:  jmp    084093f4 <+0x700>
0840928e +0x59a:  mov    0xc(%ebp),%eax
08409291 +0x59d:  add    $0x84,%eax
08409296 +0x5a2:  movl   $0x22,0xc(%esp)
0840929e +0x5aa:  mov    %eax,0x8(%esp)
084092a2 +0x5ae:  movl   $0x1b,0x4(%esp)
084092aa +0x5b6:  mov    -0x10(%ebp),%eax
084092ad +0x5b9:  mov    %eax,(%esp)
084092b0 +0x5bc:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084092b5 +0x5c1:  xor    $0x1,%eax
084092b8 +0x5c4:  test   %al,%al
084092ba +0x5c6:  je     084092c6 <+0x5d2>
084092bc +0x5c8:  mov    $0x0,%eax
084092c1 +0x5cd:  jmp    084093f4 <+0x700>
084092c6 +0x5d2:  mov    0xc(%ebp),%eax
084092c9 +0x5d5:  add    $0x140,%eax
084092ce +0x5da:  mov    %eax,0x8(%esp)
084092d2 +0x5de:  movl   $0x1c,0x4(%esp)
084092da +0x5e6:  mov    -0x10(%ebp),%eax
084092dd +0x5e9:  mov    %eax,(%esp)
084092e0 +0x5ec:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084092e5 +0x5f1:  xor    $0x1,%eax
084092e8 +0x5f4:  test   %al,%al
084092ea +0x5f6:  je     084092f6 <+0x602>
084092ec +0x5f8:  mov    $0x0,%eax
084092f1 +0x5fd:  jmp    084093f4 <+0x700>
084092f6 +0x602:  mov    0xc(%ebp),%eax
084092f9 +0x605:  add    $0x112,%eax
084092fe +0x60a:  mov    %eax,0x8(%esp)
08409302 +0x60e:  movl   $0x1d,0x4(%esp)
0840930a +0x616:  mov    -0x10(%ebp),%eax
0840930d +0x619:  mov    %eax,(%esp)
08409310 +0x61c:  call   0844d73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x350
08409315 +0x621:  xor    $0x1,%eax
08409318 +0x624:  test   %al,%al
0840931a +0x626:  je     08409326 <+0x632>
0840931c +0x628:  mov    $0x0,%eax
08409321 +0x62d:  jmp    084093f4 <+0x700>
08409326 +0x632:  mov    0xc(%ebp),%eax
08409329 +0x635:  add    $0x12a,%eax
0840932e +0x63a:  mov    %eax,0x8(%esp)
08409332 +0x63e:  movl   $0x1e,0x4(%esp)
0840933a +0x646:  mov    -0x10(%ebp),%eax
0840933d +0x649:  mov    %eax,(%esp)
08409340 +0x64c:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409345 +0x651:  xor    $0x1,%eax
08409348 +0x654:  test   %al,%al
0840934a +0x656:  je     08409356 <+0x662>
0840934c +0x658:  mov    $0x0,%eax
08409351 +0x65d:  jmp    084093f4 <+0x700>
08409356 +0x662:  mov    0xc(%ebp),%eax
08409359 +0x665:  add    $0x12c,%eax
0840935e +0x66a:  mov    %eax,0x8(%esp)
08409362 +0x66e:  movl   $0x1f,0x4(%esp)
0840936a +0x676:  mov    -0x10(%ebp),%eax
0840936d +0x679:  mov    %eax,(%esp)
08409370 +0x67c:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409375 +0x681:  xor    $0x1,%eax
08409378 +0x684:  test   %al,%al
0840937a +0x686:  je     08409383 <+0x68f>
0840937c +0x688:  mov    $0x0,%eax
08409381 +0x68d:  jmp    084093f4 <+0x700>
08409383 +0x68f:  mov    0xc(%ebp),%eax
08409386 +0x692:  add    $0x130,%eax
0840938b +0x697:  mov    %eax,0x8(%esp)
0840938f +0x69b:  movl   $0x20,0x4(%esp)
08409397 +0x6a3:  mov    -0x10(%ebp),%eax
0840939a +0x6a6:  mov    %eax,(%esp)
0840939d +0x6a9:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084093a2 +0x6ae:  xor    $0x1,%eax
084093a5 +0x6b1:  test   %al,%al
084093a7 +0x6b3:  je     084093b0 <+0x6bc>
084093a9 +0x6b5:  mov    $0x0,%eax
084093ae +0x6ba:  jmp    084093f4 <+0x700>
084093b0 +0x6bc:  mov    0xc(%ebp),%eax
084093b3 +0x6bf:  mov    0x686(%eax),%eax
084093b9 +0x6c5:  test   %eax,%eax
084093bb +0x6c7:  je     084093ef <+0x6fb>
084093bd +0x6c9:  mov    0xc(%ebp),%eax
084093c0 +0x6cc:  lea    0x68b(%eax),%edx
084093c6 +0x6d2:  mov    0xc(%ebp),%eax
084093c9 +0x6d5:  mov    0x686(%eax),%eax
084093cf +0x6db:  mov    %edx,0x4(%esp)
084093d3 +0x6df:  mov    %eax,(%esp)
084093d6 +0x6e2:  call   08409fa6 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA>  ; DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*)
084093db +0x6e7:  mov    %al,-0x9(%ebp)
084093de +0x6ea:  movzbl -0x9(%ebp),%eax
084093e2 +0x6ee:  xor    $0x1,%eax
084093e5 +0x6f1:  test   %al,%al
084093e7 +0x6f3:  je     084093ef <+0x6fb>
084093e9 +0x6f5:  movzbl -0x9(%ebp),%eax
084093ed +0x6f9:  jmp    084093f4 <+0x700>
084093ef +0x6fb:  mov    $0x1,%eax
084093f4 +0x700:  leave
084093f5 +0x701:  ret
```

## 反编译 C

```c
// DB_LoadCharac::_getCharacInfo @ 0x8408cf4

/* DB_LoadCharac::_getCharacInfo(SIG_LOAD_CHARAC*) */

char __thiscall DB_LoadCharac::_getCharacInfo(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  int iVar3;
  
  this_00 = (MySQL *)_getGameDB();
  MySQL::set_query(this_00,
                   "seLect charac_no,charac_name,job,lev,grow_type,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,inven_weight,hp_regen,mp_regen,move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight, max_fatigue, create_time,guild_id,guild_right,max_premium_fatigue,member_flag,element_resist,spec_property,m_id,expert_job, skill_tree_index, event_charac_level, guild_secede from charac_info where charac_no=%d and delete_flag!=1"
                   ,*(undefined4 *)(param_1 + 4));
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_00), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = '\0';
  }
  else {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + 0xc));
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(this_00,1,(char *)(param_1 + 0x10),0x1d);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_byte(this_00,2,(char *)(param_1 + 0x30));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_short(this_00,3,(short *)(param_1 + 0x31));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_byte(this_00,4,(char *)(param_1 + 0x33));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + 0x6c));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this_00,6,(uint *)(param_1 + 0x70));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_ushort(this_00,7,(ushort *)(param_1 + 0x74));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_ushort(this_00,8,(ushort *)(param_1 + 0x76));
                      if (cVar2 == '\x01') {
                        cVar2 = MySQL::get_ushort(this_00,9,(ushort *)(param_1 + 0x78));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_ushort(this_00,10,(ushort *)(param_1 + 0x7a));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_int(this_00,0xb,(int *)(param_1 + 0xa6));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_short(this_00,0xc,(short *)(param_1 + 0xaa));
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_short(this_00,0xd,(short *)(param_1 + 0xac));
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_uint(this_00,0xe,(uint *)(param_1 + 0xae));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_ushort(this_00,0xf,(ushort *)(param_1 + 0xb2)
                                                             );
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_ushort(this_00,0x10,
                                                                (ushort *)(param_1 + 0xb4));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_short(this_00,0x11,
                                                                 (short *)(param_1 + 0xb6));
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_short(this_00,0x12,
                                                                   (short *)(param_1 + 0xb8));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_int(this_00,0x13,
                                                                   (int *)(param_1 + 0xba));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_ushort(this_00,0x14,
                                                                        (ushort *)(param_1 + 0x3a));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_str(this_00,0x15,
                                                                       (char *)(param_1 + 0x40),0x18
                                                                      );
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_uint(this_00,0x16,
                                                                          (uint *)(param_1 + 0x62));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_ubyte(this_00,0x17,
                                                                             (uchar *)(param_1 +
                                                                                      0x66));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_ushort(this_00,0x18,
                                                                                (ushort *)
                                                                                (param_1 + 0x69));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_ubyte(this_00,0x19,
                                                                                 (uchar *)(param_1 +
                                                                                          0x6b));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_binary(this_00,0x1a,
                                                                                    param_1 + 0x7c,8
                                                                                   );
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_binary(this_00,0x1b,
                                                                                      param_1 + 0x84
                                                                                      ,0x22);
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_uint(this_00,0x1c,
                                                                                      (uint *)(
                                                  param_1 + 0x140));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_byte(this_00,0x1d,
                                                                            (int *)(param_1 + 0x112)
                                                                           );
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_byte(this_00,0x1e,
                                                                              (char *)(param_1 +
                                                                                      0x12a));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_byte(this_00,0x1f,
                                                                                (char *)(param_1 +
                                                                                        300));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x20,
                                                                                  (char *)(param_1 +
                                                                                          0x130));
                                                          if (cVar2 == '\x01') {
                                                            if ((*(int *)(param_1 + 0x686) == 0) ||
                                                               (cVar2 = _GetTagCharacInfo(*(uint *)(
                                                  param_1 + 0x686),
                                                  (TAG_CHARAC_DATA *)(param_1 + 0x68b)),
                                                  cVar2 == '\x01')) {
                                                    cVar2 = '\x01';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                }
                                                else {
                                                  cVar2 = '\0';
                                                }
                                              }
                                              else {
                                                cVar2 = '\0';
                                              }
                                            }
                                            else {
                                              cVar2 = '\0';
                                            }
                                          }
                                          else {
                                            cVar2 = '\0';
                                          }
                                        }
                                        else {
                                          cVar2 = '\0';
                                        }
                                      }
                                      else {
                                        cVar2 = '\0';
                                      }
                                    }
                                    else {
                                      cVar2 = '\0';
                                    }
                                  }
                                  else {
                                    cVar2 = '\0';
                                  }
                                }
                                else {
                                  cVar2 = '\0';
                                }
                              }
                              else {
                                cVar2 = '\0';
                              }
                            }
                            else {
                              cVar2 = '\0';
                            }
                          }
                          else {
                            cVar2 = '\0';
                          }
                        }
                        else {
                          cVar2 = '\0';
                        }
                      }
                      else {
                        cVar2 = '\0';
                      }
                    }
                    else {
                      cVar2 = '\0';
                    }
                  }
                  else {
                    cVar2 = '\0';
                  }
                }
                else {
                  cVar2 = '\0';
                }
              }
              else {
                cVar2 = '\0';
              }
            }
            else {
              cVar2 = '\0';
            }
          }
          else {
            cVar2 = '\0';
          }
        }
        else {
          cVar2 = '\0';
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  return cVar2;
}
```

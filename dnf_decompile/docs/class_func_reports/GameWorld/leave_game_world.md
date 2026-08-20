# leave_game_world

`_ZN9GameWorld16leave_game_worldEP5CUser`

`GameWorld::leave_game_world(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c5288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c5288  _ZN9GameWorld16leave_game_worldEP5CUser
#           GameWorld::leave_game_world(CUser*)
# range [0x086c5288, 0x086c5705]
086c5288 +0x000:  push   %ebp
086c5289 +0x001:  mov    %esp,%ebp
086c528b +0x003:  push   %esi
086c528c +0x004:  push   %ebx
086c528d +0x005:  sub    $0x70,%esp
086c5290 +0x008:  mov    0xc(%ebp),%eax
086c5293 +0x00b:  mov    %eax,(%esp)
086c5296 +0x00e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c529b +0x013:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
086c52a1 +0x019:  mov    %eax,0x4(%esp)
086c52a5 +0x01d:  mov    %edx,(%esp)
086c52a8 +0x020:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
086c52ad +0x025:  test   %al,%al
086c52af +0x027:  je     086c52e1 <+0x59>
086c52b1 +0x029:  movl   $0x0,0x4(%esp)
086c52b9 +0x031:  mov    0xc(%ebp),%eax
086c52bc +0x034:  mov    %eax,(%esp)
086c52bf +0x037:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
086c52c4 +0x03c:  mov    0xc(%ebp),%eax
086c52c7 +0x03f:  mov    %eax,(%esp)
086c52ca +0x042:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c52cf +0x047:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
086c52d5 +0x04d:  mov    %eax,0x4(%esp)
086c52d9 +0x051:  mov    %edx,(%esp)
086c52dc +0x054:  call   0829917c <_ZN11CGM_Manager10TurnGmModeEj>  ; CGM_Manager::TurnGmMode(unsigned int)
086c52e1 +0x059:  lea    -0x2c(%ebp),%eax
086c52e4 +0x05c:  mov    %eax,(%esp)
086c52e7 +0x05f:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c52ec +0x064:  mov    0xc(%ebp),%eax
086c52ef +0x067:  mov    %eax,(%esp)
086c52f2 +0x06a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c52f7 +0x06f:  mov    %ax,-0x26(%ebp)
086c52fb +0x073:  mov    0x8(%ebp),%eax
086c52fe +0x076:  lea    0x134(%eax),%ecx
086c5304 +0x07c:  lea    -0x4c(%ebp),%eax
086c5307 +0x07f:  lea    -0x26(%ebp),%edx
086c530a +0x082:  mov    %edx,0x8(%esp)
086c530e +0x086:  mov    %ecx,0x4(%esp)
086c5312 +0x08a:  mov    %eax,(%esp)
086c5315 +0x08d:  call   086d3834 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2065>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2065
086c531a +0x092:  sub    $0x4,%esp
086c531d +0x095:  mov    -0x4c(%ebp),%eax
086c5320 +0x098:  mov    %eax,-0x2c(%ebp)
086c5323 +0x09b:  mov    0x8(%ebp),%eax
086c5326 +0x09e:  lea    0x134(%eax),%edx
086c532c +0x0a4:  lea    -0x24(%ebp),%eax
086c532f +0x0a7:  mov    %edx,0x4(%esp)
086c5333 +0x0ab:  mov    %eax,(%esp)
086c5336 +0x0ae:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c533b +0x0b3:  sub    $0x4,%esp
086c533e +0x0b6:  lea    -0x24(%ebp),%eax
086c5341 +0x0b9:  mov    %eax,0x4(%esp)
086c5345 +0x0bd:  lea    -0x2c(%ebp),%eax
086c5348 +0x0c0:  mov    %eax,(%esp)
086c534b +0x0c3:  call   086d3f20 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2751>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2751
086c5350 +0x0c8:  test   %al,%al
086c5352 +0x0ca:  je     086c539c <+0x114>
086c5354 +0x0cc:  mov    0xc(%ebp),%eax
086c5357 +0x0cf:  mov    %eax,(%esp)
086c535a +0x0d2:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c535f +0x0d7:  movzwl %ax,%eax
086c5362 +0x0da:  mov    %eax,0x14(%esp)
086c5366 +0x0de:  movl   $"m_UsersInWorld.find(%d)",0x10(%esp)
086c536e +0x0e6:  movl   $0x56a,0xc(%esp)
086c5376 +0x0ee:  movl   $&_ZZN9GameWorld16leave_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c537e +0x0f6:  movl   $"world.cpp",0x4(%esp)
086c5386 +0x0fe:  movl   $0x1,(%esp)
086c538d +0x105:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c5392 +0x10a:  mov    $0x0,%ebx
086c5397 +0x10f:  jmp    086c56f9 <+0x471>
086c539c +0x114:  mov    0xc(%ebp),%eax
086c539f +0x117:  mov    %eax,(%esp)
086c53a2 +0x11a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c53a7 +0x11f:  mov    %ax,-0x1e(%ebp)
086c53ab +0x123:  mov    0x8(%ebp),%eax
086c53ae +0x126:  lea    0x134(%eax),%edx
086c53b4 +0x12c:  lea    -0x1e(%ebp),%eax
086c53b7 +0x12f:  mov    %eax,0x4(%esp)
086c53bb +0x133:  mov    %edx,(%esp)
086c53be +0x136:  call   086d38bc <_GLOBAL__I_MAX_VILLAGE_NUM+0x20ed>  ; global constructors keyed to MAX_VILLAGE_NUM+0x20ed
086c53c3 +0x13b:  movl   $0x0,0x4(%esp)
086c53cb +0x143:  mov    0xc(%ebp),%eax
086c53ce +0x146:  mov    %eax,(%esp)
086c53d1 +0x149:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c53d6 +0x14e:  mov    %eax,%esi
086c53d8 +0x150:  mov    0xc(%ebp),%eax
086c53db +0x153:  mov    %eax,(%esp)
086c53de +0x156:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c53e3 +0x15b:  movsbl %al,%eax
086c53e6 +0x15e:  mov    %esi,0x8(%esp)
086c53ea +0x162:  mov    %eax,0x4(%esp)
086c53ee +0x166:  mov    0x8(%ebp),%eax
086c53f1 +0x169:  mov    %eax,(%esp)
086c53f4 +0x16c:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c53f9 +0x171:  test   %al,%al
086c53fb +0x173:  je     086c5455 <+0x1cd>
086c53fd +0x175:  mov    0xc(%ebp),%eax
086c5400 +0x178:  mov    %eax,0x4(%esp)
086c5404 +0x17c:  mov    0x8(%ebp),%eax
086c5407 +0x17f:  mov    %eax,(%esp)
086c540a +0x182:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c540f +0x187:  mov    %eax,-0x10(%ebp)
086c5412 +0x18a:  cmpl   $0x0,-0x10(%ebp)
086c5416 +0x18e:  je     086c5455 <+0x1cd>
086c5418 +0x190:  movl   $0x0,0x4(%esp)
086c5420 +0x198:  mov    0xc(%ebp),%eax
086c5423 +0x19b:  mov    %eax,(%esp)
086c5426 +0x19e:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c542b +0x1a3:  mov    %eax,0x4(%esp)
086c542f +0x1a7:  mov    -0x10(%ebp),%eax
086c5432 +0x1aa:  mov    %eax,(%esp)
086c5435 +0x1ad:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c543a +0x1b2:  mov    %eax,-0xc(%ebp)
086c543d +0x1b5:  cmpl   $0x0,-0xc(%ebp)
086c5441 +0x1b9:  je     086c5455 <+0x1cd>
086c5443 +0x1bb:  mov    0xc(%ebp),%eax
086c5446 +0x1be:  mov    %eax,0x4(%esp)
086c544a +0x1c2:  mov    -0xc(%ebp),%eax
086c544d +0x1c5:  mov    %eax,(%esp)
086c5450 +0x1c8:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
086c5455 +0x1cd:  lea    -0x38(%ebp),%eax
086c5458 +0x1d0:  mov    %eax,(%esp)
086c545b +0x1d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c5460 +0x1d8:  movl   $0x6,0x8(%esp)
086c5468 +0x1e0:  movl   $0x0,0x4(%esp)
086c5470 +0x1e8:  lea    -0x38(%ebp),%eax
086c5473 +0x1eb:  mov    %eax,(%esp)
086c5476 +0x1ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c547b +0x1f3:  mov    0xc(%ebp),%eax
086c547e +0x1f6:  mov    %eax,(%esp)
086c5481 +0x1f9:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c5486 +0x1fe:  movzwl %ax,%eax
086c5489 +0x201:  mov    %eax,0x4(%esp)
086c548d +0x205:  lea    -0x38(%ebp),%eax
086c5490 +0x208:  mov    %eax,(%esp)
086c5493 +0x20b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c5498 +0x210:  movl   $0x1,0x4(%esp)
086c54a0 +0x218:  lea    -0x38(%ebp),%eax
086c54a3 +0x21b:  mov    %eax,(%esp)
086c54a6 +0x21e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c54ab +0x223:  lea    -0x38(%ebp),%eax
086c54ae +0x226:  mov    %eax,0x4(%esp)
086c54b2 +0x22a:  mov    0x8(%ebp),%eax
086c54b5 +0x22d:  mov    %eax,(%esp)
086c54b8 +0x230:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086c54bd +0x235:  lea    -0x3c(%ebp),%eax
086c54c0 +0x238:  mov    %eax,(%esp)
086c54c3 +0x23b:  call   086d3f34 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2765>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2765
086c54c8 +0x240:  mov    0xc(%ebp),%eax
086c54cb +0x243:  mov    %eax,(%esp)
086c54ce +0x246:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c54d3 +0x24b:  mov    %eax,-0x1c(%ebp)
086c54d6 +0x24e:  mov    0x8(%ebp),%eax
086c54d9 +0x251:  lea    0x14c(%eax),%ecx
086c54df +0x257:  lea    -0x4c(%ebp),%eax
086c54e2 +0x25a:  lea    -0x1c(%ebp),%edx
086c54e5 +0x25d:  mov    %edx,0x8(%esp)
086c54e9 +0x261:  mov    %ecx,0x4(%esp)
086c54ed +0x265:  mov    %eax,(%esp)
086c54f0 +0x268:  call   086d3f42 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2773>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2773
086c54f5 +0x26d:  sub    $0x4,%esp
086c54f8 +0x270:  mov    -0x4c(%ebp),%eax
086c54fb +0x273:  mov    %eax,-0x3c(%ebp)
086c54fe +0x276:  mov    0x8(%ebp),%eax
086c5501 +0x279:  lea    0x14c(%eax),%edx
086c5507 +0x27f:  lea    -0x18(%ebp),%eax
086c550a +0x282:  mov    %edx,0x4(%esp)
086c550e +0x286:  mov    %eax,(%esp)
086c5511 +0x289:  call   086d3f6e <_GLOBAL__I_MAX_VILLAGE_NUM+0x279f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x279f
086c5516 +0x28e:  sub    $0x4,%esp
086c5519 +0x291:  lea    -0x18(%ebp),%eax
086c551c +0x294:  mov    %eax,0x4(%esp)
086c5520 +0x298:  lea    -0x3c(%ebp),%eax
086c5523 +0x29b:  mov    %eax,(%esp)
086c5526 +0x29e:  call   086d3f94 <_GLOBAL__I_MAX_VILLAGE_NUM+0x27c5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x27c5
086c552b +0x2a3:  test   %al,%al
086c552d +0x2a5:  je     086c5589 <+0x301>
086c552f +0x2a7:  mov    0xc(%ebp),%eax
086c5532 +0x2aa:  mov    %eax,(%esp)
086c5535 +0x2ad:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c553a +0x2b2:  movl   $0x0,0x4(%esp)
086c5542 +0x2ba:  mov    %eax,(%esp)
086c5545 +0x2bd:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086c554a +0x2c2:  mov    %eax,0x14(%esp)
086c554e +0x2c6:  movl   $"session_list.find(%s)",0x10(%esp)
086c5556 +0x2ce:  movl   $0x588,0xc(%esp)
086c555e +0x2d6:  movl   $&_ZZN9GameWorld16leave_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c5566 +0x2de:  movl   $"world.cpp",0x4(%esp)
086c556e +0x2e6:  movl   $0x1,(%esp)
086c5575 +0x2ed:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c557a +0x2f2:  mov    $0x0,%ebx
086c557f +0x2f7:  mov    $0x0,%esi
086c5584 +0x2fc:  jmp    086c567b <+0x3f3>
086c5589 +0x301:  mov    0xc(%ebp),%eax
086c558c +0x304:  mov    %eax,(%esp)
086c558f +0x307:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c5594 +0x30c:  mov    %eax,-0x14(%ebp)
086c5597 +0x30f:  mov    0x8(%ebp),%eax
086c559a +0x312:  lea    0x14c(%eax),%edx
086c55a0 +0x318:  lea    -0x14(%ebp),%eax
086c55a3 +0x31b:  mov    %eax,0x4(%esp)
086c55a7 +0x31f:  mov    %edx,(%esp)
086c55aa +0x322:  call   086d40c0 <_GLOBAL__I_MAX_VILLAGE_NUM+0x28f1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x28f1
086c55af +0x327:  mov    0xc(%ebp),%eax
086c55b2 +0x32a:  mov    %eax,0x4(%esp)
086c55b6 +0x32e:  movl   $&g_schoolMgr,(%esp)
086c55bd +0x335:  call   085684bc <_ZN10CSchoolMgr7DelUserEP5CUser>  ; CSchoolMgr::DelUser(CUser*)
086c55c2 +0x33a:  mov    0xc(%ebp),%eax
086c55c5 +0x33d:  mov    %eax,(%esp)
086c55c8 +0x340:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c55cd +0x345:  test   %eax,%eax
086c55cf +0x347:  setne  %al
086c55d2 +0x34a:  test   %al,%al
086c55d4 +0x34c:  je     086c55f1 <+0x369>
086c55d6 +0x34e:  mov    0xc(%ebp),%eax
086c55d9 +0x351:  mov    %eax,(%esp)
086c55dc +0x354:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c55e1 +0x359:  mov    %eax,0x4(%esp)
086c55e5 +0x35d:  movl   $&g_guildAgitMgr,(%esp)
086c55ec +0x364:  call   086d268a <_GLOBAL__I_MAX_VILLAGE_NUM+0xebb>  ; global constructors keyed to MAX_VILLAGE_NUM+0xebb
086c55f1 +0x369:  mov    0xc(%ebp),%eax
086c55f4 +0x36c:  mov    %eax,(%esp)
086c55f7 +0x36f:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
086c55fc +0x374:  test   %al,%al
086c55fe +0x376:  setne  %al
086c5601 +0x379:  test   %al,%al
086c5603 +0x37b:  je     086c5624 <+0x39c>
086c5605 +0x37d:  mov    0xc(%ebp),%eax
086c5608 +0x380:  mov    %eax,(%esp)
086c560b +0x383:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
086c5610 +0x388:  movsbl %al,%edx
086c5613 +0x38b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086c5618 +0x390:  mov    %edx,0x4(%esp)
086c561c +0x394:  mov    %eax,(%esp)
086c561f +0x397:  call   0848013c <_ZN13CPowerManager22DecreasePowerUserCountEc>  ; CPowerManager::DecreasePowerUserCount(char)
086c5624 +0x39c:  mov    0xc(%ebp),%eax
086c5627 +0x39f:  mov    %eax,(%esp)
086c562a +0x3a2:  call   084ec9b8 <_GLOBAL__I__Z7getUserj+0x396a>  ; global constructors keyed to getUser(unsigned int)+0x396a
086c562f +0x3a7:  test   %al,%al
086c5631 +0x3a9:  je     086c564a <+0x3c2>
086c5633 +0x3ab:  mov    0x8(%ebp),%eax
086c5636 +0x3ae:  mov    0x194(%eax),%eax
086c563c +0x3b4:  lea    -0x1(%eax),%edx
086c563f +0x3b7:  mov    0x8(%ebp),%eax
086c5642 +0x3ba:  mov    %edx,0x194(%eax)
086c5648 +0x3c0:  jmp    086c565f <+0x3d7>
086c564a +0x3c2:  mov    0x8(%ebp),%eax
086c564d +0x3c5:  mov    0x190(%eax),%eax
086c5653 +0x3cb:  lea    -0x1(%eax),%edx
086c5656 +0x3ce:  mov    0x8(%ebp),%eax
086c5659 +0x3d1:  mov    %edx,0x190(%eax)
086c565f +0x3d7:  mov    $0x1,%esi
086c5664 +0x3dc:  jmp    086c567b <+0x3f3>
086c5666 +0x3de:  mov    %edx,%ebx
086c5668 +0x3e0:  mov    %eax,%esi
086c566a +0x3e2:  lea    -0x38(%ebp),%eax
086c566d +0x3e5:  mov    %eax,(%esp)
086c5670 +0x3e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c5675 +0x3ed:  mov    %esi,%eax
086c5677 +0x3ef:  mov    %ebx,%edx
086c5679 +0x3f1:  jmp    086c568c <+0x404>
086c567b +0x3f3:  lea    -0x38(%ebp),%eax
086c567e +0x3f6:  mov    %eax,(%esp)
086c5681 +0x3f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c5686 +0x3fe:  test   %esi,%esi
086c5688 +0x400:  je     086c56f9 <+0x471>
086c568a +0x402:  jmp    086c56f4 <+0x46c>
086c568c +0x404:  mov    %eax,(%esp)
086c568f +0x407:  call   08725ce0 <__cxa_begin_catch>
086c5694 +0x40c:  call   0807dd70 <_init+0x668>
086c5699 +0x411:  mov    (%eax),%eax
086c569b +0x413:  mov    %eax,(%esp)
086c569e +0x416:  call   0807d730 <_init+0x28>
086c56a3 +0x41b:  mov    %eax,0x14(%esp)
086c56a7 +0x41f:  movl   $"[EXCEPTION Leave GameWorld] - code = %s",0x10(%esp)
086c56af +0x427:  movl   $0x5a7,0xc(%esp)
086c56b7 +0x42f:  movl   $&_ZZN9GameWorld16leave_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c56bf +0x437:  movl   $"world.cpp",0x4(%esp)
086c56c7 +0x43f:  movl   $0x1,(%esp)
086c56ce +0x446:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c56d3 +0x44b:  mov    $0x0,%ebx
086c56d8 +0x450:  call   08725c30 <__cxa_end_catch>
086c56dd +0x455:  jmp    086c56f9 <+0x471>
086c56df +0x457:  mov    %edx,%ebx
086c56e1 +0x459:  mov    %eax,%esi
086c56e3 +0x45b:  call   08725c30 <__cxa_end_catch>
086c56e8 +0x460:  mov    %esi,%eax
086c56ea +0x462:  mov    %ebx,%edx
086c56ec +0x464:  mov    %eax,(%esp)
086c56ef +0x467:  call   08ae3750 <_Unwind_Resume>
086c56f4 +0x46c:  mov    $0x1,%ebx
086c56f9 +0x471:  mov    %ebx,%eax
086c56fb +0x473:  lea    -0x8(%ebp),%esp
086c56fe +0x476:  add    $0x0,%esp
086c5701 +0x479:  pop    %ebx
086c5702 +0x47a:  pop    %esi
086c5703 +0x47b:  pop    %ebp
086c5704 +0x47c:  ret
086c5705 +0x47d:  nop
```

## 反编译 C

```c
// GameWorld::leave_game_world @ 0x86c5288

/* GameWorld::leave_game_world(CUser*) */

undefined4 __thiscall GameWorld::leave_game_world(GameWorld *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  uint local_50 [4];
  uint local_40;
  PacketGuard local_3c [12];
  uint local_30;
  undefined2 local_2a;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [6];
  undefined2 local_22;
  undefined4 local_20;
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  local_1c [4];
  undefined4 local_18;
  Village *local_14;
  Area *local_10;
  
  CUser::get_acc_id(param_1);
                    /* try { // try from 086c52a8 to 086c545f has its CatchHandler @ 086c568c */
  cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
  if (cVar2 != '\0') {
    CUser::SetGameMasterMode(param_1,false);
    CUser::get_acc_id(param_1);
    CGM_Manager::TurnGmMode(GlobalData::s_GM_Manager);
  }
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_30);
  local_2a = CUser::get_unique_id(param_1);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::find((ushort *)local_50);
  local_30 = local_50[0];
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::end(local_28);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_30,
                     (_Rb_tree_iterator *)local_28);
  if (cVar2 == '\0') {
    local_22 = CUser::get_unique_id(param_1);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::erase((ushort *)(this + 0x134));
    iVar4 = CUser::get_area(param_1,false);
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    cVar2 = check_valid_area(this,(int)cVar2,iVar4);
    if (cVar2 != '\0') {
      local_14 = (Village *)getUserVillage(this,param_1);
      if (local_14 != (Village *)0x0) {
        iVar4 = CUser::get_area(param_1,false);
        local_10 = (Area *)Village::getArea(local_14,iVar4);
        if (local_10 != (Area *)0x0) {
          Area::erase_user(local_10,param_1);
        }
      }
    }
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 086c5476 to 086c5623 has its CatchHandler @ 086c5666 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,6);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,uVar3 & 0xffff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    send_all(this,local_3c);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_40);
    local_20 = CUser::get_acc_id(param_1);
    std::
    map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
    ::find(local_50);
    local_40 = local_50[0];
    std::
    map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_40,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      local_18 = CUser::get_acc_id(param_1);
      std::
      map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
      ::erase((uint *)(this + 0x14c));
      CSchoolMgr::DelUser((CSchoolMgr *)g_schoolMgr,param_1);
      iVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      if (iVar4 != 0) {
        CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        CGuildAgitManager::ReleaseGuildAgitArea(0x943e0e0);
      }
      cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)param_1);
      if (cVar2 != '\0') {
        cVar2 = CUser::getPowerSide(param_1);
        CPowerManager::DecreasePowerUserCount(GlobalData::s_power_manager,cVar2);
      }
      cVar2 = CUser::isHangameUser(param_1);
      if (cVar2 == '\0') {
        *(int *)(this + 400) = *(int *)(this + 400) + -1;
      }
      else {
        *(int *)(this + 0x194) = *(int *)(this + 0x194) + -1;
      }
      bVar1 = true;
    }
    else {
      uVar3 = CUser::get_acc_id(param_1);
      uVar5 = NumberToString(uVar3,0);
      LogManager::logFormat
                (1,"world.cpp","bool GameWorld::leave_game_world(CUser*)",0x588,
                 "session_list.find(%s)",uVar5);
      unaff_EBX = 0;
      bVar1 = false;
    }
                    /* try { // try from 086c5681 to 086c5685 has its CatchHandler @ 086c568c */
    PacketGuard::~PacketGuard(local_3c);
    if (bVar1) {
      unaff_EBX = 1;
    }
  }
  else {
    uVar3 = CUser::get_unique_id(param_1);
    LogManager::logFormat
              (1,"world.cpp","bool GameWorld::leave_game_world(CUser*)",0x56a,
               "m_UsersInWorld.find(%d)",uVar3 & 0xffff);
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```

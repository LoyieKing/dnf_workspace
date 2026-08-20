# dispatch

`_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream`

`DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadBreakAwayPreventData` | `0x084389fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084389fe  _ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream
#           DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)
# range [0x084389fe, 0x0843915b]
084389fe +0x000:  push   %ebp
084389ff +0x001:  mov    %esp,%ebp
08438a01 +0x003:  push   %esi
08438a02 +0x004:  push   %ebx
08438a03 +0x005:  sub    $0x340,%esp
08438a09 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08438a0e +0x010:  movl   $0x0,0x8(%esp)
08438a16 +0x018:  movl   $0x6,0x4(%esp)
08438a1e +0x020:  mov    %eax,(%esp)
08438a21 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08438a26 +0x028:  mov    %eax,-0x18(%ebp)
08438a29 +0x02b:  movb   $0x0,-0x39(%ebp)
08438a2d +0x02f:  lea    -0x39(%ebp),%eax
08438a30 +0x032:  mov    %eax,0x4(%esp)
08438a34 +0x036:  mov    0x14(%ebp),%eax
08438a37 +0x039:  mov    %eax,(%esp)
08438a3a +0x03c:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
08438a3f +0x041:  lea    -0x32c(%ebp),%eax
08438a45 +0x047:  mov    %eax,(%esp)
08438a48 +0x04a:  call   0831d2b0 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x69>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x69
08438a4d +0x04f:  movl   $0x0,-0x14(%ebp)
08438a54 +0x056:  movl   $0x0,-0x40(%ebp)
08438a5b +0x05d:  movl   $"seLect no, weekday_var_a, weekday_var_b, weekday_var_c, weekend_var_x, weekend_var_y, weekend_var_z, next_reward_day, state_flag from churn_system_manager order by no desc limit 1",0x4(%esp)
08438a63 +0x065:  mov    -0x18(%ebp),%eax
08438a66 +0x068:  mov    %eax,(%esp)
08438a69 +0x06b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438a6e +0x070:  movl   $0x1,0x4(%esp)
08438a76 +0x078:  mov    -0x18(%ebp),%eax
08438a79 +0x07b:  mov    %eax,(%esp)
08438a7c +0x07e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438a81 +0x083:  xor    $0x1,%eax
08438a84 +0x086:  test   %al,%al
08438a86 +0x088:  je     08438a92 <+0x94>
08438a88 +0x08a:  mov    $0x0,%ebx
08438a8d +0x08f:  jmp    0843914f <+0x751>
08438a92 +0x094:  mov    -0x18(%ebp),%eax
08438a95 +0x097:  mov    %eax,(%esp)
08438a98 +0x09a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08438a9d +0x09f:  mov    %eax,-0x14(%ebp)
08438aa0 +0x0a2:  cmpl   $0x1,-0x14(%ebp)
08438aa4 +0x0a6:  jne    08438c76 <+0x278>
08438aaa +0x0ac:  mov    -0x18(%ebp),%eax
08438aad +0x0af:  mov    %eax,(%esp)
08438ab0 +0x0b2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08438ab5 +0x0b7:  xor    $0x1,%eax
08438ab8 +0x0ba:  test   %al,%al
08438aba +0x0bc:  je     08438ac6 <+0xc8>
08438abc +0x0be:  mov    $0x0,%ebx
08438ac1 +0x0c3:  jmp    0843914f <+0x751>
08438ac6 +0x0c8:  lea    -0x40(%ebp),%eax
08438ac9 +0x0cb:  mov    %eax,0x8(%esp)
08438acd +0x0cf:  movl   $0x0,0x4(%esp)
08438ad5 +0x0d7:  mov    -0x18(%ebp),%eax
08438ad8 +0x0da:  mov    %eax,(%esp)
08438adb +0x0dd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438ae0 +0x0e2:  xor    $0x1,%eax
08438ae3 +0x0e5:  test   %al,%al
08438ae5 +0x0e7:  je     08438af1 <+0xf3>
08438ae7 +0x0e9:  mov    $0x0,%ebx
08438aec +0x0ee:  jmp    0843914f <+0x751>
08438af1 +0x0f3:  lea    -0x32c(%ebp),%eax
08438af7 +0x0f9:  mov    %eax,0x8(%esp)
08438afb +0x0fd:  movl   $0x1,0x4(%esp)
08438b03 +0x105:  mov    -0x18(%ebp),%eax
08438b06 +0x108:  mov    %eax,(%esp)
08438b09 +0x10b:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438b0e +0x110:  xor    $0x1,%eax
08438b11 +0x113:  test   %al,%al
08438b13 +0x115:  je     08438b1f <+0x121>
08438b15 +0x117:  mov    $0x0,%ebx
08438b1a +0x11c:  jmp    0843914f <+0x751>
08438b1f +0x121:  lea    -0x32c(%ebp),%eax
08438b25 +0x127:  add    $0x2,%eax
08438b28 +0x12a:  mov    %eax,0x8(%esp)
08438b2c +0x12e:  movl   $0x2,0x4(%esp)
08438b34 +0x136:  mov    -0x18(%ebp),%eax
08438b37 +0x139:  mov    %eax,(%esp)
08438b3a +0x13c:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438b3f +0x141:  xor    $0x1,%eax
08438b42 +0x144:  test   %al,%al
08438b44 +0x146:  je     08438b50 <+0x152>
08438b46 +0x148:  mov    $0x0,%ebx
08438b4b +0x14d:  jmp    0843914f <+0x751>
08438b50 +0x152:  lea    -0x32c(%ebp),%eax
08438b56 +0x158:  add    $0x4,%eax
08438b59 +0x15b:  mov    %eax,0x8(%esp)
08438b5d +0x15f:  movl   $0x3,0x4(%esp)
08438b65 +0x167:  mov    -0x18(%ebp),%eax
08438b68 +0x16a:  mov    %eax,(%esp)
08438b6b +0x16d:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438b70 +0x172:  xor    $0x1,%eax
08438b73 +0x175:  test   %al,%al
08438b75 +0x177:  je     08438b81 <+0x183>
08438b77 +0x179:  mov    $0x0,%ebx
08438b7c +0x17e:  jmp    0843914f <+0x751>
08438b81 +0x183:  lea    -0x32c(%ebp),%eax
08438b87 +0x189:  add    $0x6,%eax
08438b8a +0x18c:  mov    %eax,0x8(%esp)
08438b8e +0x190:  movl   $0x4,0x4(%esp)
08438b96 +0x198:  mov    -0x18(%ebp),%eax
08438b99 +0x19b:  mov    %eax,(%esp)
08438b9c +0x19e:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438ba1 +0x1a3:  xor    $0x1,%eax
08438ba4 +0x1a6:  test   %al,%al
08438ba6 +0x1a8:  je     08438bb2 <+0x1b4>
08438ba8 +0x1aa:  mov    $0x0,%ebx
08438bad +0x1af:  jmp    0843914f <+0x751>
08438bb2 +0x1b4:  lea    -0x32c(%ebp),%eax
08438bb8 +0x1ba:  add    $0x8,%eax
08438bbb +0x1bd:  mov    %eax,0x8(%esp)
08438bbf +0x1c1:  movl   $0x5,0x4(%esp)
08438bc7 +0x1c9:  mov    -0x18(%ebp),%eax
08438bca +0x1cc:  mov    %eax,(%esp)
08438bcd +0x1cf:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438bd2 +0x1d4:  xor    $0x1,%eax
08438bd5 +0x1d7:  test   %al,%al
08438bd7 +0x1d9:  je     08438be3 <+0x1e5>
08438bd9 +0x1db:  mov    $0x0,%ebx
08438bde +0x1e0:  jmp    0843914f <+0x751>
08438be3 +0x1e5:  lea    -0x32c(%ebp),%eax
08438be9 +0x1eb:  add    $0xa,%eax
08438bec +0x1ee:  mov    %eax,0x8(%esp)
08438bf0 +0x1f2:  movl   $0x6,0x4(%esp)
08438bf8 +0x1fa:  mov    -0x18(%ebp),%eax
08438bfb +0x1fd:  mov    %eax,(%esp)
08438bfe +0x200:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438c03 +0x205:  xor    $0x1,%eax
08438c06 +0x208:  test   %al,%al
08438c08 +0x20a:  je     08438c14 <+0x216>
08438c0a +0x20c:  mov    $0x0,%ebx
08438c0f +0x211:  jmp    0843914f <+0x751>
08438c14 +0x216:  lea    -0x32c(%ebp),%eax
08438c1a +0x21c:  add    $0xc,%eax
08438c1d +0x21f:  mov    %eax,0x8(%esp)
08438c21 +0x223:  movl   $0x7,0x4(%esp)
08438c29 +0x22b:  mov    -0x18(%ebp),%eax
08438c2c +0x22e:  mov    %eax,(%esp)
08438c2f +0x231:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08438c34 +0x236:  xor    $0x1,%eax
08438c37 +0x239:  test   %al,%al
08438c39 +0x23b:  je     08438c45 <+0x247>
08438c3b +0x23d:  mov    $0x0,%ebx
08438c40 +0x242:  jmp    0843914f <+0x751>
08438c45 +0x247:  lea    -0x32c(%ebp),%eax
08438c4b +0x24d:  add    $0xe,%eax
08438c4e +0x250:  mov    %eax,0x8(%esp)
08438c52 +0x254:  movl   $0x8,0x4(%esp)
08438c5a +0x25c:  mov    -0x18(%ebp),%eax
08438c5d +0x25f:  mov    %eax,(%esp)
08438c60 +0x262:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08438c65 +0x267:  xor    $0x1,%eax
08438c68 +0x26a:  test   %al,%al
08438c6a +0x26c:  je     08438c80 <+0x282>
08438c6c +0x26e:  mov    $0x0,%ebx
08438c71 +0x273:  jmp    0843914f <+0x751>
08438c76 +0x278:  mov    $0x0,%ebx
08438c7b +0x27d:  jmp    0843914f <+0x751>
08438c80 +0x282:  movzbl -0x39(%ebp),%eax
08438c84 +0x286:  xor    $0x1,%eax
08438c87 +0x289:  test   %al,%al
08438c89 +0x28b:  je     08438d2f <+0x331>
08438c8f +0x291:  mov    -0x40(%ebp),%edx
08438c92 +0x294:  movzbl -0x39(%ebp),%eax
08438c96 +0x298:  movzbl %al,%eax
08438c99 +0x29b:  mov    %edx,0xc(%esp)
08438c9d +0x29f:  mov    %eax,0x8(%esp)
08438ca1 +0x2a3:  movl   $"upDate churn_system_manager set state_flag=%d where no = %d",0x4(%esp)
08438ca9 +0x2ab:  mov    -0x18(%ebp),%eax
08438cac +0x2ae:  mov    %eax,(%esp)
08438caf +0x2b1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438cb4 +0x2b6:  movl   $0x1,0x4(%esp)
08438cbc +0x2be:  mov    -0x18(%ebp),%eax
08438cbf +0x2c1:  mov    %eax,(%esp)
08438cc2 +0x2c4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438cc7 +0x2c9:  xor    $0x1,%eax
08438cca +0x2cc:  test   %al,%al
08438ccc +0x2ce:  jne    08438cdf <+0x2e1>
08438cce +0x2d0:  mov    -0x18(%ebp),%eax
08438cd1 +0x2d3:  mov    %eax,(%esp)
08438cd4 +0x2d6:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08438cd9 +0x2db:  or     %edx,%eax
08438cdb +0x2dd:  test   %eax,%eax
08438cdd +0x2df:  jne    08438ce6 <+0x2e8>
08438cdf +0x2e1:  mov    $0x1,%eax
08438ce4 +0x2e6:  jmp    08438ceb <+0x2ed>
08438ce6 +0x2e8:  mov    $0x0,%eax
08438ceb +0x2ed:  test   %al,%al
08438ced +0x2ef:  je     08438d25 <+0x327>
08438cef +0x2f1:  movl   $0x0,0xc(%esp)
08438cf7 +0x2f9:  movl   $0x8684,0x8(%esp)
08438cff +0x301:  movl   $&_ZZN27DB_LoadBreakAwayPreventData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08438d07 +0x309:  lea    -0x38(%ebp),%eax
08438d0a +0x30c:  mov    %eax,(%esp)
08438d0d +0x30f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08438d12 +0x314:  movl   $"BREAK_AWAY : STATE_FALG ALREADY OFF!!",0x4(%esp)
08438d1a +0x31c:  lea    -0x38(%ebp),%eax
08438d1d +0x31f:  mov    %eax,(%esp)
08438d20 +0x322:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08438d25 +0x327:  mov    $0x0,%ebx
08438d2a +0x32c:  jmp    0843914f <+0x751>
08438d2f +0x331:  mov    -0x40(%ebp),%edx
08438d32 +0x334:  movzbl -0x39(%ebp),%eax
08438d36 +0x338:  movzbl %al,%eax
08438d39 +0x33b:  mov    %edx,0xc(%esp)
08438d3d +0x33f:  mov    %eax,0x8(%esp)
08438d41 +0x343:  movl   $"upDate churn_system_manager set state_flag=%d where no = %d",0x4(%esp)
08438d49 +0x34b:  mov    -0x18(%ebp),%eax
08438d4c +0x34e:  mov    %eax,(%esp)
08438d4f +0x351:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438d54 +0x356:  movl   $0x1,0x4(%esp)
08438d5c +0x35e:  mov    -0x18(%ebp),%eax
08438d5f +0x361:  mov    %eax,(%esp)
08438d62 +0x364:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438d67 +0x369:  xor    $0x1,%eax
08438d6a +0x36c:  test   %al,%al
08438d6c +0x36e:  jne    08438d7f <+0x381>
08438d6e +0x370:  mov    -0x18(%ebp),%eax
08438d71 +0x373:  mov    %eax,(%esp)
08438d74 +0x376:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08438d79 +0x37b:  or     %edx,%eax
08438d7b +0x37d:  test   %eax,%eax
08438d7d +0x37f:  jne    08438d86 <+0x388>
08438d7f +0x381:  mov    $0x1,%eax
08438d84 +0x386:  jmp    08438d8b <+0x38d>
08438d86 +0x388:  mov    $0x0,%eax
08438d8b +0x38d:  test   %al,%al
08438d8d +0x38f:  je     08438dc5 <+0x3c7>
08438d8f +0x391:  movl   $0x0,0xc(%esp)
08438d97 +0x399:  movl   $0x868a,0x8(%esp)
08438d9f +0x3a1:  movl   $&_ZZN27DB_LoadBreakAwayPreventData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08438da7 +0x3a9:  lea    -0x28(%ebp),%eax
08438daa +0x3ac:  mov    %eax,(%esp)
08438dad +0x3af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08438db2 +0x3b4:  movl   $"BREAK_AWAY : STATE_FALG ALREADY ON!!",0x4(%esp)
08438dba +0x3bc:  lea    -0x28(%ebp),%eax
08438dbd +0x3bf:  mov    %eax,(%esp)
08438dc0 +0x3c2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08438dc5 +0x3c7:  movzbl -0x39(%ebp),%eax
08438dc9 +0x3cb:  mov    %al,-0x31e(%ebp)
08438dcf +0x3d1:  movl   $"seLect min_day, max_day, min_val, max_val, item_id, add_info, luck_point, quest_id from churn_reward_manager",0x4(%esp)
08438dd7 +0x3d9:  mov    -0x18(%ebp),%eax
08438dda +0x3dc:  mov    %eax,(%esp)
08438ddd +0x3df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438de2 +0x3e4:  movl   $0x1,0x4(%esp)
08438dea +0x3ec:  mov    -0x18(%ebp),%eax
08438ded +0x3ef:  mov    %eax,(%esp)
08438df0 +0x3f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438df5 +0x3f7:  xor    $0x1,%eax
08438df8 +0x3fa:  test   %al,%al
08438dfa +0x3fc:  je     08438e06 <+0x408>
08438dfc +0x3fe:  mov    $0x0,%ebx
08438e01 +0x403:  jmp    0843914f <+0x751>
08438e06 +0x408:  mov    -0x18(%ebp),%eax
08438e09 +0x40b:  mov    %eax,(%esp)
08438e0c +0x40e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08438e11 +0x413:  mov    %eax,-0x14(%ebp)
08438e14 +0x416:  movl   $0x0,-0xc(%ebp)
08438e1b +0x41d:  jmp    08439052 <+0x654>
08438e20 +0x422:  mov    -0x18(%ebp),%eax
08438e23 +0x425:  mov    %eax,(%esp)
08438e26 +0x428:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08438e2b +0x42d:  xor    $0x1,%eax
08438e2e +0x430:  test   %al,%al
08438e30 +0x432:  je     08438e3c <+0x43e>
08438e32 +0x434:  mov    $0x0,%ebx
08438e37 +0x439:  jmp    0843914f <+0x751>
08438e3c +0x43e:  mov    -0xc(%ebp),%edx
08438e3f +0x441:  lea    -0x32c(%ebp),%ecx
08438e45 +0x447:  mov    %edx,%eax
08438e47 +0x449:  add    %eax,%eax
08438e49 +0x44b:  add    %edx,%eax
08438e4b +0x44d:  shl    $0x3,%eax
08438e4e +0x450:  add    $0x10,%eax
08438e51 +0x453:  lea    (%ecx,%eax,1),%eax
08438e54 +0x456:  add    $0x1,%eax
08438e57 +0x459:  mov    %eax,0x8(%esp)
08438e5b +0x45d:  movl   $0x0,0x4(%esp)
08438e63 +0x465:  mov    -0x18(%ebp),%eax
08438e66 +0x468:  mov    %eax,(%esp)
08438e69 +0x46b:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08438e6e +0x470:  xor    $0x1,%eax
08438e71 +0x473:  test   %al,%al
08438e73 +0x475:  je     08438e7f <+0x481>
08438e75 +0x477:  mov    $0x0,%ebx
08438e7a +0x47c:  jmp    0843914f <+0x751>
08438e7f +0x481:  mov    -0xc(%ebp),%edx
08438e82 +0x484:  lea    -0x32c(%ebp),%ecx
08438e88 +0x48a:  mov    %edx,%eax
08438e8a +0x48c:  add    %eax,%eax
08438e8c +0x48e:  add    %edx,%eax
08438e8e +0x490:  shl    $0x3,%eax
08438e91 +0x493:  add    $0x10,%eax
08438e94 +0x496:  lea    (%ecx,%eax,1),%eax
08438e97 +0x499:  add    $0x2,%eax
08438e9a +0x49c:  mov    %eax,0x8(%esp)
08438e9e +0x4a0:  movl   $0x1,0x4(%esp)
08438ea6 +0x4a8:  mov    -0x18(%ebp),%eax
08438ea9 +0x4ab:  mov    %eax,(%esp)
08438eac +0x4ae:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08438eb1 +0x4b3:  xor    $0x1,%eax
08438eb4 +0x4b6:  test   %al,%al
08438eb6 +0x4b8:  je     08438ec2 <+0x4c4>
08438eb8 +0x4ba:  mov    $0x0,%ebx
08438ebd +0x4bf:  jmp    0843914f <+0x751>
08438ec2 +0x4c4:  mov    -0xc(%ebp),%edx
08438ec5 +0x4c7:  lea    -0x32c(%ebp),%ecx
08438ecb +0x4cd:  mov    %edx,%eax
08438ecd +0x4cf:  add    %eax,%eax
08438ecf +0x4d1:  add    %edx,%eax
08438ed1 +0x4d3:  shl    $0x3,%eax
08438ed4 +0x4d6:  add    $0x10,%eax
08438ed7 +0x4d9:  lea    (%ecx,%eax,1),%eax
08438eda +0x4dc:  add    $0x4,%eax
08438edd +0x4df:  mov    %eax,0x8(%esp)
08438ee1 +0x4e3:  movl   $0x2,0x4(%esp)
08438ee9 +0x4eb:  mov    -0x18(%ebp),%eax
08438eec +0x4ee:  mov    %eax,(%esp)
08438eef +0x4f1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438ef4 +0x4f6:  xor    $0x1,%eax
08438ef7 +0x4f9:  test   %al,%al
08438ef9 +0x4fb:  je     08438f05 <+0x507>
08438efb +0x4fd:  mov    $0x0,%ebx
08438f00 +0x502:  jmp    0843914f <+0x751>
08438f05 +0x507:  mov    -0xc(%ebp),%edx
08438f08 +0x50a:  lea    -0x32c(%ebp),%ecx
08438f0e +0x510:  mov    %edx,%eax
08438f10 +0x512:  add    %eax,%eax
08438f12 +0x514:  add    %edx,%eax
08438f14 +0x516:  shl    $0x3,%eax
08438f17 +0x519:  add    $0x10,%eax
08438f1a +0x51c:  lea    (%ecx,%eax,1),%eax
08438f1d +0x51f:  add    $0x8,%eax
08438f20 +0x522:  mov    %eax,0x8(%esp)
08438f24 +0x526:  movl   $0x3,0x4(%esp)
08438f2c +0x52e:  mov    -0x18(%ebp),%eax
08438f2f +0x531:  mov    %eax,(%esp)
08438f32 +0x534:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438f37 +0x539:  xor    $0x1,%eax
08438f3a +0x53c:  test   %al,%al
08438f3c +0x53e:  je     08438f48 <+0x54a>
08438f3e +0x540:  mov    $0x0,%ebx
08438f43 +0x545:  jmp    0843914f <+0x751>
08438f48 +0x54a:  mov    -0xc(%ebp),%edx
08438f4b +0x54d:  lea    -0x32c(%ebp),%ecx
08438f51 +0x553:  mov    %edx,%eax
08438f53 +0x555:  add    %eax,%eax
08438f55 +0x557:  add    %edx,%eax
08438f57 +0x559:  shl    $0x3,%eax
08438f5a +0x55c:  add    $0x10,%eax
08438f5d +0x55f:  lea    (%ecx,%eax,1),%eax
08438f60 +0x562:  add    $0xc,%eax
08438f63 +0x565:  mov    %eax,0x8(%esp)
08438f67 +0x569:  movl   $0x4,0x4(%esp)
08438f6f +0x571:  mov    -0x18(%ebp),%eax
08438f72 +0x574:  mov    %eax,(%esp)
08438f75 +0x577:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08438f7a +0x57c:  xor    $0x1,%eax
08438f7d +0x57f:  test   %al,%al
08438f7f +0x581:  je     08438f8b <+0x58d>
08438f81 +0x583:  mov    $0x0,%ebx
08438f86 +0x588:  jmp    0843914f <+0x751>
08438f8b +0x58d:  mov    -0xc(%ebp),%edx
08438f8e +0x590:  lea    -0x32c(%ebp),%ecx
08438f94 +0x596:  mov    %edx,%eax
08438f96 +0x598:  add    %eax,%eax
08438f98 +0x59a:  add    %edx,%eax
08438f9a +0x59c:  shl    $0x3,%eax
08438f9d +0x59f:  add    $0x20,%eax
08438fa0 +0x5a2:  lea    (%ecx,%eax,1),%eax
08438fa3 +0x5a5:  mov    %eax,0x8(%esp)
08438fa7 +0x5a9:  movl   $0x5,0x4(%esp)
08438faf +0x5b1:  mov    -0x18(%ebp),%eax
08438fb2 +0x5b4:  mov    %eax,(%esp)
08438fb5 +0x5b7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438fba +0x5bc:  xor    $0x1,%eax
08438fbd +0x5bf:  test   %al,%al
08438fbf +0x5c1:  je     08438fcb <+0x5cd>
08438fc1 +0x5c3:  mov    $0x0,%ebx
08438fc6 +0x5c8:  jmp    0843914f <+0x751>
08438fcb +0x5cd:  mov    -0xc(%ebp),%edx
08438fce +0x5d0:  lea    -0x32c(%ebp),%ecx
08438fd4 +0x5d6:  mov    %edx,%eax
08438fd6 +0x5d8:  add    %eax,%eax
08438fd8 +0x5da:  add    %edx,%eax
08438fda +0x5dc:  shl    $0x3,%eax
08438fdd +0x5df:  add    $0x20,%eax
08438fe0 +0x5e2:  lea    (%ecx,%eax,1),%eax
08438fe3 +0x5e5:  add    $0x4,%eax
08438fe6 +0x5e8:  mov    %eax,0x8(%esp)
08438fea +0x5ec:  movl   $0x6,0x4(%esp)
08438ff2 +0x5f4:  mov    -0x18(%ebp),%eax
08438ff5 +0x5f7:  mov    %eax,(%esp)
08438ff8 +0x5fa:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08438ffd +0x5ff:  xor    $0x1,%eax
08439000 +0x602:  test   %al,%al
08439002 +0x604:  je     0843900e <+0x610>
08439004 +0x606:  mov    $0x0,%ebx
08439009 +0x60b:  jmp    0843914f <+0x751>
0843900e +0x610:  mov    -0xc(%ebp),%edx
08439011 +0x613:  lea    -0x32c(%ebp),%ecx
08439017 +0x619:  mov    %edx,%eax
08439019 +0x61b:  add    %eax,%eax
0843901b +0x61d:  add    %edx,%eax
0843901d +0x61f:  shl    $0x3,%eax
08439020 +0x622:  add    $0x10,%eax
08439023 +0x625:  lea    (%ecx,%eax,1),%eax
08439026 +0x628:  mov    %eax,0x8(%esp)
0843902a +0x62c:  movl   $0x7,0x4(%esp)
08439032 +0x634:  mov    -0x18(%ebp),%eax
08439035 +0x637:  mov    %eax,(%esp)
08439038 +0x63a:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843903d +0x63f:  xor    $0x1,%eax
08439040 +0x642:  test   %al,%al
08439042 +0x644:  je     0843904e <+0x650>
08439044 +0x646:  mov    $0x0,%ebx
08439049 +0x64b:  jmp    0843914f <+0x751>
0843904e +0x650:  addl   $0x1,-0xc(%ebp)
08439052 +0x654:  mov    -0xc(%ebp),%eax
08439055 +0x657:  cmp    -0x14(%ebp),%eax
08439058 +0x65a:  setl   %al
0843905b +0x65d:  test   %al,%al
0843905d +0x65f:  jne    08438e20 <+0x422>
08439063 +0x665:  mov    -0x14(%ebp),%eax
08439066 +0x668:  mov    %eax,-0x4c(%ebp)
08439069 +0x66b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843906e +0x670:  movl   $0x86c5,0x8(%esp)
08439076 +0x678:  movl   $"DBThread.cpp",0x4(%esp)
0843907e +0x680:  mov    %eax,(%esp)
08439081 +0x683:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08439086 +0x688:  movl   $0x1,0x8(%esp)
0843908e +0x690:  mov    %eax,0x4(%esp)
08439092 +0x694:  lea    -0x48(%ebp),%eax
08439095 +0x697:  mov    %eax,(%esp)
08439098 +0x69a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843909d +0x69f:  lea    -0x48(%ebp),%eax
084390a0 +0x6a2:  mov    %eax,(%esp)
084390a3 +0x6a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084390a8 +0x6aa:  movl   $0x141,0x4(%esp)
084390b0 +0x6b2:  mov    %eax,(%esp)
084390b3 +0x6b5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084390b8 +0x6ba:  lea    -0x48(%ebp),%eax
084390bb +0x6bd:  mov    %eax,(%esp)
084390be +0x6c0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084390c3 +0x6c5:  movl   $0xffffffff,0x4(%esp)
084390cb +0x6cd:  mov    %eax,(%esp)
084390ce +0x6d0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084390d3 +0x6d5:  lea    -0x48(%ebp),%eax
084390d6 +0x6d8:  mov    %eax,(%esp)
084390d9 +0x6db:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084390de +0x6e0:  mov    %eax,(%esp)
084390e1 +0x6e3:  call   0845373c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6352>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6352
084390e6 +0x6e8:  mov    %eax,-0x10(%ebp)
084390e9 +0x6eb:  movl   $0x2e4,0x8(%esp)
084390f1 +0x6f3:  lea    -0x32c(%ebp),%eax
084390f7 +0x6f9:  mov    %eax,0x4(%esp)
084390fb +0x6fd:  mov    -0x10(%ebp),%eax
084390fe +0x700:  mov    %eax,(%esp)
08439101 +0x703:  call   0807d8a0 <_init+0x198>
08439106 +0x708:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843910b +0x70d:  lea    -0x48(%ebp),%edx
0843910e +0x710:  mov    %edx,0x8(%esp)
08439112 +0x714:  movl   $0x1,0x4(%esp)
0843911a +0x71c:  mov    %eax,(%esp)
0843911d +0x71f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08439122 +0x724:  mov    $0x1,%ebx
08439127 +0x729:  lea    -0x48(%ebp),%eax
0843912a +0x72c:  mov    %eax,(%esp)
0843912d +0x72f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439132 +0x734:  jmp    0843914f <+0x751>
08439134 +0x736:  mov    %edx,%ebx
08439136 +0x738:  mov    %eax,%esi
08439138 +0x73a:  lea    -0x48(%ebp),%eax
0843913b +0x73d:  mov    %eax,(%esp)
0843913e +0x740:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439143 +0x745:  mov    %esi,%eax
08439145 +0x747:  mov    %ebx,%edx
08439147 +0x749:  mov    %eax,(%esp)
0843914a +0x74c:  call   08ae3750 <_Unwind_Resume>
0843914f +0x751:  mov    %ebx,%eax
08439151 +0x753:  add    $0x340,%esp
08439157 +0x759:  pop    %ebx
08439158 +0x75a:  pop    %esi
08439159 +0x75b:  pop    %ebp
0843915a +0x75c:  ret
0843915b +0x75d:  nop
```

## 反编译 C

```c
// DB_LoadBreakAwayPreventData::dispatch @ 0x84389fe

/* DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*) */

undefined4 DB_LoadBreakAwayPreventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER local_330 [2];
  short sStack_32e;
  short sStack_32c;
  short sStack_32a;
  short sStack_328;
  short sStack_326;
  short sStack_324;
  byte local_322 [2];
  char acStack_320 [4];
  uint auStack_31c [179];
  int local_50;
  CStreamGuard local_4c [8];
  int local_44;
  bool local_3d;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_3d = false;
  Stream::operator>>(in_stack_00000010,&local_3d);
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER::SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER(local_330);
  local_18 = 0;
  local_44 = 0;
  MySQL::set_query(local_1c,
                   "seLect no, weekday_var_a, weekday_var_b, weekday_var_c, weekend_var_x, weekend_var_y, weekend_var_z, next_reward_day, state_flag from churn_system_manager order by no desc limit 1"
                  );
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = MySQL::get_n_rows(local_1c);
  if (local_18 != 1) {
    return 0;
  }
  cVar2 = MySQL::fetch(local_1c);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_int(local_1c,0,&local_44);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,1,(short *)local_330);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,2,&sStack_32e);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,3,&sStack_32c);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,4,&sStack_32a);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::get_short(local_1c,5,&sStack_328);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_short(local_1c,6,&sStack_326);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_short(local_1c,7,&sStack_324);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_1c,8,(char *)local_322);
    if (cVar2 != '\x01') {
      return 0;
    }
    if (local_3d != true) {
      MySQL::set_query(local_1c,"upDate churn_system_manager set state_flag=%d where no = %d",
                       (uint)local_3d,local_44);
      cVar2 = MySQL::exec(local_1c,true);
      if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_1c), lVar5 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_3c,
                           "virtual bool DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)",
                           0x8684,0);
        cMyTrace::operator()(local_3c,"BREAK_AWAY : STATE_FALG ALREADY OFF!!");
      }
      return 0;
    }
    MySQL::set_query(local_1c,"upDate churn_system_manager set state_flag=%d where no = %d",1,
                     local_44);
    cVar2 = MySQL::exec(local_1c,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_1c), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)",
                         0x868a,0);
      cMyTrace::operator()(local_2c,"BREAK_AWAY : STATE_FALG ALREADY ON!!");
    }
    local_322[0] = local_3d;
    MySQL::set_query(local_1c,
                     "seLect min_day, max_day, min_val, max_val, item_id, add_info, luck_point, quest_id from churn_reward_manager"
                    );
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = MySQL::get_n_rows(local_1c);
    local_10 = 0;
    while( true ) {
      if (local_18 <= local_10) {
        local_50 = local_18;
        pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x86c5);
        CStreamGuard::CStreamGuard(local_4c,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 084390b3 to 08439121 has its CatchHandler @ 08439134 */
        CStreamGuard::operator<<(pCVar4,0x141);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
        CStreamGuard::operator<<(pCVar4,-1);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
        local_14 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER>(pCVar4);
        memcpy(local_14,local_330,0x2e4);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
        CStreamGuard::~CStreamGuard(local_4c);
        return 1;
      }
      cVar2 = MySQL::fetch(local_1c);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,0,acStack_320 + local_10 * 0x18 + 1);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,1,acStack_320 + local_10 * 0x18 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,2,(int *)(acStack_320 + local_10 * 0x18 + 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,3,(int *)(auStack_31c + local_10 * 6 + 1));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_1c,4,auStack_31c + local_10 * 6 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,5,(int *)(auStack_31c + local_10 * 6 + 3));
      if (cVar2 != '\x01') break;
      cVar2 = MySQL::get_int(local_1c,6,(int *)(auStack_31c + local_10 * 6 + 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,7,acStack_320 + local_10 * 0x18);
      if (cVar2 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    return 0;
  }
  return 0;
}
```

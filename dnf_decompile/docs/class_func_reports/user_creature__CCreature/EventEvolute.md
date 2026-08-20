# EventEvolute

`_ZN13user_creature9CCreature12EventEvoluteEP5CUserii`

`user_creature::CCreature::EventEvolute(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x0833db2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833db2e  _ZN13user_creature9CCreature12EventEvoluteEP5CUserii
#           user_creature::CCreature::EventEvolute(CUser*, int, int)
# range [0x0833db2e, 0x0833debb]
0833db2e +0x000:  push   %ebp
0833db2f +0x001:  mov    %esp,%ebp
0833db31 +0x003:  push   %esi
0833db32 +0x004:  push   %ebx
0833db33 +0x005:  sub    $0x90,%esp
0833db39 +0x00b:  mov    0x8(%ebp),%eax
0833db3c +0x00e:  mov    0x44(%eax),%eax
0833db3f +0x011:  test   %eax,%eax
0833db41 +0x013:  jne    0833dba6 <+0x78>
0833db43 +0x015:  mov    0x8(%ebp),%eax
0833db46 +0x018:  mov    %eax,(%esp)
0833db49 +0x01b:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833db4e +0x020:  mov    %eax,%ebx
0833db50 +0x022:  mov    0xc(%ebp),%eax
0833db53 +0x025:  mov    %eax,(%esp)
0833db56 +0x028:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833db5b +0x02d:  movzwl %ax,%esi
0833db5e +0x030:  movl   $0x5,0xc(%esp)
0833db66 +0x038:  movl   $0x10cc,0x8(%esp)
0833db6e +0x040:  movl   $&_ZZN13user_creature9CCreature12EventEvoluteEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0833db76 +0x048:  lea    -0x50(%ebp),%eax
0833db79 +0x04b:  mov    %eax,(%esp)
0833db7c +0x04e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833db81 +0x053:  mov    %ebx,0xc(%esp)
0833db85 +0x057:  mov    %esi,0x8(%esp)
0833db89 +0x05b:  movl   $"cannot event evolute because it haven't creature script uid(%d), creature id(%d) \n",0x4(%esp)
0833db91 +0x063:  lea    -0x50(%ebp),%eax
0833db94 +0x066:  mov    %eax,(%esp)
0833db97 +0x069:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833db9c +0x06e:  mov    $0x0,%ebx
0833dba1 +0x073:  jmp    0833deaf <+0x381>
0833dba6 +0x078:  mov    0x10(%ebp),%eax
0833dba9 +0x07b:  mov    %eax,0x4(%esp)
0833dbad +0x07f:  mov    0x8(%ebp),%eax
0833dbb0 +0x082:  mov    %eax,(%esp)
0833dbb3 +0x085:  call   0833769c <_ZN13user_creature9CCreature13GetCreatureIdEi>  ; user_creature::CCreature::GetCreatureId(int)
0833dbb8 +0x08a:  mov    %eax,-0x30(%ebp)
0833dbbb +0x08d:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
0833dbc0 +0x092:  mov    -0x30(%ebp),%edx
0833dbc3 +0x095:  mov    %edx,0x4(%esp)
0833dbc7 +0x099:  mov    %eax,(%esp)
0833dbca +0x09c:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
0833dbcf +0x0a1:  mov    %eax,-0x2c(%ebp)
0833dbd2 +0x0a4:  cmpl   $0x0,-0x2c(%ebp)
0833dbd6 +0x0a8:  jne    0833dbe2 <+0xb4>
0833dbd8 +0x0aa:  mov    $0x0,%ebx
0833dbdd +0x0af:  jmp    0833deaf <+0x381>
0833dbe2 +0x0b4:  mov    -0x2c(%ebp),%eax
0833dbe5 +0x0b7:  mov    %eax,(%esp)
0833dbe8 +0x0ba:  call   0833f128 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11f5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11f5
0833dbed +0x0bf:  mov    %eax,-0x28(%ebp)
0833dbf0 +0x0c2:  mov    0x8(%ebp),%eax
0833dbf3 +0x0c5:  movzbl 0x4c(%eax),%eax
0833dbf7 +0x0c9:  mov    %al,-0x21(%ebp)
0833dbfa +0x0cc:  mov    -0x2c(%ebp),%eax
0833dbfd +0x0cf:  mov    %eax,(%esp)
0833dc00 +0x0d2:  call   0833f320 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x13ed>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x13ed
0833dc05 +0x0d7:  xor    $0x1,%eax
0833dc08 +0x0da:  test   %al,%al
0833dc0a +0x0dc:  je     0833dc1e <+0xf0>
0833dc0c +0x0de:  movzbl -0x21(%ebp),%eax
0833dc10 +0x0e2:  xor    $0x1,%eax
0833dc13 +0x0e5:  test   %al,%al
0833dc15 +0x0e7:  je     0833dc1e <+0xf0>
0833dc17 +0x0e9:  mov    $0x1,%eax
0833dc1c +0x0ee:  jmp    0833dc23 <+0xf5>
0833dc1e +0x0f0:  mov    $0x0,%eax
0833dc23 +0x0f5:  test   %al,%al
0833dc25 +0x0f7:  je     0833dc7b <+0x14d>
0833dc27 +0x0f9:  mov    0x8(%ebp),%eax
0833dc2a +0x0fc:  mov    0x30(%eax),%eax
0833dc2d +0x0ff:  mov    %eax,-0x5c(%ebp)
0833dc30 +0x102:  mov    0x8(%ebp),%eax
0833dc33 +0x105:  mov    0x44(%eax),%eax
0833dc36 +0x108:  mov    %eax,(%esp)
0833dc39 +0x10b:  call   0833f356 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1423>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1423
0833dc3e +0x110:  mov    %eax,-0x10(%ebp)
0833dc41 +0x113:  cmpl   $0x0,-0x10(%ebp)
0833dc45 +0x117:  jne    0833dc4e <+0x120>
0833dc47 +0x119:  movl   $0x19,-0x10(%ebp)
0833dc4e +0x120:  movzwl -0x5a(%ebp),%eax
0833dc52 +0x124:  cwtl
0833dc53 +0x125:  mov    %eax,%edx
0833dc55 +0x127:  sar    $0x1f,%edx
0833dc58 +0x12a:  idivl  -0x10(%ebp)
0833dc5b +0x12d:  mov    %eax,-0xc(%ebp)
0833dc5e +0x130:  mov    -0xc(%ebp),%eax
0833dc61 +0x133:  lea    0x1(%eax),%ebx
0833dc64 +0x136:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833dc69 +0x13b:  mov    %ebx,0x4(%esp)
0833dc6d +0x13f:  mov    %eax,(%esp)
0833dc70 +0x142:  call   0836053c <_ZNK12CDataManager22get_creature_level_expEi>  ; CDataManager::get_creature_level_exp(int) const
0833dc75 +0x147:  mov    0x8(%ebp),%edx
0833dc78 +0x14a:  mov    %eax,0x30(%edx)
0833dc7b +0x14d:  mov    -0x28(%ebp),%eax
0833dc7e +0x150:  mov    %eax,0x4(%esp)
0833dc82 +0x154:  mov    0x8(%ebp),%eax
0833dc85 +0x157:  mov    %eax,(%esp)
0833dc88 +0x15a:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
0833dc8d +0x15f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833dc92 +0x164:  mov    -0x28(%ebp),%edx
0833dc95 +0x167:  mov    %edx,0x4(%esp)
0833dc99 +0x16b:  mov    %eax,(%esp)
0833dc9c +0x16e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0833dca1 +0x173:  mov    %eax,-0x20(%ebp)
0833dca4 +0x176:  cmpl   $0x0,-0x20(%ebp)
0833dca8 +0x17a:  jne    0833dcb4 <+0x186>
0833dcaa +0x17c:  mov    $0x0,%ebx
0833dcaf +0x181:  jmp    0833deaf <+0x381>
0833dcb4 +0x186:  mov    -0x20(%ebp),%eax
0833dcb7 +0x189:  mov    %eax,(%esp)
0833dcba +0x18c:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0833dcbf +0x191:  mov    %eax,-0x1c(%ebp)
0833dcc2 +0x194:  mov    -0x20(%ebp),%eax
0833dcc5 +0x197:  mov    %eax,(%esp)
0833dcc8 +0x19a:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0833dccd +0x19f:  mov    %eax,-0x18(%ebp)
0833dcd0 +0x1a2:  cmpl   $0x0,-0x1c(%ebp)
0833dcd4 +0x1a6:  jne    0833dce7 <+0x1b9>
0833dcd6 +0x1a8:  cmpl   $0x0,-0x18(%ebp)
0833dcda +0x1ac:  je     0833dce7 <+0x1b9>
0833dcdc +0x1ae:  mov    0x8(%ebp),%eax
0833dcdf +0x1b1:  mov    -0x18(%ebp),%edx
0833dce2 +0x1b4:  mov    %edx,0x18(%eax)
0833dce5 +0x1b7:  jmp    0833dcfd <+0x1cf>
0833dce7 +0x1b9:  cmpl   $0x0,-0x1c(%ebp)
0833dceb +0x1bd:  jne    0833dcfd <+0x1cf>
0833dced +0x1bf:  cmpl   $0x0,-0x18(%ebp)
0833dcf1 +0x1c3:  jne    0833dcfd <+0x1cf>
0833dcf3 +0x1c5:  mov    0x8(%ebp),%eax
0833dcf6 +0x1c8:  movl   $0x0,0x18(%eax)
0833dcfd +0x1cf:  movl   $0x0,-0x14(%ebp)
0833dd04 +0x1d6:  mov    0xc(%ebp),%eax
0833dd07 +0x1d9:  mov    %eax,(%esp)
0833dd0a +0x1dc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0833dd0f +0x1e1:  movl   $0x16,0x8(%esp)
0833dd17 +0x1e9:  movl   $0x0,0x4(%esp)
0833dd1f +0x1f1:  mov    %eax,(%esp)
0833dd22 +0x1f4:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0833dd27 +0x1f9:  mov    %eax,-0x14(%ebp)
0833dd2a +0x1fc:  cmpl   $0x0,-0x14(%ebp)
0833dd2e +0x200:  jne    0833dd3a <+0x20c>
0833dd30 +0x202:  mov    $0x0,%ebx
0833dd35 +0x207:  jmp    0833deaf <+0x381>
0833dd3a +0x20c:  mov    0x8(%ebp),%eax
0833dd3d +0x20f:  mov    %eax,(%esp)
0833dd40 +0x212:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833dd45 +0x217:  mov    %eax,%edx
0833dd47 +0x219:  mov    -0x14(%ebp),%eax
0833dd4a +0x21c:  mov    %edx,0x2(%eax)
0833dd4d +0x21f:  mov    0xc(%ebp),%eax
0833dd50 +0x222:  mov    %eax,0x8(%esp)
0833dd54 +0x226:  movl   $0x8a,0x4(%esp)
0833dd5c +0x22e:  lea    -0x58(%ebp),%eax
0833dd5f +0x231:  mov    %eax,(%esp)
0833dd62 +0x234:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833dd67 +0x239:  mov    0x8(%ebp),%eax
0833dd6a +0x23c:  mov    0x30(%eax),%esi
0833dd6d +0x23f:  mov    0x8(%ebp),%eax
0833dd70 +0x242:  mov    %eax,(%esp)
0833dd73 +0x245:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833dd78 +0x24a:  mov    %eax,%ebx
0833dd7a +0x24c:  mov    0x8(%ebp),%eax
0833dd7d +0x24f:  mov    %eax,(%esp)
0833dd80 +0x252:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833dd85 +0x257:  mov    %esi,0xc(%esp)
0833dd89 +0x25b:  mov    %ebx,0x8(%esp)
0833dd8d +0x25f:  mov    %eax,0x4(%esp)
0833dd91 +0x263:  lea    -0x58(%ebp),%eax
0833dd94 +0x266:  mov    %eax,(%esp)
0833dd97 +0x269:  call   0833fddc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1ea9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1ea9
0833dd9c +0x26e:  xor    $0x1,%eax
0833dd9f +0x271:  test   %al,%al
0833dda1 +0x273:  je     0833ddf5 <+0x2c7>
0833dda3 +0x275:  mov    0xc(%ebp),%eax
0833dda6 +0x278:  mov    %eax,(%esp)
0833dda9 +0x27b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833ddae +0x280:  movzwl %ax,%ebx
0833ddb1 +0x283:  movl   $0x5,0xc(%esp)
0833ddb9 +0x28b:  movl   $0x1104,0x8(%esp)
0833ddc1 +0x293:  movl   $&_ZZN13user_creature9CCreature12EventEvoluteEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0833ddc9 +0x29b:  lea    -0x40(%ebp),%eax
0833ddcc +0x29e:  mov    %eax,(%esp)
0833ddcf +0x2a1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833ddd4 +0x2a6:  mov    %ebx,0x8(%esp)
0833ddd8 +0x2aa:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833dde0 +0x2b2:  lea    -0x40(%ebp),%eax
0833dde3 +0x2b5:  mov    %eax,(%esp)
0833dde6 +0x2b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833ddeb +0x2bd:  mov    $0x0,%ebx
0833ddf0 +0x2c2:  jmp    0833dea4 <+0x376>
0833ddf5 +0x2c7:  lea    -0x58(%ebp),%eax
0833ddf8 +0x2ca:  mov    %eax,(%esp)
0833ddfb +0x2cd:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833de00 +0x2d2:  movl   $0x0,0xc(%esp)
0833de08 +0x2da:  movl   $0x0,0x8(%esp)
0833de10 +0x2e2:  mov    0xc(%ebp),%eax
0833de13 +0x2e5:  mov    %eax,0x4(%esp)
0833de17 +0x2e9:  lea    -0x7c(%ebp),%eax
0833de1a +0x2ec:  mov    %eax,(%esp)
0833de1d +0x2ef:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833de22 +0x2f4:  mov    0x14(%ebp),%eax
0833de25 +0x2f7:  mov    %eax,0x4(%esp)
0833de29 +0x2fb:  lea    -0x7c(%ebp),%eax
0833de2c +0x2fe:  mov    %eax,(%esp)
0833de2f +0x301:  call   08340842 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x290f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x290f
0833de34 +0x306:  lea    -0x7c(%ebp),%eax
0833de37 +0x309:  mov    %eax,(%esp)
0833de3a +0x30c:  call   083404b8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2585>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2585
0833de3f +0x311:  movl   $0x16,0xc(%esp)
0833de47 +0x319:  movl   $0x3,0x8(%esp)
0833de4f +0x321:  movl   $0x1,0x4(%esp)
0833de57 +0x329:  mov    0xc(%ebp),%eax
0833de5a +0x32c:  mov    %eax,(%esp)
0833de5d +0x32f:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0833de62 +0x334:  mov    $0x1,%ebx
0833de67 +0x339:  lea    -0x7c(%ebp),%eax
0833de6a +0x33c:  mov    %eax,(%esp)
0833de6d +0x33f:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833de72 +0x344:  jmp    0833dea4 <+0x376>
0833de74 +0x346:  mov    %edx,%ebx
0833de76 +0x348:  mov    %eax,%esi
0833de78 +0x34a:  lea    -0x7c(%ebp),%eax
0833de7b +0x34d:  mov    %eax,(%esp)
0833de7e +0x350:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833de83 +0x355:  mov    %esi,%eax
0833de85 +0x357:  mov    %ebx,%edx
0833de87 +0x359:  jmp    0833de89 <+0x35b>
0833de89 +0x35b:  mov    %edx,%ebx
0833de8b +0x35d:  mov    %eax,%esi
0833de8d +0x35f:  lea    -0x58(%ebp),%eax
0833de90 +0x362:  mov    %eax,(%esp)
0833de93 +0x365:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833de98 +0x36a:  mov    %esi,%eax
0833de9a +0x36c:  mov    %ebx,%edx
0833de9c +0x36e:  mov    %eax,(%esp)
0833de9f +0x371:  call   08ae3750 <_Unwind_Resume>
0833dea4 +0x376:  lea    -0x58(%ebp),%eax
0833dea7 +0x379:  mov    %eax,(%esp)
0833deaa +0x37c:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833deaf +0x381:  mov    %ebx,%eax
0833deb1 +0x383:  add    $0x90,%esp
0833deb7 +0x389:  pop    %ebx
0833deb8 +0x38a:  pop    %esi
0833deb9 +0x38b:  pop    %ebp
0833deba +0x38c:  ret
0833debb +0x38d:  nop
```

## 反编译 C

```c
// user_creature::CCreature::EventEvolute @ 0x833db2e

/* user_creature::CCreature::EventEvolute(CUser*, int, int) */

bool __thiscall
user_creature::CCreature::EventEvolute(CCreature *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CDataManager *pCVar5;
  CInventory *this_00;
  int iVar6;
  int iVar7;
  bool bVar8;
  CPacketRespondent local_80 [32];
  undefined4 local_60;
  CDBMsgSender local_5c [8];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  undefined4 local_34;
  CCreatureScript *local_30;
  int local_2c;
  CCreature local_25;
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_54,"bool user_creature::CCreature::EventEvolute(CUser*, int, int)",
                       0x10cc,5);
    cMyTrace::operator()
              (local_54,
               "cannot event evolute because it haven\'t creature script uid(%d), creature id(%d) \n"
               ,uVar3 & 0xffff,uVar2);
    bVar8 = false;
  }
  else {
    local_34 = GetCreatureId(this,param_2);
    iVar4 = GetInstanceCreatureScriptMgr();
    local_30 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
    if (local_30 == (CCreatureScript *)0x0) {
      bVar8 = false;
    }
    else {
      local_2c = CCreatureScript::GetItemId(local_30);
      local_25 = this[0x4c];
      cVar1 = CCreatureScript::IsItemGrowCreature(local_30);
      if ((cVar1 == '\x01') || (local_25 == (CCreature)0x1)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        local_60 = *(undefined4 *)(this + 0x30);
        local_14 = CCreatureScript::GetGrowItemCountforLevelUp(*(CCreatureScript **)(this + 0x44));
        if (local_14 == 0) {
          local_14 = 0x19;
        }
        local_10 = (int)local_60._2_2_ / local_14;
        iVar4 = local_10 + 1;
        pCVar5 = (CDataManager *)G_CDataManager();
        uVar2 = CDataManager::get_creature_level_exp(pCVar5,iVar4);
        *(undefined4 *)(this + 0x30) = uVar2;
      }
      SetItemId(this,local_2c);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_24 = (CItem *)CDataManager::find_item(pCVar5,local_2c);
      if (local_24 == (CItem *)0x0) {
        bVar8 = false;
      }
      else {
        local_20 = CItem::getUsablePeriod(local_24);
        local_1c = CItem::getExpirationDate(local_24);
        if ((local_20 == 0) && (local_1c != 0)) {
          *(int *)(this + 0x18) = local_1c;
        }
        else if ((local_20 == 0) && (local_1c == 0)) {
          *(undefined4 *)(this + 0x18) = 0;
        }
        local_18 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_18 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_18 == 0) {
          bVar8 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_18 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_5c,0x8a,param_1);
          iVar4 = *(int *)(this + 0x30);
          iVar6 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar7 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 0833dd97 to 0833de21 has its CatchHandler @ 0833de89 */
          cVar1 = CDBMsgSender::EventEvoluteCreature(local_5c,iVar7,iVar6,iVar4);
          bVar8 = cVar1 == '\x01';
          if (bVar8) {
            CDBMsgSender::Send(local_5c);
            CPacketRespondent::CPacketRespondent(local_80,param_1,0,0);
                    /* try { // try from 0833de2f to 0833de61 has its CatchHandler @ 0833de74 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_80,param_3);
            CPacketRespondent::SendAccordingToPlace(local_80);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 0833de6d to 0833de71 has its CatchHandler @ 0833de89 */
            CPacketRespondent::~CPacketRespondent(local_80);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_44,
                               "bool user_creature::CCreature::EventEvolute(CUser*, int, int)",
                               0x1104,5);
            cMyTrace::operator()(local_44,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_5c);
        }
      }
    }
  }
  return bVar8;
}
```

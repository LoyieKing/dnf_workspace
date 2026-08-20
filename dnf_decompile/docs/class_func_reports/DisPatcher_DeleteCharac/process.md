# process

`_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteCharac` | `0x081c1182` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1182  _ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c1182, 0x081c14b7]
081c1182 +0x000:  push   %ebp
081c1183 +0x001:  mov    %esp,%ebp
081c1185 +0x003:  push   %edi
081c1186 +0x004:  push   %esi
081c1187 +0x005:  push   %ebx
081c1188 +0x006:  sub    $0x5c,%esp
081c118b +0x009:  mov    0x14(%ebp),%eax
081c118e +0x00c:  mov    %eax,-0x24(%ebp)
081c1191 +0x00f:  mov    0x10(%ebp),%eax
081c1194 +0x012:  mov    %eax,0x8(%esp)
081c1198 +0x016:  mov    0xc(%ebp),%eax
081c119b +0x019:  mov    %eax,0x4(%esp)
081c119f +0x01d:  mov    0x8(%ebp),%eax
081c11a2 +0x020:  mov    %eax,(%esp)
081c11a5 +0x023:  call   081c14f0 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)
081c11aa +0x028:  mov    %eax,%edx
081c11ac +0x02a:  mov    -0x24(%ebp),%eax
081c11af +0x02d:  mov    %edx,0x4(%eax)
081c11b2 +0x030:  mov    -0x24(%ebp),%eax
081c11b5 +0x033:  mov    0x4(%eax),%eax
081c11b8 +0x036:  test   %eax,%eax
081c11ba +0x038:  jle    081c11c6 <+0x44>
081c11bc +0x03a:  mov    $0x0,%ebx
081c11c1 +0x03f:  jmp    081c14ad <+0x32b>
081c11c6 +0x044:  mov    -0x24(%ebp),%eax
081c11c9 +0x047:  mov    0x4(%eax),%eax
081c11cc +0x04a:  test   %eax,%eax
081c11ce +0x04c:  jns    081c1204 <+0x82>
081c11d0 +0x04e:  mov    0xc(%ebp),%eax
081c11d3 +0x051:  mov    %eax,(%esp)
081c11d6 +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c11db +0x059:  mov    -0x24(%ebp),%edx
081c11de +0x05c:  mov    0x4(%edx),%edx
081c11e1 +0x05f:  mov    %eax,0xc(%esp)
081c11e5 +0x063:  mov    %edx,0x8(%esp)
081c11e9 +0x067:  movl   $&_ZZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c11f1 +0x06f:  movl   $0xa41,(%esp)
081c11f8 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c11fd +0x07b:  mov    %eax,%ebx
081c11ff +0x07d:  jmp    081c14ad <+0x32b>
081c1204 +0x082:  mov    0x10(%ebp),%eax
081c1207 +0x085:  mov    %eax,-0x20(%ebp)
081c120a +0x088:  mov    -0x20(%ebp),%eax
081c120d +0x08b:  movzbl 0xd(%eax),%eax
081c1211 +0x08f:  movsbl %al,%eax
081c1214 +0x092:  mov    %eax,0x4(%esp)
081c1218 +0x096:  mov    0xc(%ebp),%eax
081c121b +0x099:  mov    %eax,(%esp)
081c121e +0x09c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c1223 +0x0a1:  mov    %eax,0x4(%esp)
081c1227 +0x0a5:  mov    0xc(%ebp),%eax
081c122a +0x0a8:  mov    %eax,(%esp)
081c122d +0x0ab:  call   0868e672 <_ZN5CUser25RemoveCharacMercenaryInfoEj>  ; CUser::RemoveCharacMercenaryInfo(unsigned int)
081c1232 +0x0b0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c1237 +0x0b5:  movl   $0xa4d,0x8(%esp)
081c123f +0x0bd:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c1247 +0x0c5:  mov    %eax,(%esp)
081c124a +0x0c8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c124f +0x0cd:  movl   $0x1,0x8(%esp)
081c1257 +0x0d5:  mov    %eax,0x4(%esp)
081c125b +0x0d9:  lea    -0x3c(%ebp),%eax
081c125e +0x0dc:  mov    %eax,(%esp)
081c1261 +0x0df:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c1266 +0x0e4:  lea    -0x3c(%ebp),%eax
081c1269 +0x0e7:  mov    %eax,(%esp)
081c126c +0x0ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c1271 +0x0ef:  movl   $0x5,0x4(%esp)
081c1279 +0x0f7:  mov    %eax,(%esp)
081c127c +0x0fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c1281 +0x0ff:  mov    0xc(%ebp),%eax
081c1284 +0x102:  mov    %eax,(%esp)
081c1287 +0x105:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c128c +0x10a:  mov    %eax,%ebx
081c128e +0x10c:  lea    -0x3c(%ebp),%eax
081c1291 +0x10f:  mov    %eax,(%esp)
081c1294 +0x112:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c1299 +0x117:  mov    %ebx,0x4(%esp)
081c129d +0x11b:  mov    %eax,(%esp)
081c12a0 +0x11e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c12a5 +0x123:  lea    -0x3c(%ebp),%eax
081c12a8 +0x126:  mov    %eax,(%esp)
081c12ab +0x129:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c12b0 +0x12e:  mov    %eax,(%esp)
081c12b3 +0x131:  call   08236ce2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc38c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc38c
081c12b8 +0x136:  mov    %eax,-0x1c(%ebp)
081c12bb +0x139:  movl   $0x14,0x8(%esp)
081c12c3 +0x141:  movl   $0x0,0x4(%esp)
081c12cb +0x149:  mov    -0x1c(%ebp),%eax
081c12ce +0x14c:  mov    %eax,(%esp)
081c12d1 +0x14f:  call   0807dcc0 <_init+0x5b8>
081c12d6 +0x154:  mov    0xc(%ebp),%eax
081c12d9 +0x157:  mov    %eax,(%esp)
081c12dc +0x15a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c12e1 +0x15f:  mov    -0x1c(%ebp),%edx
081c12e4 +0x162:  mov    %eax,(%edx)
081c12e6 +0x164:  mov    -0x20(%ebp),%eax
081c12e9 +0x167:  movzbl 0xd(%eax),%eax
081c12ed +0x16b:  movsbl %al,%eax
081c12f0 +0x16e:  mov    %eax,0x4(%esp)
081c12f4 +0x172:  mov    0xc(%ebp),%eax
081c12f7 +0x175:  mov    %eax,(%esp)
081c12fa +0x178:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c12ff +0x17d:  mov    %eax,%edx
081c1301 +0x17f:  mov    -0x1c(%ebp),%eax
081c1304 +0x182:  mov    %edx,0x4(%eax)
081c1307 +0x185:  mov    -0x1c(%ebp),%eax
081c130a +0x188:  mov    0x4(%eax),%eax
081c130d +0x18b:  test   %eax,%eax
081c130f +0x18d:  jne    081c1339 <+0x1b7>
081c1311 +0x18f:  mov    -0x24(%ebp),%eax
081c1314 +0x192:  movl   $0x15,0x4(%eax)
081c131b +0x199:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c1320 +0x19e:  lea    -0x3c(%ebp),%edx
081c1323 +0x1a1:  mov    %edx,0x4(%esp)
081c1327 +0x1a5:  mov    %eax,(%esp)
081c132a +0x1a8:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
081c132f +0x1ad:  mov    $0x0,%ebx
081c1334 +0x1b2:  jmp    081c14a2 <+0x320>
081c1339 +0x1b7:  mov    -0x20(%ebp),%eax
081c133c +0x1ba:  movzbl 0xd(%eax),%eax
081c1340 +0x1be:  movsbl %al,%eax
081c1343 +0x1c1:  mov    %eax,0x4(%esp)
081c1347 +0x1c5:  mov    0xc(%ebp),%eax
081c134a +0x1c8:  mov    %eax,(%esp)
081c134d +0x1cb:  call   0864a956 <_ZN5CUser31GetGuildIdBeforeDeleteCharacterEi>  ; CUser::GetGuildIdBeforeDeleteCharacter(int)
081c1352 +0x1d0:  mov    -0x1c(%ebp),%edx
081c1355 +0x1d3:  mov    %eax,0xc(%edx)
081c1358 +0x1d6:  mov    0xc(%ebp),%eax
081c135b +0x1d9:  mov    %eax,(%esp)
081c135e +0x1dc:  call   0864aa1a <_ZN5CUser16lockDeleteCharacEv>  ; CUser::lockDeleteCharac()
081c1363 +0x1e1:  xor    $0x1,%eax
081c1366 +0x1e4:  test   %al,%al
081c1368 +0x1e6:  je     081c13b0 <+0x22e>
081c136a +0x1e8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c136f +0x1ed:  lea    -0x3c(%ebp),%edx
081c1372 +0x1f0:  mov    %edx,0x4(%esp)
081c1376 +0x1f4:  mov    %eax,(%esp)
081c1379 +0x1f7:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
081c137e +0x1fc:  mov    0xc(%ebp),%eax
081c1381 +0x1ff:  mov    %eax,(%esp)
081c1384 +0x202:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c1389 +0x207:  mov    %eax,0xc(%esp)
081c138d +0x20b:  movl   $0x0,0x8(%esp)
081c1395 +0x213:  movl   $&_ZZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c139d +0x21b:  movl   $0xa68,(%esp)
081c13a4 +0x222:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c13a9 +0x227:  mov    %eax,%ebx
081c13ab +0x229:  jmp    081c14a2 <+0x320>
081c13b0 +0x22e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c13b5 +0x233:  lea    -0x3c(%ebp),%edx
081c13b8 +0x236:  mov    %edx,0x8(%esp)
081c13bc +0x23a:  movl   $0x2,0x4(%esp)
081c13c4 +0x242:  mov    %eax,(%esp)
081c13c7 +0x245:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c13cc +0x24a:  mov    -0x20(%ebp),%eax
081c13cf +0x24d:  movzbl 0xd(%eax),%eax
081c13d3 +0x251:  movsbl %al,%eax
081c13d6 +0x254:  mov    0xc(%ebp),%edx
081c13d9 +0x257:  add    $0x796e8,%edx
081c13df +0x25d:  mov    %eax,0x4(%esp)
081c13e3 +0x261:  mov    %edx,(%esp)
081c13e6 +0x264:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c13eb +0x269:  add    $0x4,%eax
081c13ee +0x26c:  mov    %eax,%edi
081c13f0 +0x26e:  mov    -0x20(%ebp),%eax
081c13f3 +0x271:  movzbl 0xd(%eax),%eax
081c13f7 +0x275:  movsbl %al,%eax
081c13fa +0x278:  mov    0xc(%ebp),%edx
081c13fd +0x27b:  add    $0x796e8,%edx
081c1403 +0x281:  mov    %eax,0x4(%esp)
081c1407 +0x285:  mov    %edx,(%esp)
081c140a +0x288:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c140f +0x28d:  mov    (%eax),%esi
081c1411 +0x28f:  mov    0xc(%ebp),%eax
081c1414 +0x292:  mov    %eax,(%esp)
081c1417 +0x295:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c141c +0x29a:  movl   $0x0,0x4(%esp)
081c1424 +0x2a2:  mov    %eax,(%esp)
081c1427 +0x2a5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081c142c +0x2aa:  mov    %eax,%ebx
081c142e +0x2ac:  movl   $0x0,0xc(%esp)
081c1436 +0x2b4:  movl   $0xa6e,0x8(%esp)
081c143e +0x2bc:  movl   $&_ZZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c1446 +0x2c4:  lea    -0x34(%ebp),%eax
081c1449 +0x2c7:  mov    %eax,(%esp)
081c144c +0x2ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c1451 +0x2cf:  mov    %edi,0x18(%esp)
081c1455 +0x2d3:  mov    %esi,0x14(%esp)
081c1459 +0x2d7:  mov    %ebx,0x10(%esp)
081c145d +0x2db:  movl   $0xa6e,0xc(%esp)
081c1465 +0x2e3:  movl   $&_ZZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081c146d +0x2eb:  movl   $"[%s][%d] accid(%s) delete charac(%d) %s",0x4(%esp)
081c1475 +0x2f3:  lea    -0x34(%ebp),%eax
081c1478 +0x2f6:  mov    %eax,(%esp)
081c147b +0x2f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c1480 +0x2fe:  mov    $0x0,%ebx
081c1485 +0x303:  jmp    081c14a2 <+0x320>
081c1487 +0x305:  mov    %edx,%ebx
081c1489 +0x307:  mov    %eax,%esi
081c148b +0x309:  lea    -0x3c(%ebp),%eax
081c148e +0x30c:  mov    %eax,(%esp)
081c1491 +0x30f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c1496 +0x314:  mov    %esi,%eax
081c1498 +0x316:  mov    %ebx,%edx
081c149a +0x318:  mov    %eax,(%esp)
081c149d +0x31b:  call   08ae3750 <_Unwind_Resume>
081c14a2 +0x320:  lea    -0x3c(%ebp),%eax
081c14a5 +0x323:  mov    %eax,(%esp)
081c14a8 +0x326:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c14ad +0x32b:  mov    %ebx,%eax
081c14af +0x32d:  add    $0x5c,%esp
081c14b2 +0x330:  pop    %ebx
081c14b3 +0x331:  pop    %esi
081c14b4 +0x332:  pop    %edi
081c14b5 +0x333:  pop    %ebp
081c14b6 +0x334:  ret
081c14b7 +0x335:  nop
```

## 反编译 C

```c
// DisPatcher_DeleteCharac::process @ 0x81c1182

/* DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteCharac::process
          (DisPatcher_DeleteCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  CStreamGuard local_40 [8];
  cMyTrace local_38 [16];
  ParamBase *local_28;
  MSG_BASE *local_24;
  SIG_DELETE_CHARAC *local_20;
  
  local_28 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_28 + 4) = uVar2;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0xa41,
                       "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),uVar3);
    }
    else {
      local_24 = param_2;
      uVar3 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
      CUser::RemoveCharacMercenaryInfo(param_1,uVar3);
      pSVar4 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0xa4d);
      CStreamGuard::CStreamGuard(local_40,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 081c127c to 081c147f has its CatchHandler @ 081c1487 */
      CStreamGuard::operator<<(pCVar5,5);
      iVar6 = CUser::GetUID(param_1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
      CStreamGuard::operator<<(pCVar5,iVar6);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
      local_20 = CStreamGuard::GetInBuffer<SIG_DELETE_CHARAC>(pCVar5);
      memset(local_20,0,0x14);
      uVar2 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_20 = uVar2;
      uVar2 = CUser::get_charac_no(param_1,(int)(char)local_24[0xd]);
      *(undefined4 *)(local_20 + 4) = uVar2;
      if (*(int *)(local_20 + 4) == 0) {
        *(undefined4 *)(local_28 + 4) = 0x15;
        StreamPool::Free(GlobalData::s_stream_pool,local_40);
        uVar2 = 0;
      }
      else {
        uVar2 = CUser::GetGuildIdBeforeDeleteCharacter(param_1,(int)(char)local_24[0xd]);
        *(undefined4 *)(local_20 + 0xc) = uVar2;
        cVar1 = CUser::lockDeleteCharac(param_1);
        if (cVar1 == '\x01') {
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_40);
          iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)local_24[0xd]);
          puVar7 = (undefined4 *)
                   std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                             ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                              (param_1 + 0x796e8),(int)(char)local_24[0xd]);
          uVar2 = *puVar7;
          uVar3 = CUser::get_acc_id(param_1);
          uVar8 = NumberToString(uVar3,0);
          cMyTrace::cMyTrace(local_38,
                             "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0xa6e,0);
          cMyTrace::operator()
                    (local_38,"[%s][%d] accid(%s) delete charac(%d) %s",
                     "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                     0xa6e,uVar8,uVar2,iVar6 + 4);
          uVar2 = 0;
        }
        else {
          StreamPool::Free(GlobalData::s_stream_pool,local_40);
          uVar3 = CUser::get_acc_id(param_1);
          uVar2 = LineFunc(0xa68,
                           "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0,uVar3);
        }
      }
      CStreamGuard::~CStreamGuard(local_40);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

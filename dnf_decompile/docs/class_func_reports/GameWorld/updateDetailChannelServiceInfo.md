# updateDetailChannelServiceInfo

`_ZN9GameWorld30updateDetailChannelServiceInfoEv`

`GameWorld::updateDetailChannelServiceInfo()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cb17c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cb17c  _ZN9GameWorld30updateDetailChannelServiceInfoEv
#           GameWorld::updateDetailChannelServiceInfo()
# range [0x086cb17c, 0x086cb619]
086cb17c +0x000:  push   %ebp
086cb17d +0x001:  mov    %esp,%ebp
086cb17f +0x003:  push   %esi
086cb180 +0x004:  push   %ebx
086cb181 +0x005:  sub    $0xa0,%esp
086cb187 +0x00b:  lea    -0x74(%ebp),%eax
086cb18a +0x00e:  mov    %eax,(%esp)
086cb18d +0x011:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
086cb192 +0x016:  mov    0x8(%ebp),%eax
086cb195 +0x019:  lea    0x134(%eax),%edx
086cb19b +0x01f:  lea    -0x78(%ebp),%eax
086cb19e +0x022:  mov    %edx,0x4(%esp)
086cb1a2 +0x026:  mov    %eax,(%esp)
086cb1a5 +0x029:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cb1aa +0x02e:  sub    $0x4,%esp
086cb1ad +0x031:  jmp    086cb3c0 <+0x244>
086cb1b2 +0x036:  lea    -0x78(%ebp),%eax
086cb1b5 +0x039:  mov    %eax,(%esp)
086cb1b8 +0x03c:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cb1bd +0x041:  mov    0x4(%eax),%eax
086cb1c0 +0x044:  mov    %eax,-0x18(%ebp)
086cb1c3 +0x047:  cmpl   $0x0,-0x18(%ebp)
086cb1c7 +0x04b:  je     086cb3b5 <+0x239>
086cb1cd +0x051:  movl   $0x0,-0x14(%ebp)
086cb1d4 +0x058:  mov    -0x18(%ebp),%eax
086cb1d7 +0x05b:  mov    %eax,(%esp)
086cb1da +0x05e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cb1df +0x063:  cmp    $0xa,%eax
086cb1e2 +0x066:  ja     086cb3b5 <+0x239>
086cb1e8 +0x06c:  mov    &data#b4815352(.rodata)(,%eax,4),%eax
086cb1ef +0x073:  jmp    *%eax
086cb1f1 +0x075:  movl   $0x0,-0x58(%ebp)
086cb1f8 +0x07c:  lea    -0x58(%ebp),%eax
086cb1fb +0x07f:  mov    %eax,0x4(%esp)
086cb1ff +0x083:  lea    -0x74(%ebp),%eax
086cb202 +0x086:  mov    %eax,(%esp)
086cb205 +0x089:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb20a +0x08e:  mov    (%eax),%eax
086cb20c +0x090:  mov    %eax,-0x14(%ebp)
086cb20f +0x093:  movl   $0x0,-0x54(%ebp)
086cb216 +0x09a:  lea    -0x54(%ebp),%eax
086cb219 +0x09d:  mov    %eax,0x4(%esp)
086cb21d +0x0a1:  lea    -0x74(%ebp),%eax
086cb220 +0x0a4:  mov    %eax,(%esp)
086cb223 +0x0a7:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb228 +0x0ac:  mov    -0x14(%ebp),%edx
086cb22b +0x0af:  add    $0x1,%edx
086cb22e +0x0b2:  mov    %edx,(%eax)
086cb230 +0x0b4:  jmp    086cb3b5 <+0x239>
086cb235 +0x0b9:  movl   $0x1,-0x50(%ebp)
086cb23c +0x0c0:  lea    -0x50(%ebp),%eax
086cb23f +0x0c3:  mov    %eax,0x4(%esp)
086cb243 +0x0c7:  lea    -0x74(%ebp),%eax
086cb246 +0x0ca:  mov    %eax,(%esp)
086cb249 +0x0cd:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb24e +0x0d2:  mov    (%eax),%eax
086cb250 +0x0d4:  mov    %eax,-0x14(%ebp)
086cb253 +0x0d7:  movl   $0x1,-0x4c(%ebp)
086cb25a +0x0de:  lea    -0x4c(%ebp),%eax
086cb25d +0x0e1:  mov    %eax,0x4(%esp)
086cb261 +0x0e5:  lea    -0x74(%ebp),%eax
086cb264 +0x0e8:  mov    %eax,(%esp)
086cb267 +0x0eb:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb26c +0x0f0:  mov    -0x14(%ebp),%edx
086cb26f +0x0f3:  add    $0x1,%edx
086cb272 +0x0f6:  mov    %edx,(%eax)
086cb274 +0x0f8:  jmp    086cb3b5 <+0x239>
086cb279 +0x0fd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cb27e +0x102:  mov    %eax,(%esp)
086cb281 +0x105:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
086cb286 +0x10a:  cmp    $0xf,%eax
086cb289 +0x10d:  je     086cb29d <+0x121>
086cb28b +0x10f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cb290 +0x114:  mov    %eax,(%esp)
086cb293 +0x117:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
086cb298 +0x11c:  cmp    $0x10,%eax
086cb29b +0x11f:  jne    086cb2a4 <+0x128>
086cb29d +0x121:  mov    $0x1,%eax
086cb2a2 +0x126:  jmp    086cb2a9 <+0x12d>
086cb2a4 +0x128:  mov    $0x0,%eax
086cb2a9 +0x12d:  test   %al,%al
086cb2ab +0x12f:  je     086cb2f1 <+0x175>
086cb2ad +0x131:  movl   $0x9,-0x48(%ebp)
086cb2b4 +0x138:  lea    -0x48(%ebp),%eax
086cb2b7 +0x13b:  mov    %eax,0x4(%esp)
086cb2bb +0x13f:  lea    -0x74(%ebp),%eax
086cb2be +0x142:  mov    %eax,(%esp)
086cb2c1 +0x145:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb2c6 +0x14a:  mov    (%eax),%eax
086cb2c8 +0x14c:  mov    %eax,-0x14(%ebp)
086cb2cb +0x14f:  movl   $0x9,-0x44(%ebp)
086cb2d2 +0x156:  lea    -0x44(%ebp),%eax
086cb2d5 +0x159:  mov    %eax,0x4(%esp)
086cb2d9 +0x15d:  lea    -0x74(%ebp),%eax
086cb2dc +0x160:  mov    %eax,(%esp)
086cb2df +0x163:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb2e4 +0x168:  mov    -0x14(%ebp),%edx
086cb2e7 +0x16b:  add    $0x1,%edx
086cb2ea +0x16e:  mov    %edx,(%eax)
086cb2ec +0x170:  jmp    086cb3b5 <+0x239>
086cb2f1 +0x175:  movl   $0x2,-0x40(%ebp)
086cb2f8 +0x17c:  lea    -0x40(%ebp),%eax
086cb2fb +0x17f:  mov    %eax,0x4(%esp)
086cb2ff +0x183:  lea    -0x74(%ebp),%eax
086cb302 +0x186:  mov    %eax,(%esp)
086cb305 +0x189:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb30a +0x18e:  mov    (%eax),%eax
086cb30c +0x190:  mov    %eax,-0x14(%ebp)
086cb30f +0x193:  movl   $0x2,-0x3c(%ebp)
086cb316 +0x19a:  lea    -0x3c(%ebp),%eax
086cb319 +0x19d:  mov    %eax,0x4(%esp)
086cb31d +0x1a1:  lea    -0x74(%ebp),%eax
086cb320 +0x1a4:  mov    %eax,(%esp)
086cb323 +0x1a7:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb328 +0x1ac:  mov    -0x14(%ebp),%edx
086cb32b +0x1af:  add    $0x1,%edx
086cb32e +0x1b2:  mov    %edx,(%eax)
086cb330 +0x1b4:  jmp    086cb3b5 <+0x239>
086cb335 +0x1b9:  movl   $0x6,-0x38(%ebp)
086cb33c +0x1c0:  lea    -0x38(%ebp),%eax
086cb33f +0x1c3:  mov    %eax,0x4(%esp)
086cb343 +0x1c7:  lea    -0x74(%ebp),%eax
086cb346 +0x1ca:  mov    %eax,(%esp)
086cb349 +0x1cd:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb34e +0x1d2:  mov    (%eax),%eax
086cb350 +0x1d4:  mov    %eax,-0x14(%ebp)
086cb353 +0x1d7:  movl   $0x6,-0x34(%ebp)
086cb35a +0x1de:  lea    -0x34(%ebp),%eax
086cb35d +0x1e1:  mov    %eax,0x4(%esp)
086cb361 +0x1e5:  lea    -0x74(%ebp),%eax
086cb364 +0x1e8:  mov    %eax,(%esp)
086cb367 +0x1eb:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb36c +0x1f0:  mov    -0x14(%ebp),%edx
086cb36f +0x1f3:  add    $0x1,%edx
086cb372 +0x1f6:  mov    %edx,(%eax)
086cb374 +0x1f8:  jmp    086cb3b5 <+0x239>
086cb376 +0x1fa:  movl   $0x8,-0x30(%ebp)
086cb37d +0x201:  lea    -0x30(%ebp),%eax
086cb380 +0x204:  mov    %eax,0x4(%esp)
086cb384 +0x208:  lea    -0x74(%ebp),%eax
086cb387 +0x20b:  mov    %eax,(%esp)
086cb38a +0x20e:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb38f +0x213:  mov    (%eax),%eax
086cb391 +0x215:  mov    %eax,-0x14(%ebp)
086cb394 +0x218:  movl   $0x8,-0x2c(%ebp)
086cb39b +0x21f:  lea    -0x2c(%ebp),%eax
086cb39e +0x222:  mov    %eax,0x4(%esp)
086cb3a2 +0x226:  lea    -0x74(%ebp),%eax
086cb3a5 +0x229:  mov    %eax,(%esp)
086cb3a8 +0x22c:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb3ad +0x231:  mov    -0x14(%ebp),%edx
086cb3b0 +0x234:  add    $0x1,%edx
086cb3b3 +0x237:  mov    %edx,(%eax)
086cb3b5 +0x239:  lea    -0x78(%ebp),%eax
086cb3b8 +0x23c:  mov    %eax,(%esp)
086cb3bb +0x23f:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cb3c0 +0x244:  mov    0x8(%ebp),%eax
086cb3c3 +0x247:  lea    0x134(%eax),%edx
086cb3c9 +0x24d:  lea    -0x5c(%ebp),%eax
086cb3cc +0x250:  mov    %edx,0x4(%esp)
086cb3d0 +0x254:  mov    %eax,(%esp)
086cb3d3 +0x257:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cb3d8 +0x25c:  sub    $0x4,%esp
086cb3db +0x25f:  lea    -0x5c(%ebp),%eax
086cb3de +0x262:  mov    %eax,0x4(%esp)
086cb3e2 +0x266:  lea    -0x78(%ebp),%eax
086cb3e5 +0x269:  mov    %eax,(%esp)
086cb3e8 +0x26c:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cb3ed +0x271:  test   %al,%al
086cb3ef +0x273:  jne    086cb1b2 <+0x36>
086cb3f5 +0x279:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086cb3fa +0x27e:  mov    %eax,(%esp)
086cb3fd +0x281:  call   086d23a4 <_GLOBAL__I_MAX_VILLAGE_NUM+0xbd5>  ; global constructors keyed to MAX_VILLAGE_NUM+0xbd5
086cb402 +0x286:  mov    %eax,-0x1c(%ebp)
086cb405 +0x289:  cmpl   $0x0,-0x1c(%ebp)
086cb409 +0x28d:  jle    086cb464 <+0x2e8>
086cb40b +0x28f:  movl   $0x0,-0x28(%ebp)
086cb412 +0x296:  lea    -0x28(%ebp),%eax
086cb415 +0x299:  mov    %eax,0x4(%esp)
086cb419 +0x29d:  lea    -0x74(%ebp),%eax
086cb41c +0x2a0:  mov    %eax,(%esp)
086cb41f +0x2a3:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb424 +0x2a8:  mov    %eax,%ebx
086cb426 +0x2aa:  movl   $0x0,-0x24(%ebp)
086cb42d +0x2b1:  lea    -0x24(%ebp),%eax
086cb430 +0x2b4:  mov    %eax,0x4(%esp)
086cb434 +0x2b8:  lea    -0x74(%ebp),%eax
086cb437 +0x2bb:  mov    %eax,(%esp)
086cb43a +0x2be:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb43f +0x2c3:  mov    (%eax),%eax
086cb441 +0x2c5:  sub    -0x1c(%ebp),%eax
086cb444 +0x2c8:  mov    %eax,(%ebx)
086cb446 +0x2ca:  movl   $0x7,-0x20(%ebp)
086cb44d +0x2d1:  lea    -0x20(%ebp),%eax
086cb450 +0x2d4:  mov    %eax,0x4(%esp)
086cb454 +0x2d8:  lea    -0x74(%ebp),%eax
086cb457 +0x2db:  mov    %eax,(%esp)
086cb45a +0x2de:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cb45f +0x2e3:  mov    -0x1c(%ebp),%edx
086cb462 +0x2e6:  mov    %edx,(%eax)
086cb464 +0x2e8:  lea    -0x7c(%ebp),%eax
086cb467 +0x2eb:  lea    -0x74(%ebp),%edx
086cb46a +0x2ee:  mov    %edx,0x4(%esp)
086cb46e +0x2f2:  mov    %eax,(%esp)
086cb471 +0x2f5:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
086cb476 +0x2fa:  sub    $0x4,%esp
086cb479 +0x2fd:  lea    -0x80(%ebp),%eax
086cb47c +0x300:  lea    -0x74(%ebp),%edx
086cb47f +0x303:  mov    %edx,0x4(%esp)
086cb483 +0x307:  mov    %eax,(%esp)
086cb486 +0x30a:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
086cb48b +0x30f:  sub    $0x4,%esp
086cb48e +0x312:  jmp    086cb5ce <+0x452>
086cb493 +0x317:  lea    -0x7c(%ebp),%eax
086cb496 +0x31a:  mov    %eax,(%esp)
086cb499 +0x31d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
086cb49e +0x322:  mov    (%eax),%eax
086cb4a0 +0x324:  mov    %eax,-0x10(%ebp)
086cb4a3 +0x327:  lea    -0x7c(%ebp),%eax
086cb4a6 +0x32a:  mov    %eax,(%esp)
086cb4a9 +0x32d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
086cb4ae +0x332:  mov    0x4(%eax),%eax
086cb4b1 +0x335:  mov    %eax,-0xc(%ebp)
086cb4b4 +0x338:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cb4b9 +0x33d:  movl   $0x110f,0x8(%esp)
086cb4c1 +0x345:  movl   $"world.cpp",0x4(%esp)
086cb4c9 +0x34d:  mov    %eax,(%esp)
086cb4cc +0x350:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cb4d1 +0x355:  movl   $0x1,0x8(%esp)
086cb4d9 +0x35d:  mov    %eax,0x4(%esp)
086cb4dd +0x361:  lea    -0x88(%ebp),%eax
086cb4e3 +0x367:  mov    %eax,(%esp)
086cb4e6 +0x36a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cb4eb +0x36f:  lea    -0x88(%ebp),%eax
086cb4f1 +0x375:  mov    %eax,(%esp)
086cb4f4 +0x378:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb4f9 +0x37d:  movl   $0x6a,0x4(%esp)
086cb501 +0x385:  mov    %eax,(%esp)
086cb504 +0x388:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb509 +0x38d:  lea    -0x88(%ebp),%eax
086cb50f +0x393:  mov    %eax,(%esp)
086cb512 +0x396:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb517 +0x39b:  movl   $0xffffffff,0x4(%esp)
086cb51f +0x3a3:  mov    %eax,(%esp)
086cb522 +0x3a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb527 +0x3ab:  mov    -0x10(%ebp),%eax
086cb52a +0x3ae:  mov    %eax,-0x98(%ebp)
086cb530 +0x3b4:  movl   $0x0,-0x94(%ebp)
086cb53a +0x3be:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb53f +0x3c3:  mov    0x198(%eax),%eax
086cb545 +0x3c9:  mov    %eax,-0x90(%ebp)
086cb54b +0x3cf:  mov    -0xc(%ebp),%eax
086cb54e +0x3d2:  mov    %eax,-0x8c(%ebp)
086cb554 +0x3d8:  lea    -0x88(%ebp),%eax
086cb55a +0x3de:  mov    %eax,(%esp)
086cb55d +0x3e1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cb562 +0x3e6:  movl   $0x10,0x8(%esp)
086cb56a +0x3ee:  lea    -0x98(%ebp),%edx
086cb570 +0x3f4:  mov    %edx,0x4(%esp)
086cb574 +0x3f8:  mov    %eax,(%esp)
086cb577 +0x3fb:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
086cb57c +0x400:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cb581 +0x405:  lea    -0x88(%ebp),%edx
086cb587 +0x40b:  mov    %edx,0x8(%esp)
086cb58b +0x40f:  movl   $0x4,0x4(%esp)
086cb593 +0x417:  mov    %eax,(%esp)
086cb596 +0x41a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cb59b +0x41f:  jmp    086cb5b5 <+0x439>
086cb59d +0x421:  mov    %edx,%ebx
086cb59f +0x423:  mov    %eax,%esi
086cb5a1 +0x425:  lea    -0x88(%ebp),%eax
086cb5a7 +0x42b:  mov    %eax,(%esp)
086cb5aa +0x42e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cb5af +0x433:  mov    %esi,%eax
086cb5b1 +0x435:  mov    %ebx,%edx
086cb5b3 +0x437:  jmp    086cb5ea <+0x46e>
086cb5b5 +0x439:  lea    -0x88(%ebp),%eax
086cb5bb +0x43f:  mov    %eax,(%esp)
086cb5be +0x442:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cb5c3 +0x447:  lea    -0x7c(%ebp),%eax
086cb5c6 +0x44a:  mov    %eax,(%esp)
086cb5c9 +0x44d:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
086cb5ce +0x452:  lea    -0x80(%ebp),%eax
086cb5d1 +0x455:  mov    %eax,0x4(%esp)
086cb5d5 +0x459:  lea    -0x7c(%ebp),%eax
086cb5d8 +0x45c:  mov    %eax,(%esp)
086cb5db +0x45f:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
086cb5e0 +0x464:  test   %al,%al
086cb5e2 +0x466:  jne    086cb493 <+0x317>
086cb5e8 +0x46c:  jmp    086cb605 <+0x489>
086cb5ea +0x46e:  mov    %edx,%ebx
086cb5ec +0x470:  mov    %eax,%esi
086cb5ee +0x472:  lea    -0x74(%ebp),%eax
086cb5f1 +0x475:  mov    %eax,(%esp)
086cb5f4 +0x478:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
086cb5f9 +0x47d:  mov    %esi,%eax
086cb5fb +0x47f:  mov    %ebx,%edx
086cb5fd +0x481:  mov    %eax,(%esp)
086cb600 +0x484:  call   08ae3750 <_Unwind_Resume>
086cb605 +0x489:  lea    -0x74(%ebp),%eax
086cb608 +0x48c:  mov    %eax,(%esp)
086cb60b +0x48f:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
086cb610 +0x494:  lea    -0x8(%ebp),%esp
086cb613 +0x497:  add    $0x0,%esp
086cb616 +0x49a:  pop    %ebx
086cb617 +0x49b:  pop    %esi
086cb618 +0x49c:  pop    %ebp
086cb619 +0x49d:  ret
```

## 反编译 C

```c
// GameWorld::updateDetailChannelServiceInfo @ 0x86cb17c

/* GameWorld::updateDetailChannelServiceInfo() */

void GameWorld::updateDetailChannelServiceInfo(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GameWorld *pGVar4;
  CPrivateStoreMgr *this;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  CStreamGuard local_8c [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_84 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_80 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_7c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_78 [24];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_60 [4];
  int local_5c [16];
  CUser *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_78);
                    /* try { // try from 086cb1a5 to 086cb4d0 has its CatchHandler @ 086cb5ea */
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_7c);
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_60);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_7c,
                       (_Rb_tree_iterator *)local_60);
    if (cVar2 == '\0') {
      this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      local_5c[0xf] = private_store::CPrivateStoreMgr::GetPrivateStoreSize(this);
      if (0 < local_5c[0xf]) {
        local_5c[0xc] = 0;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 0xc);
        local_5c[0xd] = 0;
        piVar6 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 0xd);
        *piVar5 = *piVar6 - local_5c[0xf];
        local_5c[0xe] = 7;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 0xe);
        *piVar5 = local_5c[0xf];
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_80);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_84);
      while (cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                               ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80,
                                (_Rb_tree_iterator *)local_84), cVar2 != '\0') {
        puVar7 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        local_14 = *puVar7;
        iVar8 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        local_10 = *(undefined4 *)(iVar8 + 4);
        pSVar9 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x110f);
        CStreamGuard::CStreamGuard(local_8c,pSVar9,true);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_8c);
                    /* try { // try from 086cb504 to 086cb59a has its CatchHandler @ 086cb59d */
        CStreamGuard::operator<<(pCVar10,0x6a);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_8c);
        CStreamGuard::operator<<(pCVar10,-1);
        local_9c = local_14;
        local_98 = 0;
        iVar8 = G_CEnvironment();
        local_94 = *(undefined4 *)(iVar8 + 0x198);
        local_90 = local_10;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_8c);
        CStreamGuard::put_binary(pCVar10,&local_9c,0x10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_8c);
                    /* try { // try from 086cb5be to 086cb5cd has its CatchHandler @ 086cb5ea */
        CStreamGuard::~CStreamGuard(local_8c);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_78);
      return;
    }
    iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_7c);
    local_1c = *(CUser **)(iVar8 + 4);
    if (local_1c != (CUser *)0x0) {
      local_18 = 0;
      uVar3 = CUser::get_state(local_1c);
      switch(uVar3) {
      case 3:
        local_5c[0] = 0;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c);
        local_18 = *piVar5;
        local_5c[1] = 0;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 1);
        *piVar5 = local_18 + 1;
        break;
      case 5:
        local_5c[2] = 1;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 2);
        local_18 = *piVar5;
        local_5c[3] = 1;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 3);
        *piVar5 = local_18 + 1;
        break;
      case 6:
      case 7:
        pGVar4 = (GameWorld *)G_GameWorld();
        iVar8 = GetChannelType(pGVar4);
        if (iVar8 == 0xf) {
LAB_086cb29d:
          bVar1 = true;
        }
        else {
          pGVar4 = (GameWorld *)G_GameWorld();
          iVar8 = GetChannelType(pGVar4);
          if (iVar8 == 0x10) goto LAB_086cb29d;
          bVar1 = false;
        }
        if (bVar1) {
          local_5c[4] = 9;
          piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[](local_78,local_5c + 4);
          local_18 = *piVar5;
          local_5c[5] = 9;
          piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[](local_78,local_5c + 5);
          *piVar5 = local_18 + 1;
        }
        else {
          local_5c[6] = 2;
          piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[](local_78,local_5c + 6);
          local_18 = *piVar5;
          local_5c[7] = 2;
          piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[](local_78,local_5c + 7);
          *piVar5 = local_18 + 1;
        }
        break;
      case 8:
        local_5c[8] = 6;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 8);
        local_18 = *piVar5;
        local_5c[9] = 6;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 9);
        *piVar5 = local_18 + 1;
        break;
      case 10:
        local_5c[10] = 8;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 10);
        local_18 = *piVar5;
        local_5c[0xb] = 8;
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[](local_78,local_5c + 0xb);
        *piVar5 = local_18 + 1;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_7c);
  } while( true );
}
```

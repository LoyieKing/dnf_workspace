# dispatch

`_ZN18DB_CrashDownReport8dispatchEiiP6Stream`

`DB_CrashDownReport::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CrashDownReport` | `0x0841abc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841abc6  _ZN18DB_CrashDownReport8dispatchEiiP6Stream
#           DB_CrashDownReport::dispatch(int, int, Stream*)
# range [0x0841abc6, 0x0841b205]
0841abc6 +0x000:  push   %ebp
0841abc7 +0x001:  mov    %esp,%ebp
0841abc9 +0x003:  sub    $0x108,%esp
0841abcf +0x009:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841abd6 +0x010:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0841abdb +0x015:  mov    %eax,-0xa0(%ebp)
0841abe1 +0x01b:  lea    -0xe4(%ebp),%eax
0841abe7 +0x021:  mov    %eax,0x4(%esp)
0841abeb +0x025:  lea    -0xa0(%ebp),%eax
0841abf1 +0x02b:  mov    %eax,(%esp)
0841abf4 +0x02e:  call   0807e360 <_init+0xc58>
0841abf9 +0x033:  mov    %eax,-0x4c(%ebp)
0841abfc +0x036:  mov    -0x4c(%ebp),%eax
0841abff +0x039:  movl   $0x0,(%eax)
0841ac05 +0x03f:  mov    -0x4c(%ebp),%eax
0841ac08 +0x042:  mov    %eax,(%esp)
0841ac0b +0x045:  call   0807e820 <_init+0x1118>
0841ac10 +0x04a:  mov    %eax,-0x48(%ebp)
0841ac13 +0x04d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841ac18 +0x052:  movl   $0x0,0x8(%esp)
0841ac20 +0x05a:  movl   $0x4,0x4(%esp)
0841ac28 +0x062:  mov    %eax,(%esp)
0841ac2b +0x065:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841ac30 +0x06a:  mov    %eax,-0x44(%ebp)
0841ac33 +0x06d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ac38 +0x072:  mov    %eax,(%esp)
0841ac3b +0x075:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841ac40 +0x07a:  mov    %eax,(%esp)
0841ac43 +0x07d:  call   0860baee <_ZN24StatisticsToObserveCrash24getAbnormalDownUserCountEv>  ; StatisticsToObserveCrash::getAbnormalDownUserCount()
0841ac48 +0x082:  mov    %eax,-0x40(%ebp)
0841ac4b +0x085:  mov    -0x40(%ebp),%eax
0841ac4e +0x088:  mov    %eax,0x8(%esp)
0841ac52 +0x08c:  movl   $"upDate client_down set occ_count = occ_count+%d where occ_date = cast(now() as date)",0x4(%esp)
0841ac5a +0x094:  mov    -0x44(%ebp),%eax
0841ac5d +0x097:  mov    %eax,(%esp)
0841ac60 +0x09a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841ac65 +0x09f:  movl   $0x1,0x4(%esp)
0841ac6d +0x0a7:  mov    -0x44(%ebp),%eax
0841ac70 +0x0aa:  mov    %eax,(%esp)
0841ac73 +0x0ad:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841ac78 +0x0b2:  mov    %al,-0x39(%ebp)
0841ac7b +0x0b5:  movzbl -0x39(%ebp),%eax
0841ac7f +0x0b9:  xor    $0x1,%eax
0841ac82 +0x0bc:  test   %al,%al
0841ac84 +0x0be:  je     0841acc2 <+0xfc>
0841ac86 +0x0c0:  movl   $0x5,0xc(%esp)
0841ac8e +0x0c8:  movl   $0x4d5c,0x8(%esp)
0841ac96 +0x0d0:  movl   $&_ZZN18DB_CrashDownReport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841ac9e +0x0d8:  lea    -0x9c(%ebp),%eax
0841aca4 +0x0de:  mov    %eax,(%esp)
0841aca7 +0x0e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841acac +0x0e6:  movl   $"upDate client_down failed",0x4(%esp)
0841acb4 +0x0ee:  lea    -0x9c(%ebp),%eax
0841acba +0x0f4:  mov    %eax,(%esp)
0841acbd +0x0f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841acc2 +0x0fc:  movl   $0x0,0xc(%esp)
0841acca +0x104:  movl   $0x4d5f,0x8(%esp)
0841acd2 +0x10c:  movl   $&_ZZN18DB_CrashDownReport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841acda +0x114:  lea    -0x8c(%ebp),%eax
0841ace0 +0x11a:  mov    %eax,(%esp)
0841ace3 +0x11d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841ace8 +0x122:  mov    -0x40(%ebp),%eax
0841aceb +0x125:  mov    %eax,0x8(%esp)
0841acef +0x129:  movl   $"abnormal down user : %d",0x4(%esp)
0841acf7 +0x131:  lea    -0x8c(%ebp),%eax
0841acfd +0x137:  mov    %eax,(%esp)
0841ad00 +0x13a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841ad05 +0x13f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ad0a +0x144:  mov    %eax,(%esp)
0841ad0d +0x147:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841ad12 +0x14c:  mov    %eax,(%esp)
0841ad15 +0x14f:  call   0844d4d0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe6
0841ad1a +0x154:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841ad1f +0x159:  movl   $0x0,0x8(%esp)
0841ad27 +0x161:  movl   $0x4,0x4(%esp)
0841ad2f +0x169:  mov    %eax,(%esp)
0841ad32 +0x16c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841ad37 +0x171:  mov    %eax,-0x38(%ebp)
0841ad3a +0x174:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ad3f +0x179:  mov    %eax,(%esp)
0841ad42 +0x17c:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841ad47 +0x181:  lea    0x34(%eax),%edx
0841ad4a +0x184:  lea    -0xa4(%ebp),%eax
0841ad50 +0x18a:  mov    %edx,0x4(%esp)
0841ad54 +0x18e:  mov    %eax,(%esp)
0841ad57 +0x191:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0841ad5c +0x196:  sub    $0x4,%esp
0841ad5f +0x199:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ad64 +0x19e:  mov    %eax,(%esp)
0841ad67 +0x1a1:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841ad6c +0x1a6:  lea    0x34(%eax),%edx
0841ad6f +0x1a9:  lea    -0xa8(%ebp),%eax
0841ad75 +0x1af:  mov    %edx,0x4(%esp)
0841ad79 +0x1b3:  mov    %eax,(%esp)
0841ad7c +0x1b6:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0841ad81 +0x1bb:  sub    $0x4,%esp
0841ad84 +0x1be:  jmp    0841ae97 <+0x2d1>
0841ad89 +0x1c3:  lea    -0xa4(%ebp),%eax
0841ad8f +0x1c9:  mov    %eax,(%esp)
0841ad92 +0x1cc:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841ad97 +0x1d1:  mov    (%eax),%eax
0841ad99 +0x1d3:  mov    %eax,-0x34(%ebp)
0841ad9c +0x1d6:  lea    -0xa4(%ebp),%eax
0841ada2 +0x1dc:  mov    %eax,(%esp)
0841ada5 +0x1df:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841adaa +0x1e4:  mov    0x4(%eax),%eax
0841adad +0x1e7:  mov    %eax,-0x30(%ebp)
0841adb0 +0x1ea:  mov    -0x30(%ebp),%eax
0841adb3 +0x1ed:  mov    %eax,0x10(%esp)
0841adb7 +0x1f1:  mov    -0x34(%ebp),%eax
0841adba +0x1f4:  mov    %eax,0xc(%esp)
0841adbe +0x1f8:  mov    -0x48(%ebp),%eax
0841adc1 +0x1fb:  mov    %eax,0x8(%esp)
0841adc5 +0x1ff:  movl   $"inSert into crash_down_by_dungeon(occ_time,dungeon_index,down_count) values(from_unixtime(%d),%d,%d)",0x4(%esp)
0841adcd +0x207:  mov    -0x38(%ebp),%eax
0841add0 +0x20a:  mov    %eax,(%esp)
0841add3 +0x20d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841add8 +0x212:  movl   $0x1,0x4(%esp)
0841ade0 +0x21a:  mov    -0x38(%ebp),%eax
0841ade3 +0x21d:  mov    %eax,(%esp)
0841ade6 +0x220:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841adeb +0x225:  mov    %al,-0x2a(%ebp)
0841adee +0x228:  movzbl -0x2a(%ebp),%eax
0841adf2 +0x22c:  xor    $0x1,%eax
0841adf5 +0x22f:  test   %al,%al
0841adf7 +0x231:  je     0841ae42 <+0x27c>
0841adf9 +0x233:  mov    -0x34(%ebp),%eax
0841adfc +0x236:  mov    %eax,0x10(%esp)
0841ae00 +0x23a:  mov    -0x30(%ebp),%eax
0841ae03 +0x23d:  mov    %eax,0xc(%esp)
0841ae07 +0x241:  mov    -0x48(%ebp),%eax
0841ae0a +0x244:  mov    %eax,0x8(%esp)
0841ae0e +0x248:  movl   $"upDate crash_down_by_dungeon set down_count = down_count + %d where occ_time = from_unixtime(%d) and dungeon_index = %d",0x4(%esp)
0841ae16 +0x250:  mov    -0x38(%ebp),%eax
0841ae19 +0x253:  mov    %eax,(%esp)
0841ae1c +0x256:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841ae21 +0x25b:  movl   $0x1,0x4(%esp)
0841ae29 +0x263:  mov    -0x38(%ebp),%eax
0841ae2c +0x266:  mov    %eax,(%esp)
0841ae2f +0x269:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841ae34 +0x26e:  mov    %al,-0x29(%ebp)
0841ae37 +0x271:  movzbl -0x29(%ebp),%eax
0841ae3b +0x275:  xor    $0x1,%eax
0841ae3e +0x278:  test   %al,%al
0841ae40 +0x27a:  jne    0841ae88 <+0x2c2>
0841ae42 +0x27c:  movl   $0x0,0xc(%esp)
0841ae4a +0x284:  movl   $0x4d7d,0x8(%esp)
0841ae52 +0x28c:  movl   $&_ZZN18DB_CrashDownReport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841ae5a +0x294:  lea    -0x7c(%ebp),%eax
0841ae5d +0x297:  mov    %eax,(%esp)
0841ae60 +0x29a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841ae65 +0x29f:  mov    -0x30(%ebp),%eax
0841ae68 +0x2a2:  mov    %eax,0xc(%esp)
0841ae6c +0x2a6:  mov    -0x34(%ebp),%eax
0841ae6f +0x2a9:  mov    %eax,0x8(%esp)
0841ae73 +0x2ad:  movl   $"abnormal down user by dungeon : %d DUNGEON %d",0x4(%esp)
0841ae7b +0x2b5:  lea    -0x7c(%ebp),%eax
0841ae7e +0x2b8:  mov    %eax,(%esp)
0841ae81 +0x2bb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841ae86 +0x2c0:  jmp    0841ae89 <+0x2c3>
0841ae88 +0x2c2:  nop
0841ae89 +0x2c3:  lea    -0xa4(%ebp),%eax
0841ae8f +0x2c9:  mov    %eax,(%esp)
0841ae92 +0x2cc:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0841ae97 +0x2d1:  lea    -0xa8(%ebp),%eax
0841ae9d +0x2d7:  mov    %eax,0x4(%esp)
0841aea1 +0x2db:  lea    -0xa4(%ebp),%eax
0841aea7 +0x2e1:  mov    %eax,(%esp)
0841aeaa +0x2e4:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0841aeaf +0x2e9:  test   %al,%al
0841aeb1 +0x2eb:  jne    0841ad89 <+0x1c3>
0841aeb7 +0x2f1:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841aebc +0x2f6:  movl   $0x0,0x8(%esp)
0841aec4 +0x2fe:  movl   $0x4,0x4(%esp)
0841aecc +0x306:  mov    %eax,(%esp)
0841aecf +0x309:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841aed4 +0x30e:  mov    %eax,-0x28(%ebp)
0841aed7 +0x311:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841aedc +0x316:  mov    %eax,(%esp)
0841aedf +0x319:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841aee4 +0x31e:  lea    0x1c(%eax),%edx
0841aee7 +0x321:  lea    -0xac(%ebp),%eax
0841aeed +0x327:  mov    %edx,0x4(%esp)
0841aef1 +0x32b:  mov    %eax,(%esp)
0841aef4 +0x32e:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0841aef9 +0x333:  sub    $0x4,%esp
0841aefc +0x336:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841af01 +0x33b:  mov    %eax,(%esp)
0841af04 +0x33e:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841af09 +0x343:  lea    0x1c(%eax),%edx
0841af0c +0x346:  lea    -0xb0(%ebp),%eax
0841af12 +0x34c:  mov    %edx,0x4(%esp)
0841af16 +0x350:  mov    %eax,(%esp)
0841af19 +0x353:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0841af1e +0x358:  sub    $0x4,%esp
0841af21 +0x35b:  jmp    0841b026 <+0x460>
0841af26 +0x360:  lea    -0xac(%ebp),%eax
0841af2c +0x366:  mov    %eax,(%esp)
0841af2f +0x369:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841af34 +0x36e:  mov    (%eax),%eax
0841af36 +0x370:  mov    %eax,-0x24(%ebp)
0841af39 +0x373:  lea    -0xac(%ebp),%eax
0841af3f +0x379:  mov    %eax,(%esp)
0841af42 +0x37c:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841af47 +0x381:  mov    0x4(%eax),%eax
0841af4a +0x384:  mov    %eax,-0x20(%ebp)
0841af4d +0x387:  mov    -0x20(%ebp),%eax
0841af50 +0x38a:  mov    %eax,0xc(%esp)
0841af54 +0x38e:  mov    -0x24(%ebp),%eax
0841af57 +0x391:  mov    %eax,0x8(%esp)
0841af5b +0x395:  movl   $"inSert into crash_down_by_packet(occ_date,packet_index,down_count) values(cast(now() as date),%d,%d)",0x4(%esp)
0841af63 +0x39d:  mov    -0x28(%ebp),%eax
0841af66 +0x3a0:  mov    %eax,(%esp)
0841af69 +0x3a3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841af6e +0x3a8:  movl   $0x1,0x4(%esp)
0841af76 +0x3b0:  mov    -0x28(%ebp),%eax
0841af79 +0x3b3:  mov    %eax,(%esp)
0841af7c +0x3b6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841af81 +0x3bb:  mov    %al,-0x1a(%ebp)
0841af84 +0x3be:  movzbl -0x1a(%ebp),%eax
0841af88 +0x3c2:  xor    $0x1,%eax
0841af8b +0x3c5:  test   %al,%al
0841af8d +0x3c7:  je     0841afd1 <+0x40b>
0841af8f +0x3c9:  mov    -0x24(%ebp),%eax
0841af92 +0x3cc:  mov    %eax,0xc(%esp)
0841af96 +0x3d0:  mov    -0x20(%ebp),%eax
0841af99 +0x3d3:  mov    %eax,0x8(%esp)
0841af9d +0x3d7:  movl   $"upDate crash_down_by_packet set down_count = down_count + %d where occ_date = cast(now() as date) and packet_index = %d",0x4(%esp)
0841afa5 +0x3df:  mov    -0x28(%ebp),%eax
0841afa8 +0x3e2:  mov    %eax,(%esp)
0841afab +0x3e5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841afb0 +0x3ea:  movl   $0x1,0x4(%esp)
0841afb8 +0x3f2:  mov    -0x28(%ebp),%eax
0841afbb +0x3f5:  mov    %eax,(%esp)
0841afbe +0x3f8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841afc3 +0x3fd:  mov    %al,-0x19(%ebp)
0841afc6 +0x400:  movzbl -0x19(%ebp),%eax
0841afca +0x404:  xor    $0x1,%eax
0841afcd +0x407:  test   %al,%al
0841afcf +0x409:  jne    0841b017 <+0x451>
0841afd1 +0x40b:  movl   $0x0,0xc(%esp)
0841afd9 +0x413:  movl   $0x4d98,0x8(%esp)
0841afe1 +0x41b:  movl   $&_ZZN18DB_CrashDownReport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841afe9 +0x423:  lea    -0x6c(%ebp),%eax
0841afec +0x426:  mov    %eax,(%esp)
0841afef +0x429:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841aff4 +0x42e:  mov    -0x20(%ebp),%eax
0841aff7 +0x431:  mov    %eax,0xc(%esp)
0841affb +0x435:  mov    -0x24(%ebp),%eax
0841affe +0x438:  mov    %eax,0x8(%esp)
0841b002 +0x43c:  movl   $"abnormal down user by packet : %d PACKET %d",0x4(%esp)
0841b00a +0x444:  lea    -0x6c(%ebp),%eax
0841b00d +0x447:  mov    %eax,(%esp)
0841b010 +0x44a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841b015 +0x44f:  jmp    0841b018 <+0x452>
0841b017 +0x451:  nop
0841b018 +0x452:  lea    -0xac(%ebp),%eax
0841b01e +0x458:  mov    %eax,(%esp)
0841b021 +0x45b:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0841b026 +0x460:  lea    -0xb0(%ebp),%eax
0841b02c +0x466:  mov    %eax,0x4(%esp)
0841b030 +0x46a:  lea    -0xac(%ebp),%eax
0841b036 +0x470:  mov    %eax,(%esp)
0841b039 +0x473:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0841b03e +0x478:  test   %al,%al
0841b040 +0x47a:  jne    0841af26 <+0x360>
0841b046 +0x480:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b04b +0x485:  movl   $0x0,0x8(%esp)
0841b053 +0x48d:  movl   $0x4,0x4(%esp)
0841b05b +0x495:  mov    %eax,(%esp)
0841b05e +0x498:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b063 +0x49d:  mov    %eax,-0x18(%ebp)
0841b066 +0x4a0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b06b +0x4a5:  mov    %eax,(%esp)
0841b06e +0x4a8:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841b073 +0x4ad:  lea    0x4c(%eax),%edx
0841b076 +0x4b0:  lea    -0xb4(%ebp),%eax
0841b07c +0x4b6:  mov    %edx,0x4(%esp)
0841b080 +0x4ba:  mov    %eax,(%esp)
0841b083 +0x4bd:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0841b088 +0x4c2:  sub    $0x4,%esp
0841b08b +0x4c5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b090 +0x4ca:  mov    %eax,(%esp)
0841b093 +0x4cd:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841b098 +0x4d2:  lea    0x4c(%eax),%edx
0841b09b +0x4d5:  lea    -0xb8(%ebp),%eax
0841b0a1 +0x4db:  mov    %edx,0x4(%esp)
0841b0a5 +0x4df:  mov    %eax,(%esp)
0841b0a8 +0x4e2:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0841b0ad +0x4e7:  sub    $0x4,%esp
0841b0b0 +0x4ea:  jmp    0841b1b5 <+0x5ef>
0841b0b5 +0x4ef:  lea    -0xb4(%ebp),%eax
0841b0bb +0x4f5:  mov    %eax,(%esp)
0841b0be +0x4f8:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b0c3 +0x4fd:  mov    (%eax),%eax
0841b0c5 +0x4ff:  mov    %eax,-0x14(%ebp)
0841b0c8 +0x502:  lea    -0xb4(%ebp),%eax
0841b0ce +0x508:  mov    %eax,(%esp)
0841b0d1 +0x50b:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b0d6 +0x510:  mov    0x4(%eax),%eax
0841b0d9 +0x513:  mov    %eax,-0x10(%ebp)
0841b0dc +0x516:  mov    -0x10(%ebp),%eax
0841b0df +0x519:  mov    %eax,0xc(%esp)
0841b0e3 +0x51d:  mov    -0x14(%ebp),%eax
0841b0e6 +0x520:  mov    %eax,0x8(%esp)
0841b0ea +0x524:  movl   $"inSert into crash_down_by_playstatus(occ_date,play_status,down_count) values(cast(now() as date),%d,%d)",0x4(%esp)
0841b0f2 +0x52c:  mov    -0x18(%ebp),%eax
0841b0f5 +0x52f:  mov    %eax,(%esp)
0841b0f8 +0x532:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b0fd +0x537:  movl   $0x1,0x4(%esp)
0841b105 +0x53f:  mov    -0x18(%ebp),%eax
0841b108 +0x542:  mov    %eax,(%esp)
0841b10b +0x545:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b110 +0x54a:  mov    %al,-0xa(%ebp)
0841b113 +0x54d:  movzbl -0xa(%ebp),%eax
0841b117 +0x551:  xor    $0x1,%eax
0841b11a +0x554:  test   %al,%al
0841b11c +0x556:  je     0841b160 <+0x59a>
0841b11e +0x558:  mov    -0x14(%ebp),%eax
0841b121 +0x55b:  mov    %eax,0xc(%esp)
0841b125 +0x55f:  mov    -0x10(%ebp),%eax
0841b128 +0x562:  mov    %eax,0x8(%esp)
0841b12c +0x566:  movl   $"upDate crash_down_by_playstatus set down_count = down_count + %d where occ_date = cast(now() as date) and play_status = %d",0x4(%esp)
0841b134 +0x56e:  mov    -0x18(%ebp),%eax
0841b137 +0x571:  mov    %eax,(%esp)
0841b13a +0x574:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b13f +0x579:  movl   $0x1,0x4(%esp)
0841b147 +0x581:  mov    -0x18(%ebp),%eax
0841b14a +0x584:  mov    %eax,(%esp)
0841b14d +0x587:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b152 +0x58c:  mov    %al,-0x9(%ebp)
0841b155 +0x58f:  movzbl -0x9(%ebp),%eax
0841b159 +0x593:  xor    $0x1,%eax
0841b15c +0x596:  test   %al,%al
0841b15e +0x598:  jne    0841b1a6 <+0x5e0>
0841b160 +0x59a:  movl   $0x0,0xc(%esp)
0841b168 +0x5a2:  movl   $0x4db2,0x8(%esp)
0841b170 +0x5aa:  movl   $&_ZZN18DB_CrashDownReport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841b178 +0x5b2:  lea    -0x5c(%ebp),%eax
0841b17b +0x5b5:  mov    %eax,(%esp)
0841b17e +0x5b8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841b183 +0x5bd:  mov    -0x10(%ebp),%eax
0841b186 +0x5c0:  mov    %eax,0xc(%esp)
0841b18a +0x5c4:  mov    -0x14(%ebp),%eax
0841b18d +0x5c7:  mov    %eax,0x8(%esp)
0841b191 +0x5cb:  movl   $"abnormal down user by playerstatus : %d PLAYERSTATUS %d",0x4(%esp)
0841b199 +0x5d3:  lea    -0x5c(%ebp),%eax
0841b19c +0x5d6:  mov    %eax,(%esp)
0841b19f +0x5d9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841b1a4 +0x5de:  jmp    0841b1a7 <+0x5e1>
0841b1a6 +0x5e0:  nop
0841b1a7 +0x5e1:  lea    -0xb4(%ebp),%eax
0841b1ad +0x5e7:  mov    %eax,(%esp)
0841b1b0 +0x5ea:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0841b1b5 +0x5ef:  lea    -0xb8(%ebp),%eax
0841b1bb +0x5f5:  mov    %eax,0x4(%esp)
0841b1bf +0x5f9:  lea    -0xb4(%ebp),%eax
0841b1c5 +0x5ff:  mov    %eax,(%esp)
0841b1c8 +0x602:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0841b1cd +0x607:  test   %al,%al
0841b1cf +0x609:  jne    0841b0b5 <+0x4ef>
0841b1d5 +0x60f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b1da +0x614:  mov    %eax,(%esp)
0841b1dd +0x617:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841b1e2 +0x61c:  mov    %eax,(%esp)
0841b1e5 +0x61f:  call   0844d4e6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xfc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xfc
0841b1ea +0x624:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b1ef +0x629:  mov    %eax,(%esp)
0841b1f2 +0x62c:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
0841b1f7 +0x631:  mov    %eax,(%esp)
0841b1fa +0x634:  call   0860ba6e <_ZN24StatisticsToObserveCrash5resetEv>  ; StatisticsToObserveCrash::reset()
0841b1ff +0x639:  mov    $0x1,%eax
0841b204 +0x63e:  leave
0841b205 +0x63f:  ret
```

## 反编译 C

```c
// DB_CrashDownReport::dispatch @ 0x841abc6

/* DB_CrashDownReport::dispatch(int, int, Stream*) */

undefined4 DB_CrashDownReport::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  StatisticsToObserveCrash *pSVar3;
  undefined4 *puVar4;
  int iVar5;
  tm local_e8;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_bc [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b8 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b4 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_ac [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a8 [4];
  time_t local_a4;
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  tm *local_50;
  time_t local_4c;
  MySQL *local_48;
  undefined4 local_44;
  char local_3d;
  MySQL *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2e;
  char local_2d;
  MySQL *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1e;
  char local_1d;
  MySQL *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_e;
  char local_d;
  
  local_a4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_50 = localtime_r(&local_a4,&local_e8);
  local_50->tm_sec = 0;
  local_4c = mktime(local_50);
  local_48 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
  local_44 = StatisticsToObserveCrash::getAbnormalDownUserCount(pSVar3);
  MySQL::set_query(local_48,
                   "upDate client_down set occ_count = occ_count+%d where occ_date = cast(now() as date)"
                   ,local_44);
  local_3d = MySQL::exec(local_48,true);
  if (local_3d != '\x01') {
    cMyTrace::cMyTrace(local_a0,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                       0x4d5c,5);
    cMyTrace::operator()(local_a0,"upDate client_down failed");
  }
  cMyTrace::cMyTrace(local_90,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",0x4d5f,
                     0);
  cMyTrace::operator()(local_90,"abnormal down user : %d",local_44);
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
  StatisticsToObserveCrash::lock(pSVar3);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_a8);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_ac);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8,
                       (_Rb_tree_iterator *)local_ac);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
    local_38 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
    local_34 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_3c,
                     "inSert into crash_down_by_dungeon(occ_time,dungeon_index,down_count) values(from_unixtime(%d),%d,%d)"
                     ,local_4c,local_38,local_34);
    local_2e = MySQL::exec(local_3c,true);
    if (local_2e == '\x01') {
LAB_0841ae42:
      cMyTrace::cMyTrace(local_80,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4d7d,0);
      cMyTrace::operator()
                (local_80,"abnormal down user by dungeon : %d DUNGEON %d",local_38,local_34);
    }
    else {
      MySQL::set_query(local_3c,
                       "upDate crash_down_by_dungeon set down_count = down_count + %d where occ_time = from_unixtime(%d) and dungeon_index = %d"
                       ,local_4c,local_34,local_38);
      local_2d = MySQL::exec(local_3c,true);
      if (local_2d == '\x01') goto LAB_0841ae42;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
  }
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_b0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_b4);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0,
                       (_Rb_tree_iterator *)local_b4);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
    local_28 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
    local_24 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_2c,
                     "inSert into crash_down_by_packet(occ_date,packet_index,down_count) values(cast(now() as date),%d,%d)"
                     ,local_28,local_24);
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e == '\x01') {
LAB_0841afd1:
      cMyTrace::cMyTrace(local_70,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4d98,0);
      cMyTrace::operator()(local_70,"abnormal down user by packet : %d PACKET %d",local_28,local_24)
      ;
    }
    else {
      MySQL::set_query(local_2c,
                       "upDate crash_down_by_packet set down_count = down_count + %d where occ_date = cast(now() as date) and packet_index = %d"
                       ,local_24,local_28);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d == '\x01') goto LAB_0841afd1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_b8);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_bc);
  do {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8,
                       (_Rb_tree_iterator *)local_bc);
    if (cVar1 == '\0') {
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
      StatisticsToObserveCrash::unlock(pSVar3);
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
      StatisticsToObserveCrash::reset(pSVar3);
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
    local_18 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
    local_14 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_1c,
                     "inSert into crash_down_by_playstatus(occ_date,play_status,down_count) values(cast(now() as date),%d,%d)"
                     ,local_18,local_14);
    local_e = MySQL::exec(local_1c,true);
    if (local_e == '\x01') {
LAB_0841b160:
      cMyTrace::cMyTrace(local_60,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4db2,0);
      cMyTrace::operator()
                (local_60,"abnormal down user by playerstatus : %d PLAYERSTATUS %d",local_18,
                 local_14);
    }
    else {
      MySQL::set_query(local_1c,
                       "upDate crash_down_by_playstatus set down_count = down_count + %d where occ_date = cast(now() as date) and play_status = %d"
                       ,local_14,local_18);
      local_d = MySQL::exec(local_1c,true);
      if (local_d == '\x01') goto LAB_0841b160;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
  } while( true );
}
```

# dispatch

`_ZN18DB_StatDungeonFail8dispatchEiiP6Stream`

`DB_StatDungeonFail::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonFail` | `0x0841b6e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b6e0  _ZN18DB_StatDungeonFail8dispatchEiiP6Stream
#           DB_StatDungeonFail::dispatch(int, int, Stream*)
# range [0x0841b6e0, 0x0841ba95]
0841b6e0 +0x000:  push   %ebp
0841b6e1 +0x001:  mov    %esp,%ebp
0841b6e3 +0x003:  sub    $0x88,%esp
0841b6e9 +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b6ee +0x00e:  mov    %eax,(%esp)
0841b6f1 +0x011:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841b6f6 +0x016:  mov    %eax,(%esp)
0841b6f9 +0x019:  call   0844d4fc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x112>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x112
0841b6fe +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b703 +0x023:  movl   $0x0,0x8(%esp)
0841b70b +0x02b:  movl   $0x4,0x4(%esp)
0841b713 +0x033:  mov    %eax,(%esp)
0841b716 +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b71b +0x03b:  mov    %eax,-0x28(%ebp)
0841b71e +0x03e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b723 +0x043:  mov    %eax,(%esp)
0841b726 +0x046:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841b72b +0x04b:  lea    0x18(%eax),%edx
0841b72e +0x04e:  lea    -0x6c(%ebp),%eax
0841b731 +0x051:  mov    %edx,0x4(%esp)
0841b735 +0x055:  mov    %eax,(%esp)
0841b738 +0x058:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0841b73d +0x05d:  sub    $0x4,%esp
0841b740 +0x060:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b745 +0x065:  mov    %eax,(%esp)
0841b748 +0x068:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841b74d +0x06d:  lea    0x18(%eax),%edx
0841b750 +0x070:  lea    -0x70(%ebp),%eax
0841b753 +0x073:  mov    %edx,0x4(%esp)
0841b757 +0x077:  mov    %eax,(%esp)
0841b75a +0x07a:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0841b75f +0x07f:  sub    $0x4,%esp
0841b762 +0x082:  jmp    0841b854 <+0x174>
0841b767 +0x087:  lea    -0x6c(%ebp),%eax
0841b76a +0x08a:  mov    %eax,(%esp)
0841b76d +0x08d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b772 +0x092:  mov    (%eax),%eax
0841b774 +0x094:  mov    %eax,-0x24(%ebp)
0841b777 +0x097:  lea    -0x6c(%ebp),%eax
0841b77a +0x09a:  mov    %eax,(%esp)
0841b77d +0x09d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b782 +0x0a2:  mov    0x4(%eax),%eax
0841b785 +0x0a5:  mov    %eax,-0x20(%ebp)
0841b788 +0x0a8:  mov    -0x20(%ebp),%eax
0841b78b +0x0ab:  mov    %eax,0xc(%esp)
0841b78f +0x0af:  mov    -0x24(%ebp),%eax
0841b792 +0x0b2:  mov    %eax,0x8(%esp)
0841b796 +0x0b6:  movl   $"inSert into dungeon_fail(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)",0x4(%esp)
0841b79e +0x0be:  mov    -0x28(%ebp),%eax
0841b7a1 +0x0c1:  mov    %eax,(%esp)
0841b7a4 +0x0c4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b7a9 +0x0c9:  movl   $0x1,0x4(%esp)
0841b7b1 +0x0d1:  mov    -0x28(%ebp),%eax
0841b7b4 +0x0d4:  mov    %eax,(%esp)
0841b7b7 +0x0d7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b7bc +0x0dc:  mov    %al,-0x1a(%ebp)
0841b7bf +0x0df:  movzbl -0x1a(%ebp),%eax
0841b7c3 +0x0e3:  xor    $0x1,%eax
0841b7c6 +0x0e6:  test   %al,%al
0841b7c8 +0x0e8:  je     0841b849 <+0x169>
0841b7ca +0x0ea:  mov    -0x24(%ebp),%eax
0841b7cd +0x0ed:  mov    %eax,0xc(%esp)
0841b7d1 +0x0f1:  mov    -0x20(%ebp),%eax
0841b7d4 +0x0f4:  mov    %eax,0x8(%esp)
0841b7d8 +0x0f8:  movl   $"upDate dungeon_fail set occ_count = occ_count + %d where occ_date = now() and lev = %d",0x4(%esp)
0841b7e0 +0x100:  mov    -0x28(%ebp),%eax
0841b7e3 +0x103:  mov    %eax,(%esp)
0841b7e6 +0x106:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b7eb +0x10b:  movl   $0x1,0x4(%esp)
0841b7f3 +0x113:  mov    -0x28(%ebp),%eax
0841b7f6 +0x116:  mov    %eax,(%esp)
0841b7f9 +0x119:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b7fe +0x11e:  mov    %al,-0x19(%ebp)
0841b801 +0x121:  movzbl -0x19(%ebp),%eax
0841b805 +0x125:  xor    $0x1,%eax
0841b808 +0x128:  test   %al,%al
0841b80a +0x12a:  je     0841b849 <+0x169>
0841b80c +0x12c:  movl   $0x5,0xc(%esp)
0841b814 +0x134:  movl   $0x4e8f,0x8(%esp)
0841b81c +0x13c:  movl   $&_ZZN18DB_StatDungeonFail8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841b824 +0x144:  lea    -0x68(%ebp),%eax
0841b827 +0x147:  mov    %eax,(%esp)
0841b82a +0x14a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841b82f +0x14f:  mov    -0x24(%ebp),%eax
0841b832 +0x152:  mov    %eax,0x8(%esp)
0841b836 +0x156:  movl   $"upDate dungeon_fail failed at %d",0x4(%esp)
0841b83e +0x15e:  lea    -0x68(%ebp),%eax
0841b841 +0x161:  mov    %eax,(%esp)
0841b844 +0x164:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841b849 +0x169:  lea    -0x6c(%ebp),%eax
0841b84c +0x16c:  mov    %eax,(%esp)
0841b84f +0x16f:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0841b854 +0x174:  lea    -0x70(%ebp),%eax
0841b857 +0x177:  mov    %eax,0x4(%esp)
0841b85b +0x17b:  lea    -0x6c(%ebp),%eax
0841b85e +0x17e:  mov    %eax,(%esp)
0841b861 +0x181:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0841b866 +0x186:  test   %al,%al
0841b868 +0x188:  jne    0841b767 <+0x87>
0841b86e +0x18e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b873 +0x193:  movl   $0x0,0x8(%esp)
0841b87b +0x19b:  movl   $0x4,0x4(%esp)
0841b883 +0x1a3:  mov    %eax,(%esp)
0841b886 +0x1a6:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b88b +0x1ab:  mov    %eax,-0x18(%ebp)
0841b88e +0x1ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b893 +0x1b3:  mov    %eax,(%esp)
0841b896 +0x1b6:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841b89b +0x1bb:  lea    0x30(%eax),%edx
0841b89e +0x1be:  lea    -0x74(%ebp),%eax
0841b8a1 +0x1c1:  mov    %edx,0x4(%esp)
0841b8a5 +0x1c5:  mov    %eax,(%esp)
0841b8a8 +0x1c8:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0841b8ad +0x1cd:  sub    $0x4,%esp
0841b8b0 +0x1d0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841b8b5 +0x1d5:  mov    %eax,(%esp)
0841b8b8 +0x1d8:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841b8bd +0x1dd:  lea    0x30(%eax),%edx
0841b8c0 +0x1e0:  lea    -0x78(%ebp),%eax
0841b8c3 +0x1e3:  mov    %edx,0x4(%esp)
0841b8c7 +0x1e7:  mov    %eax,(%esp)
0841b8ca +0x1ea:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0841b8cf +0x1ef:  sub    $0x4,%esp
0841b8d2 +0x1f2:  jmp    0841ba4b <+0x36b>
0841b8d7 +0x1f7:  lea    -0x74(%ebp),%eax
0841b8da +0x1fa:  mov    %eax,(%esp)
0841b8dd +0x1fd:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b8e2 +0x202:  mov    (%eax),%eax
0841b8e4 +0x204:  mov    %eax,-0x14(%ebp)
0841b8e7 +0x207:  lea    -0x74(%ebp),%eax
0841b8ea +0x20a:  mov    %eax,(%esp)
0841b8ed +0x20d:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0841b8f2 +0x212:  mov    0x4(%eax),%eax
0841b8f5 +0x215:  mov    %eax,-0x10(%ebp)
0841b8f8 +0x218:  mov    -0x10(%ebp),%eax
0841b8fb +0x21b:  mov    %eax,0xc(%esp)
0841b8ff +0x21f:  mov    -0x14(%ebp),%eax
0841b902 +0x222:  mov    %eax,0x8(%esp)
0841b906 +0x226:  movl   $"inSert into re_stamina_shusia(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)",0x4(%esp)
0841b90e +0x22e:  mov    -0x18(%ebp),%eax
0841b911 +0x231:  mov    %eax,(%esp)
0841b914 +0x234:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b919 +0x239:  movl   $0x1,0x4(%esp)
0841b921 +0x241:  mov    -0x18(%ebp),%eax
0841b924 +0x244:  mov    %eax,(%esp)
0841b927 +0x247:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b92c +0x24c:  mov    %al,-0xa(%ebp)
0841b92f +0x24f:  movzbl -0xa(%ebp),%eax
0841b933 +0x253:  xor    $0x1,%eax
0841b936 +0x256:  test   %al,%al
0841b938 +0x258:  je     0841b9fc <+0x31c>
0841b93e +0x25e:  movl   $0x5,0xc(%esp)
0841b946 +0x266:  movl   $0x4ea9,0x8(%esp)
0841b94e +0x26e:  movl   $&_ZZN18DB_StatDungeonFail8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841b956 +0x276:  lea    -0x58(%ebp),%eax
0841b959 +0x279:  mov    %eax,(%esp)
0841b95c +0x27c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841b961 +0x281:  mov    -0x14(%ebp),%eax
0841b964 +0x284:  mov    %eax,0x8(%esp)
0841b968 +0x288:  movl   $"inSert into re_stamina_shusia failed at %d",0x4(%esp)
0841b970 +0x290:  lea    -0x58(%ebp),%eax
0841b973 +0x293:  mov    %eax,(%esp)
0841b976 +0x296:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841b97b +0x29b:  mov    -0x14(%ebp),%eax
0841b97e +0x29e:  mov    %eax,0xc(%esp)
0841b982 +0x2a2:  mov    -0x10(%ebp),%eax
0841b985 +0x2a5:  mov    %eax,0x8(%esp)
0841b989 +0x2a9:  movl   $"upDate re_stamina_shusia set occ_count = occ_count + %d where occ_date = now() and lev = %d",0x4(%esp)
0841b991 +0x2b1:  mov    -0x18(%ebp),%eax
0841b994 +0x2b4:  mov    %eax,(%esp)
0841b997 +0x2b7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b99c +0x2bc:  movl   $0x1,0x4(%esp)
0841b9a4 +0x2c4:  mov    -0x18(%ebp),%eax
0841b9a7 +0x2c7:  mov    %eax,(%esp)
0841b9aa +0x2ca:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b9af +0x2cf:  mov    %al,-0x9(%ebp)
0841b9b2 +0x2d2:  movzbl -0x9(%ebp),%eax
0841b9b6 +0x2d6:  xor    $0x1,%eax
0841b9b9 +0x2d9:  test   %al,%al
0841b9bb +0x2db:  je     0841b9fc <+0x31c>
0841b9bd +0x2dd:  movl   $0x5,0xc(%esp)
0841b9c5 +0x2e5:  movl   $0x4eaf,0x8(%esp)
0841b9cd +0x2ed:  movl   $&_ZZN18DB_StatDungeonFail8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841b9d5 +0x2f5:  lea    -0x48(%ebp),%eax
0841b9d8 +0x2f8:  mov    %eax,(%esp)
0841b9db +0x2fb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841b9e0 +0x300:  mov    -0x14(%ebp),%eax
0841b9e3 +0x303:  mov    %eax,0x8(%esp)
0841b9e7 +0x307:  movl   $"upDate re_stamina_shusia failed at %d",0x4(%esp)
0841b9ef +0x30f:  lea    -0x48(%ebp),%eax
0841b9f2 +0x312:  mov    %eax,(%esp)
0841b9f5 +0x315:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841b9fa +0x31a:  jmp    0841ba40 <+0x360>
0841b9fc +0x31c:  movl   $0x5,0xc(%esp)
0841ba04 +0x324:  movl   $0x4eb3,0x8(%esp)
0841ba0c +0x32c:  movl   $&_ZZN18DB_StatDungeonFail8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841ba14 +0x334:  lea    -0x38(%ebp),%eax
0841ba17 +0x337:  mov    %eax,(%esp)
0841ba1a +0x33a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841ba1f +0x33f:  mov    -0x10(%ebp),%eax
0841ba22 +0x342:  mov    %eax,0xc(%esp)
0841ba26 +0x346:  mov    -0x14(%ebp),%eax
0841ba29 +0x349:  mov    %eax,0x8(%esp)
0841ba2d +0x34d:  movl   $"re_stamina_shusia : %d SHUSIA USAGE %d",0x4(%esp)
0841ba35 +0x355:  lea    -0x38(%ebp),%eax
0841ba38 +0x358:  mov    %eax,(%esp)
0841ba3b +0x35b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841ba40 +0x360:  lea    -0x74(%ebp),%eax
0841ba43 +0x363:  mov    %eax,(%esp)
0841ba46 +0x366:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0841ba4b +0x36b:  lea    -0x78(%ebp),%eax
0841ba4e +0x36e:  mov    %eax,0x4(%esp)
0841ba52 +0x372:  lea    -0x74(%ebp),%eax
0841ba55 +0x375:  mov    %eax,(%esp)
0841ba58 +0x378:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0841ba5d +0x37d:  test   %al,%al
0841ba5f +0x37f:  jne    0841b8d7 <+0x1f7>
0841ba65 +0x385:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ba6a +0x38a:  mov    %eax,(%esp)
0841ba6d +0x38d:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841ba72 +0x392:  mov    %eax,(%esp)
0841ba75 +0x395:  call   0844d510 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x126>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x126
0841ba7a +0x39a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841ba7f +0x39f:  mov    %eax,(%esp)
0841ba82 +0x3a2:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0841ba87 +0x3a7:  mov    %eax,(%esp)
0841ba8a +0x3aa:  call   0860c154 <_ZN23StatisticsShusiaService5resetEv>  ; StatisticsShusiaService::reset()
0841ba8f +0x3af:  mov    $0x1,%eax
0841ba94 +0x3b4:  leave
0841ba95 +0x3b5:  ret
```

## 反编译 C

```c
// DB_StatDungeonFail::dispatch @ 0x841b6e0

/* DB_StatDungeonFail::dispatch(int, int, Stream*) */

undefined4 DB_StatDungeonFail::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  StatisticsShusiaService *pSVar3;
  undefined4 *puVar4;
  int iVar5;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_7c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_78 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [4];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
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
  
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
  StatisticsShusiaService::lock(pSVar3);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_70);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_74);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70,
                       (_Rb_tree_iterator *)local_74);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
    local_28 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
    local_24 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_2c,
                     "inSert into dungeon_fail(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)"
                     ,local_28,local_24);
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e != '\x01') {
      MySQL::set_query(local_2c,
                       "upDate dungeon_fail set occ_count = occ_count + %d where occ_date = now() and lev = %d"
                       ,local_24,local_28);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_6c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                           0x4e8f,5);
        cMyTrace::operator()(local_6c,"upDate dungeon_fail failed at %d",local_28);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_78);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_7c);
  do {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78,
                       (_Rb_tree_iterator *)local_7c);
    if (cVar1 == '\0') {
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
      StatisticsShusiaService::unlock(pSVar3);
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
      StatisticsShusiaService::reset(pSVar3);
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
    local_18 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
    local_14 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_1c,
                     "inSert into re_stamina_shusia(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)"
                     ,local_18,local_14);
    local_e = MySQL::exec(local_1c,true);
    if (local_e == '\x01') {
LAB_0841b9fc:
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4eb3,5);
      cMyTrace::operator()(local_3c,"re_stamina_shusia : %d SHUSIA USAGE %d",local_18,local_14);
    }
    else {
      cMyTrace::cMyTrace(local_5c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4ea9,5);
      cMyTrace::operator()(local_5c,"inSert into re_stamina_shusia failed at %d",local_18);
      MySQL::set_query(local_1c,
                       "upDate re_stamina_shusia set occ_count = occ_count + %d where occ_date = now() and lev = %d"
                       ,local_14,local_18);
      local_d = MySQL::exec(local_1c,true);
      if (local_d == '\x01') goto LAB_0841b9fc;
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4eaf,5);
      cMyTrace::operator()(local_4c,"upDate re_stamina_shusia failed at %d",local_18);
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
  } while( true );
}
```

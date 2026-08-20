# updateDatabase

`_ZN16CAdvanceAltarLog14updateDatabaseEv`

`CAdvanceAltarLog::updateDatabase()`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156ed2  _ZN16CAdvanceAltarLog14updateDatabaseEv
#           CAdvanceAltarLog::updateDatabase()
# range [0x08156ed2, 0x08157297]
08156ed2 +0x000:  push   %ebp
08156ed3 +0x001:  mov    %esp,%ebp
08156ed5 +0x003:  push   %edi
08156ed6 +0x004:  push   %esi
08156ed7 +0x005:  push   %ebx
08156ed8 +0x006:  sub    $0x8c,%esp
08156ede +0x00c:  mov    0x8(%ebp),%eax
08156ee1 +0x00f:  mov    %eax,0x4(%esp)
08156ee5 +0x013:  lea    -0x4c(%ebp),%eax
08156ee8 +0x016:  mov    %eax,(%esp)
08156eeb +0x019:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08156ef0 +0x01e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08156ef5 +0x023:  movl   $0xe5,0x8(%esp)
08156efd +0x02b:  movl   $"localglobal/global_Statistics.cpp",0x4(%esp)
08156f05 +0x033:  mov    %eax,(%esp)
08156f08 +0x036:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08156f0d +0x03b:  movl   $0x1,0x8(%esp)
08156f15 +0x043:  mov    %eax,0x4(%esp)
08156f19 +0x047:  lea    -0x54(%ebp),%eax
08156f1c +0x04a:  mov    %eax,(%esp)
08156f1f +0x04d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08156f24 +0x052:  lea    -0x54(%ebp),%eax
08156f27 +0x055:  mov    %eax,(%esp)
08156f2a +0x058:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08156f2f +0x05d:  movl   $0x33b,0x4(%esp)
08156f37 +0x065:  mov    %eax,(%esp)
08156f3a +0x068:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08156f3f +0x06d:  lea    -0x54(%ebp),%eax
08156f42 +0x070:  mov    %eax,(%esp)
08156f45 +0x073:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08156f4a +0x078:  movl   $0xffffffff,0x4(%esp)
08156f52 +0x080:  mov    %eax,(%esp)
08156f55 +0x083:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08156f5a +0x088:  mov    0x8(%ebp),%eax
08156f5d +0x08b:  add    $0x18,%eax
08156f60 +0x08e:  mov    %eax,(%esp)
08156f63 +0x091:  call   081579fe <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x65d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x65d
08156f68 +0x096:  mov    %eax,-0x28(%ebp)
08156f6b +0x099:  lea    -0x54(%ebp),%eax
08156f6e +0x09c:  mov    %eax,(%esp)
08156f71 +0x09f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08156f76 +0x0a4:  mov    -0x28(%ebp),%edx
08156f79 +0x0a7:  mov    %edx,0x4(%esp)
08156f7d +0x0ab:  mov    %eax,(%esp)
08156f80 +0x0ae:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08156f85 +0x0b3:  mov    0x8(%ebp),%eax
08156f88 +0x0b6:  lea    0x18(%eax),%edx
08156f8b +0x0b9:  lea    -0x58(%ebp),%eax
08156f8e +0x0bc:  mov    %edx,0x4(%esp)
08156f92 +0x0c0:  mov    %eax,(%esp)
08156f95 +0x0c3:  call   08157a12 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x671>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x671
08156f9a +0x0c8:  sub    $0x4,%esp
08156f9d +0x0cb:  mov    0x8(%ebp),%eax
08156fa0 +0x0ce:  lea    0x18(%eax),%edx
08156fa3 +0x0d1:  lea    -0x5c(%ebp),%eax
08156fa6 +0x0d4:  mov    %edx,0x4(%esp)
08156faa +0x0d8:  mov    %eax,(%esp)
08156fad +0x0db:  call   0815774e <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x3ad>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x3ad
08156fb2 +0x0e0:  sub    $0x4,%esp
08156fb5 +0x0e3:  jmp    08157084 <+0x1b2>
08156fba +0x0e8:  lea    -0x54(%ebp),%eax
08156fbd +0x0eb:  mov    %eax,(%esp)
08156fc0 +0x0ee:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08156fc5 +0x0f3:  mov    %eax,(%esp)
08156fc8 +0x0f6:  call   08157a6a <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x6c9>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x6c9
08156fcd +0x0fb:  mov    %eax,-0x20(%ebp)
08156fd0 +0x0fe:  lea    -0x58(%ebp),%eax
08156fd3 +0x101:  mov    %eax,(%esp)
08156fd6 +0x104:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08156fdb +0x109:  add    $0x4,%eax
08156fde +0x10c:  movl   $0x10,0x8(%esp)
08156fe6 +0x114:  mov    %eax,0x4(%esp)
08156fea +0x118:  mov    -0x20(%ebp),%eax
08156fed +0x11b:  mov    %eax,(%esp)
08156ff0 +0x11e:  call   0807d8a0 <_init+0x198>
08156ff5 +0x123:  lea    -0x58(%ebp),%eax
08156ff8 +0x126:  mov    %eax,(%esp)
08156ffb +0x129:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08157000 +0x12e:  mov    0x10(%eax),%eax
08157003 +0x131:  mov    %eax,-0x74(%ebp)
08157006 +0x134:  lea    -0x58(%ebp),%eax
08157009 +0x137:  mov    %eax,(%esp)
0815700c +0x13a:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
08157011 +0x13f:  mov    0xc(%eax),%edi
08157014 +0x142:  lea    -0x58(%ebp),%eax
08157017 +0x145:  mov    %eax,(%esp)
0815701a +0x148:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
0815701f +0x14d:  mov    0x8(%eax),%esi
08157022 +0x150:  lea    -0x58(%ebp),%eax
08157025 +0x153:  mov    %eax,(%esp)
08157028 +0x156:  call   08157882 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x4e1>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x4e1
0815702d +0x15b:  mov    0x4(%eax),%ebx
08157030 +0x15e:  movl   $0x0,0xc(%esp)
08157038 +0x166:  movl   $0xf4,0x8(%esp)
08157040 +0x16e:  movl   $&_ZZN16CAdvanceAltarLog14updateDatabaseEvE19__PRETTY_FUNCTION__,0x4(%esp)
08157048 +0x176:  lea    -0x48(%ebp),%eax
0815704b +0x179:  mov    %eax,(%esp)
0815704e +0x17c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08157053 +0x181:  mov    -0x74(%ebp),%eax
08157056 +0x184:  mov    %eax,0x14(%esp)
0815705a +0x188:  mov    %edi,0x10(%esp)
0815705e +0x18c:  mov    %esi,0xc(%esp)
08157062 +0x190:  mov    %ebx,0x8(%esp)
08157066 +0x194:  movl   $"[AdvanceAltar] stageIndex:%d, enterCount:%d, successCount:%d, obtainStar:%d",0x4(%esp)
0815706e +0x19c:  lea    -0x48(%ebp),%eax
08157071 +0x19f:  mov    %eax,(%esp)
08157074 +0x1a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08157079 +0x1a7:  lea    -0x58(%ebp),%eax
0815707c +0x1aa:  mov    %eax,(%esp)
0815707f +0x1ad:  call   08157a4c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x6ab>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x6ab
08157084 +0x1b2:  lea    -0x5c(%ebp),%eax
08157087 +0x1b5:  mov    %eax,0x4(%esp)
0815708b +0x1b9:  lea    -0x58(%ebp),%eax
0815708e +0x1bc:  mov    %eax,(%esp)
08157091 +0x1bf:  call   08157a38 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x697>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x697
08157096 +0x1c4:  test   %al,%al
08157098 +0x1c6:  jne    08156fba <+0xe8>
0815709e +0x1cc:  mov    0x8(%ebp),%eax
081570a1 +0x1cf:  add    $0x18,%eax
081570a4 +0x1d2:  mov    %eax,(%esp)
081570a7 +0x1d5:  call   081576fa <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x359>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x359
081570ac +0x1da:  mov    0x8(%ebp),%eax
081570af +0x1dd:  add    $0x30,%eax
081570b2 +0x1e0:  mov    %eax,(%esp)
081570b5 +0x1e3:  call   08157a80 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x6df>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x6df
081570ba +0x1e8:  mov    %eax,-0x24(%ebp)
081570bd +0x1eb:  lea    -0x54(%ebp),%eax
081570c0 +0x1ee:  mov    %eax,(%esp)
081570c3 +0x1f1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081570c8 +0x1f6:  mov    -0x24(%ebp),%edx
081570cb +0x1f9:  mov    %edx,0x4(%esp)
081570cf +0x1fd:  mov    %eax,(%esp)
081570d2 +0x200:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081570d7 +0x205:  mov    0x8(%ebp),%eax
081570da +0x208:  lea    0x30(%eax),%edx
081570dd +0x20b:  lea    -0x60(%ebp),%eax
081570e0 +0x20e:  mov    %edx,0x4(%esp)
081570e4 +0x212:  mov    %eax,(%esp)
081570e7 +0x215:  call   08157a94 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x6f3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x6f3
081570ec +0x21a:  sub    $0x4,%esp
081570ef +0x21d:  mov    0x8(%ebp),%eax
081570f2 +0x220:  lea    0x30(%eax),%edx
081570f5 +0x223:  lea    -0x64(%ebp),%eax
081570f8 +0x226:  mov    %edx,0x4(%esp)
081570fc +0x22a:  mov    %eax,(%esp)
081570ff +0x22d:  call   081578bc <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x51b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x51b
08157104 +0x232:  sub    $0x4,%esp
08157107 +0x235:  jmp    081571fe <+0x32c>
0815710c +0x23a:  lea    -0x54(%ebp),%eax
0815710f +0x23d:  mov    %eax,(%esp)
08157112 +0x240:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08157117 +0x245:  mov    %eax,(%esp)
0815711a +0x248:  call   08157aec <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x74b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x74b
0815711f +0x24d:  mov    %eax,-0x1c(%ebp)
08157122 +0x250:  lea    -0x60(%ebp),%eax
08157125 +0x253:  mov    %eax,(%esp)
08157128 +0x256:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
0815712d +0x25b:  add    $0x8,%eax
08157130 +0x25e:  movl   $0x10,0x8(%esp)
08157138 +0x266:  mov    %eax,0x4(%esp)
0815713c +0x26a:  mov    -0x1c(%ebp),%eax
0815713f +0x26d:  mov    %eax,(%esp)
08157142 +0x270:  call   0807d8a0 <_init+0x198>
08157147 +0x275:  lea    -0x60(%ebp),%eax
0815714a +0x278:  mov    %eax,(%esp)
0815714d +0x27b:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
08157152 +0x280:  movzwl 0x14(%eax),%eax
08157156 +0x284:  movzwl %ax,%eax
08157159 +0x287:  mov    %eax,-0x70(%ebp)
0815715c +0x28a:  lea    -0x60(%ebp),%eax
0815715f +0x28d:  mov    %eax,(%esp)
08157162 +0x290:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
08157167 +0x295:  movzwl 0x12(%eax),%eax
0815716b +0x299:  movzwl %ax,%eax
0815716e +0x29c:  mov    %eax,-0x6c(%ebp)
08157171 +0x29f:  lea    -0x60(%ebp),%eax
08157174 +0x2a2:  mov    %eax,(%esp)
08157177 +0x2a5:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
0815717c +0x2aa:  movzwl 0x10(%eax),%eax
08157180 +0x2ae:  movzwl %ax,%edi
08157183 +0x2b1:  lea    -0x60(%ebp),%eax
08157186 +0x2b4:  mov    %eax,(%esp)
08157189 +0x2b7:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
0815718e +0x2bc:  mov    0xc(%eax),%esi
08157191 +0x2bf:  lea    -0x60(%ebp),%eax
08157194 +0x2c2:  mov    %eax,(%esp)
08157197 +0x2c5:  call   081579f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x64f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x64f
0815719c +0x2ca:  movzwl 0x8(%eax),%eax
081571a0 +0x2ce:  movzwl %ax,%ebx
081571a3 +0x2d1:  movl   $0x0,0xc(%esp)
081571ab +0x2d9:  movl   $0x106,0x8(%esp)
081571b3 +0x2e1:  movl   $&_ZZN16CAdvanceAltarLog14updateDatabaseEvE19__PRETTY_FUNCTION__,0x4(%esp)
081571bb +0x2e9:  lea    -0x38(%ebp),%eax
081571be +0x2ec:  mov    %eax,(%esp)
081571c1 +0x2ef:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081571c6 +0x2f4:  mov    -0x70(%ebp),%eax
081571c9 +0x2f7:  mov    %eax,0x18(%esp)
081571cd +0x2fb:  mov    -0x6c(%ebp),%eax
081571d0 +0x2fe:  mov    %eax,0x14(%esp)
081571d4 +0x302:  mov    %edi,0x10(%esp)
081571d8 +0x306:  mov    %esi,0xc(%esp)
081571dc +0x30a:  mov    %ebx,0x8(%esp)
081571e0 +0x30e:  movl   $"[AdvanceAltar] itemType:%u, itemIndex:%u, itemLevel:%u, useCount:%u, useStar:%u",0x4(%esp)
081571e8 +0x316:  lea    -0x38(%ebp),%eax
081571eb +0x319:  mov    %eax,(%esp)
081571ee +0x31c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081571f3 +0x321:  lea    -0x60(%ebp),%eax
081571f6 +0x324:  mov    %eax,(%esp)
081571f9 +0x327:  call   08157ace <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x72d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x72d
081571fe +0x32c:  lea    -0x64(%ebp),%eax
08157201 +0x32f:  mov    %eax,0x4(%esp)
08157205 +0x333:  lea    -0x60(%ebp),%eax
08157208 +0x336:  mov    %eax,(%esp)
0815720b +0x339:  call   08157aba <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x719>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x719
08157210 +0x33e:  test   %al,%al
08157212 +0x340:  jne    0815710c <+0x23a>
08157218 +0x346:  mov    0x8(%ebp),%eax
0815721b +0x349:  add    $0x30,%eax
0815721e +0x34c:  mov    %eax,(%esp)
08157221 +0x34f:  call   0815770e <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x36d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x36d
08157226 +0x354:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815722b +0x359:  lea    -0x54(%ebp),%edx
0815722e +0x35c:  mov    %edx,0x8(%esp)
08157232 +0x360:  movl   $0x4,0x4(%esp)
0815723a +0x368:  mov    %eax,(%esp)
0815723d +0x36b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08157242 +0x370:  jmp    08157259 <+0x387>
08157244 +0x372:  mov    %edx,%ebx
08157246 +0x374:  mov    %eax,%esi
08157248 +0x376:  lea    -0x54(%ebp),%eax
0815724b +0x379:  mov    %eax,(%esp)
0815724e +0x37c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08157253 +0x381:  mov    %esi,%eax
08157255 +0x383:  mov    %ebx,%edx
08157257 +0x385:  jmp    08157266 <+0x394>
08157259 +0x387:  lea    -0x54(%ebp),%eax
0815725c +0x38a:  mov    %eax,(%esp)
0815725f +0x38d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08157264 +0x392:  jmp    08157281 <+0x3af>
08157266 +0x394:  mov    %edx,%ebx
08157268 +0x396:  mov    %eax,%esi
0815726a +0x398:  lea    -0x4c(%ebp),%eax
0815726d +0x39b:  mov    %eax,(%esp)
08157270 +0x39e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08157275 +0x3a3:  mov    %esi,%eax
08157277 +0x3a5:  mov    %ebx,%edx
08157279 +0x3a7:  mov    %eax,(%esp)
0815727c +0x3aa:  call   08ae3750 <_Unwind_Resume>
08157281 +0x3af:  lea    -0x4c(%ebp),%eax
08157284 +0x3b2:  mov    %eax,(%esp)
08157287 +0x3b5:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0815728c +0x3ba:  lea    -0xc(%ebp),%esp
0815728f +0x3bd:  add    $0x0,%esp
08157292 +0x3c0:  pop    %ebx
08157293 +0x3c1:  pop    %esi
08157294 +0x3c2:  pop    %edi
08157295 +0x3c3:  pop    %ebp
08157296 +0x3c4:  ret
08157297 +0x3c5:  nop
```

## 反编译 C

```c
// CAdvanceAltarLog::updateDatabase @ 0x8156ed2

/* CAdvanceAltarLog::updateDatabase() */

void __thiscall CAdvanceAltarLog::updateDatabase(CAdvanceAltarLog *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  Stream *pSVar10;
  CStreamGuard *pCVar11;
  int iVar12;
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_68 [4];
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_64 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_60 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_5c [4];
  CStreamGuard local_58 [8];
  Guard<Mutex> local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  STAdvanceAltarEntranceData *local_24;
  STAdvanceAltarLayerStatData *local_20;
  
  Guard<Mutex>::Guard(local_50,(Mutex *)this);
                    /* try { // try from 08156f08 to 08156f0c has its CatchHandler @ 08157266 */
  pSVar10 = (Stream *)
            StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_Statistics.cpp",0xe5);
  CStreamGuard::CStreamGuard(local_58,pSVar10,true);
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 08156f3a to 08157241 has its CatchHandler @ 08157244 */
  CStreamGuard::operator<<(pCVar11,0x33b);
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,-1);
  local_2c = std::
             map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
             ::size((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                     *)(this + 0x18));
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,local_2c);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::begin(local_5c);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::end(local_60);
  while( true ) {
    cVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                        *)local_5c,(_Rb_tree_iterator *)local_60);
    if (cVar9 == '\0') break;
    pCVar11 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_24 = CStreamGuard::GetInBuffer<STAdvanceAltarEntranceData>(pCVar11);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    memcpy(local_24,(void *)(iVar12 + 4),0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar8 = *(undefined4 *)(iVar12 + 0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar5 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar6 = *(undefined4 *)(iVar12 + 8);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar7 = *(undefined4 *)(iVar12 + 4);
    cMyTrace::cMyTrace(local_4c,"void CAdvanceAltarLog::updateDatabase()",0xf4,0);
    cMyTrace::operator()
              (local_4c,
               "[AdvanceAltar] stageIndex:%d, enterCount:%d, successCount:%d, obtainStar:%d",uVar7,
               uVar6,uVar5,uVar8);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>> *)
               local_5c);
  }
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::clear((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
           *)(this + 0x18));
  local_28 = std::
             map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
             ::size((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
                     *)(this + 0x30));
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,local_28);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::begin(local_64);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::end(local_68);
  while( true ) {
    cVar9 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator!=((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *)
                       local_64,(_Rb_tree_iterator *)local_68);
    if (cVar9 == '\0') break;
    pCVar11 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_20 = CStreamGuard::GetInBuffer<STAdvanceAltarLayerStatData>(pCVar11);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    memcpy(local_20,(void *)(iVar12 + 8),0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar1 = *(ushort *)(iVar12 + 0x14);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar2 = *(ushort *)(iVar12 + 0x12);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar3 = *(ushort *)(iVar12 + 0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar8 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar4 = *(ushort *)(iVar12 + 8);
    cMyTrace::cMyTrace(local_3c,"void CAdvanceAltarLog::updateDatabase()",0x106,0);
    cMyTrace::operator()
              (local_3c,
               "[AdvanceAltar] itemType:%u, itemIndex:%u, itemLevel:%u, useCount:%u, useStar:%u",
               (uint)uVar4,uVar8,(uint)uVar3,(uint)uVar2,(uint)uVar1);
    std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::operator++
              ((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *)local_64
              );
  }
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::clear((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
           *)(this + 0x30));
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_58);
                    /* try { // try from 0815725f to 08157263 has its CatchHandler @ 08157266 */
  CStreamGuard::~CStreamGuard(local_58);
  Guard<Mutex>::~Guard(local_50);
  return;
}
```

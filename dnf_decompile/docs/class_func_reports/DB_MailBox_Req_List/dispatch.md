# dispatch

`_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream`

`DB_MailBox_Req_List::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_List` | `0x0841de4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841de4a  _ZN19DB_MailBox_Req_List8dispatchEiiP6Stream
#           DB_MailBox_Req_List::dispatch(int, int, Stream*)
# range [0x0841de4a, 0x0841f083]
0841de4a +0x0000:  push   %ebp
0841de4b +0x0001:  mov    %esp,%ebp
0841de4d +0x0003:  push   %edi
0841de4e +0x0004:  push   %esi
0841de4f +0x0005:  push   %ebx
0841de50 +0x0006:  sub    $0x463c,%esp
0841de56 +0x000c:  mov    0x8(%ebp),%eax
0841de59 +0x000f:  mov    0x14(%ebp),%edx
0841de5c +0x0012:  mov    %edx,0xc(%esp)
0841de60 +0x0016:  mov    0x10(%ebp),%edx
0841de63 +0x0019:  mov    %edx,0x8(%esp)
0841de67 +0x001d:  mov    0xc(%ebp),%edx
0841de6a +0x0020:  mov    %edx,0x4(%esp)
0841de6e +0x0024:  mov    %eax,(%esp)
0841de71 +0x0027:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0841de76 +0x002c:  xor    $0x1,%eax
0841de79 +0x002f:  test   %al,%al
0841de7b +0x0031:  je     0841de87 <+0x3d>
0841de7d +0x0033:  mov    $0x0,%ebx
0841de82 +0x0038:  jmp    0841f076 <+0x122c>
0841de87 +0x003d:  mov    0x14(%ebp),%eax
0841de8a +0x0040:  mov    %eax,(%esp)
0841de8d +0x0043:  call   084518fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4514>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4514
0841de92 +0x0048:  mov    %eax,-0x40(%ebp)
0841de95 +0x004b:  lea    -0x461e(%ebp),%eax
0841de9b +0x0051:  mov    %eax,-0x3c(%ebp)
0841de9e +0x0054:  movl   $0x338a,0x8(%esp)
0841dea6 +0x005c:  movl   $0x0,0x4(%esp)
0841deae +0x0064:  mov    -0x3c(%ebp),%eax
0841deb1 +0x0067:  mov    %eax,(%esp)
0841deb4 +0x006a:  call   0807dcc0 <_init+0x5b8>
0841deb9 +0x006f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841debe +0x0074:  movl   $0x0,0x8(%esp)
0841dec6 +0x007c:  movl   $0x3,0x4(%esp)
0841dece +0x0084:  mov    %eax,(%esp)
0841ded1 +0x0087:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841ded6 +0x008c:  mov    %eax,-0x38(%ebp)
0841ded9 +0x008f:  mov    -0x40(%ebp),%eax
0841dedc +0x0092:  mov    0x4(%eax),%eax
0841dedf +0x0095:  test   %eax,%eax
0841dee1 +0x0097:  jne    0841df33 <+0xe9>
0841dee3 +0x0099:  mov    -0x40(%ebp),%eax
0841dee6 +0x009c:  mov    (%eax),%eax
0841dee8 +0x009e:  movl   $0xf,0x10(%esp)
0841def0 +0x00a6:  mov    %eax,0xc(%esp)
0841def4 +0x00aa:  movl   $0x2,0x8(%esp)
0841defc +0x00b2:  movl   $"upDate postal set delete_flag=%d where receive_charac_no=%d and unlimit_flag=0 and occ_time<subdate(now(),interval %d day) and delete_flag=0",0x4(%esp)
0841df04 +0x00ba:  mov    -0x38(%ebp),%eax
0841df07 +0x00bd:  mov    %eax,(%esp)
0841df0a +0x00c0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841df0f +0x00c5:  movl   $0x1,0x4(%esp)
0841df17 +0x00cd:  mov    -0x38(%ebp),%eax
0841df1a +0x00d0:  mov    %eax,(%esp)
0841df1d +0x00d3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841df22 +0x00d8:  xor    $0x1,%eax
0841df25 +0x00db:  test   %al,%al
0841df27 +0x00dd:  je     0841df33 <+0xe9>
0841df29 +0x00df:  mov    $0x0,%ebx
0841df2e +0x00e4:  jmp    0841f076 <+0x122c>
0841df33 +0x00e9:  lea    -0x294(%ebp),%ebx
0841df39 +0x00ef:  mov    $0x0,%eax
0841df3e +0x00f4:  mov    $0x20,%edx
0841df43 +0x00f9:  mov    %ebx,%edi
0841df45 +0x00fb:  mov    %edx,%ecx
0841df47 +0x00fd:  rep stos %eax,%es:(%edi)
0841df49 +0x00ff:  mov    -0x40(%ebp),%eax
0841df4c +0x0102:  mov    0x4(%eax),%eax
0841df4f +0x0105:  test   %eax,%eax
0841df51 +0x0107:  je     0841df73 <+0x129>
0841df53 +0x0109:  mov    -0x40(%ebp),%eax
0841df56 +0x010c:  mov    0x4(%eax),%eax
0841df59 +0x010f:  mov    %eax,0x8(%esp)
0841df5d +0x0113:  movl   $" and postal_id > %d",0x4(%esp)
0841df65 +0x011b:  lea    -0x294(%ebp),%eax
0841df6b +0x0121:  mov    %eax,(%esp)
0841df6e +0x0124:  call   0807e440 <_init+0xd38>
0841df73 +0x0129:  mov    -0x40(%ebp),%eax
0841df76 +0x012c:  mov    (%eax),%eax
0841df78 +0x012e:  movl   $0x14,0x10(%esp)
0841df80 +0x0136:  lea    -0x294(%ebp),%edx
0841df86 +0x013c:  mov    %edx,0xc(%esp)
0841df8a +0x0140:  mov    %eax,0x8(%esp)
0841df8e +0x0144:  movl   $"seLect postal_id,unix_timestamp(occ_time),send_charac_no,seal_flag,item_id,add_info,endurance,upgrade,gold,send_charac_name,unlimit_flag,avata_flag,creature_flag,letter_id,extend_info,item_guid,amplify_option,amplify_value,random_option,seperate_upgrade,type from postal where receive_charac_no=%d and delete_flag=0 %s and (unlimit_flag=1 or occ_time>subdate(now(),interval 15 day)) order by postal_id limit %d",0x4(%esp)
0841df96 +0x014c:  mov    -0x38(%ebp),%eax
0841df99 +0x014f:  mov    %eax,(%esp)
0841df9c +0x0152:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841dfa1 +0x0157:  movl   $0x1,0x4(%esp)
0841dfa9 +0x015f:  mov    -0x38(%ebp),%eax
0841dfac +0x0162:  mov    %eax,(%esp)
0841dfaf +0x0165:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841dfb4 +0x016a:  xor    $0x1,%eax
0841dfb7 +0x016d:  test   %al,%al
0841dfb9 +0x016f:  je     0841dfc5 <+0x17b>
0841dfbb +0x0171:  mov    $0x0,%ebx
0841dfc0 +0x0176:  jmp    0841f076 <+0x122c>
0841dfc5 +0x017b:  movl   $0x0,-0x34(%ebp)
0841dfcc +0x0182:  lea    -0xa4(%ebp),%eax
0841dfd2 +0x0188:  mov    %eax,(%esp)
0841dfd5 +0x018b:  call   084501c8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dde
0841dfda +0x0190:  movl   $0x0,-0x34(%ebp)
0841dfe1 +0x0197:  jmp    0841e061 <+0x217>
0841dfe3 +0x0199:  mov    -0x34(%ebp),%edx
0841dfe6 +0x019c:  mov    -0x40(%ebp),%eax
0841dfe9 +0x019f:  add    $0x4,%edx
0841dfec +0x01a2:  mov    0x4(%eax,%edx,4),%eax
0841dff0 +0x01a6:  test   %eax,%eax
0841dff2 +0x01a8:  je     0841e05d <+0x213>
0841dff4 +0x01aa:  movl   $0x0,-0x74(%ebp)
0841dffb +0x01b1:  mov    -0x34(%ebp),%eax
0841dffe +0x01b4:  add    $0x4,%eax
0841e001 +0x01b7:  shl    $0x2,%eax
0841e004 +0x01ba:  add    -0x40(%ebp),%eax
0841e007 +0x01bd:  lea    0x4(%eax),%ecx
0841e00a +0x01c0:  lea    -0x7c(%ebp),%eax
0841e00d +0x01c3:  lea    -0x74(%ebp),%edx
0841e010 +0x01c6:  mov    %edx,0x8(%esp)
0841e014 +0x01ca:  mov    %ecx,0x4(%esp)
0841e018 +0x01ce:  mov    %eax,(%esp)
0841e01b +0x01d1:  call   082ac1f6 <_GLOBAL__I__ZN4CLog5this_E+0x861d>  ; global constructors keyed to CLog::this_+0x861d
0841e020 +0x01d6:  sub    $0x4,%esp
0841e023 +0x01d9:  lea    -0x7c(%ebp),%eax
0841e026 +0x01dc:  mov    %eax,0x4(%esp)
0841e02a +0x01e0:  lea    -0x84(%ebp),%eax
0841e030 +0x01e6:  mov    %eax,(%esp)
0841e033 +0x01e9:  call   082ac19a <_GLOBAL__I__ZN4CLog5this_E+0x85c1>  ; global constructors keyed to CLog::this_+0x85c1
0841e038 +0x01ee:  lea    -0x8c(%ebp),%eax
0841e03e +0x01f4:  lea    -0x84(%ebp),%edx
0841e044 +0x01fa:  mov    %edx,0x8(%esp)
0841e048 +0x01fe:  lea    -0xa4(%ebp),%edx
0841e04e +0x0204:  mov    %edx,0x4(%esp)
0841e052 +0x0208:  mov    %eax,(%esp)
0841e055 +0x020b:  call   082ac1ca <_GLOBAL__I__ZN4CLog5this_E+0x85f1>  ; global constructors keyed to CLog::this_+0x85f1
0841e05a +0x0210:  sub    $0x4,%esp
0841e05d +0x0213:  addl   $0x1,-0x34(%ebp)
0841e061 +0x0217:  cmpl   $0x13,-0x34(%ebp)
0841e065 +0x021b:  setbe  %al
0841e068 +0x021e:  test   %al,%al
0841e06a +0x0220:  jne    0841dfe3 <+0x199>
0841e070 +0x0226:  mov    -0x40(%ebp),%eax
0841e073 +0x0229:  mov    0x8(%eax),%eax
0841e076 +0x022c:  mov    %eax,%edx
0841e078 +0x022e:  mov    -0x3c(%ebp),%eax
0841e07b +0x0231:  mov    %edx,0x3326(%eax)
0841e081 +0x0237:  mov    -0x3c(%ebp),%eax
0841e084 +0x023a:  movl   $0x0,0x79c(%eax)
0841e08e +0x0244:  mov    -0x38(%ebp),%eax
0841e091 +0x0247:  mov    %eax,(%esp)
0841e094 +0x024a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841e099 +0x024f:  mov    %eax,-0x70(%ebp)
0841e09c +0x0252:  mov    -0x40(%ebp),%eax
0841e09f +0x0255:  mov    0x8(%eax),%eax
0841e0a2 +0x0258:  mov    %eax,-0x6c(%ebp)
0841e0a5 +0x025b:  lea    -0x70(%ebp),%eax
0841e0a8 +0x025e:  mov    %eax,0x4(%esp)
0841e0ac +0x0262:  lea    -0x6c(%ebp),%eax
0841e0af +0x0265:  mov    %eax,(%esp)
0841e0b2 +0x0268:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0841e0b7 +0x026d:  mov    (%eax),%edx
0841e0b9 +0x026f:  mov    -0x3c(%ebp),%eax
0841e0bc +0x0272:  mov    %edx,0x794(%eax)
0841e0c2 +0x0278:  mov    -0x3c(%ebp),%eax
0841e0c5 +0x027b:  movl   $0x0,0x798(%eax)
0841e0cf +0x0285:  mov    -0x3c(%ebp),%eax
0841e0d2 +0x0288:  mov    0x794(%eax),%edx
0841e0d8 +0x028e:  mov    -0x40(%ebp),%eax
0841e0db +0x0291:  mov    0x8(%eax),%eax
0841e0de +0x0294:  cmp    %eax,%edx
0841e0e0 +0x0296:  jl     0841e103 <+0x2b9>
0841e0e2 +0x0298:  mov    -0x38(%ebp),%eax
0841e0e5 +0x029b:  mov    %eax,(%esp)
0841e0e8 +0x029e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841e0ed +0x02a3:  mov    -0x3c(%ebp),%edx
0841e0f0 +0x02a6:  mov    0x794(%edx),%edx
0841e0f6 +0x02ac:  sub    %edx,%eax
0841e0f8 +0x02ae:  mov    %eax,%edx
0841e0fa +0x02b0:  mov    -0x3c(%ebp),%eax
0841e0fd +0x02b3:  mov    %edx,0x798(%eax)
0841e103 +0x02b9:  lea    -0x1c0(%ebp),%ebx
0841e109 +0x02bf:  mov    $0x0,%eax
0841e10e +0x02c4:  mov    $0x15,%edx
0841e113 +0x02c9:  mov    %ebx,%edi
0841e115 +0x02cb:  mov    %edx,%ecx
0841e117 +0x02cd:  rep stos %eax,%es:(%edi)
0841e119 +0x02cf:  lea    -0x214(%ebp),%ebx
0841e11f +0x02d5:  mov    $0x0,%eax
0841e124 +0x02da:  mov    $0x15,%edx
0841e129 +0x02df:  mov    %ebx,%edi
0841e12b +0x02e1:  mov    %edx,%ecx
0841e12d +0x02e3:  rep stos %eax,%es:(%edi)
0841e12f +0x02e5:  movl   $0x0,-0x30(%ebp)
0841e136 +0x02ec:  movl   $0x0,-0x28(%ebp)
0841e13d +0x02f3:  jmp    0841e8e7 <+0xa9d>
0841e142 +0x02f8:  mov    -0x38(%ebp),%eax
0841e145 +0x02fb:  mov    %eax,(%esp)
0841e148 +0x02fe:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841e14d +0x0303:  xor    $0x1,%eax
0841e150 +0x0306:  test   %al,%al
0841e152 +0x0308:  je     0841e15e <+0x314>
0841e154 +0x030a:  mov    $0x0,%ebx
0841e159 +0x030f:  jmp    0841f068 <+0x121e>
0841e15e +0x0314:  movl   $0x0,-0xf0(%ebp)
0841e168 +0x031e:  movl   $0x0,-0xf4(%ebp)
0841e172 +0x0328:  lea    -0x102(%ebp),%eax
0841e178 +0x032e:  mov    %eax,(%esp)
0841e17b +0x0331:  call   080cb2d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x125>  ; global constructors keyed to BingoEvent::BingoEvent()+0x125
0841e180 +0x0336:  lea    -0xb0(%ebp),%eax
0841e186 +0x033c:  mov    %eax,0x8(%esp)
0841e18a +0x0340:  movl   $0x0,0x4(%esp)
0841e192 +0x0348:  mov    -0x38(%ebp),%eax
0841e195 +0x034b:  mov    %eax,(%esp)
0841e198 +0x034e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841e19d +0x0353:  xor    $0x1,%eax
0841e1a0 +0x0356:  test   %al,%al
0841e1a2 +0x0358:  jne    0841e8a0 <+0xa56>
0841e1a8 +0x035e:  lea    -0xb4(%ebp),%eax
0841e1ae +0x0364:  mov    %eax,0x8(%esp)
0841e1b2 +0x0368:  movl   $0x1,0x4(%esp)
0841e1ba +0x0370:  mov    -0x38(%ebp),%eax
0841e1bd +0x0373:  mov    %eax,(%esp)
0841e1c0 +0x0376:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841e1c5 +0x037b:  xor    $0x1,%eax
0841e1c8 +0x037e:  test   %al,%al
0841e1ca +0x0380:  jne    0841e8a3 <+0xa59>
0841e1d0 +0x0386:  lea    -0xb8(%ebp),%eax
0841e1d6 +0x038c:  mov    %eax,0x8(%esp)
0841e1da +0x0390:  movl   $0x2,0x4(%esp)
0841e1e2 +0x0398:  mov    -0x38(%ebp),%eax
0841e1e5 +0x039b:  mov    %eax,(%esp)
0841e1e8 +0x039e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841e1ed +0x03a3:  xor    $0x1,%eax
0841e1f0 +0x03a6:  test   %al,%al
0841e1f2 +0x03a8:  jne    0841e8a6 <+0xa5c>
0841e1f8 +0x03ae:  lea    -0xcc(%ebp),%eax
0841e1fe +0x03b4:  mov    %eax,0x8(%esp)
0841e202 +0x03b8:  movl   $0x3,0x4(%esp)
0841e20a +0x03c0:  mov    -0x38(%ebp),%eax
0841e20d +0x03c3:  mov    %eax,(%esp)
0841e210 +0x03c6:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841e215 +0x03cb:  xor    $0x1,%eax
0841e218 +0x03ce:  test   %al,%al
0841e21a +0x03d0:  jne    0841e8a9 <+0xa5f>
0841e220 +0x03d6:  lea    -0xc4(%ebp),%eax
0841e226 +0x03dc:  mov    %eax,0x8(%esp)
0841e22a +0x03e0:  movl   $0x4,0x4(%esp)
0841e232 +0x03e8:  mov    -0x38(%ebp),%eax
0841e235 +0x03eb:  mov    %eax,(%esp)
0841e238 +0x03ee:  call   0844d66a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x280>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x280
0841e23d +0x03f3:  xor    $0x1,%eax
0841e240 +0x03f6:  test   %al,%al
0841e242 +0x03f8:  jne    0841e8ac <+0xa62>
0841e248 +0x03fe:  lea    -0xbc(%ebp),%eax
0841e24e +0x0404:  mov    %eax,0x8(%esp)
0841e252 +0x0408:  movl   $0x5,0x4(%esp)
0841e25a +0x0410:  mov    -0x38(%ebp),%eax
0841e25d +0x0413:  mov    %eax,(%esp)
0841e260 +0x0416:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841e265 +0x041b:  xor    $0x1,%eax
0841e268 +0x041e:  test   %al,%al
0841e26a +0x0420:  jne    0841e8af <+0xa65>
0841e270 +0x0426:  lea    -0xc6(%ebp),%eax
0841e276 +0x042c:  mov    %eax,0x8(%esp)
0841e27a +0x0430:  movl   $0x6,0x4(%esp)
0841e282 +0x0438:  mov    -0x38(%ebp),%eax
0841e285 +0x043b:  mov    %eax,(%esp)
0841e288 +0x043e:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841e28d +0x0443:  xor    $0x1,%eax
0841e290 +0x0446:  test   %al,%al
0841e292 +0x0448:  jne    0841e8b2 <+0xa68>
0841e298 +0x044e:  lea    -0xcf(%ebp),%eax
0841e29e +0x0454:  mov    %eax,0x8(%esp)
0841e2a2 +0x0458:  movl   $0x7,0x4(%esp)
0841e2aa +0x0460:  mov    -0x38(%ebp),%eax
0841e2ad +0x0463:  mov    %eax,(%esp)
0841e2b0 +0x0466:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0841e2b5 +0x046b:  xor    $0x1,%eax
0841e2b8 +0x046e:  test   %al,%al
0841e2ba +0x0470:  jne    0841e8b5 <+0xa6b>
0841e2c0 +0x0476:  lea    -0xc0(%ebp),%eax
0841e2c6 +0x047c:  mov    %eax,0x8(%esp)
0841e2ca +0x0480:  movl   $0x8,0x4(%esp)
0841e2d2 +0x0488:  mov    -0x38(%ebp),%eax
0841e2d5 +0x048b:  mov    %eax,(%esp)
0841e2d8 +0x048e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841e2dd +0x0493:  xor    $0x1,%eax
0841e2e0 +0x0496:  test   %al,%al
0841e2e2 +0x0498:  jne    0841e8b8 <+0xa6e>
0841e2e8 +0x049e:  movl   $0x1d,0xc(%esp)
0841e2f0 +0x04a6:  lea    -0xec(%ebp),%eax
0841e2f6 +0x04ac:  mov    %eax,0x8(%esp)
0841e2fa +0x04b0:  movl   $0x9,0x4(%esp)
0841e302 +0x04b8:  mov    -0x38(%ebp),%eax
0841e305 +0x04bb:  mov    %eax,(%esp)
0841e308 +0x04be:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0841e30d +0x04c3:  xor    $0x1,%eax
0841e310 +0x04c6:  test   %al,%al
0841e312 +0x04c8:  jne    0841e8bb <+0xa71>
0841e318 +0x04ce:  lea    -0xc8(%ebp),%eax
0841e31e +0x04d4:  mov    %eax,0x8(%esp)
0841e322 +0x04d8:  movl   $0xa,0x4(%esp)
0841e32a +0x04e0:  mov    -0x38(%ebp),%eax
0841e32d +0x04e3:  mov    %eax,(%esp)
0841e330 +0x04e6:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841e335 +0x04eb:  xor    $0x1,%eax
0841e338 +0x04ee:  test   %al,%al
0841e33a +0x04f0:  jne    0841e8be <+0xa74>
0841e340 +0x04f6:  lea    -0xca(%ebp),%eax
0841e346 +0x04fc:  mov    %eax,0x8(%esp)
0841e34a +0x0500:  movl   $0xb,0x4(%esp)
0841e352 +0x0508:  mov    -0x38(%ebp),%eax
0841e355 +0x050b:  mov    %eax,(%esp)
0841e358 +0x050e:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841e35d +0x0513:  xor    $0x1,%eax
0841e360 +0x0516:  test   %al,%al
0841e362 +0x0518:  jne    0841e8c1 <+0xa77>
0841e368 +0x051e:  lea    -0xce(%ebp),%eax
0841e36e +0x0524:  mov    %eax,0x8(%esp)
0841e372 +0x0528:  movl   $0xc,0x4(%esp)
0841e37a +0x0530:  mov    -0x38(%ebp),%eax
0841e37d +0x0533:  mov    %eax,(%esp)
0841e380 +0x0536:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841e385 +0x053b:  xor    $0x1,%eax
0841e388 +0x053e:  test   %al,%al
0841e38a +0x0540:  jne    0841e8c4 <+0xa7a>
0841e390 +0x0546:  movzwl -0xca(%ebp),%eax
0841e397 +0x054d:  cmp    $0x1,%ax
0841e39b +0x0551:  jne    0841e3ae <+0x564>
0841e39d +0x0553:  movzwl -0xce(%ebp),%eax
0841e3a4 +0x055a:  cmp    $0x1,%ax
0841e3a8 +0x055e:  je     0841e8c7 <+0xa7d>
0841e3ae +0x0564:  movl   $0xd,-0x24(%ebp)
0841e3b5 +0x056b:  mov    -0x24(%ebp),%eax
0841e3b8 +0x056e:  addl   $0x1,-0x24(%ebp)
0841e3bc +0x0572:  lea    -0x108(%ebp),%edx
0841e3c2 +0x0578:  mov    %edx,0x8(%esp)
0841e3c6 +0x057c:  mov    %eax,0x4(%esp)
0841e3ca +0x0580:  mov    -0x38(%ebp),%eax
0841e3cd +0x0583:  mov    %eax,(%esp)
0841e3d0 +0x0586:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841e3d5 +0x058b:  xor    $0x1,%eax
0841e3d8 +0x058e:  test   %al,%al
0841e3da +0x0590:  jne    0841e8ca <+0xa80>
0841e3e0 +0x0596:  mov    -0xc4(%ebp),%eax
0841e3e6 +0x059c:  test   %eax,%eax
0841e3e8 +0x059e:  jne    0841e3f8 <+0x5ae>
0841e3ea +0x05a0:  mov    -0xc0(%ebp),%eax
0841e3f0 +0x05a6:  test   %eax,%eax
0841e3f2 +0x05a8:  je     0841e8cd <+0xa83>
0841e3f8 +0x05ae:  movl   $0x0,-0x10c(%ebp)
0841e402 +0x05b8:  mov    -0x24(%ebp),%eax
0841e405 +0x05bb:  addl   $0x1,-0x24(%ebp)
0841e409 +0x05bf:  lea    -0x10c(%ebp),%edx
0841e40f +0x05c5:  mov    %edx,0x8(%esp)
0841e413 +0x05c9:  mov    %eax,0x4(%esp)
0841e417 +0x05cd:  mov    -0x38(%ebp),%eax
0841e41a +0x05d0:  mov    %eax,(%esp)
0841e41d +0x05d3:  call   0844d66a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x280>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x280
0841e422 +0x05d8:  xor    $0x1,%eax
0841e425 +0x05db:  test   %al,%al
0841e427 +0x05dd:  jne    0841e8d0 <+0xa86>
0841e42d +0x05e3:  mov    -0x24(%ebp),%eax
0841e430 +0x05e6:  addl   $0x1,-0x24(%ebp)
0841e434 +0x05ea:  movl   $0xa,0xc(%esp)
0841e43c +0x05f2:  lea    -0x116(%ebp),%edx
0841e442 +0x05f8:  mov    %edx,0x8(%esp)
0841e446 +0x05fc:  mov    %eax,0x4(%esp)
0841e44a +0x0600:  mov    -0x38(%ebp),%eax
0841e44d +0x0603:  mov    %eax,(%esp)
0841e450 +0x0606:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0841e455 +0x060b:  xor    $0x1,%eax
0841e458 +0x060e:  test   %al,%al
0841e45a +0x0610:  jne    0841e8d3 <+0xa89>
0841e460 +0x0616:  mov    -0x24(%ebp),%eax
0841e463 +0x0619:  addl   $0x1,-0x24(%ebp)
0841e467 +0x061d:  lea    -0xf0(%ebp),%edx
0841e46d +0x0623:  mov    %edx,0x8(%esp)
0841e471 +0x0627:  mov    %eax,0x4(%esp)
0841e475 +0x062b:  mov    -0x38(%ebp),%eax
0841e478 +0x062e:  mov    %eax,(%esp)
0841e47b +0x0631:  call   0844d73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x350
0841e480 +0x0636:  xor    $0x1,%eax
0841e483 +0x0639:  test   %al,%al
0841e485 +0x063b:  jne    0841e8d6 <+0xa8c>
0841e48b +0x0641:  mov    -0x24(%ebp),%eax
0841e48e +0x0644:  addl   $0x1,-0x24(%ebp)
0841e492 +0x0648:  lea    -0xf4(%ebp),%edx
0841e498 +0x064e:  mov    %edx,0x8(%esp)
0841e49c +0x0652:  mov    %eax,0x4(%esp)
0841e4a0 +0x0656:  mov    -0x38(%ebp),%eax
0841e4a3 +0x0659:  mov    %eax,(%esp)
0841e4a6 +0x065c:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
0841e4ab +0x0661:  xor    $0x1,%eax
0841e4ae +0x0664:  test   %al,%al
0841e4b0 +0x0666:  jne    0841e8d9 <+0xa8f>
0841e4b6 +0x066c:  mov    -0x24(%ebp),%eax
0841e4b9 +0x066f:  addl   $0x1,-0x24(%ebp)
0841e4bd +0x0673:  movl   $0xe,0xc(%esp)
0841e4c5 +0x067b:  lea    -0x102(%ebp),%edx
0841e4cb +0x0681:  mov    %edx,0x8(%esp)
0841e4cf +0x0685:  mov    %eax,0x4(%esp)
0841e4d3 +0x0689:  mov    -0x38(%ebp),%eax
0841e4d6 +0x068c:  mov    %eax,(%esp)
0841e4d9 +0x068f:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0841e4de +0x0694:  xor    $0x1,%eax
0841e4e1 +0x0697:  test   %al,%al
0841e4e3 +0x0699:  jne    0841e8dc <+0xa92>
0841e4e9 +0x069f:  movb   $0x0,-0x117(%ebp)
0841e4f0 +0x06a6:  mov    -0x24(%ebp),%eax
0841e4f3 +0x06a9:  addl   $0x1,-0x24(%ebp)
0841e4f7 +0x06ad:  lea    -0x117(%ebp),%edx
0841e4fd +0x06b3:  mov    %edx,0x8(%esp)
0841e501 +0x06b7:  mov    %eax,0x4(%esp)
0841e505 +0x06bb:  mov    -0x38(%ebp),%eax
0841e508 +0x06be:  mov    %eax,(%esp)
0841e50b +0x06c1:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0841e510 +0x06c6:  xor    $0x1,%eax
0841e513 +0x06c9:  test   %al,%al
0841e515 +0x06cb:  jne    0841e8df <+0xa95>
0841e51b +0x06d1:  movb   $0x0,-0x118(%ebp)
0841e522 +0x06d8:  mov    -0x24(%ebp),%eax
0841e525 +0x06db:  addl   $0x1,-0x24(%ebp)
0841e529 +0x06df:  lea    -0x118(%ebp),%edx
0841e52f +0x06e5:  mov    %edx,0x8(%esp)
0841e533 +0x06e9:  mov    %eax,0x4(%esp)
0841e537 +0x06ed:  mov    -0x38(%ebp),%eax
0841e53a +0x06f0:  mov    %eax,(%esp)
0841e53d +0x06f3:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0841e542 +0x06f8:  xor    $0x1,%eax
0841e545 +0x06fb:  test   %al,%al
0841e547 +0x06fd:  jne    0841e8e2 <+0xa98>
0841e54d +0x0703:  mov    -0x108(%ebp),%eax
0841e553 +0x0709:  test   %eax,%eax
0841e555 +0x070b:  je     0841e5ae <+0x764>
0841e557 +0x070d:  movl   $0x0,-0x50(%ebp)
0841e55e +0x0714:  lea    -0x58(%ebp),%eax
0841e561 +0x0717:  lea    -0x50(%ebp),%edx
0841e564 +0x071a:  mov    %edx,0x8(%esp)
0841e568 +0x071e:  lea    -0x108(%ebp),%edx
0841e56e +0x0724:  mov    %edx,0x4(%esp)
0841e572 +0x0728:  mov    %eax,(%esp)
0841e575 +0x072b:  call   082ac1f6 <_GLOBAL__I__ZN4CLog5this_E+0x861d>  ; global constructors keyed to CLog::this_+0x861d
0841e57a +0x0730:  sub    $0x4,%esp
0841e57d +0x0733:  lea    -0x58(%ebp),%eax
0841e580 +0x0736:  mov    %eax,0x4(%esp)
0841e584 +0x073a:  lea    -0x60(%ebp),%eax
0841e587 +0x073d:  mov    %eax,(%esp)
0841e58a +0x0740:  call   082ac19a <_GLOBAL__I__ZN4CLog5this_E+0x85c1>  ; global constructors keyed to CLog::this_+0x85c1
0841e58f +0x0745:  lea    -0x68(%ebp),%eax
0841e592 +0x0748:  lea    -0x60(%ebp),%edx
0841e595 +0x074b:  mov    %edx,0x8(%esp)
0841e599 +0x074f:  lea    -0xa4(%ebp),%edx
0841e59f +0x0755:  mov    %edx,0x4(%esp)
0841e5a3 +0x0759:  mov    %eax,(%esp)
0841e5a6 +0x075c:  call   082ac1ca <_GLOBAL__I__ZN4CLog5this_E+0x85f1>  ; global constructors keyed to CLog::this_+0x85f1
0841e5ab +0x0761:  sub    $0x4,%esp
0841e5ae +0x0764:  mov    -0x30(%ebp),%edx
0841e5b1 +0x0767:  mov    -0xb0(%ebp),%eax
0841e5b7 +0x076d:  mov    %eax,%ecx
0841e5b9 +0x076f:  mov    -0x3c(%ebp),%eax
0841e5bc +0x0772:  imul   $0x61,%edx,%edx
0841e5bf +0x0775:  mov    %ecx,(%edx,%eax,1)
0841e5c2 +0x0778:  mov    -0x30(%ebp),%eax
0841e5c5 +0x077b:  mov    -0xb4(%ebp),%edx
0841e5cb +0x0781:  add    $0x13c680,%edx
0841e5d1 +0x0787:  mov    -0x3c(%ebp),%ecx
0841e5d4 +0x078a:  imul   $0x61,%eax,%eax
0841e5d7 +0x078d:  lea    (%ecx,%eax,1),%eax
0841e5da +0x0790:  add    $0x50,%eax
0841e5dd +0x0793:  mov    %edx,0x5(%eax)
0841e5e0 +0x0796:  mov    -0x30(%ebp),%edx
0841e5e3 +0x0799:  mov    -0xb8(%ebp),%eax
0841e5e9 +0x079f:  mov    %eax,%ecx
0841e5eb +0x07a1:  mov    -0x3c(%ebp),%eax
0841e5ee +0x07a4:  imul   $0x61,%edx,%edx
0841e5f1 +0x07a7:  mov    %ecx,0x4(%edx,%eax,1)
0841e5f5 +0x07ab:  mov    -0x30(%ebp),%eax
0841e5f8 +0x07ae:  movzwl -0xcc(%ebp),%edx
0841e5ff +0x07b5:  cmp    $0x1,%dx
0841e603 +0x07b9:  sete   %dl
0841e606 +0x07bc:  mov    -0x3c(%ebp),%ecx
0841e609 +0x07bf:  imul   $0x61,%eax,%eax
0841e60c +0x07c2:  lea    (%ecx,%eax,1),%eax
0841e60f +0x07c5:  add    $0x29,%eax
0841e612 +0x07c8:  mov    %dl,(%eax)
0841e614 +0x07ca:  mov    -0x30(%ebp),%edx
0841e617 +0x07cd:  mov    -0xc4(%ebp),%eax
0841e61d +0x07d3:  mov    -0x3c(%ebp),%ecx
0841e620 +0x07d6:  imul   $0x61,%edx,%edx
0841e623 +0x07d9:  lea    (%ecx,%edx,1),%edx
0841e626 +0x07dc:  add    $0x20,%edx
0841e629 +0x07df:  mov    %eax,0xa(%edx)
0841e62c +0x07e2:  mov    -0x30(%ebp),%edx
0841e62f +0x07e5:  mov    -0xbc(%ebp),%eax
0841e635 +0x07eb:  mov    -0x3c(%ebp),%ecx
0841e638 +0x07ee:  imul   $0x61,%edx,%edx
0841e63b +0x07f1:  lea    (%ecx,%edx,1),%edx
0841e63e +0x07f4:  add    $0x20,%edx
0841e641 +0x07f7:  mov    %eax,0xe(%edx)
0841e644 +0x07fa:  mov    -0x30(%ebp),%edx
0841e647 +0x07fd:  movzwl -0xc6(%ebp),%eax
0841e64e +0x0804:  mov    -0x3c(%ebp),%ecx
0841e651 +0x0807:  imul   $0x61,%edx,%edx
0841e654 +0x080a:  lea    (%ecx,%edx,1),%edx
0841e657 +0x080d:  add    $0x20,%edx
0841e65a +0x0810:  mov    %ax,0x13(%edx)
0841e65e +0x0814:  mov    -0x30(%ebp),%edx
0841e661 +0x0817:  movzbl -0xcf(%ebp),%eax
0841e668 +0x081e:  mov    -0x3c(%ebp),%ecx
0841e66b +0x0821:  imul   $0x61,%edx,%edx
0841e66e +0x0824:  lea    (%ecx,%edx,1),%edx
0841e671 +0x0827:  add    $0x32,%edx
0841e674 +0x082a:  mov    %al,(%edx)
0841e676 +0x082c:  mov    -0x30(%ebp),%edx
0841e679 +0x082f:  mov    -0x10c(%ebp),%eax
0841e67f +0x0835:  mov    -0x3c(%ebp),%ecx
0841e682 +0x0838:  imul   $0x61,%edx,%edx
0841e685 +0x083b:  lea    (%ecx,%edx,1),%edx
0841e688 +0x083e:  add    $0x20,%edx
0841e68b +0x0841:  mov    %eax,0x15(%edx)
0841e68e +0x0844:  mov    -0x30(%ebp),%eax
0841e691 +0x0847:  mov    -0x3c(%ebp),%edx
0841e694 +0x084a:  imul   $0x61,%eax,%eax
0841e697 +0x084d:  lea    (%edx,%eax,1),%eax
0841e69a +0x0850:  add    $0x30,%eax
0841e69d +0x0853:  mov    -0x116(%ebp),%edx
0841e6a3 +0x0859:  mov    %edx,0x9(%eax)
0841e6a6 +0x085c:  mov    -0x112(%ebp),%edx
0841e6ac +0x0862:  mov    %edx,0xd(%eax)
0841e6af +0x0865:  movzwl -0x10e(%ebp),%edx
0841e6b6 +0x086c:  mov    %dx,0x11(%eax)
0841e6ba +0x0870:  mov    -0x30(%ebp),%edx
0841e6bd +0x0873:  mov    -0xc0(%ebp),%eax
0841e6c3 +0x0879:  mov    -0x3c(%ebp),%ecx
0841e6c6 +0x087c:  imul   $0x61,%edx,%edx
0841e6c9 +0x087f:  lea    (%ecx,%edx,1),%edx
0841e6cc +0x0882:  add    $0x20,%edx
0841e6cf +0x0885:  mov    %eax,0x5(%edx)
0841e6d2 +0x0888:  mov    -0x30(%ebp),%eax
0841e6d5 +0x088b:  movzwl -0xc8(%ebp),%edx
0841e6dc +0x0892:  cmp    $0x1,%dx
0841e6e0 +0x0896:  sete   %dl
0841e6e3 +0x0899:  mov    -0x3c(%ebp),%ecx
0841e6e6 +0x089c:  imul   $0x61,%eax,%eax
0841e6e9 +0x089f:  lea    (%ecx,%eax,1),%eax
0841e6ec +0x08a2:  add    $0x5b,%eax
0841e6ef +0x08a5:  mov    %dl,(%eax)
0841e6f1 +0x08a7:  movzwl -0xca(%ebp),%eax
0841e6f8 +0x08ae:  cmp    $0x1,%ax
0841e6fc +0x08b2:  jne    0841e734 <+0x8ea>
0841e6fe +0x08b4:  mov    -0x30(%ebp),%eax
0841e701 +0x08b7:  mov    -0x3c(%ebp),%edx
0841e704 +0x08ba:  imul   $0x61,%eax,%eax
0841e707 +0x08bd:  lea    (%edx,%eax,1),%eax
0841e70a +0x08c0:  add    $0x59,%eax
0841e70d +0x08c3:  movb   $0x1,(%eax)
0841e710 +0x08c6:  mov    -0x1c0(%ebp),%eax
0841e716 +0x08cc:  add    $0x1,%eax
0841e719 +0x08cf:  mov    %eax,-0x1c0(%ebp)
0841e71f +0x08d5:  mov    -0x1c0(%ebp),%eax
0841e725 +0x08db:  mov    -0xbc(%ebp),%edx
0841e72b +0x08e1:  mov    %edx,-0x1c0(%ebp,%eax,4)
0841e732 +0x08e8:  jmp    0841e746 <+0x8fc>
0841e734 +0x08ea:  mov    -0x30(%ebp),%eax
0841e737 +0x08ed:  mov    -0x3c(%ebp),%edx
0841e73a +0x08f0:  imul   $0x61,%eax,%eax
0841e73d +0x08f3:  lea    (%edx,%eax,1),%eax
0841e740 +0x08f6:  add    $0x59,%eax
0841e743 +0x08f9:  movb   $0x0,(%eax)
0841e746 +0x08fc:  movzwl -0xce(%ebp),%eax
0841e74d +0x0903:  cmp    $0x1,%ax
0841e751 +0x0907:  jne    0841e789 <+0x93f>
0841e753 +0x0909:  mov    -0x30(%ebp),%eax
0841e756 +0x090c:  mov    -0x3c(%ebp),%edx
0841e759 +0x090f:  imul   $0x61,%eax,%eax
0841e75c +0x0912:  lea    (%edx,%eax,1),%eax
0841e75f +0x0915:  add    $0x5a,%eax
0841e762 +0x0918:  movb   $0x1,(%eax)
0841e765 +0x091b:  mov    -0x214(%ebp),%eax
0841e76b +0x0921:  add    $0x1,%eax
0841e76e +0x0924:  mov    %eax,-0x214(%ebp)
0841e774 +0x092a:  mov    -0x214(%ebp),%eax
0841e77a +0x0930:  mov    -0xbc(%ebp),%edx
0841e780 +0x0936:  mov    %edx,-0x214(%ebp,%eax,4)
0841e787 +0x093d:  jmp    0841e79b <+0x951>
0841e789 +0x093f:  mov    -0x30(%ebp),%eax
0841e78c +0x0942:  mov    -0x3c(%ebp),%edx
0841e78f +0x0945:  imul   $0x61,%eax,%eax
0841e792 +0x0948:  lea    (%edx,%eax,1),%eax
0841e795 +0x094b:  add    $0x5a,%eax
0841e798 +0x094e:  movb   $0x0,(%eax)
0841e79b +0x0951:  mov    -0x30(%ebp),%edx
0841e79e +0x0954:  mov    -0x108(%ebp),%eax
0841e7a4 +0x095a:  mov    -0x3c(%ebp),%ecx
0841e7a7 +0x095d:  imul   $0x61,%edx,%edx
0841e7aa +0x0960:  lea    (%ecx,%edx,1),%edx
0841e7ad +0x0963:  add    $0x50,%edx
0841e7b0 +0x0966:  mov    %eax,0xc(%edx)
0841e7b3 +0x0969:  mov    -0x30(%ebp),%edx
0841e7b6 +0x096c:  mov    -0xf0(%ebp),%eax
0841e7bc +0x0972:  mov    -0x3c(%ebp),%ecx
0841e7bf +0x0975:  imul   $0x61,%edx,%edx
0841e7c2 +0x0978:  lea    (%ecx,%edx,1),%edx
0841e7c5 +0x097b:  add    $0x43,%edx
0841e7c8 +0x097e:  mov    %al,(%edx)
0841e7ca +0x0980:  mov    -0x30(%ebp),%edx
0841e7cd +0x0983:  mov    -0xf4(%ebp),%eax
0841e7d3 +0x0989:  mov    -0x3c(%ebp),%ecx
0841e7d6 +0x098c:  imul   $0x61,%edx,%edx
0841e7d9 +0x098f:  lea    (%ecx,%edx,1),%edx
0841e7dc +0x0992:  add    $0x30,%edx
0841e7df +0x0995:  mov    %ax,0x14(%edx)
0841e7e3 +0x0999:  mov    -0x30(%ebp),%edx
0841e7e6 +0x099c:  movzbl -0x118(%ebp),%eax
0841e7ed +0x09a3:  mov    -0x3c(%ebp),%ecx
0841e7f0 +0x09a6:  imul   $0x61,%edx,%edx
0841e7f3 +0x09a9:  lea    (%ecx,%edx,1),%edx
0841e7f6 +0x09ac:  add    $0x60,%edx
0841e7f9 +0x09af:  mov    %al,(%edx)
0841e7fb +0x09b1:  mov    -0x30(%ebp),%eax
0841e7fe +0x09b4:  mov    -0x3c(%ebp),%edx
0841e801 +0x09b7:  imul   $0x61,%eax,%eax
0841e804 +0x09ba:  lea    (%edx,%eax,1),%eax
0841e807 +0x09bd:  add    $0x30,%eax
0841e80a +0x09c0:  mov    -0x102(%ebp),%edx
0841e810 +0x09c6:  mov    %edx,0x16(%eax)
0841e813 +0x09c9:  mov    -0xfe(%ebp),%edx
0841e819 +0x09cf:  mov    %edx,0x1a(%eax)
0841e81c +0x09d2:  mov    -0xfa(%ebp),%edx
0841e822 +0x09d8:  mov    %edx,0x1e(%eax)
0841e825 +0x09db:  movzwl -0xf6(%ebp),%edx
0841e82c +0x09e2:  mov    %dx,0x22(%eax)
0841e830 +0x09e6:  mov    -0x30(%ebp),%edx
0841e833 +0x09e9:  movzbl -0x117(%ebp),%eax
0841e83a +0x09f0:  mov    -0x3c(%ebp),%ecx
0841e83d +0x09f3:  imul   $0x61,%edx,%edx
0841e840 +0x09f6:  lea    (%ecx,%edx,1),%edx
0841e843 +0x09f9:  add    $0x54,%edx
0841e846 +0x09fc:  mov    %al,(%edx)
0841e848 +0x09fe:  mov    -0x30(%ebp),%eax
0841e84b +0x0a01:  imul   $0x61,%eax,%eax
0841e84e +0x0a04:  add    -0x3c(%ebp),%eax
0841e851 +0x0a07:  lea    0x8(%eax),%edx
0841e854 +0x0a0a:  movl   $0x1d,0x8(%esp)
0841e85c +0x0a12:  lea    -0xec(%ebp),%eax
0841e862 +0x0a18:  mov    %eax,0x4(%esp)
0841e866 +0x0a1c:  mov    %edx,(%esp)
0841e869 +0x0a1f:  call   0807d8d0 <_init+0x1c8>
0841e86e +0x0a24:  mov    -0xb0(%ebp),%eax
0841e874 +0x0a2a:  mov    %eax,-0x4c(%ebp)
0841e877 +0x0a2d:  mov    -0x3c(%ebp),%eax
0841e87a +0x0a30:  lea    0x79c(%eax),%edx
0841e880 +0x0a36:  lea    -0x4c(%ebp),%eax
0841e883 +0x0a39:  mov    %eax,0x4(%esp)
0841e887 +0x0a3d:  mov    %edx,(%esp)
0841e88a +0x0a40:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0841e88f +0x0a45:  mov    (%eax),%edx
0841e891 +0x0a47:  mov    -0x3c(%ebp),%eax
0841e894 +0x0a4a:  mov    %edx,0x79c(%eax)
0841e89a +0x0a50:  addl   $0x1,-0x30(%ebp)
0841e89e +0x0a54:  jmp    0841e8e3 <+0xa99>
0841e8a0 +0x0a56:  nop
0841e8a1 +0x0a57:  jmp    0841e8e3 <+0xa99>
0841e8a3 +0x0a59:  nop
0841e8a4 +0x0a5a:  jmp    0841e8e3 <+0xa99>
0841e8a6 +0x0a5c:  nop
0841e8a7 +0x0a5d:  jmp    0841e8e3 <+0xa99>
0841e8a9 +0x0a5f:  nop
0841e8aa +0x0a60:  jmp    0841e8e3 <+0xa99>
0841e8ac +0x0a62:  nop
0841e8ad +0x0a63:  jmp    0841e8e3 <+0xa99>
0841e8af +0x0a65:  nop
0841e8b0 +0x0a66:  jmp    0841e8e3 <+0xa99>
0841e8b2 +0x0a68:  nop
0841e8b3 +0x0a69:  jmp    0841e8e3 <+0xa99>
0841e8b5 +0x0a6b:  nop
0841e8b6 +0x0a6c:  jmp    0841e8e3 <+0xa99>
0841e8b8 +0x0a6e:  nop
0841e8b9 +0x0a6f:  jmp    0841e8e3 <+0xa99>
0841e8bb +0x0a71:  nop
0841e8bc +0x0a72:  jmp    0841e8e3 <+0xa99>
0841e8be +0x0a74:  nop
0841e8bf +0x0a75:  jmp    0841e8e3 <+0xa99>
0841e8c1 +0x0a77:  nop
0841e8c2 +0x0a78:  jmp    0841e8e3 <+0xa99>
0841e8c4 +0x0a7a:  nop
0841e8c5 +0x0a7b:  jmp    0841e8e3 <+0xa99>
0841e8c7 +0x0a7d:  nop
0841e8c8 +0x0a7e:  jmp    0841e8e3 <+0xa99>
0841e8ca +0x0a80:  nop
0841e8cb +0x0a81:  jmp    0841e8e3 <+0xa99>
0841e8cd +0x0a83:  nop
0841e8ce +0x0a84:  jmp    0841e8e3 <+0xa99>
0841e8d0 +0x0a86:  nop
0841e8d1 +0x0a87:  jmp    0841e8e3 <+0xa99>
0841e8d3 +0x0a89:  nop
0841e8d4 +0x0a8a:  jmp    0841e8e3 <+0xa99>
0841e8d6 +0x0a8c:  nop
0841e8d7 +0x0a8d:  jmp    0841e8e3 <+0xa99>
0841e8d9 +0x0a8f:  nop
0841e8da +0x0a90:  jmp    0841e8e3 <+0xa99>
0841e8dc +0x0a92:  nop
0841e8dd +0x0a93:  jmp    0841e8e3 <+0xa99>
0841e8df +0x0a95:  nop
0841e8e0 +0x0a96:  jmp    0841e8e3 <+0xa99>
0841e8e2 +0x0a98:  nop
0841e8e3 +0x0a99:  addl   $0x1,-0x28(%ebp)
0841e8e7 +0x0a9d:  mov    -0x3c(%ebp),%eax
0841e8ea +0x0aa0:  mov    0x794(%eax),%eax
0841e8f0 +0x0aa6:  cmp    -0x28(%ebp),%eax
0841e8f3 +0x0aa9:  jle    0841e902 <+0xab8>
0841e8f5 +0x0aab:  cmpl   $0x13,-0x28(%ebp)
0841e8f9 +0x0aaf:  jg     0841e902 <+0xab8>
0841e8fb +0x0ab1:  mov    $0x1,%eax
0841e900 +0x0ab6:  jmp    0841e907 <+0xabd>
0841e902 +0x0ab8:  mov    $0x0,%eax
0841e907 +0x0abd:  test   %al,%al
0841e909 +0x0abf:  jne    0841e142 <+0x2f8>
0841e90f +0x0ac5:  mov    -0x3c(%ebp),%eax
0841e912 +0x0ac8:  mov    -0x30(%ebp),%edx
0841e915 +0x0acb:  mov    %edx,0x794(%eax)
0841e91b +0x0ad1:  mov    -0x3c(%ebp),%eax
0841e91e +0x0ad4:  movl   $0x0,0x332e(%eax)
0841e928 +0x0ade:  movl   $0x0,-0x20(%ebp)
0841e92f +0x0ae5:  jmp    0841ea0f <+0xbc5>
0841e934 +0x0aea:  mov    -0x38(%ebp),%eax
0841e937 +0x0aed:  mov    %eax,(%esp)
0841e93a +0x0af0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841e93f +0x0af5:  xor    $0x1,%eax
0841e942 +0x0af8:  test   %al,%al
0841e944 +0x0afa:  je     0841e950 <+0xb06>
0841e946 +0x0afc:  mov    $0x0,%ebx
0841e94b +0x0b01:  jmp    0841f068 <+0x121e>
0841e950 +0x0b06:  lea    -0x11c(%ebp),%eax
0841e956 +0x0b0c:  mov    %eax,0x8(%esp)
0841e95a +0x0b10:  movl   $0xd,0x4(%esp)
0841e962 +0x0b18:  mov    -0x38(%ebp),%eax
0841e965 +0x0b1b:  mov    %eax,(%esp)
0841e968 +0x0b1e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841e96d +0x0b23:  xor    $0x1,%eax
0841e970 +0x0b26:  test   %al,%al
0841e972 +0x0b28:  jne    0841ea0a <+0xbc0>
0841e978 +0x0b2e:  mov    -0x11c(%ebp),%eax
0841e97e +0x0b34:  test   %eax,%eax
0841e980 +0x0b36:  je     0841ea0b <+0xbc1>
0841e986 +0x0b3c:  lea    -0x120(%ebp),%eax
0841e98c +0x0b42:  lea    -0x11c(%ebp),%edx
0841e992 +0x0b48:  mov    %edx,0x8(%esp)
0841e996 +0x0b4c:  lea    -0xa4(%ebp),%edx
0841e99c +0x0b52:  mov    %edx,0x4(%esp)
0841e9a0 +0x0b56:  mov    %eax,(%esp)
0841e9a3 +0x0b59:  call   0845026c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e82
0841e9a8 +0x0b5e:  sub    $0x4,%esp
0841e9ab +0x0b61:  lea    -0x48(%ebp),%eax
0841e9ae +0x0b64:  lea    -0xa4(%ebp),%edx
0841e9b4 +0x0b6a:  mov    %edx,0x4(%esp)
0841e9b8 +0x0b6e:  mov    %eax,(%esp)
0841e9bb +0x0b71:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
0841e9c0 +0x0b76:  sub    $0x4,%esp
0841e9c3 +0x0b79:  lea    -0x48(%ebp),%eax
0841e9c6 +0x0b7c:  mov    %eax,0x4(%esp)
0841e9ca +0x0b80:  lea    -0x120(%ebp),%eax
0841e9d0 +0x0b86:  mov    %eax,(%esp)
0841e9d3 +0x0b89:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
0841e9d8 +0x0b8e:  test   %al,%al
0841e9da +0x0b90:  je     0841e9f3 <+0xba9>
0841e9dc +0x0b92:  lea    -0x120(%ebp),%eax
0841e9e2 +0x0b98:  mov    %eax,(%esp)
0841e9e5 +0x0b9b:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
0841e9ea +0x0ba0:  mov    0x4(%eax),%edx
0841e9ed +0x0ba3:  add    $0x1,%edx
0841e9f0 +0x0ba6:  mov    %edx,0x4(%eax)
0841e9f3 +0x0ba9:  mov    -0x3c(%ebp),%eax
0841e9f6 +0x0bac:  mov    0x332e(%eax),%eax
0841e9fc +0x0bb2:  lea    0x1(%eax),%edx
0841e9ff +0x0bb5:  mov    -0x3c(%ebp),%eax
0841ea02 +0x0bb8:  mov    %edx,0x332e(%eax)
0841ea08 +0x0bbe:  jmp    0841ea0b <+0xbc1>
0841ea0a +0x0bc0:  nop
0841ea0b +0x0bc1:  addl   $0x1,-0x20(%ebp)
0841ea0f +0x0bc5:  mov    -0x3c(%ebp),%eax
0841ea12 +0x0bc8:  mov    0x798(%eax),%eax
0841ea18 +0x0bce:  cmp    -0x20(%ebp),%eax
0841ea1b +0x0bd1:  setg   %al
0841ea1e +0x0bd4:  test   %al,%al
0841ea20 +0x0bd6:  jne    0841e934 <+0xaea>
0841ea26 +0x0bdc:  lea    -0xa4(%ebp),%eax
0841ea2c +0x0be2:  mov    %eax,(%esp)
0841ea2f +0x0be5:  call   08451952 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4568>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4568
0841ea34 +0x0bea:  xor    $0x1,%eax
0841ea37 +0x0bed:  test   %al,%al
0841ea39 +0x0bef:  je     0841eaf5 <+0xcab>
0841ea3f +0x0bf5:  movl   $0x0,-0x34(%ebp)
0841ea46 +0x0bfc:  lea    -0x124(%ebp),%eax
0841ea4c +0x0c02:  lea    -0xa4(%ebp),%edx
0841ea52 +0x0c08:  mov    %edx,0x4(%esp)
0841ea56 +0x0c0c:  mov    %eax,(%esp)
0841ea59 +0x0c0f:  call   08451966 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x457c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x457c
0841ea5e +0x0c14:  sub    $0x4,%esp
0841ea61 +0x0c17:  jmp    0841eac0 <+0xc76>
0841ea63 +0x0c19:  lea    -0x124(%ebp),%eax
0841ea69 +0x0c1f:  mov    %eax,(%esp)
0841ea6c +0x0c22:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
0841ea71 +0x0c27:  mov    0x4(%eax),%eax
0841ea74 +0x0c2a:  test   %eax,%eax
0841ea76 +0x0c2c:  jle    0841ea85 <+0xc3b>
0841ea78 +0x0c2e:  cmpl   $0x13,-0x34(%ebp)
0841ea7c +0x0c32:  ja     0841ea85 <+0xc3b>
0841ea7e +0x0c34:  mov    $0x1,%eax
0841ea83 +0x0c39:  jmp    0841ea8a <+0xc40>
0841ea85 +0x0c3b:  mov    $0x0,%eax
0841ea8a +0x0c40:  test   %al,%al
0841ea8c +0x0c42:  je     0841eab2 <+0xc68>
0841ea8e +0x0c44:  mov    -0x34(%ebp),%ebx
0841ea91 +0x0c47:  lea    -0x124(%ebp),%eax
0841ea97 +0x0c4d:  mov    %eax,(%esp)
0841ea9a +0x0c50:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
0841ea9f +0x0c55:  mov    (%eax),%edx
0841eaa1 +0x0c57:  mov    -0x3c(%ebp),%eax
0841eaa4 +0x0c5a:  lea    0xccc(%ebx),%ecx
0841eaaa +0x0c60:  mov    %edx,0xa(%eax,%ecx,4)
0841eaae +0x0c64:  addl   $0x1,-0x34(%ebp)
0841eab2 +0x0c68:  lea    -0x124(%ebp),%eax
0841eab8 +0x0c6e:  mov    %eax,(%esp)
0841eabb +0x0c71:  call   0845198c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x45a2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x45a2
0841eac0 +0x0c76:  lea    -0x44(%ebp),%eax
0841eac3 +0x0c79:  lea    -0xa4(%ebp),%edx
0841eac9 +0x0c7f:  mov    %edx,0x4(%esp)
0841eacd +0x0c83:  mov    %eax,(%esp)
0841ead0 +0x0c86:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
0841ead5 +0x0c8b:  sub    $0x4,%esp
0841ead8 +0x0c8e:  lea    -0x44(%ebp),%eax
0841eadb +0x0c91:  mov    %eax,0x4(%esp)
0841eadf +0x0c95:  lea    -0x124(%ebp),%eax
0841eae5 +0x0c9b:  mov    %eax,(%esp)
0841eae8 +0x0c9e:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
0841eaed +0x0ca3:  test   %al,%al
0841eaef +0x0ca5:  jne    0841ea63 <+0xc19>
0841eaf5 +0x0cab:  mov    -0x3c(%ebp),%eax
0841eaf8 +0x0cae:  mov    0x794(%eax),%eax
0841eafe +0x0cb4:  mov    %eax,-0x2c(%ebp)
0841eb01 +0x0cb7:  mov    -0x40(%ebp),%eax
0841eb04 +0x0cba:  mov    0x8(%eax),%eax
0841eb07 +0x0cbd:  mov    %eax,%edx
0841eb09 +0x0cbf:  mov    -0x3c(%ebp),%eax
0841eb0c +0x0cc2:  mov    %edx,0x1018(%eax)
0841eb12 +0x0cc8:  mov    -0x40(%ebp),%eax
0841eb15 +0x0ccb:  mov    0xc(%eax),%edx
0841eb18 +0x0cce:  mov    -0x40(%ebp),%eax
0841eb1b +0x0cd1:  mov    (%eax),%eax
0841eb1d +0x0cd3:  mov    -0x3c(%ebp),%ecx
0841eb20 +0x0cd6:  mov    %ecx,0x14(%esp)
0841eb24 +0x0cda:  mov    %edx,0x10(%esp)
0841eb28 +0x0cde:  mov    %eax,0xc(%esp)
0841eb2c +0x0ce2:  mov    0x10(%ebp),%eax
0841eb2f +0x0ce5:  mov    %eax,0x8(%esp)
0841eb33 +0x0ce9:  mov    -0x38(%ebp),%eax
0841eb36 +0x0cec:  mov    %eax,0x4(%esp)
0841eb3a +0x0cf0:  mov    0x8(%ebp),%eax
0841eb3d +0x0cf3:  mov    %eax,(%esp)
0841eb40 +0x0cf6:  call   0841d52c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST>  ; DB_MailBox_Req_List::SelectLetter(MySQL*, int, int, unsigned int, SIG_MAILBOX_LIST*)
0841eb45 +0x0cfb:  xor    $0x1,%eax
0841eb48 +0x0cfe:  test   %al,%al
0841eb4a +0x0d00:  je     0841eb85 <+0xd3b>
0841eb4c +0x0d02:  movl   $"SelectLetter() error",0x10(%esp)
0841eb54 +0x0d0a:  movl   $0x5438,0xc(%esp)
0841eb5c +0x0d12:  movl   $&_ZZN19DB_MailBox_Req_List8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0841eb64 +0x0d1a:  movl   $"DBThread.cpp",0x4(%esp)
0841eb6c +0x0d22:  movl   $0x1,(%esp)
0841eb73 +0x0d29:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0841eb78 +0x0d2e:  mov    -0x3c(%ebp),%eax
0841eb7b +0x0d31:  movl   $0x0,0x1018(%eax)
0841eb85 +0x0d3b:  mov    -0x3c(%ebp),%eax
0841eb88 +0x0d3e:  mov    0x794(%eax),%eax
0841eb8e +0x0d44:  cmp    -0x2c(%ebp),%eax
0841eb91 +0x0d47:  je     0841ebb4 <+0xd6a>
0841eb93 +0x0d49:  mov    -0x40(%ebp),%eax
0841eb96 +0x0d4c:  mov    0x4(%eax),%eax
0841eb99 +0x0d4f:  mov    %eax,0x8(%esp)
0841eb9d +0x0d53:  lea    -0x1c0(%ebp),%eax
0841eba3 +0x0d59:  mov    %eax,0x4(%esp)
0841eba7 +0x0d5d:  mov    -0x3c(%ebp),%eax
0841ebaa +0x0d60:  mov    %eax,(%esp)
0841ebad +0x0d63:  call   0841d470 <_Z16DoChangeMailListP16SIG_MAILBOX_LISTPji>  ; DoChangeMailList(SIG_MAILBOX_LIST*, unsigned int*, int)
0841ebb2 +0x0d68:  jmp    0841ebd0 <+0xd86>
0841ebb4 +0x0d6a:  mov    -0x3c(%ebp),%eax
0841ebb7 +0x0d6d:  mov    0x794(%eax),%eax
0841ebbd +0x0d73:  test   %eax,%eax
0841ebbf +0x0d75:  jne    0841ebd0 <+0xd86>
0841ebc1 +0x0d77:  mov    -0x40(%ebp),%eax
0841ebc4 +0x0d7a:  mov    0x4(%eax),%edx
0841ebc7 +0x0d7d:  mov    -0x3c(%ebp),%eax
0841ebca +0x0d80:  mov    %edx,0x79c(%eax)
0841ebd0 +0x0d86:  mov    -0x3c(%ebp),%eax
0841ebd3 +0x0d89:  movl   $0x0,0x7a0(%eax)
0841ebdd +0x0d93:  mov    -0x1c0(%ebp),%eax
0841ebe3 +0x0d99:  test   %eax,%eax
0841ebe5 +0x0d9b:  je     0841eef6 <+0x10ac>
0841ebeb +0x0da1:  lea    -0x1294(%ebp),%ebx
0841ebf1 +0x0da7:  mov    $0x0,%eax
0841ebf6 +0x0dac:  mov    $0x400,%edx
0841ebfb +0x0db1:  mov    %ebx,%edi
0841ebfd +0x0db3:  mov    %edx,%ecx
0841ebff +0x0db5:  rep stos %eax,%es:(%edi)
0841ec01 +0x0db7:  lea    -0x145(%ebp),%eax
0841ec07 +0x0dbd:  mov    $0x19,%edx
0841ec0c +0x0dc2:  mov    $0x0,%ecx
0841ec11 +0x0dc7:  mov    %eax,%ebx
0841ec13 +0x0dc9:  and    $0x1,%ebx
0841ec16 +0x0dcc:  test   %ebx,%ebx
0841ec18 +0x0dce:  je     0841ec22 <+0xdd8>
0841ec1a +0x0dd0:  mov    %cl,(%eax)
0841ec1c +0x0dd2:  add    $0x1,%eax
0841ec1f +0x0dd5:  sub    $0x1,%edx
0841ec22 +0x0dd8:  mov    %eax,%ebx
0841ec24 +0x0dda:  and    $0x2,%ebx
0841ec27 +0x0ddd:  test   %ebx,%ebx
0841ec29 +0x0ddf:  je     0841ec34 <+0xdea>
0841ec2b +0x0de1:  mov    %cx,(%eax)
0841ec2e +0x0de4:  add    $0x2,%eax
0841ec31 +0x0de7:  sub    $0x2,%edx
0841ec34 +0x0dea:  mov    %edx,%esi
0841ec36 +0x0dec:  and    $0xfffffffc,%esi
0841ec39 +0x0def:  mov    $0x0,%ebx
0841ec3e +0x0df4:  mov    %ecx,(%eax,%ebx,1)
0841ec41 +0x0df7:  add    $0x4,%ebx
0841ec44 +0x0dfa:  cmp    %esi,%ebx
0841ec46 +0x0dfc:  jb     0841ec3e <+0xdf4>
0841ec48 +0x0dfe:  add    %ebx,%eax
0841ec4a +0x0e00:  mov    %edx,%ebx
0841ec4c +0x0e02:  and    $0x2,%ebx
0841ec4f +0x0e05:  test   %ebx,%ebx
0841ec51 +0x0e07:  je     0841ec59 <+0xe0f>
0841ec53 +0x0e09:  mov    %cx,(%eax)
0841ec56 +0x0e0c:  add    $0x2,%eax
0841ec59 +0x0e0f:  and    $0x1,%edx
0841ec5c +0x0e12:  test   %edx,%edx
0841ec5e +0x0e14:  je     0841ec65 <+0xe1b>
0841ec60 +0x0e16:  mov    %cl,(%eax)
0841ec62 +0x0e18:  add    $0x1,%eax
0841ec65 +0x0e1b:  movl   $0x0,-0x14c(%ebp)
0841ec6f +0x0e25:  lea    -0x1294(%ebp),%eax
0841ec75 +0x0e2b:  mov    %eax,0x4(%esp)
0841ec79 +0x0e2f:  lea    -0x1c0(%ebp),%eax
0841ec7f +0x0e35:  mov    %eax,(%esp)
0841ec82 +0x0e38:  call   083ff968 <_Z15getList2inQueryPjPc>  ; getList2inQuery(unsigned int*, char*)
0841ec87 +0x0e3d:  mov    -0x40(%ebp),%eax
0841ec8a +0x0e40:  mov    (%eax),%eax
0841ec8c +0x0e42:  lea    -0x1294(%ebp),%edx
0841ec92 +0x0e48:  mov    %edx,0xc(%esp)
0841ec96 +0x0e4c:  mov    %eax,0x8(%esp)
0841ec9a +0x0e50:  movl   $"seLect ui_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ipg_agency_no,jewel_socket from user_items where charac_no=%d and ui_id %s",0x4(%esp)
0841eca2 +0x0e58:  mov    -0x38(%ebp),%eax
0841eca5 +0x0e5b:  mov    %eax,(%esp)
0841eca8 +0x0e5e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841ecad +0x0e63:  movl   $0x1,0x4(%esp)
0841ecb5 +0x0e6b:  mov    -0x38(%ebp),%eax
0841ecb8 +0x0e6e:  mov    %eax,(%esp)
0841ecbb +0x0e71:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841ecc0 +0x0e76:  mov    -0x38(%ebp),%eax
0841ecc3 +0x0e79:  mov    %eax,(%esp)
0841ecc6 +0x0e7c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841eccb +0x0e81:  mov    %eax,%edx
0841eccd +0x0e83:  mov    -0x3c(%ebp),%eax
0841ecd0 +0x0e86:  mov    %edx,0x7a0(%eax)
0841ecd6 +0x0e8c:  movl   $0x0,-0x1c(%ebp)
0841ecdd +0x0e93:  jmp    0841eedd <+0x1093>
0841ece2 +0x0e98:  mov    -0x38(%ebp),%eax
0841ece5 +0x0e9b:  mov    %eax,(%esp)
0841ece8 +0x0e9e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841eced +0x0ea3:  xor    $0x1,%eax
0841ecf0 +0x0ea6:  test   %al,%al
0841ecf2 +0x0ea8:  je     0841ecfe <+0xeb4>
0841ecf4 +0x0eaa:  mov    $0x0,%ebx
0841ecf9 +0x0eaf:  jmp    0841f068 <+0x121e>
0841ecfe +0x0eb4:  lea    -0x14c(%ebp),%eax
0841ed04 +0x0eba:  mov    %eax,0x8(%esp)
0841ed08 +0x0ebe:  movl   $0x0,0x4(%esp)
0841ed10 +0x0ec6:  mov    -0x38(%ebp),%eax
0841ed13 +0x0ec9:  mov    %eax,(%esp)
0841ed16 +0x0ecc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841ed1b +0x0ed1:  xor    $0x1,%eax
0841ed1e +0x0ed4:  test   %al,%al
0841ed20 +0x0ed6:  je     0841ed2c <+0xee2>
0841ed22 +0x0ed8:  mov    $0x0,%ebx
0841ed27 +0x0edd:  jmp    0841f068 <+0x121e>
0841ed2c +0x0ee2:  lea    -0x12c(%ebp),%eax
0841ed32 +0x0ee8:  mov    %eax,0x8(%esp)
0841ed36 +0x0eec:  movl   $0x1,0x4(%esp)
0841ed3e +0x0ef4:  mov    -0x38(%ebp),%eax
0841ed41 +0x0ef7:  mov    %eax,(%esp)
0841ed44 +0x0efa:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841ed49 +0x0eff:  xor    $0x1,%eax
0841ed4c +0x0f02:  test   %al,%al
0841ed4e +0x0f04:  je     0841ed5a <+0xf10>
0841ed50 +0x0f06:  mov    $0x0,%ebx
0841ed55 +0x0f0b:  jmp    0841f068 <+0x121e>
0841ed5a +0x0f10:  lea    -0x128(%ebp),%eax
0841ed60 +0x0f16:  mov    %eax,0x8(%esp)
0841ed64 +0x0f1a:  movl   $0x2,0x4(%esp)
0841ed6c +0x0f22:  mov    -0x38(%ebp),%eax
0841ed6f +0x0f25:  mov    %eax,(%esp)
0841ed72 +0x0f28:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841ed77 +0x0f2d:  xor    $0x1,%eax
0841ed7a +0x0f30:  test   %al,%al
0841ed7c +0x0f32:  je     0841ed88 <+0xf3e>
0841ed7e +0x0f34:  mov    $0x0,%ebx
0841ed83 +0x0f39:  jmp    0841f068 <+0x121e>
0841ed88 +0x0f3e:  movl   $0x18,0xc(%esp)
0841ed90 +0x0f46:  lea    -0x145(%ebp),%eax
0841ed96 +0x0f4c:  mov    %eax,0x8(%esp)
0841ed9a +0x0f50:  movl   $0x3,0x4(%esp)
0841eda2 +0x0f58:  mov    -0x38(%ebp),%eax
0841eda5 +0x0f5b:  mov    %eax,(%esp)
0841eda8 +0x0f5e:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0841edad +0x0f63:  xor    $0x1,%eax
0841edb0 +0x0f66:  test   %al,%al
0841edb2 +0x0f68:  je     0841edbe <+0xf74>
0841edb4 +0x0f6a:  mov    $0x0,%ebx
0841edb9 +0x0f6f:  jmp    0841f068 <+0x121e>
0841edbe +0x0f74:  lea    -0x16a(%ebp),%eax
0841edc4 +0x0f7a:  mov    %eax,(%esp)
0841edc7 +0x0f7d:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0841edcc +0x0f82:  movl   $0x1e,0xc(%esp)
0841edd4 +0x0f8a:  lea    -0x16a(%ebp),%eax
0841edda +0x0f90:  mov    %eax,0x8(%esp)
0841edde +0x0f94:  movl   $0x4,0x4(%esp)
0841ede6 +0x0f9c:  mov    -0x38(%ebp),%eax
0841ede9 +0x0f9f:  mov    %eax,(%esp)
0841edec +0x0fa2:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0841edf1 +0x0fa7:  xor    $0x1,%eax
0841edf4 +0x0faa:  test   %al,%al
0841edf6 +0x0fac:  je     0841ee02 <+0xfb8>
0841edf8 +0x0fae:  mov    $0x0,%ebx
0841edfd +0x0fb3:  jmp    0841f068 <+0x121e>
0841ee02 +0x0fb8:  mov    -0x1c(%ebp),%edx
0841ee05 +0x0fbb:  mov    -0x128(%ebp),%eax
0841ee0b +0x0fc1:  mov    -0x3c(%ebp),%ecx
0841ee0e +0x0fc4:  imul   $0x47,%edx,%edx
0841ee11 +0x0fc7:  lea    (%ecx,%edx,1),%edx
0841ee14 +0x0fca:  add    $0x7a0,%edx
0841ee1a +0x0fd0:  mov    %eax,0x8(%edx)
0841ee1d +0x0fd3:  mov    -0x1c(%ebp),%edx
0841ee20 +0x0fd6:  mov    -0x14c(%ebp),%eax
0841ee26 +0x0fdc:  mov    -0x3c(%ebp),%ecx
0841ee29 +0x0fdf:  imul   $0x47,%edx,%edx
0841ee2c +0x0fe2:  lea    (%ecx,%edx,1),%edx
0841ee2f +0x0fe5:  add    $0x7a0,%edx
0841ee35 +0x0feb:  mov    %eax,0x4(%edx)
0841ee38 +0x0fee:  mov    -0x1c(%ebp),%edx
0841ee3b +0x0ff1:  mov    -0x12c(%ebp),%eax
0841ee41 +0x0ff7:  mov    -0x3c(%ebp),%ecx
0841ee44 +0x0ffa:  imul   $0x47,%edx,%edx
0841ee47 +0x0ffd:  lea    (%ecx,%edx,1),%edx
0841ee4a +0x1000:  add    $0x7a0,%edx
0841ee50 +0x1006:  mov    %eax,0xc(%edx)
0841ee53 +0x1009:  mov    -0x1c(%ebp),%eax
0841ee56 +0x100c:  imul   $0x47,%eax,%eax
0841ee59 +0x100f:  add    $0x7a0,%eax
0841ee5e +0x1014:  add    -0x3c(%ebp),%eax
0841ee61 +0x1017:  lea    0x10(%eax),%edx
0841ee64 +0x101a:  movl   $0x18,0x8(%esp)
0841ee6c +0x1022:  lea    -0x145(%ebp),%eax
0841ee72 +0x1028:  mov    %eax,0x4(%esp)
0841ee76 +0x102c:  mov    %edx,(%esp)
0841ee79 +0x102f:  call   0807d8d0 <_init+0x1c8>
0841ee7e +0x1034:  mov    -0x1c(%ebp),%eax
0841ee81 +0x1037:  mov    -0x3c(%ebp),%edx
0841ee84 +0x103a:  imul   $0x47,%eax,%eax
0841ee87 +0x103d:  lea    (%edx,%eax,1),%eax
0841ee8a +0x1040:  add    $0x7c0,%eax
0841ee8f +0x1045:  mov    -0x16a(%ebp),%edx
0841ee95 +0x104b:  mov    %edx,0x9(%eax)
0841ee98 +0x104e:  mov    -0x166(%ebp),%edx
0841ee9e +0x1054:  mov    %edx,0xd(%eax)
0841eea1 +0x1057:  mov    -0x162(%ebp),%edx
0841eea7 +0x105d:  mov    %edx,0x11(%eax)
0841eeaa +0x1060:  mov    -0x15e(%ebp),%edx
0841eeb0 +0x1066:  mov    %edx,0x15(%eax)
0841eeb3 +0x1069:  mov    -0x15a(%ebp),%edx
0841eeb9 +0x106f:  mov    %edx,0x19(%eax)
0841eebc +0x1072:  mov    -0x156(%ebp),%edx
0841eec2 +0x1078:  mov    %edx,0x1d(%eax)
0841eec5 +0x107b:  mov    -0x152(%ebp),%edx
0841eecb +0x1081:  mov    %edx,0x21(%eax)
0841eece +0x1084:  movzwl -0x14e(%ebp),%edx
0841eed5 +0x108b:  mov    %dx,0x25(%eax)
0841eed9 +0x108f:  addl   $0x1,-0x1c(%ebp)
0841eedd +0x1093:  mov    -0x38(%ebp),%eax
0841eee0 +0x1096:  mov    %eax,(%esp)
0841eee3 +0x1099:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841eee8 +0x109e:  cmp    -0x1c(%ebp),%eax
0841eeeb +0x10a1:  seta   %al
0841eeee +0x10a4:  test   %al,%al
0841eef0 +0x10a6:  jne    0841ece2 <+0xe98>
0841eef6 +0x10ac:  mov    -0x3c(%ebp),%eax
0841eef9 +0x10af:  movl   $0x0,0xd30(%eax)
0841ef03 +0x10b9:  mov    -0x214(%ebp),%eax
0841ef09 +0x10bf:  test   %eax,%eax
0841ef0b +0x10c1:  je     0841ef4a <+0x1100>
0841ef0d +0x10c3:  mov    -0x40(%ebp),%eax
0841ef10 +0x10c6:  mov    (%eax),%eax
0841ef12 +0x10c8:  mov    -0x3c(%ebp),%edx
0841ef15 +0x10cb:  mov    %edx,0x10(%esp)
0841ef19 +0x10cf:  lea    -0x214(%ebp),%edx
0841ef1f +0x10d5:  mov    %edx,0xc(%esp)
0841ef23 +0x10d9:  mov    %eax,0x8(%esp)
0841ef27 +0x10dd:  mov    -0x38(%ebp),%eax
0841ef2a +0x10e0:  mov    %eax,0x4(%esp)
0841ef2e +0x10e4:  mov    0x8(%ebp),%eax
0841ef31 +0x10e7:  mov    %eax,(%esp)
0841ef34 +0x10ea:  call   0841dc84 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST>  ; DB_MailBox_Req_List::setCreatureData(MySQL*, unsigned int, unsigned int*, SIG_MAILBOX_LIST*)
0841ef39 +0x10ef:  xor    $0x1,%eax
0841ef3c +0x10f2:  test   %al,%al
0841ef3e +0x10f4:  je     0841ef4a <+0x1100>
0841ef40 +0x10f6:  mov    $0x0,%ebx
0841ef45 +0x10fb:  jmp    0841f068 <+0x121e>
0841ef4a +0x1100:  mov    -0x40(%ebp),%eax
0841ef4d +0x1103:  mov    (%eax),%edx
0841ef4f +0x1105:  mov    -0x3c(%ebp),%eax
0841ef52 +0x1108:  mov    %edx,0x3332(%eax)
0841ef58 +0x110e:  mov    -0x40(%ebp),%eax
0841ef5b +0x1111:  mov    0x10(%eax),%edx
0841ef5e +0x1114:  mov    -0x3c(%ebp),%eax
0841ef61 +0x1117:  mov    %edx,0x3336(%eax)
0841ef67 +0x111d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841ef6c +0x1122:  movl   $0x5492,0x8(%esp)
0841ef74 +0x112a:  movl   $"DBThread.cpp",0x4(%esp)
0841ef7c +0x1132:  mov    %eax,(%esp)
0841ef7f +0x1135:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841ef84 +0x113a:  movl   $0x1,0x8(%esp)
0841ef8c +0x1142:  mov    %eax,0x4(%esp)
0841ef90 +0x1146:  lea    -0xac(%ebp),%eax
0841ef96 +0x114c:  mov    %eax,(%esp)
0841ef99 +0x114f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841ef9e +0x1154:  lea    -0xac(%ebp),%eax
0841efa4 +0x115a:  mov    %eax,(%esp)
0841efa7 +0x115d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841efac +0x1162:  movl   $0x7f,0x4(%esp)
0841efb4 +0x116a:  mov    %eax,(%esp)
0841efb7 +0x116d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841efbc +0x1172:  lea    -0xac(%ebp),%eax
0841efc2 +0x1178:  mov    %eax,(%esp)
0841efc5 +0x117b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841efca +0x1180:  mov    0x10(%ebp),%edx
0841efcd +0x1183:  mov    %edx,0x4(%esp)
0841efd1 +0x1187:  mov    %eax,(%esp)
0841efd4 +0x118a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841efd9 +0x118f:  lea    -0xac(%ebp),%eax
0841efdf +0x1195:  mov    %eax,(%esp)
0841efe2 +0x1198:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841efe7 +0x119d:  movl   $0x338a,0x8(%esp)
0841efef +0x11a5:  mov    -0x3c(%ebp),%edx
0841eff2 +0x11a8:  mov    %edx,0x4(%esp)
0841eff6 +0x11ac:  mov    %eax,(%esp)
0841eff9 +0x11af:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0841effe +0x11b4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841f003 +0x11b9:  lea    -0xac(%ebp),%edx
0841f009 +0x11bf:  mov    %edx,0x8(%esp)
0841f00d +0x11c3:  movl   $0x1,0x4(%esp)
0841f015 +0x11cb:  mov    %eax,(%esp)
0841f018 +0x11ce:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841f01d +0x11d3:  mov    $0x1,%ebx
0841f022 +0x11d8:  lea    -0xac(%ebp),%eax
0841f028 +0x11de:  mov    %eax,(%esp)
0841f02b +0x11e1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841f030 +0x11e6:  jmp    0841f068 <+0x121e>
0841f032 +0x11e8:  mov    %edx,%ebx
0841f034 +0x11ea:  mov    %eax,%esi
0841f036 +0x11ec:  lea    -0xac(%ebp),%eax
0841f03c +0x11f2:  mov    %eax,(%esp)
0841f03f +0x11f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841f044 +0x11fa:  mov    %esi,%eax
0841f046 +0x11fc:  mov    %ebx,%edx
0841f048 +0x11fe:  jmp    0841f04a <+0x1200>
0841f04a +0x1200:  mov    %edx,%ebx
0841f04c +0x1202:  mov    %eax,%esi
0841f04e +0x1204:  lea    -0xa4(%ebp),%eax
0841f054 +0x120a:  mov    %eax,(%esp)
0841f057 +0x120d:  call   0844d4bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd2
0841f05c +0x1212:  mov    %esi,%eax
0841f05e +0x1214:  mov    %ebx,%edx
0841f060 +0x1216:  mov    %eax,(%esp)
0841f063 +0x1219:  call   08ae3750 <_Unwind_Resume>
0841f068 +0x121e:  lea    -0xa4(%ebp),%eax
0841f06e +0x1224:  mov    %eax,(%esp)
0841f071 +0x1227:  call   0844d4bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd2
0841f076 +0x122c:  mov    %ebx,%eax
0841f078 +0x122e:  lea    -0xc(%ebp),%esp
0841f07b +0x1231:  add    $0x0,%esp
0841f07e +0x1234:  pop    %ebx
0841f07f +0x1235:  pop    %esi
0841f080 +0x1236:  pop    %edi
0841f081 +0x1237:  pop    %ebp
0841f082 +0x1238:  ret
0841f083 +0x1239:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_List::dispatch @ 0x841de4a

/* DB_MailBox_Req_List::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_List::dispatch(DB_MailBox_Req_List *this,int param_1,int param_2,Stream *param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  Stream *pSVar8;
  CStreamGuard *pCVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  byte bVar15;
  SIG_MAILBOX_LIST local_4622 [13194];
  char local_1298 [4096];
  char local_298 [128];
  uint local_218 [21];
  uint local_1c4 [21];
  undefined4 local_16e;
  undefined4 local_16a;
  undefined4 local_166;
  undefined4 local_162;
  undefined4 local_15e;
  undefined4 local_15a;
  undefined4 local_156;
  undefined2 local_152;
  int local_150;
  char local_149;
  char local_148 [24];
  uint local_130;
  uint local_12c;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_128 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_124 [4];
  uint local_120;
  SIG_MAILBOX_LIST local_11c;
  SIG_MAILBOX_LIST local_11b;
  undefined4 local_11a;
  undefined4 local_116;
  undefined2 local_112;
  ulong local_110;
  uint local_10c;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined2 local_fa;
  int local_f8 [2];
  char local_f0 [29];
  SIG_MAILBOX_LIST local_d3;
  short local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  ulong local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  size_t local_b4;
  CStreamGuard local_b0 [8];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_a8 [24];
  pair local_90 [8];
  pair<unsigned_int_const,int> local_88 [8];
  uint local_80 [2];
  undefined4 local_78;
  int local_74;
  uint local_70;
  pair local_6c [8];
  pair<unsigned_int_const,int> local_64 [8];
  uint local_5c [2];
  undefined4 local_54;
  size_t local_50;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_4c [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_48 [4];
  SIG_MAILBOX_LIST *local_44;
  SIG_MAILBOX_LIST *local_40;
  MySQL *local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar15 = 0;
  pSVar8 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_44 = Stream::GetOutBuffer<SIG_MAILBOX_LIST>(param_3);
  local_40 = local_4622;
  memset(local_40,0,0x338a);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0,pSVar8);
  if (*(uint *)(local_44 + 4) == 0) {
    MySQL::set_query(local_3c,
                     "upDate postal set delete_flag=%d where receive_charac_no=%d and unlimit_flag=0 and occ_time<subdate(now(),interval %d day) and delete_flag=0"
                     ,2,*(uint *)local_44,0xf);
    cVar2 = MySQL::exec(local_3c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pcVar6 = local_298;
  for (iVar10 = 0x20; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar15 * -2 + 1) * 4;
  }
  if (*(uint *)(local_44 + 4) != 0) {
    sprintf(local_298," and postal_id > %d",*(uint *)(local_44 + 4));
  }
  MySQL::set_query(local_3c,
                   "seLect postal_id,unix_timestamp(occ_time),send_charac_no,seal_flag,item_id,add_info,endurance,upgrade,gold,send_charac_name,unlimit_flag,avata_flag,creature_flag,letter_id,extend_info,item_guid,amplify_option,amplify_value,random_option,seperate_upgrade,type from postal where receive_charac_no=%d and delete_flag=0 %s and (unlimit_flag=1 or occ_time>subdate(now(),interval 15 day)) order by postal_id limit %d"
                   ,*(uint *)local_44,local_298,0x14);
  cVar2 = MySQL::exec(local_3c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_38 = 0;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  map(local_a8);
  for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
    if (*(int *)(local_44 + (local_38 + 4) * 4 + 4) != 0) {
      local_78 = 0;
                    /* try { // try from 0841e01b to 0841ef83 has its CatchHandler @ 0841f04a */
      std::make_pair<unsigned_int&,int>(local_80,(int *)(local_44 + (local_38 + 4) * 4 + 4));
      std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_88,(pair *)local_80);
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::insert(local_90);
    }
  }
  *(uint *)(local_40 + 0x3326) = *(uint *)(local_44 + 8);
  *(undefined4 *)(local_40 + 0x79c) = 0;
  local_74 = MySQL::get_n_rows(local_3c);
  local_70 = *(uint *)(local_44 + 8);
  piVar3 = std::min<int>((int *)&local_70,&local_74);
  *(int *)(local_40 + 0x794) = *piVar3;
  *(undefined4 *)(local_40 + 0x798) = 0;
  if ((int)*(uint *)(local_44 + 8) <= *(int *)(local_40 + 0x794)) {
    iVar10 = MySQL::get_n_rows(local_3c);
    *(int *)(local_40 + 0x798) = iVar10 - *(int *)(local_40 + 0x794);
  }
  puVar13 = local_1c4;
  for (iVar10 = 0x15; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  puVar13 = local_218;
  for (iVar10 = 0x15; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  local_34 = 0;
  local_2c = 0;
  while( true ) {
    if ((local_2c < *(int *)(local_40 + 0x794)) && (local_2c < 0x14)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (!bVar14) {
      *(int *)(local_40 + 0x794) = local_34;
      *(undefined4 *)(local_40 + 0x332e) = 0;
      local_24 = 0;
      goto LAB_0841ea0f;
    }
    cVar2 = MySQL::fetch(local_3c);
    if (cVar2 != '\x01') break;
    local_f8[1] = 0;
    local_f8[0] = 0;
    RandomOption::reset((RandomOption *)&local_106);
    cVar2 = MySQL::get_int(local_3c,0,(int *)&local_b4);
    if ((((((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_3c,1,&local_b8), cVar2 == '\x01')) &&
          (cVar2 = MySQL::get_int(local_3c,2,&local_bc), cVar2 == '\x01')) &&
         ((cVar2 = MySQL::get_short(local_3c,3,&local_d0), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_ulong(local_3c,4,&local_c8), cVar2 == '\x01')))) &&
        (((cVar2 = MySQL::get_int(local_3c,5,(int *)&local_c0), cVar2 == '\x01' &&
          ((cVar2 = MySQL::get_short(local_3c,6,&local_ca), cVar2 == '\x01' &&
           (cVar2 = MySQL::get_byte(local_3c,7,(char *)&local_d3), cVar2 == '\x01')))) &&
         (cVar2 = MySQL::get_int(local_3c,8,&local_c4), cVar2 == '\x01')))) &&
       ((((cVar2 = MySQL::get_str(local_3c,9,local_f0,0x1d), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_short(local_3c,10,&local_cc), cVar2 == '\x01')) &&
         (cVar2 = MySQL::get_short(local_3c,0xb,&local_ce), cVar2 == '\x01')) &&
        ((cVar2 = MySQL::get_short(local_3c,0xc,&local_d2), cVar2 == '\x01' &&
         ((local_ce != 1 || (local_d2 != 1)))))))) {
      local_28 = 0xe;
      cVar2 = MySQL::get_uint(local_3c,0xd,&local_10c);
      iVar10 = local_28;
      if ((cVar2 == '\x01') && ((local_c8 != 0 || (local_c4 != 0)))) {
        local_110 = 0;
        local_28 = local_28 + 1;
        cVar2 = MySQL::get_ulong(local_3c,iVar10,&local_110);
        iVar10 = local_28;
        if (cVar2 == '\x01') {
          local_28 = local_28 + 1;
          cVar2 = MySQL::get_binary(local_3c,iVar10,&local_11a,10);
          iVar10 = local_28;
          if (cVar2 == '\x01') {
            local_28 = local_28 + 1;
            cVar2 = MySQL::get_byte(local_3c,iVar10,local_f8 + 1);
            iVar10 = local_28;
            if (cVar2 == '\x01') {
              local_28 = local_28 + 1;
              cVar2 = MySQL::get_short(local_3c,iVar10,local_f8);
              iVar10 = local_28;
              if (cVar2 == '\x01') {
                local_28 = local_28 + 1;
                cVar2 = MySQL::get_binary(local_3c,iVar10,&local_106,0xe);
                iVar10 = local_28;
                if (cVar2 == '\x01') {
                  local_11b = (SIG_MAILBOX_LIST)0x0;
                  local_28 = local_28 + 1;
                  cVar2 = MySQL::get_byte(local_3c,iVar10,(char *)&local_11b);
                  iVar10 = local_28;
                  if (cVar2 == '\x01') {
                    local_11c = (SIG_MAILBOX_LIST)0x0;
                    local_28 = local_28 + 1;
                    cVar2 = MySQL::get_byte(local_3c,iVar10,(char *)&local_11c);
                    if (cVar2 == '\x01') {
                      if (local_10c != 0) {
                        local_54 = 0;
                        std::make_pair<unsigned_int&,int>(local_5c,(int *)&local_10c);
                        std::pair<unsigned_int_const,int>::pair<unsigned_int,int>
                                  (local_64,(pair *)local_5c);
                        std::
                        map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                        ::insert(local_6c);
                      }
                      *(size_t *)(local_40 + local_34 * 0x61) = local_b4;
                      *(int *)(local_40 + local_34 * 0x61 + 0x55) = local_b8 + 0x13c680;
                      *(int *)(local_40 + local_34 * 0x61 + 4) = local_bc;
                      local_40[local_34 * 0x61 + 0x29] = (SIG_MAILBOX_LIST)(local_d0 == 1);
                      *(ulong *)(local_40 + local_34 * 0x61 + 0x2a) = local_c8;
                      *(uint *)(local_40 + local_34 * 0x61 + 0x2e) = local_c0;
                      *(short *)(local_40 + local_34 * 0x61 + 0x33) = local_ca;
                      local_40[local_34 * 0x61 + 0x32] = local_d3;
                      *(ulong *)(local_40 + local_34 * 0x61 + 0x35) = local_110;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x39) = local_11a;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x3d) = local_116;
                      *(undefined2 *)(local_40 + local_34 * 0x61 + 0x41) = local_112;
                      *(int *)(local_40 + local_34 * 0x61 + 0x25) = local_c4;
                      local_40[local_34 * 0x61 + 0x5b] = (SIG_MAILBOX_LIST)(local_cc == 1);
                      if (local_ce == 1) {
                        local_40[local_34 * 0x61 + 0x59] = (SIG_MAILBOX_LIST)0x1;
                        local_1c4[0] = local_1c4[0] + 1;
                        local_1c4[local_1c4[0]] = local_c0;
                      }
                      else {
                        local_40[local_34 * 0x61 + 0x59] = (SIG_MAILBOX_LIST)0x0;
                      }
                      if (local_d2 == 1) {
                        local_40[local_34 * 0x61 + 0x5a] = (SIG_MAILBOX_LIST)0x1;
                        local_218[0] = local_218[0] + 1;
                        local_218[local_218[0]] = local_c0;
                      }
                      else {
                        local_40[local_34 * 0x61 + 0x5a] = (SIG_MAILBOX_LIST)0x0;
                      }
                      *(uint *)(local_40 + local_34 * 0x61 + 0x5c) = local_10c;
                      local_40[local_34 * 0x61 + 0x43] = SUB41(local_f8[1],0);
                      *(short *)(local_40 + local_34 * 0x61 + 0x44) = (short)local_f8[0];
                      local_40[local_34 * 0x61 + 0x60] = local_11c;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x46) = local_106;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x4a) = local_102;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x4e) = local_fe;
                      *(undefined2 *)(local_40 + local_34 * 0x61 + 0x52) = local_fa;
                      local_40[local_34 * 0x61 + 0x54] = local_11b;
                      strncpy((char *)(local_40 + local_34 * 0x61 + 8),local_f0,0x1d);
                      local_50 = local_b4;
                      psVar4 = std::max<size_t>((size_t *)(local_40 + 0x79c),&local_50);
                      *(size_t *)(local_40 + 0x79c) = *psVar4;
                      local_34 = local_34 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_2c = local_2c + 1;
  }
  uVar7 = 0;
  goto LAB_0841f068;
LAB_0841ea0f:
  if (*(int *)(local_40 + 0x798) <= local_24) goto code_r0x0841ea26;
  cVar2 = MySQL::fetch(local_3c);
  if (cVar2 != '\x01') {
    uVar7 = 0;
    goto LAB_0841f068;
  }
  cVar2 = MySQL::get_uint(local_3c,0xd,&local_120);
  if ((cVar2 == '\x01') && (local_120 != 0)) {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::find((uint *)local_124);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_4c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      (local_124,(_Rb_tree_iterator *)local_4c);
    if (cVar2 != '\0') {
      iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->(local_124);
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + 1;
    }
    *(int *)(local_40 + 0x332e) = *(int *)(local_40 + 0x332e) + 1;
  }
  local_24 = local_24 + 1;
  goto LAB_0841ea0f;
code_r0x0841ea26:
  cVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::empty(local_a8);
  if (cVar2 != '\x01') {
    local_38 = 0;
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::begin(local_128);
    while( true ) {
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::end(local_48);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128,
                         (_Rb_tree_iterator *)local_48);
      if (cVar2 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
      uVar11 = local_38;
      if ((*(int *)(iVar10 + 4) < 1) || (0x13 < local_38)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (bVar14) {
        puVar5 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                           ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
        *(undefined4 *)(local_40 + (uVar11 + 0xccc) * 4 + 10) = *puVar5;
        local_38 = local_38 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
    }
  }
  local_30 = *(int *)(local_40 + 0x794);
  *(uint *)(local_40 + 0x1018) = *(uint *)(local_44 + 8);
  cVar2 = SelectLetter(this,local_3c,param_2,*(uint *)local_44,*(uint *)(local_44 + 0xc),local_40);
  if (cVar2 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_MailBox_Req_List::dispatch(int, int, Stream*)",
               0x5438,"SelectLetter() error");
    *(undefined4 *)(local_40 + 0x1018) = 0;
  }
  if (*(int *)(local_40 + 0x794) == local_30) {
    if (*(int *)(local_40 + 0x794) == 0) {
      *(uint *)(local_40 + 0x79c) = *(uint *)(local_44 + 4);
    }
  }
  else {
    DoChangeMailList(local_40,local_1c4,*(uint *)(local_44 + 4));
  }
  *(undefined4 *)(local_40 + 0x7a0) = 0;
  if (local_1c4[0] != 0) {
    pcVar6 = local_1298;
    for (iVar10 = 0x400; iVar10 != 0; iVar10 = iVar10 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar15 * -2 + 1) * 4;
    }
    pcVar6 = &local_149;
    uVar11 = 0x19;
    bVar14 = ((uint)pcVar6 & 1) != 0;
    if (bVar14) {
      local_149 = '\0';
      pcVar6 = local_148;
      uVar11 = 0x18;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar11 = uVar11 - 2;
    }
    uVar12 = 0;
    do {
      pcVar1 = pcVar6 + uVar12;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar12 = uVar12 + 4;
    } while (uVar12 < (uVar11 & 0xfffffffc));
    pcVar6 = pcVar6 + uVar12;
    if ((uVar11 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar14) {
      *pcVar6 = '\0';
    }
    local_150 = 0;
    getList2inQuery(local_1c4,local_1298);
    MySQL::set_query(local_3c,
                     "seLect ui_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ipg_agency_no,jewel_socket from user_items where charac_no=%d and ui_id %s"
                     ,*(uint *)local_44,local_1298);
    MySQL::exec(local_3c,true);
    uVar7 = MySQL::get_n_rows(local_3c);
    *(undefined4 *)(local_40 + 0x7a0) = uVar7;
    local_20 = 0;
    while (uVar11 = MySQL::get_n_rows(local_3c), local_20 < uVar11) {
      cVar2 = MySQL::fetch(local_3c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_int(local_3c,0,&local_150);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_uint(local_3c,1,&local_130);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_uint(local_3c,2,&local_12c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_str(local_3c,3,&local_149,0x18);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_16e);
      cVar2 = MySQL::get_binary(local_3c,4,&local_16e,0x1e);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      *(uint *)(local_40 + local_20 * 0x47 + 0x7a8) = local_12c;
      *(int *)(local_40 + local_20 * 0x47 + 0x7a4) = local_150;
      *(uint *)(local_40 + local_20 * 0x47 + 0x7ac) = local_130;
      strncpy((char *)(local_40 + local_20 * 0x47 + 0x7b0),&local_149,0x18);
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7c9) = local_16e;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7cd) = local_16a;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d1) = local_166;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d5) = local_162;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d9) = local_15e;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7dd) = local_15a;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7e1) = local_156;
      *(undefined2 *)(local_40 + local_20 * 0x47 + 0x7e5) = local_152;
      local_20 = local_20 + 1;
    }
  }
  *(undefined4 *)(local_40 + 0xd30) = 0;
  if ((local_218[0] == 0) ||
     (cVar2 = setCreatureData(this,local_3c,*(uint *)local_44,local_218,local_40), cVar2 == '\x01'))
  {
    *(uint *)(local_40 + 0x3332) = *(uint *)local_44;
    *(uint *)(local_40 + 0x3336) = *(uint *)(local_44 + 0x10);
    pSVar8 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5492);
    CStreamGuard::CStreamGuard(local_b0,pSVar8,true);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0841efb7 to 0841f01c has its CatchHandler @ 0841f032 */
    CStreamGuard::operator<<(pCVar9,0x7f);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
    CStreamGuard::operator<<(pCVar9,param_2);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
    CStreamGuard::put_binary(pCVar9,local_40,0x338a);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
    uVar7 = 1;
                    /* try { // try from 0841f02b to 0841f02f has its CatchHandler @ 0841f04a */
    CStreamGuard::~CStreamGuard(local_b0);
  }
  else {
    uVar7 = 0;
  }
LAB_0841f068:
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  ~map(local_a8);
  return uVar7;
}
```

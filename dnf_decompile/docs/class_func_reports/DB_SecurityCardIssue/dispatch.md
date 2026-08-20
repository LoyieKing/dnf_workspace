# dispatch

`_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream`

`DB_SecurityCardIssue::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardIssue` | `0x0842af94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842af94  _ZN20DB_SecurityCardIssue8dispatchEiiP6Stream
#           DB_SecurityCardIssue::dispatch(int, int, Stream*)
# range [0x0842af94, 0x0842b40f]
0842af94 +0x000:  push   %ebp
0842af95 +0x001:  mov    %esp,%ebp
0842af97 +0x003:  push   %edi
0842af98 +0x004:  push   %esi
0842af99 +0x005:  push   %ebx
0842af9a +0x006:  sub    $0xcc,%esp
0842afa0 +0x00c:  mov    0x8(%ebp),%eax
0842afa3 +0x00f:  mov    0x14(%ebp),%edx
0842afa6 +0x012:  mov    %edx,0xc(%esp)
0842afaa +0x016:  mov    0x10(%ebp),%edx
0842afad +0x019:  mov    %edx,0x8(%esp)
0842afb1 +0x01d:  mov    0xc(%ebp),%edx
0842afb4 +0x020:  mov    %edx,0x4(%esp)
0842afb8 +0x024:  mov    %eax,(%esp)
0842afbb +0x027:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0842afc0 +0x02c:  xor    $0x1,%eax
0842afc3 +0x02f:  test   %al,%al
0842afc5 +0x031:  je     0842afd1 <+0x3d>
0842afc7 +0x033:  mov    $0x0,%eax
0842afcc +0x038:  jmp    0842b405 <+0x471>
0842afd1 +0x03d:  mov    0x14(%ebp),%eax
0842afd4 +0x040:  mov    %eax,(%esp)
0842afd7 +0x043:  call   084525b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x51ca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x51ca
0842afdc +0x048:  mov    %eax,-0x24(%ebp)
0842afdf +0x04b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842afe4 +0x050:  movl   $0x0,0x8(%esp)
0842afec +0x058:  movl   $0x6,0x4(%esp)
0842aff4 +0x060:  mov    %eax,(%esp)
0842aff7 +0x063:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842affc +0x068:  mov    %eax,-0x20(%ebp)
0842afff +0x06b:  mov    -0x24(%ebp),%eax
0842b002 +0x06e:  add    $0x63,%eax
0842b005 +0x071:  mov    %eax,0x8(%esp)
0842b009 +0x075:  movl   $"seLect apply_flag from member_security_card where phone='%s' and apply_flag=1",0x4(%esp)
0842b011 +0x07d:  mov    -0x20(%ebp),%eax
0842b014 +0x080:  mov    %eax,(%esp)
0842b017 +0x083:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b01c +0x088:  movl   $0x1,0x4(%esp)
0842b024 +0x090:  mov    -0x20(%ebp),%eax
0842b027 +0x093:  mov    %eax,(%esp)
0842b02a +0x096:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b02f +0x09b:  xor    $0x1,%eax
0842b032 +0x09e:  test   %al,%al
0842b034 +0x0a0:  jne    0842b046 <+0xb2>
0842b036 +0x0a2:  mov    -0x20(%ebp),%eax
0842b039 +0x0a5:  mov    %eax,(%esp)
0842b03c +0x0a8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842b041 +0x0ad:  cmp    $0x4,%eax
0842b044 +0x0b0:  jbe    0842b04d <+0xb9>
0842b046 +0x0b2:  mov    $0x1,%eax
0842b04b +0x0b7:  jmp    0842b052 <+0xbe>
0842b04d +0x0b9:  mov    $0x0,%eax
0842b052 +0x0be:  test   %al,%al
0842b054 +0x0c0:  je     0842b082 <+0xee>
0842b056 +0x0c2:  movl   $0x4,(%esp)
0842b05d +0x0c9:  call   08725800 <__cxa_allocate_exception>
0842b062 +0x0ce:  mov    %eax,%edx
0842b064 +0x0d0:  movl   $0x77,(%edx)
0842b06a +0x0d6:  movl   $0x0,0x8(%esp)
0842b072 +0x0de:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842b07a +0x0e6:  mov    %eax,(%esp)
0842b07d +0x0e9:  call   08724c50 <__cxa_throw>
0842b082 +0x0ee:  mov    -0x24(%ebp),%eax
0842b085 +0x0f1:  mov    (%eax),%eax
0842b087 +0x0f3:  movl   $0x0,0x4(%esp)
0842b08f +0x0fb:  mov    %eax,(%esp)
0842b092 +0x0fe:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b097 +0x103:  mov    %eax,0x8(%esp)
0842b09b +0x107:  movl   $"seLect re_issue_cnt,unix_timestamp(last_issue_time) from member_security_card where m_id=%s",0x4(%esp)
0842b0a3 +0x10f:  mov    -0x20(%ebp),%eax
0842b0a6 +0x112:  mov    %eax,(%esp)
0842b0a9 +0x115:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b0ae +0x11a:  movl   $0x1,0x4(%esp)
0842b0b6 +0x122:  mov    -0x20(%ebp),%eax
0842b0b9 +0x125:  mov    %eax,(%esp)
0842b0bc +0x128:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b0c1 +0x12d:  xor    $0x1,%eax
0842b0c4 +0x130:  test   %al,%al
0842b0c6 +0x132:  je     0842b0f4 <+0x160>
0842b0c8 +0x134:  movl   $0x4,(%esp)
0842b0cf +0x13b:  call   08725800 <__cxa_allocate_exception>
0842b0d4 +0x140:  mov    %eax,%edx
0842b0d6 +0x142:  movl   $0x1,(%edx)
0842b0dc +0x148:  movl   $0x0,0x8(%esp)
0842b0e4 +0x150:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842b0ec +0x158:  mov    %eax,(%esp)
0842b0ef +0x15b:  call   08724c50 <__cxa_throw>
0842b0f4 +0x160:  movl   $0x0,-0x29(%ebp)
0842b0fb +0x167:  movb   $0x0,-0x25(%ebp)
0842b0ff +0x16b:  lea    -0x29(%ebp),%eax
0842b102 +0x16e:  mov    %eax,(%esp)
0842b105 +0x171:  call   086b216d <_Z28generateSecurityCardQuestionPc>  ; generateSecurityCardQuestion(char*)
0842b10a +0x176:  mov    -0x24(%ebp),%eax
0842b10d +0x179:  lea    0x5e(%eax),%edx
0842b110 +0x17c:  movl   $0x5,0x8(%esp)
0842b118 +0x184:  lea    -0x29(%ebp),%eax
0842b11b +0x187:  mov    %eax,0x4(%esp)
0842b11f +0x18b:  mov    %edx,(%esp)
0842b122 +0x18e:  call   0807d8d0 <_init+0x1c8>
0842b127 +0x193:  mov    -0x20(%ebp),%eax
0842b12a +0x196:  mov    %eax,(%esp)
0842b12d +0x199:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842b132 +0x19e:  test   %eax,%eax
0842b134 +0x1a0:  sete   %al
0842b137 +0x1a3:  test   %al,%al
0842b139 +0x1a5:  je     0842b1ba <+0x226>
0842b13b +0x1a7:  mov    -0x24(%ebp),%eax
0842b13e +0x1aa:  add    $0x37,%eax
0842b141 +0x1ad:  mov    %eax,-0x9c(%ebp)
0842b147 +0x1b3:  mov    -0x24(%ebp),%eax
0842b14a +0x1b6:  lea    0x4(%eax),%edi
0842b14d +0x1b9:  mov    -0x24(%ebp),%eax
0842b150 +0x1bc:  lea    0x31(%eax),%esi
0842b153 +0x1bf:  mov    -0x24(%ebp),%eax
0842b156 +0x1c2:  lea    0x63(%eax),%ebx
0842b159 +0x1c5:  mov    -0x24(%ebp),%eax
0842b15c +0x1c8:  mov    (%eax),%eax
0842b15e +0x1ca:  movl   $0x0,0x4(%esp)
0842b166 +0x1d2:  mov    %eax,(%esp)
0842b169 +0x1d5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b16e +0x1da:  lea    -0x29(%ebp),%edx
0842b171 +0x1dd:  mov    %edx,0x1c(%esp)
0842b175 +0x1e1:  mov    -0x9c(%ebp),%edx
0842b17b +0x1e7:  mov    %edx,0x18(%esp)
0842b17f +0x1eb:  mov    %edi,0x14(%esp)
0842b183 +0x1ef:  mov    %esi,0x10(%esp)
0842b187 +0x1f3:  mov    %ebx,0xc(%esp)
0842b18b +0x1f7:  mov    %eax,0x8(%esp)
0842b18f +0x1fb:  movl   $"inSert into member_security_card(m_id,occ_time,phone,cert_key,server_key,card,fail_cnt,re_issue_cnt,last_issue_time,validity_time,apply_flag,q_pos) values(%s,now(),'%s','%s','%s','%s',0,0,now(),0,0,'%s')",0x4(%esp)
0842b197 +0x203:  mov    -0x20(%ebp),%eax
0842b19a +0x206:  mov    %eax,(%esp)
0842b19d +0x209:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b1a2 +0x20e:  movl   $0x1,0x4(%esp)
0842b1aa +0x216:  mov    -0x20(%ebp),%eax
0842b1ad +0x219:  mov    %eax,(%esp)
0842b1b0 +0x21c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b1b5 +0x221:  jmp    0842b339 <+0x3a5>
0842b1ba +0x226:  movl   $0x0,-0x30(%ebp)
0842b1c1 +0x22d:  movl   $0x0,-0x34(%ebp)
0842b1c8 +0x234:  mov    -0x20(%ebp),%eax
0842b1cb +0x237:  mov    %eax,(%esp)
0842b1ce +0x23a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842b1d3 +0x23f:  xor    $0x1,%eax
0842b1d6 +0x242:  test   %al,%al
0842b1d8 +0x244:  je     0842b206 <+0x272>
0842b1da +0x246:  movl   $0x4,(%esp)
0842b1e1 +0x24d:  call   08725800 <__cxa_allocate_exception>
0842b1e6 +0x252:  mov    %eax,%edx
0842b1e8 +0x254:  movl   $0x1,(%edx)
0842b1ee +0x25a:  movl   $0x0,0x8(%esp)
0842b1f6 +0x262:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842b1fe +0x26a:  mov    %eax,(%esp)
0842b201 +0x26d:  call   08724c50 <__cxa_throw>
0842b206 +0x272:  lea    -0x30(%ebp),%eax
0842b209 +0x275:  mov    %eax,0x8(%esp)
0842b20d +0x279:  movl   $0x0,0x4(%esp)
0842b215 +0x281:  mov    -0x20(%ebp),%eax
0842b218 +0x284:  mov    %eax,(%esp)
0842b21b +0x287:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842b220 +0x28c:  lea    -0x34(%ebp),%eax
0842b223 +0x28f:  mov    %eax,0x8(%esp)
0842b227 +0x293:  movl   $0x1,0x4(%esp)
0842b22f +0x29b:  mov    -0x20(%ebp),%eax
0842b232 +0x29e:  mov    %eax,(%esp)
0842b235 +0x2a1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842b23a +0x2a6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0842b241 +0x2ad:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842b246 +0x2b2:  mov    %eax,-0x38(%ebp)
0842b249 +0x2b5:  mov    -0x34(%ebp),%eax
0842b24c +0x2b8:  mov    %eax,-0x3c(%ebp)
0842b24f +0x2bb:  lea    -0x68(%ebp),%eax
0842b252 +0x2be:  mov    %eax,0x4(%esp)
0842b256 +0x2c2:  lea    -0x3c(%ebp),%eax
0842b259 +0x2c5:  mov    %eax,(%esp)
0842b25c +0x2c8:  call   0807e360 <_init+0xc58>
0842b261 +0x2cd:  lea    -0x94(%ebp),%eax
0842b267 +0x2d3:  mov    %eax,0x4(%esp)
0842b26b +0x2d7:  lea    -0x38(%ebp),%eax
0842b26e +0x2da:  mov    %eax,(%esp)
0842b271 +0x2dd:  call   0807e360 <_init+0xc58>
0842b276 +0x2e2:  mov    -0x4c(%ebp),%edx
0842b279 +0x2e5:  mov    -0x78(%ebp),%eax
0842b27c +0x2e8:  cmp    %eax,%edx
0842b27e +0x2ea:  jne    0842b2bd <+0x329>
0842b280 +0x2ec:  mov    -0x30(%ebp),%eax
0842b283 +0x2ef:  add    $0x1,%eax
0842b286 +0x2f2:  mov    %eax,-0x30(%ebp)
0842b289 +0x2f5:  mov    -0x30(%ebp),%eax
0842b28c +0x2f8:  cmp    $0x3,%eax
0842b28f +0x2fb:  jbe    0842b2c4 <+0x330>
0842b291 +0x2fd:  movl   $0x4,(%esp)
0842b298 +0x304:  call   08725800 <__cxa_allocate_exception>
0842b29d +0x309:  mov    %eax,%edx
0842b29f +0x30b:  movl   $0x78,(%edx)
0842b2a5 +0x311:  movl   $0x0,0x8(%esp)
0842b2ad +0x319:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842b2b5 +0x321:  mov    %eax,(%esp)
0842b2b8 +0x324:  call   08724c50 <__cxa_throw>
0842b2bd +0x329:  movl   $0x0,-0x30(%ebp)
0842b2c4 +0x330:  mov    -0x24(%ebp),%eax
0842b2c7 +0x333:  mov    (%eax),%eax
0842b2c9 +0x335:  movl   $0x0,0x4(%esp)
0842b2d1 +0x33d:  mov    %eax,(%esp)
0842b2d4 +0x340:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b2d9 +0x345:  mov    -0x30(%ebp),%edx
0842b2dc +0x348:  mov    -0x24(%ebp),%ecx
0842b2df +0x34b:  lea    0x37(%ecx),%edi
0842b2e2 +0x34e:  mov    -0x24(%ebp),%ecx
0842b2e5 +0x351:  lea    0x4(%ecx),%esi
0842b2e8 +0x354:  mov    -0x24(%ebp),%ecx
0842b2eb +0x357:  lea    0x31(%ecx),%ebx
0842b2ee +0x35a:  mov    -0x24(%ebp),%ecx
0842b2f1 +0x35d:  add    $0x63,%ecx
0842b2f4 +0x360:  mov    %eax,0x20(%esp)
0842b2f8 +0x364:  lea    -0x29(%ebp),%eax
0842b2fb +0x367:  mov    %eax,0x1c(%esp)
0842b2ff +0x36b:  mov    %edx,0x18(%esp)
0842b303 +0x36f:  mov    %edi,0x14(%esp)
0842b307 +0x373:  mov    %esi,0x10(%esp)
0842b30b +0x377:  mov    %ebx,0xc(%esp)
0842b30f +0x37b:  mov    %ecx,0x8(%esp)
0842b313 +0x37f:  movl   $"upDate member_security_card set phone='%s',cert_key='%s',server_key='%s',card='%s',fail_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=0,q_pos='%s' where m_id=%s",0x4(%esp)
0842b31b +0x387:  mov    -0x20(%ebp),%eax
0842b31e +0x38a:  mov    %eax,(%esp)
0842b321 +0x38d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b326 +0x392:  movl   $0x1,0x4(%esp)
0842b32e +0x39a:  mov    -0x20(%ebp),%eax
0842b331 +0x39d:  mov    %eax,(%esp)
0842b334 +0x3a0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b339 +0x3a5:  mov    -0x24(%ebp),%eax
0842b33c +0x3a8:  mov    (%eax),%eax
0842b33e +0x3aa:  mov    %eax,0x4(%esp)
0842b342 +0x3ae:  mov    -0x20(%ebp),%eax
0842b345 +0x3b1:  mov    %eax,(%esp)
0842b348 +0x3b4:  call   0842af12 <_Z19turnOffSecurityFlagP5MySQLj>  ; turnOffSecurityFlag(MySQL*, unsigned int)
0842b34d +0x3b9:  mov    -0x24(%ebp),%eax
0842b350 +0x3bc:  lea    0x5e(%eax),%ebx
0842b353 +0x3bf:  mov    -0x24(%ebp),%eax
0842b356 +0x3c2:  lea    0x37(%eax),%ecx
0842b359 +0x3c5:  mov    -0x24(%ebp),%eax
0842b35c +0x3c8:  lea    0x4(%eax),%edx
0842b35f +0x3cb:  mov    -0x24(%ebp),%eax
0842b362 +0x3ce:  add    $0x25,%eax
0842b365 +0x3d1:  movl   $0x0,0x18(%esp)
0842b36d +0x3d9:  mov    %ebx,0x14(%esp)
0842b371 +0x3dd:  mov    %ecx,0x10(%esp)
0842b375 +0x3e1:  mov    %edx,0xc(%esp)
0842b379 +0x3e5:  mov    %eax,0x8(%esp)
0842b37d +0x3e9:  mov    0x10(%ebp),%eax
0842b380 +0x3ec:  mov    %eax,0x4(%esp)
0842b384 +0x3f0:  mov    0x8(%ebp),%eax
0842b387 +0x3f3:  mov    %eax,(%esp)
0842b38a +0x3f6:  call   0842b410 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR>  ; DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*, ENUM_ERROR)
0842b38f +0x3fb:  jmp    0842b400 <+0x46c>
0842b391 +0x3fd:  cmp    $0x1,%edx
0842b394 +0x400:  je     0842b39e <+0x40a>
0842b396 +0x402:  mov    %eax,(%esp)
0842b399 +0x405:  call   08ae3750 <_Unwind_Resume>
0842b39e +0x40a:  mov    %eax,(%esp)
0842b3a1 +0x40d:  call   08725ce0 <__cxa_begin_catch>
0842b3a6 +0x412:  mov    (%eax),%eax
0842b3a8 +0x414:  mov    %eax,-0x1c(%ebp)
0842b3ab +0x417:  mov    -0x1c(%ebp),%eax
0842b3ae +0x41a:  mov    %eax,0x18(%esp)
0842b3b2 +0x41e:  movl   $0x0,0x14(%esp)
0842b3ba +0x426:  movl   $0x0,0x10(%esp)
0842b3c2 +0x42e:  movl   $0x0,0xc(%esp)
0842b3ca +0x436:  movl   $0x0,0x8(%esp)
0842b3d2 +0x43e:  mov    0x10(%ebp),%eax
0842b3d5 +0x441:  mov    %eax,0x4(%esp)
0842b3d9 +0x445:  mov    0x8(%ebp),%eax
0842b3dc +0x448:  mov    %eax,(%esp)
0842b3df +0x44b:  call   0842b410 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR>  ; DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*, ENUM_ERROR)
0842b3e4 +0x450:  jmp    0842b3fb <+0x467>
0842b3e6 +0x452:  mov    %edx,%ebx
0842b3e8 +0x454:  mov    %eax,%esi
0842b3ea +0x456:  call   08725c30 <__cxa_end_catch>
0842b3ef +0x45b:  mov    %esi,%eax
0842b3f1 +0x45d:  mov    %ebx,%edx
0842b3f3 +0x45f:  mov    %eax,(%esp)
0842b3f6 +0x462:  call   08ae3750 <_Unwind_Resume>
0842b3fb +0x467:  call   08725c30 <__cxa_end_catch>
0842b400 +0x46c:  mov    $0x1,%eax
0842b405 +0x471:  add    $0xcc,%esp
0842b40b +0x477:  pop    %ebx
0842b40c +0x478:  pop    %esi
0842b40d +0x479:  pop    %edi
0842b40e +0x47a:  pop    %ebp
0842b40f +0x47b:  ret
```

## 反编译 C

```c
// DB_SecurityCardIssue::dispatch @ 0x842af94

/* DB_SecurityCardIssue::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardIssue::dispatch(DB_SecurityCardIssue *this,int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_ISSUE *pSVar1;
  SIG_SECURITY_CARD_ISSUE *pSVar2;
  SIG_SECURITY_CARD_ISSUE *pSVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  SIG_SECURITY_CARD_ISSUE *pSVar10;
  Stream *pSVar11;
  tm local_98;
  tm local_6c;
  uint local_40;
  time_t local_3c;
  uint local_38;
  uint local_34;
  char local_2d [5];
  SIG_SECURITY_CARD_ISSUE *local_28;
  MySQL *local_24;
  
  pSVar11 = param_3;
  cVar5 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar5 != '\x01') {
    return 0;
  }
  local_28 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ISSUE>(param_3);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0,pSVar11);
                    /* try { // try from 0842b017 to 0842b38e has its CatchHandler @ 0842b391 */
  MySQL::set_query(local_24,
                   "seLect apply_flag from member_security_card where phone=\'%s\' and apply_flag=1"
                   ,local_28 + 99);
  cVar5 = MySQL::exec(local_24,true);
  if ((cVar5 == '\x01') && (uVar6 = MySQL::get_n_rows(local_24), uVar6 < 5)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    uVar8 = NumberToString(*(uint *)local_28,0);
    MySQL::set_query(local_24,
                     "seLect re_issue_cnt,unix_timestamp(last_issue_time) from member_security_card where m_id=%s"
                     ,uVar8);
    cVar5 = MySQL::exec(local_24,true);
    if (cVar5 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    local_2d[0] = '\0';
    local_2d[1] = '\0';
    local_2d[2] = '\0';
    local_2d[3] = '\0';
    local_2d[4] = 0;
    generateSecurityCardQuestion(local_2d);
    strncpy((char *)(local_28 + 0x5e),local_2d,5);
    iVar9 = MySQL::get_n_rows(local_24);
    if (iVar9 == 0) {
      pSVar10 = local_28 + 0x37;
      pSVar1 = local_28 + 4;
      pSVar2 = local_28 + 0x31;
      pSVar3 = local_28 + 99;
      uVar8 = NumberToString(*(uint *)local_28,0);
      MySQL::set_query(local_24,
                       "inSert into member_security_card(m_id,occ_time,phone,cert_key,server_key,card,fail_cnt,re_issue_cnt,last_issue_time,validity_time,apply_flag,q_pos) values(%s,now(),\'%s\',\'%s\',\'%s\',\'%s\',0,0,now(),0,0,\'%s\')"
                       ,uVar8,pSVar3,pSVar2,pSVar1,pSVar10,local_2d);
      MySQL::exec(local_24,true);
    }
    else {
      local_34 = 0;
      local_38 = 0;
      cVar5 = MySQL::fetch(local_24);
      if (cVar5 != '\x01') {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      MySQL::get_uint(local_24,0,&local_34);
      MySQL::get_uint(local_24,1,&local_38);
      local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_40 = local_38;
      localtime_r((time_t *)&local_40,&local_6c);
      localtime_r(&local_3c,&local_98);
      if (local_6c.tm_yday == local_98.tm_yday) {
        local_34 = local_34 + 1;
        if (3 < local_34) {
          puVar7 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar7 = 0x78;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
        }
      }
      else {
        local_34 = 0;
      }
      uVar8 = NumberToString(*(uint *)local_28,0);
      MySQL::set_query(local_24,
                       "upDate member_security_card set phone=\'%s\',cert_key=\'%s\',server_key=\'%s\',card=\'%s\',fail_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=0,q_pos=\'%s\' where m_id=%s"
                       ,local_28 + 99,local_28 + 0x31,local_28 + 4,local_28 + 0x37,local_34,local_2d
                       ,uVar8);
      MySQL::exec(local_24,true);
    }
    turnOffSecurityFlag(local_24,*(uint *)local_28);
    _sendResult(this,param_2,local_28 + 0x25,local_28 + 4,local_28 + 0x37,local_28 + 0x5e,0);
    return 1;
  }
  puVar7 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar7 = 0x77;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
}
```

# SaveInven

`_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY`

`DB_SaveInven::SaveInven(SIG_SAVE_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416cfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416cfa  _ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY
#           DB_SaveInven::SaveInven(SIG_SAVE_INVENTORY*)
# range [0x08416cfa, 0x08417203]
08416cfa +0x000:  push   %ebp
08416cfb +0x001:  mov    %esp,%ebp
08416cfd +0x003:  push   %edi
08416cfe +0x004:  push   %esi
08416cff +0x005:  push   %ebx
08416d00 +0x006:  sub    $0x686c,%esp
08416d06 +0x00c:  lea    -0x3ba(%ebp),%edx
08416d0c +0x012:  mov    $0x37a,%ebx
08416d11 +0x017:  mov    $0x0,%eax
08416d16 +0x01c:  mov    %edx,%ecx
08416d18 +0x01e:  and    $0x2,%ecx
08416d1b +0x021:  test   %ecx,%ecx
08416d1d +0x023:  je     08416d28 <+0x2e>
08416d1f +0x025:  mov    %ax,(%edx)
08416d22 +0x028:  add    $0x2,%edx
08416d25 +0x02b:  sub    $0x2,%ebx
08416d28 +0x02e:  mov    %ebx,%ecx
08416d2a +0x030:  shr    $0x2,%ecx
08416d2d +0x033:  mov    %edx,%edi
08416d2f +0x035:  rep stos %eax,%es:(%edi)
08416d31 +0x037:  mov    %edi,%edx
08416d33 +0x039:  mov    %ebx,%ecx
08416d35 +0x03b:  and    $0x2,%ecx
08416d38 +0x03e:  test   %ecx,%ecx
08416d3a +0x040:  je     08416d42 <+0x48>
08416d3c +0x042:  mov    %ax,(%edx)
08416d3f +0x045:  add    $0x2,%edx
08416d42 +0x048:  mov    %ebx,%ecx
08416d44 +0x04a:  and    $0x1,%ecx
08416d47 +0x04d:  test   %ecx,%ecx
08416d49 +0x04f:  je     08416d50 <+0x56>
08416d4b +0x051:  mov    %al,(%edx)
08416d4d +0x053:  add    $0x1,%edx
08416d50 +0x056:  lea    -0x682e(%ebp),%eax
08416d56 +0x05c:  mov    $0x473e,%edx
08416d5b +0x061:  mov    %edx,0x8(%esp)
08416d5f +0x065:  movl   $0x0,0x4(%esp)
08416d67 +0x06d:  mov    %eax,(%esp)
08416d6a +0x070:  call   0807dcc0 <_init+0x5b8>
08416d6f +0x075:  lea    -0x20f0(%ebp),%edx
08416d75 +0x07b:  mov    $0x0,%eax
08416d7a +0x080:  mov    $0x74d,%ecx
08416d7f +0x085:  mov    %edx,%edi
08416d81 +0x087:  rep stos %eax,%es:(%edi)
08416d83 +0x089:  mov    %edi,%edx
08416d85 +0x08b:  mov    %ax,(%edx)
08416d88 +0x08e:  add    $0x2,%edx
08416d8b +0x091:  movl   $0x37a,-0x38(%ebp)
08416d92 +0x098:  movl   $0x473e,-0x3c(%ebp)
08416d99 +0x09f:  movl   $0x1d36,-0x40(%ebp)
08416da0 +0x0a6:  mov    0xc(%ebp),%eax
08416da3 +0x0a9:  movzbl 0x8(%eax),%eax
08416da7 +0x0ad:  test   %al,%al
08416da9 +0x0af:  je     08416dba <+0xc0>
08416dab +0x0b1:  mov    0xc(%ebp),%eax
08416dae +0x0b4:  movzbl 0x8(%eax),%eax
08416db2 +0x0b8:  cmp    $0x2,%al
08416db4 +0x0ba:  jne    08416f55 <+0x25b>
08416dba +0x0c0:  mov    0xc(%ebp),%eax
08416dbd +0x0c3:  add    $0x19,%eax
08416dc0 +0x0c6:  movl   $0x2dc,0xc(%esp)
08416dc8 +0x0ce:  mov    %eax,0x8(%esp)
08416dcc +0x0d2:  lea    -0x38(%ebp),%eax
08416dcf +0x0d5:  mov    %eax,0x4(%esp)
08416dd3 +0x0d9:  lea    -0x3ba(%ebp),%eax
08416dd9 +0x0df:  mov    %eax,(%esp)
08416ddc +0x0e2:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08416de1 +0x0e7:  xor    $0x1,%eax
08416de4 +0x0ea:  test   %al,%al
08416de6 +0x0ec:  je     08416e14 <+0x11a>
08416de8 +0x0ee:  movl   $0x4,(%esp)
08416def +0x0f5:  call   08725800 <__cxa_allocate_exception>
08416df4 +0x0fa:  mov    %eax,%edx
08416df6 +0x0fc:  movl   $0x4427,(%edx)
08416dfc +0x102:  movl   $0x0,0x8(%esp)
08416e04 +0x10a:  movl   $&_ZTIj,0x4(%esp)
08416e0c +0x112:  mov    %eax,(%esp)
08416e0f +0x115:  call   08724c50 <__cxa_throw>
08416e14 +0x11a:  mov    0xc(%ebp),%eax
08416e17 +0x11d:  add    $0x557,%eax
08416e1c +0x122:  movl   $0x3b55,0xc(%esp)
08416e24 +0x12a:  mov    %eax,0x8(%esp)
08416e28 +0x12e:  lea    -0x3c(%ebp),%eax
08416e2b +0x131:  mov    %eax,0x4(%esp)
08416e2f +0x135:  lea    -0x682e(%ebp),%eax
08416e35 +0x13b:  mov    %eax,(%esp)
08416e38 +0x13e:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08416e3d +0x143:  xor    $0x1,%eax
08416e40 +0x146:  test   %al,%al
08416e42 +0x148:  je     08416e70 <+0x176>
08416e44 +0x14a:  movl   $0x4,(%esp)
08416e4b +0x151:  call   08725800 <__cxa_allocate_exception>
08416e50 +0x156:  mov    %eax,%edx
08416e52 +0x158:  movl   $0x4429,(%edx)
08416e58 +0x15e:  movl   $0x0,0x8(%esp)
08416e60 +0x166:  movl   $&_ZTIj,0x4(%esp)
08416e68 +0x16e:  mov    %eax,(%esp)
08416e6b +0x171:  call   08724c50 <__cxa_throw>
08416e70 +0x176:  mov    0xc(%ebp),%eax
08416e73 +0x179:  add    $0x710b,%eax
08416e78 +0x17e:  movl   $0x184e,0xc(%esp)
08416e80 +0x186:  mov    %eax,0x8(%esp)
08416e84 +0x18a:  lea    -0x40(%ebp),%eax
08416e87 +0x18d:  mov    %eax,0x4(%esp)
08416e8b +0x191:  lea    -0x20f0(%ebp),%eax
08416e91 +0x197:  mov    %eax,(%esp)
08416e94 +0x19a:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08416e99 +0x19f:  xor    $0x1,%eax
08416e9c +0x1a2:  test   %al,%al
08416e9e +0x1a4:  je     08416f55 <+0x25b>
08416ea4 +0x1aa:  movl   $0x4,(%esp)
08416eab +0x1b1:  call   08725800 <__cxa_allocate_exception>
08416eb0 +0x1b6:  mov    %eax,%edx
08416eb2 +0x1b8:  movl   $0x4430,(%edx)
08416eb8 +0x1be:  movl   $0x0,0x8(%esp)
08416ec0 +0x1c6:  movl   $&_ZTIj,0x4(%esp)
08416ec8 +0x1ce:  mov    %eax,(%esp)
08416ecb +0x1d1:  call   08724c50 <__cxa_throw>
08416ed0 +0x1d6:  cmp    $0x1,%edx
08416ed3 +0x1d9:  je     08416edd <+0x1e3>
08416ed5 +0x1db:  mov    %eax,(%esp)
08416ed8 +0x1de:  call   08ae3750 <_Unwind_Resume>
08416edd +0x1e3:  mov    %eax,(%esp)
08416ee0 +0x1e6:  call   08725ce0 <__cxa_begin_catch>
08416ee5 +0x1eb:  mov    (%eax),%eax
08416ee7 +0x1ed:  mov    %eax,-0x1c(%ebp)
08416eea +0x1f0:  mov    0xc(%ebp),%eax
08416eed +0x1f3:  mov    0x4(%eax),%ebx
08416ef0 +0x1f6:  movl   $0x5,0xc(%esp)
08416ef8 +0x1fe:  movl   $0x4438,0x8(%esp)
08416f00 +0x206:  movl   $&_ZZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
08416f08 +0x20e:  lea    -0x34(%ebp),%eax
08416f0b +0x211:  mov    %eax,(%esp)
08416f0e +0x214:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08416f13 +0x219:  mov    -0x1c(%ebp),%eax
08416f16 +0x21c:  mov    %eax,0xc(%esp)
08416f1a +0x220:  mov    %ebx,0x8(%esp)
08416f1e +0x224:  movl   $"Compress failed. charac_no(%d)(%d)",0x4(%esp)
08416f26 +0x22c:  lea    -0x34(%ebp),%eax
08416f29 +0x22f:  mov    %eax,(%esp)
08416f2c +0x232:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08416f31 +0x237:  mov    $0x0,%ebx
08416f36 +0x23c:  call   08725c30 <__cxa_end_catch>
08416f3b +0x241:  jmp    084171f7 <+0x4fd>
08416f40 +0x246:  mov    %edx,%ebx
08416f42 +0x248:  mov    %eax,%esi
08416f44 +0x24a:  call   08725c30 <__cxa_end_catch>
08416f49 +0x24f:  mov    %esi,%eax
08416f4b +0x251:  mov    %ebx,%edx
08416f4d +0x253:  mov    %eax,(%esp)
08416f50 +0x256:  call   08ae3750 <_Unwind_Resume>
08416f55 +0x25b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08416f5a +0x260:  movl   $0x0,0x8(%esp)
08416f62 +0x268:  movl   $0x3,0x4(%esp)
08416f6a +0x270:  mov    %eax,(%esp)
08416f6d +0x273:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08416f72 +0x278:  mov    %eax,-0x20(%ebp)
08416f75 +0x27b:  mov    0xc(%ebp),%eax
08416f78 +0x27e:  movzbl 0x8(%eax),%eax
08416f7c +0x282:  test   %al,%al
08416f7e +0x284:  jne    08417064 <+0x36a>
08416f84 +0x28a:  mov    0xc(%ebp),%eax
08416f87 +0x28d:  mov    0x4(%eax),%ebx
08416f8a +0x290:  mov    -0x40(%ebp),%eax
08416f8d +0x293:  mov    %eax,0xc(%esp)
08416f91 +0x297:  lea    -0x20f0(%ebp),%eax
08416f97 +0x29d:  mov    %eax,0x8(%esp)
08416f9b +0x2a1:  movl   $0x2,0x4(%esp)
08416fa3 +0x2a9:  mov    -0x20(%ebp),%eax
08416fa6 +0x2ac:  mov    %eax,(%esp)
08416fa9 +0x2af:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416fae +0x2b4:  mov    %eax,%edi
08416fb0 +0x2b6:  mov    -0x3c(%ebp),%eax
08416fb3 +0x2b9:  mov    %eax,0xc(%esp)
08416fb7 +0x2bd:  lea    -0x682e(%ebp),%eax
08416fbd +0x2c3:  mov    %eax,0x8(%esp)
08416fc1 +0x2c7:  movl   $0x1,0x4(%esp)
08416fc9 +0x2cf:  mov    -0x20(%ebp),%eax
08416fcc +0x2d2:  mov    %eax,(%esp)
08416fcf +0x2d5:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416fd4 +0x2da:  mov    %eax,%esi
08416fd6 +0x2dc:  mov    -0x38(%ebp),%eax
08416fd9 +0x2df:  mov    %eax,0xc(%esp)
08416fdd +0x2e3:  lea    -0x3ba(%ebp),%eax
08416fe3 +0x2e9:  mov    %eax,0x8(%esp)
08416fe7 +0x2ed:  movl   $0x0,0x4(%esp)
08416fef +0x2f5:  mov    -0x20(%ebp),%eax
08416ff2 +0x2f8:  mov    %eax,(%esp)
08416ff5 +0x2fb:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416ffa +0x300:  mov    %eax,%ecx
08416ffc +0x302:  mov    0xc(%ebp),%eax
08416fff +0x305:  mov    0x15(%eax),%eax
08417002 +0x308:  mov    %eax,-0x6840(%ebp)
08417008 +0x30e:  mov    0xc(%ebp),%eax
0841700b +0x311:  mov    0x11(%eax),%eax
0841700e +0x314:  mov    %eax,-0x683c(%ebp)
08417014 +0x31a:  mov    0xc(%ebp),%eax
08417017 +0x31d:  mov    0xd(%eax),%edx
0841701a +0x320:  mov    0xc(%ebp),%eax
0841701d +0x323:  mov    0x9(%eax),%eax
08417020 +0x326:  mov    %ebx,0x24(%esp)
08417024 +0x32a:  mov    %edi,0x20(%esp)
08417028 +0x32e:  mov    %esi,0x1c(%esp)
0841702c +0x332:  mov    %ecx,0x18(%esp)
08417030 +0x336:  mov    -0x6840(%ebp),%ecx
08417036 +0x33c:  mov    %ecx,0x14(%esp)
0841703a +0x340:  mov    -0x683c(%ebp),%edi
08417040 +0x346:  mov    %edi,0x10(%esp)
08417044 +0x34a:  mov    %edx,0xc(%esp)
08417048 +0x34e:  mov    %eax,0x8(%esp)
0841704c +0x352:  movl   $"upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d,equipslot='%s',inventory='%s',creature='%s' where charac_no=%u",0x4(%esp)
08417054 +0x35a:  mov    -0x20(%ebp),%eax
08417057 +0x35d:  mov    %eax,(%esp)
0841705a +0x360:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841705f +0x365:  jmp    0841715c <+0x462>
08417064 +0x36a:  mov    0xc(%ebp),%eax
08417067 +0x36d:  movzbl 0x8(%eax),%eax
0841706b +0x371:  cmp    $0x1,%al
0841706d +0x373:  jne    084170b9 <+0x3bf>
0841706f +0x375:  mov    0xc(%ebp),%eax
08417072 +0x378:  mov    0x4(%eax),%esi
08417075 +0x37b:  mov    0xc(%ebp),%eax
08417078 +0x37e:  mov    0x15(%eax),%ebx
0841707b +0x381:  mov    0xc(%ebp),%eax
0841707e +0x384:  mov    0x11(%eax),%ecx
08417081 +0x387:  mov    0xc(%ebp),%eax
08417084 +0x38a:  mov    0xd(%eax),%edx
08417087 +0x38d:  mov    0xc(%ebp),%eax
0841708a +0x390:  mov    0x9(%eax),%eax
0841708d +0x393:  mov    %esi,0x18(%esp)
08417091 +0x397:  mov    %ebx,0x14(%esp)
08417095 +0x39b:  mov    %ecx,0x10(%esp)
08417099 +0x39f:  mov    %edx,0xc(%esp)
0841709d +0x3a3:  mov    %eax,0x8(%esp)
084170a1 +0x3a7:  movl   $"upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d  where charac_no=%u",0x4(%esp)
084170a9 +0x3af:  mov    -0x20(%ebp),%eax
084170ac +0x3b2:  mov    %eax,(%esp)
084170af +0x3b5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084170b4 +0x3ba:  jmp    0841715c <+0x462>
084170b9 +0x3bf:  mov    0xc(%ebp),%eax
084170bc +0x3c2:  mov    0x4(%eax),%edi
084170bf +0x3c5:  mov    -0x40(%ebp),%eax
084170c2 +0x3c8:  mov    %eax,0xc(%esp)
084170c6 +0x3cc:  lea    -0x20f0(%ebp),%eax
084170cc +0x3d2:  mov    %eax,0x8(%esp)
084170d0 +0x3d6:  movl   $0x2,0x4(%esp)
084170d8 +0x3de:  mov    -0x20(%ebp),%eax
084170db +0x3e1:  mov    %eax,(%esp)
084170de +0x3e4:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084170e3 +0x3e9:  mov    %eax,%esi
084170e5 +0x3eb:  mov    -0x3c(%ebp),%eax
084170e8 +0x3ee:  mov    %eax,0xc(%esp)
084170ec +0x3f2:  lea    -0x682e(%ebp),%eax
084170f2 +0x3f8:  mov    %eax,0x8(%esp)
084170f6 +0x3fc:  movl   $0x1,0x4(%esp)
084170fe +0x404:  mov    -0x20(%ebp),%eax
08417101 +0x407:  mov    %eax,(%esp)
08417104 +0x40a:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08417109 +0x40f:  mov    %eax,%ebx
0841710b +0x411:  mov    -0x38(%ebp),%eax
0841710e +0x414:  mov    %eax,0xc(%esp)
08417112 +0x418:  lea    -0x3ba(%ebp),%eax
08417118 +0x41e:  mov    %eax,0x8(%esp)
0841711c +0x422:  movl   $0x0,0x4(%esp)
08417124 +0x42a:  mov    -0x20(%ebp),%eax
08417127 +0x42d:  mov    %eax,(%esp)
0841712a +0x430:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0841712f +0x435:  mov    0xc(%ebp),%edx
08417132 +0x438:  mov    0x9(%edx),%edx
08417135 +0x43b:  mov    %edi,0x18(%esp)
08417139 +0x43f:  mov    %esi,0x14(%esp)
0841713d +0x443:  mov    %ebx,0x10(%esp)
08417141 +0x447:  mov    %eax,0xc(%esp)
08417145 +0x44b:  mov    %edx,0x8(%esp)
08417149 +0x44f:  movl   $"upDate inventory set money=%u,equipslot='%s',inventory='%s',creature='%s' where charac_no=%u",0x4(%esp)
08417151 +0x457:  mov    -0x20(%ebp),%eax
08417154 +0x45a:  mov    %eax,(%esp)
08417157 +0x45d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841715c +0x462:  movl   $0x1,0x4(%esp)
08417164 +0x46a:  mov    -0x20(%ebp),%eax
08417167 +0x46d:  mov    %eax,(%esp)
0841716a +0x470:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841716f +0x475:  mov    %al,-0x21(%ebp)
08417172 +0x478:  movzbl -0x21(%ebp),%eax
08417176 +0x47c:  xor    $0x1,%eax
08417179 +0x47f:  test   %al,%al
0841717b +0x481:  je     08417184 <+0x48a>
0841717d +0x483:  mov    $0x0,%ebx
08417182 +0x488:  jmp    084171f7 <+0x4fd>
08417184 +0x48a:  mov    0xc(%ebp),%eax
08417187 +0x48d:  mov    0xad95(%eax),%esi
0841718d +0x493:  mov    0xc(%ebp),%eax
08417190 +0x496:  mov    0xad95(%eax),%ebx
08417196 +0x49c:  mov    0xc(%ebp),%eax
08417199 +0x49f:  mov    (%eax),%eax
0841719b +0x4a1:  movl   $0x0,0x4(%esp)
084171a3 +0x4a9:  mov    %eax,(%esp)
084171a6 +0x4ac:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084171ab +0x4b1:  mov    %esi,0x10(%esp)
084171af +0x4b5:  mov    %ebx,0xc(%esp)
084171b3 +0x4b9:  mov    %eax,0x8(%esp)
084171b7 +0x4bd:  movl   $"inSert into member_avatar_coin (m_id , avatar_coin ) values (%s , %u) on duplicate key upDate avatar_coin = %u ",0x4(%esp)
084171bf +0x4c5:  mov    -0x20(%ebp),%eax
084171c2 +0x4c8:  mov    %eax,(%esp)
084171c5 +0x4cb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084171ca +0x4d0:  movl   $0x1,0x4(%esp)
084171d2 +0x4d8:  mov    -0x20(%ebp),%eax
084171d5 +0x4db:  mov    %eax,(%esp)
084171d8 +0x4de:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084171dd +0x4e3:  mov    %al,-0x21(%ebp)
084171e0 +0x4e6:  movzbl -0x21(%ebp),%eax
084171e4 +0x4ea:  xor    $0x1,%eax
084171e7 +0x4ed:  test   %al,%al
084171e9 +0x4ef:  je     084171f2 <+0x4f8>
084171eb +0x4f1:  mov    $0x0,%ebx
084171f0 +0x4f6:  jmp    084171f7 <+0x4fd>
084171f2 +0x4f8:  mov    $0x1,%ebx
084171f7 +0x4fd:  mov    %ebx,%eax
084171f9 +0x4ff:  add    $0x686c,%esp
084171ff +0x505:  pop    %ebx
08417200 +0x506:  pop    %esi
08417201 +0x507:  pop    %edi
08417202 +0x508:  pop    %ebp
08417203 +0x509:  ret
```

## 反编译 C

```c
// DB_SaveInven::SaveInven @ 0x8416cfa

/* WARNING: Removing unreachable block (ram,0x08416d4b) */
/* DB_SaveInven::SaveInven(SIG_SAVE_INVENTORY*) */

undefined4 __thiscall DB_SaveInven::SaveInven(DB_SaveInven *this,SIG_SAVE_INVENTORY *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  byte bVar12;
  char local_6832 [18238];
  char local_20f4 [7478];
  char local_3be [890];
  uint local_44;
  uint local_40;
  uint local_3c [5];
  char local_25;
  MySQL *local_24;
  
  bVar12 = 0;
  pcVar8 = local_3be;
  uVar9 = 0x37a;
  bVar11 = ((uint)pcVar8 & 2) != 0;
  if (bVar11) {
    local_3be[0] = '\0';
    local_3be[1] = '\0';
    pcVar8 = local_3be + 2;
    uVar9 = 0x378;
  }
  for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  if (!bVar11) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
  }
  memset(local_6832,0,0x473e);
  pcVar8 = local_20f4;
  for (iVar7 = 0x74d; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  local_3c[0] = 0x37a;
  local_40 = 0x473e;
  local_44 = 0x1d36;
  if ((param_1[8] == (SIG_SAVE_INVENTORY)0x0) || (param_1[8] == (SIG_SAVE_INVENTORY)0x2)) {
                    /* try { // try from 08416ddc to 08416ecf has its CatchHandler @ 08416ed0 */
    cVar1 = compress_zip(local_3be,local_3c,(char *)(param_1 + 0x19),0x2dc);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4427;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
    cVar1 = compress_zip(local_6832,&local_40,(char *)(param_1 + 0x557),0x3b55);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4429;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
    cVar1 = compress_zip(local_20f4,&local_44,(char *)(param_1 + 0x710b),0x184e);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4430;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_1[8] == (SIG_SAVE_INVENTORY)0x0) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    uVar3 = MySQL::blob_to_str(local_24,2,local_20f4,local_44);
    uVar4 = MySQL::blob_to_str(local_24,1,local_6832,local_40);
    uVar5 = MySQL::blob_to_str(local_24,0,local_3be,local_3c[0]);
    uVar10 = *(undefined4 *)(param_1 + 0x15);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d,equipslot=\'%s\',inventory=\'%s\',creature=\'%s\' where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
                     *(undefined4 *)(param_1 + 0x11),uVar10,uVar5,uVar4,uVar3,uVar6);
  }
  else if (param_1[8] == (SIG_SAVE_INVENTORY)0x1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = *(undefined4 *)(param_1 + 0x15);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d  where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
                     *(undefined4 *)(param_1 + 0x11),uVar10,uVar5);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = MySQL::blob_to_str(local_24,2,local_20f4,local_44);
    uVar6 = MySQL::blob_to_str(local_24,1,local_6832,local_40);
    uVar3 = MySQL::blob_to_str(local_24,0,local_3be,local_3c[0]);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,equipslot=\'%s\',inventory=\'%s\',creature=\'%s\' where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),uVar3,uVar6,uVar10,uVar5);
  }
  local_25 = MySQL::exec(local_24,true);
  if (local_25 == '\x01') {
    uVar6 = *(undefined4 *)(param_1 + 0xad95);
    uVar3 = *(undefined4 *)(param_1 + 0xad95);
    uVar4 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_24,
                     "inSert into member_avatar_coin (m_id , avatar_coin ) values (%s , %u) on duplicate key upDate avatar_coin = %u "
                     ,uVar4,uVar3,uVar6,uVar10,uVar5);
    cVar1 = MySQL::exec(local_24,true);
    if (cVar1 == '\x01') {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}
```

# dispatch

`_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream`

`DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertAutoPunishFirstUser` | `0x0842d6ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842d6ce  _ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream
#           DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*)
# range [0x0842d6ce, 0x0842dd7b]
0842d6ce +0x000:  push   %ebp
0842d6cf +0x001:  mov    %esp,%ebp
0842d6d1 +0x003:  push   %edi
0842d6d2 +0x004:  push   %esi
0842d6d3 +0x005:  push   %ebx
0842d6d4 +0x006:  sub    $0x1cc,%esp
0842d6da +0x00c:  movl   $0x0,-0x30(%ebp)
0842d6e1 +0x013:  mov    0x14(%ebp),%eax
0842d6e4 +0x016:  mov    %eax,(%esp)
0842d6e7 +0x019:  call   084527f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5408>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5408
0842d6ec +0x01e:  mov    %eax,-0x2c(%ebp)
0842d6ef +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842d6f4 +0x026:  movl   $0x0,0x8(%esp)
0842d6fc +0x02e:  movl   $0x6,0x4(%esp)
0842d704 +0x036:  mov    %eax,(%esp)
0842d707 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842d70c +0x03e:  mov    %eax,-0x28(%ebp)
0842d70f +0x041:  mov    -0x2c(%ebp),%eax
0842d712 +0x044:  movzwl 0x24(%eax),%eax
0842d716 +0x048:  movzwl %ax,%eax
0842d719 +0x04b:  mov    %eax,-0x198(%ebp)
0842d71f +0x051:  mov    -0x2c(%ebp),%eax
0842d722 +0x054:  mov    0x20(%eax),%eax
0842d725 +0x057:  mov    %eax,-0x194(%ebp)
0842d72b +0x05d:  mov    -0x2c(%ebp),%eax
0842d72e +0x060:  mov    0x1c(%eax),%edi
0842d731 +0x063:  mov    -0x2c(%ebp),%eax
0842d734 +0x066:  mov    0x18(%eax),%esi
0842d737 +0x069:  mov    -0x2c(%ebp),%eax
0842d73a +0x06c:  mov    0x14(%eax),%ebx
0842d73d +0x06f:  mov    -0x2c(%ebp),%eax
0842d740 +0x072:  add    $0x4,%eax
0842d743 +0x075:  mov    %eax,-0x190(%ebp)
0842d749 +0x07b:  mov    -0x2c(%ebp),%eax
0842d74c +0x07e:  mov    (%eax),%eax
0842d74e +0x080:  movl   $0x0,0x4(%esp)
0842d756 +0x088:  mov    %eax,(%esp)
0842d759 +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842d75e +0x090:  mov    -0x198(%ebp),%edx
0842d764 +0x096:  mov    %edx,0x20(%esp)
0842d768 +0x09a:  mov    -0x194(%ebp),%edx
0842d76e +0x0a0:  mov    %edx,0x1c(%esp)
0842d772 +0x0a4:  mov    %edi,0x18(%esp)
0842d776 +0x0a8:  mov    %esi,0x14(%esp)
0842d77a +0x0ac:  mov    %ebx,0x10(%esp)
0842d77e +0x0b0:  mov    -0x190(%ebp),%edi
0842d784 +0x0b6:  mov    %edi,0xc(%esp)
0842d788 +0x0ba:  mov    %eax,0x8(%esp)
0842d78c +0x0be:  movl   $"inSert into auto_punish_first_user(m_id,occ_time,ip,hack_type,cnt,hack_sub_type,hack_sub_cnt,punish_flag) values(%s,now(),'%s',%d,%d,%d,%d,%d)",0x4(%esp)
0842d794 +0x0c6:  mov    -0x28(%ebp),%eax
0842d797 +0x0c9:  mov    %eax,(%esp)
0842d79a +0x0cc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842d79f +0x0d1:  movl   $0x1,0x4(%esp)
0842d7a7 +0x0d9:  mov    -0x28(%ebp),%eax
0842d7aa +0x0dc:  mov    %eax,(%esp)
0842d7ad +0x0df:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842d7b2 +0x0e4:  xor    $0x1,%eax
0842d7b5 +0x0e7:  test   %al,%al
0842d7b7 +0x0e9:  je     0842d893 <+0x1c5>
0842d7bd +0x0ef:  mov    -0x2c(%ebp),%eax
0842d7c0 +0x0f2:  mov    0x1c(%eax),%eax
0842d7c3 +0x0f5:  mov    %eax,-0x18c(%ebp)
0842d7c9 +0x0fb:  mov    -0x2c(%ebp),%eax
0842d7cc +0x0fe:  mov    0x14(%eax),%edi
0842d7cf +0x101:  mov    -0x2c(%ebp),%eax
0842d7d2 +0x104:  mov    (%eax),%eax
0842d7d4 +0x106:  movl   $0x0,0x4(%esp)
0842d7dc +0x10e:  mov    %eax,(%esp)
0842d7df +0x111:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842d7e4 +0x116:  mov    %eax,%edx
0842d7e6 +0x118:  mov    -0x2c(%ebp),%eax
0842d7e9 +0x11b:  movzwl 0x24(%eax),%eax
0842d7ed +0x11f:  movzwl %ax,%esi
0842d7f0 +0x122:  mov    -0x2c(%ebp),%eax
0842d7f3 +0x125:  mov    0x20(%eax),%ebx
0842d7f6 +0x128:  mov    -0x2c(%ebp),%eax
0842d7f9 +0x12b:  mov    0x18(%eax),%ecx
0842d7fc +0x12e:  mov    -0x2c(%ebp),%eax
0842d7ff +0x131:  add    $0x4,%eax
0842d802 +0x134:  mov    %eax,-0x19c(%ebp)
0842d808 +0x13a:  mov    -0x18c(%ebp),%eax
0842d80e +0x140:  mov    %eax,0x20(%esp)
0842d812 +0x144:  mov    %edi,0x1c(%esp)
0842d816 +0x148:  mov    %edx,0x18(%esp)
0842d81a +0x14c:  mov    %esi,0x14(%esp)
0842d81e +0x150:  mov    %ebx,0x10(%esp)
0842d822 +0x154:  mov    %ecx,0xc(%esp)
0842d826 +0x158:  mov    -0x19c(%ebp),%edx
0842d82c +0x15e:  mov    %edx,0x8(%esp)
0842d830 +0x162:  movl   $"upDate auto_punish_first_user set occ_time=now(),ip='%s',cnt=%d, hack_sub_cnt=%d, punish_flag=%d where m_id=%s and hack_type=%d and hack_sub_type=%d",0x4(%esp)
0842d838 +0x16a:  mov    -0x28(%ebp),%eax
0842d83b +0x16d:  mov    %eax,(%esp)
0842d83e +0x170:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842d843 +0x175:  movl   $0x1,0x4(%esp)
0842d84b +0x17d:  mov    -0x28(%ebp),%eax
0842d84e +0x180:  mov    %eax,(%esp)
0842d851 +0x183:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842d856 +0x188:  xor    $0x1,%eax
0842d859 +0x18b:  test   %al,%al
0842d85b +0x18d:  je     0842d893 <+0x1c5>
0842d85d +0x18f:  movl   $0x0,0xc(%esp)
0842d865 +0x197:  movl   $0x70fb,0x8(%esp)
0842d86d +0x19f:  movl   $&_ZZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842d875 +0x1a7:  lea    -0x40(%ebp),%eax
0842d878 +0x1aa:  mov    %eax,(%esp)
0842d87b +0x1ad:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842d880 +0x1b2:  movl   $"upDate auto_punish_first_user Fail",0x4(%esp)
0842d888 +0x1ba:  lea    -0x40(%ebp),%eax
0842d88b +0x1bd:  mov    %eax,(%esp)
0842d88e +0x1c0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842d893 +0x1c5:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842d898 +0x1ca:  movl   $0x0,0x8(%esp)
0842d8a0 +0x1d2:  movl   $0x1,0x4(%esp)
0842d8a8 +0x1da:  mov    %eax,(%esp)
0842d8ab +0x1dd:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842d8b0 +0x1e2:  mov    %eax,-0x24(%ebp)
0842d8b3 +0x1e5:  mov    -0x2c(%ebp),%eax
0842d8b6 +0x1e8:  movzwl 0x24(%eax),%eax
0842d8ba +0x1ec:  cmp    $0x2,%ax
0842d8be +0x1f0:  jne    0842d8ca <+0x1fc>
0842d8c0 +0x1f2:  mov    $0x1,%eax
0842d8c5 +0x1f7:  jmp    0842dd71 <+0x6a3>
0842d8ca +0x1fc:  mov    -0x2c(%ebp),%eax
0842d8cd +0x1ff:  movzwl 0x24(%eax),%eax
0842d8d1 +0x203:  cmp    $0x7,%ax
0842d8d5 +0x207:  jne    0842d8e1 <+0x213>
0842d8d7 +0x209:  mov    $0x1,%eax
0842d8dc +0x20e:  jmp    0842dd71 <+0x6a3>
0842d8e1 +0x213:  mov    -0x2c(%ebp),%eax
0842d8e4 +0x216:  movzwl 0x24(%eax),%eax
0842d8e8 +0x21a:  cmp    $0x8,%ax
0842d8ec +0x21e:  jne    0842d8f8 <+0x22a>
0842d8ee +0x220:  mov    $0x1,%eax
0842d8f3 +0x225:  jmp    0842dd71 <+0x6a3>
0842d8f8 +0x22a:  movl   $0x3,-0x30(%ebp)
0842d8ff +0x231:  mov    -0x2c(%ebp),%eax
0842d902 +0x234:  movzwl 0x24(%eax),%eax
0842d906 +0x238:  cmp    $0xa,%ax
0842d90a +0x23c:  jne    0842d913 <+0x245>
0842d90c +0x23e:  movl   $0xc,-0x30(%ebp)
0842d913 +0x245:  mov    -0x2c(%ebp),%eax
0842d916 +0x248:  mov    0x28(%eax),%eax
0842d919 +0x24b:  mov    %eax,-0x19c(%ebp)
0842d91f +0x251:  mov    $0xcccccccd,%edx
0842d924 +0x256:  mov    -0x19c(%ebp),%eax
0842d92a +0x25c:  mul    %edx
0842d92c +0x25e:  mov    %edx,%eax
0842d92e +0x260:  shr    $0x3,%eax
0842d931 +0x263:  mov    %eax,-0x20(%ebp)
0842d934 +0x266:  mov    -0x2c(%ebp),%eax
0842d937 +0x269:  mov    0x28(%eax),%ecx
0842d93a +0x26c:  mov    $0xcccccccd,%edx
0842d93f +0x271:  mov    %ecx,%eax
0842d941 +0x273:  mul    %edx
0842d943 +0x275:  mov    %edx,%eax
0842d945 +0x277:  shr    $0x3,%eax
0842d948 +0x27a:  mov    %eax,-0x1c(%ebp)
0842d94b +0x27d:  mov    -0x1c(%ebp),%edx
0842d94e +0x280:  mov    %edx,%eax
0842d950 +0x282:  shl    $0x2,%eax
0842d953 +0x285:  add    %edx,%eax
0842d955 +0x287:  add    %eax,%eax
0842d957 +0x289:  mov    %ecx,%edx
0842d959 +0x28b:  sub    %eax,%edx
0842d95b +0x28d:  mov    %edx,%eax
0842d95d +0x28f:  mov    %eax,-0x1c(%ebp)
0842d960 +0x292:  mov    -0x2c(%ebp),%eax
0842d963 +0x295:  mov    0x28(%eax),%eax
0842d966 +0x298:  mov    -0x1c(%ebp),%edx
0842d969 +0x29b:  mov    %edx,0xc(%esp)
0842d96d +0x29f:  mov    -0x20(%ebp),%edx
0842d970 +0x2a2:  mov    %edx,0x8(%esp)
0842d974 +0x2a6:  mov    %eax,0x4(%esp)
0842d978 +0x2aa:  movl   $"[ON!!] request->etcValue_ : %d , dwPunishDay(%d), dwApplyFlag(%d)\n",(%esp)
0842d97f +0x2b1:  call   0807db60 <_init+0x458>
0842d984 +0x2b6:  cmpl   $0x0,-0x20(%ebp)
0842d988 +0x2ba:  jne    0842d9d7 <+0x309>
0842d98a +0x2bc:  mov    -0x2c(%ebp),%eax
0842d98d +0x2bf:  mov    (%eax),%eax
0842d98f +0x2c1:  movl   $0x0,0x4(%esp)
0842d997 +0x2c9:  mov    %eax,(%esp)
0842d99a +0x2cc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842d99f +0x2d1:  mov    %eax,%edx
0842d9a1 +0x2d3:  cmpl   $0x0,-0x1c(%ebp)
0842d9a5 +0x2d7:  je     0842d9ae <+0x2e0>
0842d9a7 +0x2d9:  mov    $0x1,%eax
0842d9ac +0x2de:  jmp    0842d9b3 <+0x2e5>
0842d9ae +0x2e0:  mov    $0x2,%eax
0842d9b3 +0x2e5:  mov    -0x30(%ebp),%ecx
0842d9b6 +0x2e8:  mov    %ecx,0x10(%esp)
0842d9ba +0x2ec:  mov    %edx,0xc(%esp)
0842d9be +0x2f0:  mov    %eax,0x8(%esp)
0842d9c2 +0x2f4:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time='9999-12-31 23:59:59', apply_flag=%d where m_id=%s and punish_type=%d",0x4(%esp)
0842d9ca +0x2fc:  mov    -0x24(%ebp),%eax
0842d9cd +0x2ff:  mov    %eax,(%esp)
0842d9d0 +0x302:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842d9d5 +0x307:  jmp    0842da29 <+0x35b>
0842d9d7 +0x309:  mov    -0x2c(%ebp),%eax
0842d9da +0x30c:  mov    (%eax),%eax
0842d9dc +0x30e:  movl   $0x0,0x4(%esp)
0842d9e4 +0x316:  mov    %eax,(%esp)
0842d9e7 +0x319:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842d9ec +0x31e:  mov    %eax,%edx
0842d9ee +0x320:  cmpl   $0x0,-0x1c(%ebp)
0842d9f2 +0x324:  je     0842d9fb <+0x32d>
0842d9f4 +0x326:  mov    $0x1,%eax
0842d9f9 +0x32b:  jmp    0842da00 <+0x332>
0842d9fb +0x32d:  mov    $0x2,%eax
0842da00 +0x332:  mov    -0x30(%ebp),%ecx
0842da03 +0x335:  mov    %ecx,0x14(%esp)
0842da07 +0x339:  mov    %edx,0x10(%esp)
0842da0b +0x33d:  mov    %eax,0xc(%esp)
0842da0f +0x341:  mov    -0x20(%ebp),%eax
0842da12 +0x344:  mov    %eax,0x8(%esp)
0842da16 +0x348:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time= adddate(now(),interval %d day), apply_flag=%d where m_id=%s and punish_type=%d",0x4(%esp)
0842da1e +0x350:  mov    -0x24(%ebp),%eax
0842da21 +0x353:  mov    %eax,(%esp)
0842da24 +0x356:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842da29 +0x35b:  movl   $0x1,0x4(%esp)
0842da31 +0x363:  mov    -0x24(%ebp),%eax
0842da34 +0x366:  mov    %eax,(%esp)
0842da37 +0x369:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842da3c +0x36e:  xor    $0x1,%eax
0842da3f +0x371:  test   %al,%al
0842da41 +0x373:  jne    0842da54 <+0x386>
0842da43 +0x375:  mov    -0x24(%ebp),%eax
0842da46 +0x378:  mov    %eax,(%esp)
0842da49 +0x37b:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842da4e +0x380:  or     %edx,%eax
0842da50 +0x382:  test   %eax,%eax
0842da52 +0x384:  jne    0842da5b <+0x38d>
0842da54 +0x386:  mov    $0x1,%eax
0842da59 +0x38b:  jmp    0842da60 <+0x392>
0842da5b +0x38d:  mov    $0x0,%eax
0842da60 +0x392:  test   %al,%al
0842da62 +0x394:  je     0842db2d <+0x45f>
0842da68 +0x39a:  cmpl   $0x0,-0x20(%ebp)
0842da6c +0x39e:  jne    0842dab9 <+0x3eb>
0842da6e +0x3a0:  cmpl   $0x0,-0x1c(%ebp)
0842da72 +0x3a4:  je     0842da7b <+0x3ad>
0842da74 +0x3a6:  mov    $0x1,%ebx
0842da79 +0x3ab:  jmp    0842da80 <+0x3b2>
0842da7b +0x3ad:  mov    $0x2,%ebx
0842da80 +0x3b2:  mov    -0x2c(%ebp),%eax
0842da83 +0x3b5:  mov    (%eax),%eax
0842da85 +0x3b7:  movl   $0x0,0x4(%esp)
0842da8d +0x3bf:  mov    %eax,(%esp)
0842da90 +0x3c2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842da95 +0x3c7:  mov    %ebx,0x10(%esp)
0842da99 +0x3cb:  mov    -0x30(%ebp),%edx
0842da9c +0x3ce:  mov    %edx,0xc(%esp)
0842daa0 +0x3d2:  mov    %eax,0x8(%esp)
0842daa4 +0x3d6:  movl   $"inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), '9999-12-31 23:59:59', 0, %d)",0x4(%esp)
0842daac +0x3de:  mov    -0x24(%ebp),%eax
0842daaf +0x3e1:  mov    %eax,(%esp)
0842dab2 +0x3e4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842dab7 +0x3e9:  jmp    0842db09 <+0x43b>
0842dab9 +0x3eb:  cmpl   $0x0,-0x1c(%ebp)
0842dabd +0x3ef:  je     0842dac6 <+0x3f8>
0842dabf +0x3f1:  mov    $0x1,%ebx
0842dac4 +0x3f6:  jmp    0842dacb <+0x3fd>
0842dac6 +0x3f8:  mov    $0x2,%ebx
0842dacb +0x3fd:  mov    -0x2c(%ebp),%eax
0842dace +0x400:  mov    (%eax),%eax
0842dad0 +0x402:  movl   $0x0,0x4(%esp)
0842dad8 +0x40a:  mov    %eax,(%esp)
0842dadb +0x40d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842dae0 +0x412:  mov    %ebx,0x14(%esp)
0842dae4 +0x416:  mov    -0x20(%ebp),%edx
0842dae7 +0x419:  mov    %edx,0x10(%esp)
0842daeb +0x41d:  mov    -0x30(%ebp),%edx
0842daee +0x420:  mov    %edx,0xc(%esp)
0842daf2 +0x424:  mov    %eax,0x8(%esp)
0842daf6 +0x428:  movl   $"inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), adddate(now(),interval %d day), 0, %d)",0x4(%esp)
0842dafe +0x430:  mov    -0x24(%ebp),%eax
0842db01 +0x433:  mov    %eax,(%esp)
0842db04 +0x436:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842db09 +0x43b:  movl   $0x1,0x4(%esp)
0842db11 +0x443:  mov    -0x24(%ebp),%eax
0842db14 +0x446:  mov    %eax,(%esp)
0842db17 +0x449:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842db1c +0x44e:  xor    $0x1,%eax
0842db1f +0x451:  test   %al,%al
0842db21 +0x453:  je     0842db2d <+0x45f>
0842db23 +0x455:  mov    $0x0,%eax
0842db28 +0x45a:  jmp    0842dd71 <+0x6a3>
0842db2d +0x45f:  lea    -0x17b(%ebp),%edx
0842db33 +0x465:  mov    $0xff,%ebx
0842db38 +0x46a:  mov    $0x0,%eax
0842db3d +0x46f:  mov    %edx,%ecx
0842db3f +0x471:  and    $0x1,%ecx
0842db42 +0x474:  test   %ecx,%ecx
0842db44 +0x476:  je     0842db4e <+0x480>
0842db46 +0x478:  mov    %al,(%edx)
0842db48 +0x47a:  add    $0x1,%edx
0842db4b +0x47d:  sub    $0x1,%ebx
0842db4e +0x480:  mov    %edx,%ecx
0842db50 +0x482:  and    $0x2,%ecx
0842db53 +0x485:  test   %ecx,%ecx
0842db55 +0x487:  je     0842db60 <+0x492>
0842db57 +0x489:  mov    %ax,(%edx)
0842db5a +0x48c:  add    $0x2,%edx
0842db5d +0x48f:  sub    $0x2,%ebx
0842db60 +0x492:  mov    %ebx,%ecx
0842db62 +0x494:  shr    $0x2,%ecx
0842db65 +0x497:  mov    %edx,%edi
0842db67 +0x499:  rep stos %eax,%es:(%edi)
0842db69 +0x49b:  mov    %edi,%edx
0842db6b +0x49d:  mov    %ebx,%ecx
0842db6d +0x49f:  and    $0x2,%ecx
0842db70 +0x4a2:  test   %ecx,%ecx
0842db72 +0x4a4:  je     0842db7a <+0x4ac>
0842db74 +0x4a6:  mov    %ax,(%edx)
0842db77 +0x4a9:  add    $0x2,%edx
0842db7a +0x4ac:  mov    %ebx,%ecx
0842db7c +0x4ae:  and    $0x1,%ecx
0842db7f +0x4b1:  test   %ecx,%ecx
0842db81 +0x4b3:  je     0842db88 <+0x4ba>
0842db83 +0x4b5:  mov    %al,(%edx)
0842db85 +0x4b7:  add    $0x1,%edx
0842db88 +0x4ba:  mov    -0x2c(%ebp),%eax
0842db8b +0x4bd:  mov    0x1c(%eax),%edx
0842db8e +0x4c0:  mov    -0x2c(%ebp),%eax
0842db91 +0x4c3:  mov    0x14(%eax),%eax
0842db94 +0x4c6:  mov    %edx,0xc(%esp)
0842db98 +0x4ca:  mov    %eax,0x8(%esp)
0842db9c +0x4ce:  movl   $"{Auto 1st Information-Mail}|*|ARS 1st Punish / %d / %d",0x4(%esp)
0842dba4 +0x4d6:  lea    -0x17b(%ebp),%eax
0842dbaa +0x4dc:  mov    %eax,(%esp)
0842dbad +0x4df:  call   0807e440 <_init+0xd38>
0842dbb2 +0x4e4:  movl   $0x0,-0x4a(%ebp)
0842dbb9 +0x4eb:  movl   $0x0,-0x46(%ebp)
0842dbc0 +0x4f2:  movw   $0x0,-0x42(%ebp)
0842dbc6 +0x4f8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0842dbcd +0x4ff:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842dbd2 +0x504:  mov    %eax,-0x50(%ebp)
0842dbd5 +0x507:  lea    -0x7c(%ebp),%eax
0842dbd8 +0x50a:  mov    %eax,0x4(%esp)
0842dbdc +0x50e:  lea    -0x50(%ebp),%eax
0842dbdf +0x511:  mov    %eax,(%esp)
0842dbe2 +0x514:  call   0807e360 <_init+0xc58>
0842dbe7 +0x519:  lea    -0x7c(%ebp),%eax
0842dbea +0x51c:  mov    %eax,0xc(%esp)
0842dbee +0x520:  movl   $"%Y",0x8(%esp)
0842dbf6 +0x528:  movl   $0xa,0x4(%esp)
0842dbfe +0x530:  lea    -0x4a(%ebp),%eax
0842dc01 +0x533:  mov    %eax,(%esp)
0842dc04 +0x536:  call   0807dbc0 <_init+0x4b8>
0842dc09 +0x53b:  cmpl   $0x0,-0x20(%ebp)
0842dc0d +0x53f:  jne    0842dc6b <+0x59d>
0842dc0f +0x541:  cmpl   $0x0,-0x1c(%ebp)
0842dc13 +0x545:  je     0842dc1c <+0x54e>
0842dc15 +0x547:  mov    $0x1,%ebx
0842dc1a +0x54c:  jmp    0842dc21 <+0x553>
0842dc1c +0x54e:  mov    $0x2,%ebx
0842dc21 +0x553:  mov    -0x2c(%ebp),%eax
0842dc24 +0x556:  mov    (%eax),%eax
0842dc26 +0x558:  movl   $0x0,0x4(%esp)
0842dc2e +0x560:  mov    %eax,(%esp)
0842dc31 +0x563:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842dc36 +0x568:  lea    -0x17b(%ebp),%edx
0842dc3c +0x56e:  mov    %edx,0x18(%esp)
0842dc40 +0x572:  mov    %ebx,0x14(%esp)
0842dc44 +0x576:  mov    -0x30(%ebp),%edx
0842dc47 +0x579:  mov    %edx,0x10(%esp)
0842dc4b +0x57d:  mov    %eax,0xc(%esp)
0842dc4f +0x581:  lea    -0x4a(%ebp),%eax
0842dc52 +0x584:  mov    %eax,0x8(%esp)
0842dc56 +0x588:  movl   $"inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), '9999-12-31 23:59:59', 'ARS', %d, '%s')",0x4(%esp)
0842dc5e +0x590:  mov    -0x24(%ebp),%eax
0842dc61 +0x593:  mov    %eax,(%esp)
0842dc64 +0x596:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842dc69 +0x59b:  jmp    0842dccc <+0x5fe>
0842dc6b +0x59d:  cmpl   $0x0,-0x1c(%ebp)
0842dc6f +0x5a1:  je     0842dc78 <+0x5aa>
0842dc71 +0x5a3:  mov    $0x1,%ebx
0842dc76 +0x5a8:  jmp    0842dc7d <+0x5af>
0842dc78 +0x5aa:  mov    $0x2,%ebx
0842dc7d +0x5af:  mov    -0x2c(%ebp),%eax
0842dc80 +0x5b2:  mov    (%eax),%eax
0842dc82 +0x5b4:  movl   $0x0,0x4(%esp)
0842dc8a +0x5bc:  mov    %eax,(%esp)
0842dc8d +0x5bf:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842dc92 +0x5c4:  lea    -0x17b(%ebp),%edx
0842dc98 +0x5ca:  mov    %edx,0x1c(%esp)
0842dc9c +0x5ce:  mov    %ebx,0x18(%esp)
0842dca0 +0x5d2:  mov    -0x20(%ebp),%edx
0842dca3 +0x5d5:  mov    %edx,0x14(%esp)
0842dca7 +0x5d9:  mov    -0x30(%ebp),%edx
0842dcaa +0x5dc:  mov    %edx,0x10(%esp)
0842dcae +0x5e0:  mov    %eax,0xc(%esp)
0842dcb2 +0x5e4:  lea    -0x4a(%ebp),%eax
0842dcb5 +0x5e7:  mov    %eax,0x8(%esp)
0842dcb9 +0x5eb:  movl   $"inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), adddate(now(),interval %d day), 'ARS', %d, '%s')",0x4(%esp)
0842dcc1 +0x5f3:  mov    -0x24(%ebp),%eax
0842dcc4 +0x5f6:  mov    %eax,(%esp)
0842dcc7 +0x5f9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842dccc +0x5fe:  movl   $0x1,0x4(%esp)
0842dcd4 +0x606:  mov    -0x24(%ebp),%eax
0842dcd7 +0x609:  mov    %eax,(%esp)
0842dcda +0x60c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842dcdf +0x611:  xor    $0x1,%eax
0842dce2 +0x614:  test   %al,%al
0842dce4 +0x616:  je     0842dcf0 <+0x622>
0842dce6 +0x618:  mov    $0x0,%eax
0842dceb +0x61d:  jmp    0842dd71 <+0x6a3>
0842dcf0 +0x622:  cmpl   $0x3,-0x30(%ebp)
0842dcf4 +0x626:  je     0842dd02 <+0x634>
0842dcf6 +0x628:  cmpl   $0x4,-0x30(%ebp)
0842dcfa +0x62c:  jne    0842dd6c <+0x69e>
0842dcfc +0x62e:  cmpl   $0x0,-0x1c(%ebp)
0842dd00 +0x632:  jne    0842dd6c <+0x69e>
0842dd02 +0x634:  cmpl   $0x0,-0x1c(%ebp)
0842dd06 +0x638:  je     0842dd0f <+0x641>
0842dd08 +0x63a:  mov    $0x1,%ebx
0842dd0d +0x63f:  jmp    0842dd14 <+0x646>
0842dd0f +0x641:  mov    $0x2,%ebx
0842dd14 +0x646:  mov    -0x2c(%ebp),%eax
0842dd17 +0x649:  mov    (%eax),%eax
0842dd19 +0x64b:  movl   $0x0,0x4(%esp)
0842dd21 +0x653:  mov    %eax,(%esp)
0842dd24 +0x656:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842dd29 +0x65b:  mov    %ebx,0x10(%esp)
0842dd2d +0x65f:  mov    -0x30(%ebp),%edx
0842dd30 +0x662:  mov    %edx,0xc(%esp)
0842dd34 +0x666:  mov    %eax,0x8(%esp)
0842dd38 +0x66a:  movl   $"inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())",0x4(%esp)
0842dd40 +0x672:  mov    -0x24(%ebp),%eax
0842dd43 +0x675:  mov    %eax,(%esp)
0842dd46 +0x678:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842dd4b +0x67d:  movl   $0x1,0x4(%esp)
0842dd53 +0x685:  mov    -0x24(%ebp),%eax
0842dd56 +0x688:  mov    %eax,(%esp)
0842dd59 +0x68b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842dd5e +0x690:  xor    $0x1,%eax
0842dd61 +0x693:  test   %al,%al
0842dd63 +0x695:  je     0842dd6c <+0x69e>
0842dd65 +0x697:  mov    $0x0,%eax
0842dd6a +0x69c:  jmp    0842dd71 <+0x6a3>
0842dd6c +0x69e:  mov    $0x1,%eax
0842dd71 +0x6a3:  add    $0x1cc,%esp
0842dd77 +0x6a9:  pop    %ebx
0842dd78 +0x6aa:  pop    %esi
0842dd79 +0x6ab:  pop    %edi
0842dd7a +0x6ac:  pop    %ebp
0842dd7b +0x6ad:  ret
```

## 反编译 C

```c
// DB_InsertAutoPunishFirstUser::dispatch @ 0x842d6ce

/* DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*) */

undefined4 DB_InsertAutoPunishFirstUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  char *pcVar13;
  char local_17f;
  char local_17e [254];
  tm local_80;
  time_t local_54;
  char local_4e [10];
  cMyTrace local_44 [16];
  int local_34;
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *local_30;
  MySQL *local_2c;
  MySQL *local_28;
  uint local_24;
  uint local_20;
  
  bVar11 = 0;
  local_34 = 0;
  local_30 = Stream::GetOutBuffer<SIG_INSERT_AUTO_PUNISH_FIRST_USER>(in_stack_00000010);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(ushort *)(local_30 + 0x24);
  pcVar13 = *(char **)(local_30 + 0x20);
  uVar9 = *(uint *)(local_30 + 0x1c);
  uVar7 = *(uint *)(local_30 + 0x18);
  uVar2 = *(uint *)(local_30 + 0x14);
  pSVar4 = local_30 + 4;
  uVar5 = NumberToString(*(uint *)local_30,0);
  MySQL::set_query(local_2c,
                   "inSert into auto_punish_first_user(m_id,occ_time,ip,hack_type,cnt,hack_sub_type,hack_sub_cnt,punish_flag) values(%s,now(),\'%s\',%d,%d,%d,%d,%d)"
                   ,uVar5,pSVar4,uVar2,uVar7,uVar9,pcVar13,(uint)uVar1);
  cVar3 = MySQL::exec(local_2c,true);
  if (cVar3 != '\x01') {
    uVar9 = *(uint *)(local_30 + 0x1c);
    pcVar13 = *(char **)(local_30 + 0x14);
    uVar5 = NumberToString(*(uint *)local_30,0);
    MySQL::set_query(local_2c,
                     "upDate auto_punish_first_user set occ_time=now(),ip=\'%s\',cnt=%d, hack_sub_cnt=%d, punish_flag=%d where m_id=%s and hack_type=%d and hack_sub_type=%d"
                     ,local_30 + 4,*(uint *)(local_30 + 0x18),*(uint *)(local_30 + 0x20),
                     (uint)*(ushort *)(local_30 + 0x24),uVar5,pcVar13,uVar9);
    cVar3 = MySQL::exec(local_2c,true);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*)",
                         0x70fb,0);
      cMyTrace::operator()(local_44,"upDate auto_punish_first_user Fail");
    }
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (*(short *)(local_30 + 0x24) == 2) {
    return 1;
  }
  if (*(short *)(local_30 + 0x24) == 7) {
    return 1;
  }
  if (*(short *)(local_30 + 0x24) != 8) {
    local_34 = 3;
    if (*(short *)(local_30 + 0x24) == 10) {
      local_34 = 0xc;
    }
    local_24 = *(uint *)(local_30 + 0x28) / 10;
    local_20 = *(uint *)(local_30 + 0x28) % 10;
    printf("[ON!!] request->etcValue_ : %d , dwPunishDay(%d), dwApplyFlag(%d)\n",
           *(uint *)(local_30 + 0x28),local_24,local_20);
    if (local_24 == 0) {
      uVar5 = NumberToString(*(uint *)local_30,0);
      if (local_20 == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      MySQL::set_query(local_28,
                       "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', apply_flag=%d where m_id=%s and punish_type=%d"
                       ,uVar6,uVar5,local_34);
    }
    else {
      uVar5 = NumberToString(*(uint *)local_30,0);
      if (local_20 == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      MySQL::set_query(local_28,
                       "upDate member_punish_info set occ_time=now(), start_time=now(), end_time= adddate(now(),interval %d day), apply_flag=%d where m_id=%s and punish_type=%d"
                       ,local_24,uVar6,uVar5,local_34);
    }
    cVar3 = MySQL::exec(local_28,true);
    if ((cVar3 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      if (local_24 == 0) {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, %d)"
                         ,uVar6,local_34,uVar5);
      }
      else {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), adddate(now(),interval %d day), 0, %d)"
                         ,uVar6,local_34,local_24,uVar5);
      }
      cVar3 = MySQL::exec(local_28,true);
      if (cVar3 != '\x01') {
        return 0;
      }
    }
    pcVar8 = &local_17f;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_17f = '\0';
      pcVar8 = local_17e;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    sprintf(&local_17f,"{Auto 1st Information-Mail}|*|ARS 1st Punish / %d / %d",
            *(uint *)(local_30 + 0x14),*(uint *)(local_30 + 0x1c));
    local_4e[0] = '\0';
    local_4e[1] = '\0';
    local_4e[2] = '\0';
    local_4e[3] = '\0';
    local_4e[4] = '\0';
    local_4e[5] = '\0';
    local_4e[6] = '\0';
    local_4e[7] = '\0';
    local_4e[8] = '\0';
    local_4e[9] = '\0';
    local_54 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_54,&local_80);
    strftime(local_4e,10,"%Y",&local_80);
    if (local_24 == 0) {
      if (local_20 == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
      uVar5 = NumberToString(*(uint *)local_30,0);
      pcVar8 = &local_17f;
      MySQL::set_query(local_28,
                       "inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), \'9999-12-31 23:59:59\', \'ARS\', %d, \'%s\')"
                       ,local_4e,uVar5,local_34,uVar9,pcVar8);
    }
    else {
      if (local_20 == 0) {
        pcVar8 = (char *)0x2;
      }
      else {
        pcVar8 = (char *)0x1;
      }
      uVar5 = NumberToString(*(uint *)local_30,0);
      pcVar13 = &local_17f;
      uVar9 = local_24;
      MySQL::set_query(local_28,
                       "inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), adddate(now(),interval %d day), \'ARS\', %d, \'%s\')"
                       ,local_4e,uVar5,local_34,local_24,pcVar8,pcVar13);
    }
    cVar3 = MySQL::exec(local_28,true);
    if (cVar3 == '\x01') {
      if ((local_34 == 3) || ((local_34 == 4 && (local_20 == 0)))) {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())"
                         ,uVar6,local_34,uVar5,uVar9,pcVar8,pcVar13);
        cVar3 = MySQL::exec(local_28,true);
        if (cVar3 != '\x01') {
          return 0;
        }
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  return 1;
}
```

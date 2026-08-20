# dispatch

`_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream`

`DB_InsertAutoPunishSecondUser::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertAutoPunishSecondUser` | `0x0842deb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842deb4  _ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream
#           DB_InsertAutoPunishSecondUser::dispatch(int, int, Stream*)
# range [0x0842deb4, 0x0842e34d]
0842deb4 +0x000:  push   %ebp
0842deb5 +0x001:  mov    %esp,%ebp
0842deb7 +0x003:  push   %edi
0842deb8 +0x004:  push   %esi
0842deb9 +0x005:  push   %ebx
0842deba +0x006:  sub    $0x14c,%esp
0842dec0 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842dec5 +0x011:  movl   $0x0,0x8(%esp)
0842decd +0x019:  movl   $0x6,0x4(%esp)
0842ded5 +0x021:  mov    %eax,(%esp)
0842ded8 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842dedd +0x029:  mov    %eax,-0x24(%ebp)
0842dee0 +0x02c:  mov    0x14(%ebp),%eax
0842dee3 +0x02f:  mov    %eax,(%esp)
0842dee6 +0x032:  call   0845285c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5472>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5472
0842deeb +0x037:  mov    %eax,-0x20(%ebp)
0842deee +0x03a:  mov    -0x20(%ebp),%eax
0842def1 +0x03d:  mov    (%eax),%eax
0842def3 +0x03f:  movl   $0x0,0x4(%esp)
0842defb +0x047:  mov    %eax,(%esp)
0842defe +0x04a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842df03 +0x04f:  mov    %eax,%edi
0842df05 +0x051:  mov    -0x20(%ebp),%eax
0842df08 +0x054:  movzbl 0x10(%eax),%eax
0842df0c +0x058:  test   %al,%al
0842df0e +0x05a:  je     0842df17 <+0x63>
0842df10 +0x05c:  mov    $0x1,%esi
0842df15 +0x061:  jmp    0842df1c <+0x68>
0842df17 +0x063:  mov    $0x0,%esi
0842df1c +0x068:  mov    -0x20(%ebp),%eax
0842df1f +0x06b:  mov    0x8(%eax),%ecx
0842df22 +0x06e:  mov    0xc(%eax),%ebx
0842df25 +0x071:  mov    -0x20(%ebp),%eax
0842df28 +0x074:  mov    0xc(%eax),%edx
0842df2b +0x077:  mov    0x8(%eax),%eax
0842df2e +0x07a:  mov    %edi,0x1c(%esp)
0842df32 +0x07e:  mov    %esi,0x18(%esp)
0842df36 +0x082:  mov    %ecx,0x10(%esp)
0842df3a +0x086:  mov    %ebx,0x14(%esp)
0842df3e +0x08a:  mov    %eax,0x8(%esp)
0842df42 +0x08e:  mov    %edx,0xc(%esp)
0842df46 +0x092:  movl   $"upDate auto_punish_second_user set occ_time=now(),total_trade_cnt=total_trade_cnt+1,trade_cnt=trade_cnt+1,total_trade_gold=total_trade_gold+%d,trade_gold=trade_gold+%d,punish_flag=%d where m_id=%s",0x4(%esp)
0842df4e +0x09a:  mov    -0x24(%ebp),%eax
0842df51 +0x09d:  mov    %eax,(%esp)
0842df54 +0x0a0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842df59 +0x0a5:  movl   $0x1,0x4(%esp)
0842df61 +0x0ad:  mov    -0x24(%ebp),%eax
0842df64 +0x0b0:  mov    %eax,(%esp)
0842df67 +0x0b3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842df6c +0x0b8:  xor    $0x1,%eax
0842df6f +0x0bb:  test   %al,%al
0842df71 +0x0bd:  jne    0842df84 <+0xd0>
0842df73 +0x0bf:  mov    -0x24(%ebp),%eax
0842df76 +0x0c2:  mov    %eax,(%esp)
0842df79 +0x0c5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842df7e +0x0ca:  or     %edx,%eax
0842df80 +0x0cc:  test   %eax,%eax
0842df82 +0x0ce:  jne    0842df8b <+0xd7>
0842df84 +0x0d0:  mov    $0x1,%eax
0842df89 +0x0d5:  jmp    0842df90 <+0xdc>
0842df8b +0x0d7:  mov    $0x0,%eax
0842df90 +0x0dc:  test   %al,%al
0842df92 +0x0de:  je     0842e02c <+0x178>
0842df98 +0x0e4:  mov    -0x20(%ebp),%eax
0842df9b +0x0e7:  movzbl 0x10(%eax),%eax
0842df9f +0x0eb:  test   %al,%al
0842dfa1 +0x0ed:  je     0842dfaa <+0xf6>
0842dfa3 +0x0ef:  mov    $0x1,%edi
0842dfa8 +0x0f4:  jmp    0842dfaf <+0xfb>
0842dfaa +0x0f6:  mov    $0x0,%edi
0842dfaf +0x0fb:  mov    -0x20(%ebp),%eax
0842dfb2 +0x0fe:  mov    0x8(%eax),%edx
0842dfb5 +0x101:  mov    0xc(%eax),%ecx
0842dfb8 +0x104:  mov    %edx,-0x130(%ebp)
0842dfbe +0x10a:  mov    %ecx,-0x12c(%ebp)
0842dfc4 +0x110:  mov    -0x20(%ebp),%eax
0842dfc7 +0x113:  mov    0x8(%eax),%ebx
0842dfca +0x116:  mov    0xc(%eax),%esi
0842dfcd +0x119:  mov    -0x20(%ebp),%eax
0842dfd0 +0x11c:  mov    (%eax),%eax
0842dfd2 +0x11e:  movl   $0x0,0x4(%esp)
0842dfda +0x126:  mov    %eax,(%esp)
0842dfdd +0x129:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842dfe2 +0x12e:  mov    %edi,0x1c(%esp)
0842dfe6 +0x132:  mov    -0x130(%ebp),%edx
0842dfec +0x138:  mov    -0x12c(%ebp),%ecx
0842dff2 +0x13e:  mov    %edx,0x14(%esp)
0842dff6 +0x142:  mov    %ecx,0x18(%esp)
0842dffa +0x146:  mov    %ebx,0xc(%esp)
0842dffe +0x14a:  mov    %esi,0x10(%esp)
0842e002 +0x14e:  mov    %eax,0x8(%esp)
0842e006 +0x152:  movl   $"inSert into auto_punish_second_user(m_id,occ_time,total_trade_cnt,trade_cnt,total_trade_gold,trade_gold,punish_flag) values(%s,now(),1,1,%d,%d,%d)",0x4(%esp)
0842e00e +0x15a:  mov    -0x24(%ebp),%eax
0842e011 +0x15d:  mov    %eax,(%esp)
0842e014 +0x160:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e019 +0x165:  movl   $0x1,0x4(%esp)
0842e021 +0x16d:  mov    -0x24(%ebp),%eax
0842e024 +0x170:  mov    %eax,(%esp)
0842e027 +0x173:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e02c +0x178:  mov    -0x20(%ebp),%eax
0842e02f +0x17b:  mov    0x4(%eax),%eax
0842e032 +0x17e:  movl   $0x1,0x4(%esp)
0842e03a +0x186:  mov    %eax,(%esp)
0842e03d +0x189:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e042 +0x18e:  mov    %eax,%ebx
0842e044 +0x190:  mov    -0x20(%ebp),%eax
0842e047 +0x193:  mov    (%eax),%eax
0842e049 +0x195:  movl   $0x0,0x4(%esp)
0842e051 +0x19d:  mov    %eax,(%esp)
0842e054 +0x1a0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e059 +0x1a5:  mov    %eax,%ecx
0842e05b +0x1a7:  mov    -0x20(%ebp),%eax
0842e05e +0x1aa:  mov    0xc(%eax),%edx
0842e061 +0x1ad:  mov    0x8(%eax),%eax
0842e064 +0x1b0:  mov    %ebx,0x14(%esp)
0842e068 +0x1b4:  mov    %ecx,0x10(%esp)
0842e06c +0x1b8:  mov    %eax,0x8(%esp)
0842e070 +0x1bc:  mov    %edx,0xc(%esp)
0842e074 +0x1c0:  movl   $"upDate auto_punish_second_log set occ_time=now(),trade_cnt=trade_cnt+1,trade_gold=trade_gold+%d where m_id=%s and hack_m_id=%s",0x4(%esp)
0842e07c +0x1c8:  mov    -0x24(%ebp),%eax
0842e07f +0x1cb:  mov    %eax,(%esp)
0842e082 +0x1ce:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e087 +0x1d3:  movl   $0x1,0x4(%esp)
0842e08f +0x1db:  mov    -0x24(%ebp),%eax
0842e092 +0x1de:  mov    %eax,(%esp)
0842e095 +0x1e1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e09a +0x1e6:  xor    $0x1,%eax
0842e09d +0x1e9:  test   %al,%al
0842e09f +0x1eb:  jne    0842e0b2 <+0x1fe>
0842e0a1 +0x1ed:  mov    -0x24(%ebp),%eax
0842e0a4 +0x1f0:  mov    %eax,(%esp)
0842e0a7 +0x1f3:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842e0ac +0x1f8:  or     %edx,%eax
0842e0ae +0x1fa:  test   %eax,%eax
0842e0b0 +0x1fc:  jne    0842e0b9 <+0x205>
0842e0b2 +0x1fe:  mov    $0x1,%eax
0842e0b7 +0x203:  jmp    0842e0be <+0x20a>
0842e0b9 +0x205:  mov    $0x0,%eax
0842e0be +0x20a:  test   %al,%al
0842e0c0 +0x20c:  je     0842e12e <+0x27a>
0842e0c2 +0x20e:  mov    -0x20(%ebp),%eax
0842e0c5 +0x211:  mov    0x8(%eax),%ebx
0842e0c8 +0x214:  mov    0xc(%eax),%esi
0842e0cb +0x217:  mov    -0x20(%ebp),%eax
0842e0ce +0x21a:  mov    0x4(%eax),%eax
0842e0d1 +0x21d:  movl   $0x1,0x4(%esp)
0842e0d9 +0x225:  mov    %eax,(%esp)
0842e0dc +0x228:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e0e1 +0x22d:  mov    %eax,%edi
0842e0e3 +0x22f:  mov    -0x20(%ebp),%eax
0842e0e6 +0x232:  mov    (%eax),%eax
0842e0e8 +0x234:  movl   $0x0,0x4(%esp)
0842e0f0 +0x23c:  mov    %eax,(%esp)
0842e0f3 +0x23f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e0f8 +0x244:  mov    %ebx,0x10(%esp)
0842e0fc +0x248:  mov    %esi,0x14(%esp)
0842e100 +0x24c:  mov    %edi,0xc(%esp)
0842e104 +0x250:  mov    %eax,0x8(%esp)
0842e108 +0x254:  movl   $"inSert into auto_punish_second_log(m_id,hack_m_id,occ_time,trade_cnt,trade_gold) values(%s,%s,now(),1,%d)",0x4(%esp)
0842e110 +0x25c:  mov    -0x24(%ebp),%eax
0842e113 +0x25f:  mov    %eax,(%esp)
0842e116 +0x262:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e11b +0x267:  movl   $0x1,0x4(%esp)
0842e123 +0x26f:  mov    -0x24(%ebp),%eax
0842e126 +0x272:  mov    %eax,(%esp)
0842e129 +0x275:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e12e +0x27a:  mov    -0x20(%ebp),%eax
0842e131 +0x27d:  movzbl 0x10(%eax),%eax
0842e135 +0x281:  test   %al,%al
0842e137 +0x283:  je     0842e33d <+0x489>
0842e13d +0x289:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842e142 +0x28e:  movl   $0x0,0x8(%esp)
0842e14a +0x296:  movl   $0x1,0x4(%esp)
0842e152 +0x29e:  mov    %eax,(%esp)
0842e155 +0x2a1:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842e15a +0x2a6:  mov    %eax,-0x1c(%ebp)
0842e15d +0x2a9:  mov    -0x20(%ebp),%eax
0842e160 +0x2ac:  mov    (%eax),%edx
0842e162 +0x2ae:  mov    -0x20(%ebp),%eax
0842e165 +0x2b1:  movzbl 0x10(%eax),%eax
0842e169 +0x2b5:  test   %al,%al
0842e16b +0x2b7:  je     0842e174 <+0x2c0>
0842e16d +0x2b9:  mov    $0x2,%eax
0842e172 +0x2be:  jmp    0842e179 <+0x2c5>
0842e174 +0x2c0:  mov    $0x0,%eax
0842e179 +0x2c5:  movl   $0x4,0x10(%esp)
0842e181 +0x2cd:  mov    %edx,0xc(%esp)
0842e185 +0x2d1:  mov    %eax,0x8(%esp)
0842e189 +0x2d5:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time='9999-12-31 23:59:59', apply_flag=%d where m_id=%d and punish_type=%d",0x4(%esp)
0842e191 +0x2dd:  mov    -0x1c(%ebp),%eax
0842e194 +0x2e0:  mov    %eax,(%esp)
0842e197 +0x2e3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e19c +0x2e8:  movl   $0x1,0x4(%esp)
0842e1a4 +0x2f0:  mov    -0x1c(%ebp),%eax
0842e1a7 +0x2f3:  mov    %eax,(%esp)
0842e1aa +0x2f6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e1af +0x2fb:  xor    $0x1,%eax
0842e1b2 +0x2fe:  test   %al,%al
0842e1b4 +0x300:  jne    0842e1c7 <+0x313>
0842e1b6 +0x302:  mov    -0x1c(%ebp),%eax
0842e1b9 +0x305:  mov    %eax,(%esp)
0842e1bc +0x308:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842e1c1 +0x30d:  or     %edx,%eax
0842e1c3 +0x30f:  test   %eax,%eax
0842e1c5 +0x311:  jne    0842e1ce <+0x31a>
0842e1c7 +0x313:  mov    $0x1,%eax
0842e1cc +0x318:  jmp    0842e1d3 <+0x31f>
0842e1ce +0x31a:  mov    $0x0,%eax
0842e1d3 +0x31f:  test   %al,%al
0842e1d5 +0x321:  je     0842e24a <+0x396>
0842e1d7 +0x323:  mov    -0x20(%ebp),%eax
0842e1da +0x326:  movzbl 0x10(%eax),%eax
0842e1de +0x32a:  test   %al,%al
0842e1e0 +0x32c:  je     0842e1e9 <+0x335>
0842e1e2 +0x32e:  mov    $0x2,%ebx
0842e1e7 +0x333:  jmp    0842e1ee <+0x33a>
0842e1e9 +0x335:  mov    $0x0,%ebx
0842e1ee +0x33a:  mov    -0x20(%ebp),%eax
0842e1f1 +0x33d:  mov    (%eax),%eax
0842e1f3 +0x33f:  movl   $0x0,0x4(%esp)
0842e1fb +0x347:  mov    %eax,(%esp)
0842e1fe +0x34a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e203 +0x34f:  mov    %ebx,0x10(%esp)
0842e207 +0x353:  movl   $0x4,0xc(%esp)
0842e20f +0x35b:  mov    %eax,0x8(%esp)
0842e213 +0x35f:  movl   $"inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), '9999-12-31 23:59:59', 0, %d)",0x4(%esp)
0842e21b +0x367:  mov    -0x1c(%ebp),%eax
0842e21e +0x36a:  mov    %eax,(%esp)
0842e221 +0x36d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e226 +0x372:  movl   $0x1,0x4(%esp)
0842e22e +0x37a:  mov    -0x1c(%ebp),%eax
0842e231 +0x37d:  mov    %eax,(%esp)
0842e234 +0x380:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e239 +0x385:  xor    $0x1,%eax
0842e23c +0x388:  test   %al,%al
0842e23e +0x38a:  je     0842e24a <+0x396>
0842e240 +0x38c:  mov    $0x0,%eax
0842e245 +0x391:  jmp    0842e342 <+0x48e>
0842e24a +0x396:  lea    -0x123(%ebp),%edx
0842e250 +0x39c:  mov    $0xff,%ebx
0842e255 +0x3a1:  mov    $0x0,%eax
0842e25a +0x3a6:  mov    %edx,%ecx
0842e25c +0x3a8:  and    $0x1,%ecx
0842e25f +0x3ab:  test   %ecx,%ecx
0842e261 +0x3ad:  je     0842e26b <+0x3b7>
0842e263 +0x3af:  mov    %al,(%edx)
0842e265 +0x3b1:  add    $0x1,%edx
0842e268 +0x3b4:  sub    $0x1,%ebx
0842e26b +0x3b7:  mov    %edx,%ecx
0842e26d +0x3b9:  and    $0x2,%ecx
0842e270 +0x3bc:  test   %ecx,%ecx
0842e272 +0x3be:  je     0842e27d <+0x3c9>
0842e274 +0x3c0:  mov    %ax,(%edx)
0842e277 +0x3c3:  add    $0x2,%edx
0842e27a +0x3c6:  sub    $0x2,%ebx
0842e27d +0x3c9:  mov    %ebx,%ecx
0842e27f +0x3cb:  shr    $0x2,%ecx
0842e282 +0x3ce:  mov    %edx,%edi
0842e284 +0x3d0:  rep stos %eax,%es:(%edi)
0842e286 +0x3d2:  mov    %edi,%edx
0842e288 +0x3d4:  mov    %ebx,%ecx
0842e28a +0x3d6:  and    $0x2,%ecx
0842e28d +0x3d9:  test   %ecx,%ecx
0842e28f +0x3db:  je     0842e297 <+0x3e3>
0842e291 +0x3dd:  mov    %ax,(%edx)
0842e294 +0x3e0:  add    $0x2,%edx
0842e297 +0x3e3:  mov    %ebx,%ecx
0842e299 +0x3e5:  and    $0x1,%ecx
0842e29c +0x3e8:  test   %ecx,%ecx
0842e29e +0x3ea:  je     0842e2a5 <+0x3f1>
0842e2a0 +0x3ec:  mov    %al,(%edx)
0842e2a2 +0x3ee:  add    $0x1,%edx
0842e2a5 +0x3f1:  mov    -0x20(%ebp),%eax
0842e2a8 +0x3f4:  mov    0x8(%eax),%ebx
0842e2ab +0x3f7:  mov    0xc(%eax),%esi
0842e2ae +0x3fa:  mov    -0x20(%ebp),%eax
0842e2b1 +0x3fd:  mov    0x4(%eax),%eax
0842e2b4 +0x400:  movl   $0x0,0x4(%esp)
0842e2bc +0x408:  mov    %eax,(%esp)
0842e2bf +0x40b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e2c4 +0x410:  mov    %ebx,0xc(%esp)
0842e2c8 +0x414:  mov    %esi,0x10(%esp)
0842e2cc +0x418:  mov    %eax,0x8(%esp)
0842e2d0 +0x41c:  movl   $"{Auto 2nd Information-Mail}|*|ARS 2nd Punish (Trade) / %s / %d",0x4(%esp)
0842e2d8 +0x424:  lea    -0x123(%ebp),%eax
0842e2de +0x42a:  mov    %eax,(%esp)
0842e2e1 +0x42d:  call   0807e440 <_init+0xd38>
0842e2e6 +0x432:  mov    -0x20(%ebp),%eax
0842e2e9 +0x435:  mov    (%eax),%eax
0842e2eb +0x437:  movl   $0x0,0x4(%esp)
0842e2f3 +0x43f:  mov    %eax,(%esp)
0842e2f6 +0x442:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e2fb +0x447:  lea    -0x123(%ebp),%edx
0842e301 +0x44d:  mov    %edx,0xc(%esp)
0842e305 +0x451:  mov    %eax,0x8(%esp)
0842e309 +0x455:  movl   $"inSert into member_punish_info_history(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, 4, now(), 6, now(), '9999-12-31 23:59:59', 'ARS', 2, '%s')",0x4(%esp)
0842e311 +0x45d:  mov    -0x1c(%ebp),%eax
0842e314 +0x460:  mov    %eax,(%esp)
0842e317 +0x463:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e31c +0x468:  movl   $0x1,0x4(%esp)
0842e324 +0x470:  mov    -0x1c(%ebp),%eax
0842e327 +0x473:  mov    %eax,(%esp)
0842e32a +0x476:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e32f +0x47b:  xor    $0x1,%eax
0842e332 +0x47e:  test   %al,%al
0842e334 +0x480:  je     0842e33d <+0x489>
0842e336 +0x482:  mov    $0x0,%eax
0842e33b +0x487:  jmp    0842e342 <+0x48e>
0842e33d +0x489:  mov    $0x1,%eax
0842e342 +0x48e:  add    $0x14c,%esp
0842e348 +0x494:  pop    %ebx
0842e349 +0x495:  pop    %esi
0842e34a +0x496:  pop    %edi
0842e34b +0x497:  pop    %ebp
0842e34c +0x498:  ret
0842e34d +0x499:  nop
```

## 反编译 C

```c
// DB_InsertAutoPunishSecondUser::dispatch @ 0x842deb4

/* DB_InsertAutoPunishSecondUser::dispatch(int, int, Stream*) */

undefined4 DB_InsertAutoPunishSecondUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_INSERT_AUTO_PUNISH_SECOND_USER SVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  char local_127;
  char local_126 [254];
  MySQL *local_28;
  SIG_INSERT_AUTO_PUNISH_SECOND_USER *local_24;
  MySQL *local_20;
  
  bVar11 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_24 = Stream::GetOutBuffer<SIG_INSERT_AUTO_PUNISH_SECOND_USER>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate auto_punish_second_user set occ_time=now(),total_trade_cnt=total_trade_cnt+1,trade_cnt=trade_cnt+1,total_trade_gold=total_trade_gold+%d,trade_gold=trade_gold+%d,punish_flag=%d where m_id=%s"
                   ,*(uint *)(local_24 + 8),*(uint *)(local_24 + 0xc),*(uint *)(local_24 + 8),
                   *(uint *)(local_24 + 0xc),
                   (uint)(local_24[0x10] != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0),uVar5);
  cVar4 = MySQL::exec(local_28,true);
  if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    SVar1 = local_24[0x10];
    uVar6 = *(uint *)(local_24 + 8);
    uVar8 = *(uint *)(local_24 + 0xc);
    uVar2 = *(uint *)(local_24 + 8);
    uVar3 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_28,
                     "inSert into auto_punish_second_user(m_id,occ_time,total_trade_cnt,trade_cnt,total_trade_gold,trade_gold,punish_flag) values(%s,now(),1,1,%d,%d,%d)"
                     ,uVar5,uVar2,uVar3,uVar6,uVar8,
                     (uint)(SVar1 != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0));
    MySQL::exec(local_28,true);
  }
  uVar6 = NumberToString(*(uint *)(local_24 + 4),1);
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate auto_punish_second_log set occ_time=now(),trade_cnt=trade_cnt+1,trade_gold=trade_gold+%d where m_id=%s and hack_m_id=%s"
                   ,*(uint *)(local_24 + 8),*(uint *)(local_24 + 0xc),uVar5,uVar6);
  cVar4 = MySQL::exec(local_28,true);
  if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    uVar8 = *(uint *)(local_24 + 8);
    uVar6 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)(local_24 + 4),1);
    uVar7 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_28,
                     "inSert into auto_punish_second_log(m_id,hack_m_id,occ_time,trade_cnt,trade_gold) values(%s,%s,now(),1,%d)"
                     ,uVar7,uVar5,uVar8,uVar6);
    MySQL::exec(local_28,true);
  }
  if (local_24[0x10] != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_24[0x10] == (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 2;
    }
    MySQL::set_query(local_20,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', apply_flag=%d where m_id=%d and punish_type=%d"
                     ,uVar5,*(uint *)local_24,4,uVar6);
    cVar4 = MySQL::exec(local_20,true);
    if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_20), lVar12 != 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      if (local_24[0x10] == (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
      uVar7 = NumberToString(*(uint *)local_24,0);
      MySQL::set_query(local_20,
                       "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, %d)"
                       ,uVar7,4,uVar5);
      cVar4 = MySQL::exec(local_20,true);
      if (cVar4 != '\x01') {
        return 0;
      }
    }
    pcVar9 = &local_127;
    uVar6 = 0xff;
    bVar10 = ((uint)pcVar9 & 1) != 0;
    if (bVar10) {
      local_127 = '\0';
      pcVar9 = local_126;
      uVar6 = 0xfe;
    }
    if (((uint)pcVar9 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
      uVar6 = uVar6 - 2;
    }
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar6 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
    }
    if (!bVar10) {
      *pcVar9 = '\0';
    }
    uVar6 = *(uint *)(local_24 + 8);
    uVar8 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)(local_24 + 4),0);
    sprintf(&local_127,"{Auto 2nd Information-Mail}|*|ARS 2nd Punish (Trade) / %s / %d",uVar5,uVar6,
            uVar8);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "inSert into member_punish_info_history(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, 4, now(), 6, now(), \'9999-12-31 23:59:59\', \'ARS\', 2, \'%s\')"
                     ,uVar5,&local_127);
    cVar4 = MySQL::exec(local_20,true);
    if (cVar4 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

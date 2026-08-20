# dispatch

`_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream`

`DB_GetDeathTowerBestRecord::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GetDeathTowerBestRecord` | `0x08429ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08429ad0  _ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream
#           DB_GetDeathTowerBestRecord::dispatch(int, int, Stream*)
# range [0x08429ad0, 0x0842a047]
08429ad0 +0x000:  push   %ebp
08429ad1 +0x001:  mov    %esp,%ebp
08429ad3 +0x003:  push   %esi
08429ad4 +0x004:  push   %ebx
08429ad5 +0x005:  sub    $0x30,%esp
08429ad8 +0x008:  mov    0x8(%ebp),%eax
08429adb +0x00b:  mov    0x14(%ebp),%edx
08429ade +0x00e:  mov    %edx,0xc(%esp)
08429ae2 +0x012:  mov    0x10(%ebp),%edx
08429ae5 +0x015:  mov    %edx,0x8(%esp)
08429ae9 +0x019:  mov    0xc(%ebp),%edx
08429aec +0x01c:  mov    %edx,0x4(%esp)
08429af0 +0x020:  mov    %eax,(%esp)
08429af3 +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08429af8 +0x028:  xor    $0x1,%eax
08429afb +0x02b:  test   %al,%al
08429afd +0x02d:  je     08429b09 <+0x39>
08429aff +0x02f:  mov    $0x0,%ebx
08429b04 +0x034:  jmp    0842a03e <+0x56e>
08429b09 +0x039:  lea    -0x18(%ebp),%eax
08429b0c +0x03c:  mov    %eax,0x4(%esp)
08429b10 +0x040:  mov    0x14(%ebp),%eax
08429b13 +0x043:  mov    %eax,(%esp)
08429b16 +0x046:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08429b1b +0x04b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08429b20 +0x050:  movl   $0x0,0x8(%esp)
08429b28 +0x058:  movl   $0x2,0x4(%esp)
08429b30 +0x060:  mov    %eax,(%esp)
08429b33 +0x063:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08429b38 +0x068:  mov    %eax,-0x14(%ebp)
08429b3b +0x06b:  mov    -0x18(%ebp),%eax
08429b3e +0x06e:  movl   $0x5,0xc(%esp)
08429b46 +0x076:  mov    %eax,0x8(%esp)
08429b4a +0x07a:  movl   $"seLect tower_index, \t\tmember_info_1,stage_1,play_time_1, \t\tmember_info_2,stage_2,play_time_2, \t\tmember_info_3,stage_3,play_time_3, \t\tmember_info_4,stage_4,play_time_4 \t\tfrom charac_tower_record where charac_no=%d limit %d",0x4(%esp)
08429b52 +0x082:  mov    -0x14(%ebp),%eax
08429b55 +0x085:  mov    %eax,(%esp)
08429b58 +0x088:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08429b5d +0x08d:  movl   $0x1,0x4(%esp)
08429b65 +0x095:  mov    -0x14(%ebp),%eax
08429b68 +0x098:  mov    %eax,(%esp)
08429b6b +0x09b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08429b70 +0x0a0:  xor    $0x1,%eax
08429b73 +0x0a3:  test   %al,%al
08429b75 +0x0a5:  jne    08429b86 <+0xb6>
08429b77 +0x0a7:  mov    -0x14(%ebp),%eax
08429b7a +0x0aa:  mov    %eax,(%esp)
08429b7d +0x0ad:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08429b82 +0x0b2:  test   %eax,%eax
08429b84 +0x0b4:  jne    08429b8d <+0xbd>
08429b86 +0x0b6:  mov    $0x1,%eax
08429b8b +0x0bb:  jmp    08429b92 <+0xc2>
08429b8d +0x0bd:  mov    $0x0,%eax
08429b92 +0x0c2:  test   %al,%al
08429b94 +0x0c4:  je     08429ba0 <+0xd0>
08429b96 +0x0c6:  mov    $0x0,%ebx
08429b9b +0x0cb:  jmp    0842a03e <+0x56e>
08429ba0 +0x0d0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08429ba5 +0x0d5:  movl   $0x6bb2,0x8(%esp)
08429bad +0x0dd:  movl   $"DBThread.cpp",0x4(%esp)
08429bb5 +0x0e5:  mov    %eax,(%esp)
08429bb8 +0x0e8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08429bbd +0x0ed:  movl   $0x1,0x8(%esp)
08429bc5 +0x0f5:  mov    %eax,0x4(%esp)
08429bc9 +0x0f9:  lea    -0x20(%ebp),%eax
08429bcc +0x0fc:  mov    %eax,(%esp)
08429bcf +0x0ff:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08429bd4 +0x104:  lea    -0x20(%ebp),%eax
08429bd7 +0x107:  mov    %eax,(%esp)
08429bda +0x10a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08429bdf +0x10f:  movl   $0xe2,0x4(%esp)
08429be7 +0x117:  mov    %eax,(%esp)
08429bea +0x11a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08429bef +0x11f:  lea    -0x20(%ebp),%eax
08429bf2 +0x122:  mov    %eax,(%esp)
08429bf5 +0x125:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08429bfa +0x12a:  mov    0x10(%ebp),%edx
08429bfd +0x12d:  mov    %edx,0x4(%esp)
08429c01 +0x131:  mov    %eax,(%esp)
08429c04 +0x134:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08429c09 +0x139:  lea    -0x20(%ebp),%eax
08429c0c +0x13c:  mov    %eax,(%esp)
08429c0f +0x13f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08429c14 +0x144:  mov    %eax,(%esp)
08429c17 +0x147:  call   0845240c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5022>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5022
08429c1c +0x14c:  mov    %eax,-0x10(%ebp)
08429c1f +0x14f:  mov    -0x14(%ebp),%eax
08429c22 +0x152:  mov    %eax,(%esp)
08429c25 +0x155:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08429c2a +0x15a:  mov    -0x10(%ebp),%edx
08429c2d +0x15d:  mov    %eax,(%edx)
08429c2f +0x15f:  mov    -0x18(%ebp),%edx
08429c32 +0x162:  mov    -0x10(%ebp),%eax
08429c35 +0x165:  mov    %edx,0x4(%eax)
08429c38 +0x168:  movl   $0x0,-0xc(%ebp)
08429c3f +0x16f:  jmp    08429fdc <+0x50c>
08429c44 +0x174:  mov    -0x14(%ebp),%eax
08429c47 +0x177:  mov    %eax,(%esp)
08429c4a +0x17a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08429c4f +0x17f:  xor    $0x1,%eax
08429c52 +0x182:  test   %al,%al
08429c54 +0x184:  je     08429c60 <+0x190>
08429c56 +0x186:  mov    $0x0,%ebx
08429c5b +0x18b:  jmp    0842a033 <+0x563>
08429c60 +0x190:  mov    -0xc(%ebp),%eax
08429c63 +0x193:  imul   $0x1b0,%eax,%eax
08429c69 +0x199:  add    -0x10(%ebp),%eax
08429c6c +0x19c:  add    $0xc,%eax
08429c6f +0x19f:  mov    %eax,0x8(%esp)
08429c73 +0x1a3:  movl   $0x0,0x4(%esp)
08429c7b +0x1ab:  mov    -0x14(%ebp),%eax
08429c7e +0x1ae:  mov    %eax,(%esp)
08429c81 +0x1b1:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08429c86 +0x1b6:  xor    $0x1,%eax
08429c89 +0x1b9:  test   %al,%al
08429c8b +0x1bb:  je     08429c97 <+0x1c7>
08429c8d +0x1bd:  mov    $0x0,%ebx
08429c92 +0x1c2:  jmp    0842a033 <+0x563>
08429c97 +0x1c7:  mov    -0xc(%ebp),%eax
08429c9a +0x1ca:  imul   $0x1b0,%eax,%eax
08429ca0 +0x1d0:  add    -0x10(%ebp),%eax
08429ca3 +0x1d3:  add    $0x10,%eax
08429ca6 +0x1d6:  movl   $0x17,0xc(%esp)
08429cae +0x1de:  mov    %eax,0x8(%esp)
08429cb2 +0x1e2:  movl   $0x1,0x4(%esp)
08429cba +0x1ea:  mov    -0x14(%ebp),%eax
08429cbd +0x1ed:  mov    %eax,(%esp)
08429cc0 +0x1f0:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08429cc5 +0x1f5:  xor    $0x1,%eax
08429cc8 +0x1f8:  test   %al,%al
08429cca +0x1fa:  je     08429cd6 <+0x206>
08429ccc +0x1fc:  mov    $0x0,%ebx
08429cd1 +0x201:  jmp    0842a033 <+0x563>
08429cd6 +0x206:  mov    -0xc(%ebp),%eax
08429cd9 +0x209:  imul   $0x1b0,%eax,%eax
08429cdf +0x20f:  add    $0x60,%eax
08429ce2 +0x212:  add    -0x10(%ebp),%eax
08429ce5 +0x215:  add    $0xc,%eax
08429ce8 +0x218:  mov    %eax,0x8(%esp)
08429cec +0x21c:  movl   $0x2,0x4(%esp)
08429cf4 +0x224:  mov    -0x14(%ebp),%eax
08429cf7 +0x227:  mov    %eax,(%esp)
08429cfa +0x22a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429cff +0x22f:  xor    $0x1,%eax
08429d02 +0x232:  test   %al,%al
08429d04 +0x234:  je     08429d10 <+0x240>
08429d06 +0x236:  mov    $0x0,%ebx
08429d0b +0x23b:  jmp    0842a033 <+0x563>
08429d10 +0x240:  mov    -0xc(%ebp),%eax
08429d13 +0x243:  imul   $0x1b0,%eax,%eax
08429d19 +0x249:  add    $0x60,%eax
08429d1c +0x24c:  add    -0x10(%ebp),%eax
08429d1f +0x24f:  add    $0x10,%eax
08429d22 +0x252:  mov    %eax,0x8(%esp)
08429d26 +0x256:  movl   $0x3,0x4(%esp)
08429d2e +0x25e:  mov    -0x14(%ebp),%eax
08429d31 +0x261:  mov    %eax,(%esp)
08429d34 +0x264:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429d39 +0x269:  xor    $0x1,%eax
08429d3c +0x26c:  test   %al,%al
08429d3e +0x26e:  je     08429d4a <+0x27a>
08429d40 +0x270:  mov    $0x0,%ebx
08429d45 +0x275:  jmp    0842a033 <+0x563>
08429d4a +0x27a:  mov    -0xc(%ebp),%edx
08429d4d +0x27d:  mov    -0x10(%ebp),%eax
08429d50 +0x280:  imul   $0x1b0,%edx,%edx
08429d56 +0x286:  movw   $0x1,0xe(%edx,%eax,1)
08429d5d +0x28d:  mov    -0xc(%ebp),%eax
08429d60 +0x290:  imul   $0x1b0,%eax,%eax
08429d66 +0x296:  add    $0x6c,%eax
08429d69 +0x299:  add    -0x10(%ebp),%eax
08429d6c +0x29c:  add    $0x10,%eax
08429d6f +0x29f:  movl   $0x2e,0xc(%esp)
08429d77 +0x2a7:  mov    %eax,0x8(%esp)
08429d7b +0x2ab:  movl   $0x4,0x4(%esp)
08429d83 +0x2b3:  mov    -0x14(%ebp),%eax
08429d86 +0x2b6:  mov    %eax,(%esp)
08429d89 +0x2b9:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08429d8e +0x2be:  xor    $0x1,%eax
08429d91 +0x2c1:  test   %al,%al
08429d93 +0x2c3:  je     08429d9f <+0x2cf>
08429d95 +0x2c5:  mov    $0x0,%ebx
08429d9a +0x2ca:  jmp    0842a033 <+0x563>
08429d9f +0x2cf:  mov    -0xc(%ebp),%eax
08429da2 +0x2d2:  imul   $0x1b0,%eax,%eax
08429da8 +0x2d8:  add    $0xcc,%eax
08429dad +0x2dd:  add    -0x10(%ebp),%eax
08429db0 +0x2e0:  add    $0xc,%eax
08429db3 +0x2e3:  mov    %eax,0x8(%esp)
08429db7 +0x2e7:  movl   $0x5,0x4(%esp)
08429dbf +0x2ef:  mov    -0x14(%ebp),%eax
08429dc2 +0x2f2:  mov    %eax,(%esp)
08429dc5 +0x2f5:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429dca +0x2fa:  xor    $0x1,%eax
08429dcd +0x2fd:  test   %al,%al
08429dcf +0x2ff:  je     08429ddb <+0x30b>
08429dd1 +0x301:  mov    $0x0,%ebx
08429dd6 +0x306:  jmp    0842a033 <+0x563>
08429ddb +0x30b:  mov    -0xc(%ebp),%eax
08429dde +0x30e:  imul   $0x1b0,%eax,%eax
08429de4 +0x314:  add    $0xcc,%eax
08429de9 +0x319:  add    -0x10(%ebp),%eax
08429dec +0x31c:  add    $0x10,%eax
08429def +0x31f:  mov    %eax,0x8(%esp)
08429df3 +0x323:  movl   $0x6,0x4(%esp)
08429dfb +0x32b:  mov    -0x14(%ebp),%eax
08429dfe +0x32e:  mov    %eax,(%esp)
08429e01 +0x331:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429e06 +0x336:  xor    $0x1,%eax
08429e09 +0x339:  test   %al,%al
08429e0b +0x33b:  je     08429e17 <+0x347>
08429e0d +0x33d:  mov    $0x0,%ebx
08429e12 +0x342:  jmp    0842a033 <+0x563>
08429e17 +0x347:  mov    -0xc(%ebp),%eax
08429e1a +0x34a:  mov    -0x10(%ebp),%edx
08429e1d +0x34d:  imul   $0x1b0,%eax,%eax
08429e23 +0x353:  lea    (%edx,%eax,1),%eax
08429e26 +0x356:  add    $0x6c,%eax
08429e29 +0x359:  movw   $0x2,0xe(%eax)
08429e2f +0x35f:  mov    -0xc(%ebp),%eax
08429e32 +0x362:  imul   $0x1b0,%eax,%eax
08429e38 +0x368:  add    $0xd8,%eax
08429e3d +0x36d:  add    -0x10(%ebp),%eax
08429e40 +0x370:  add    $0x10,%eax
08429e43 +0x373:  movl   $0x45,0xc(%esp)
08429e4b +0x37b:  mov    %eax,0x8(%esp)
08429e4f +0x37f:  movl   $0x7,0x4(%esp)
08429e57 +0x387:  mov    -0x14(%ebp),%eax
08429e5a +0x38a:  mov    %eax,(%esp)
08429e5d +0x38d:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08429e62 +0x392:  xor    $0x1,%eax
08429e65 +0x395:  test   %al,%al
08429e67 +0x397:  je     08429e73 <+0x3a3>
08429e69 +0x399:  mov    $0x0,%ebx
08429e6e +0x39e:  jmp    0842a033 <+0x563>
08429e73 +0x3a3:  mov    -0xc(%ebp),%eax
08429e76 +0x3a6:  imul   $0x1b0,%eax,%eax
08429e7c +0x3ac:  add    $0x138,%eax
08429e81 +0x3b1:  add    -0x10(%ebp),%eax
08429e84 +0x3b4:  add    $0xc,%eax
08429e87 +0x3b7:  mov    %eax,0x8(%esp)
08429e8b +0x3bb:  movl   $0x8,0x4(%esp)
08429e93 +0x3c3:  mov    -0x14(%ebp),%eax
08429e96 +0x3c6:  mov    %eax,(%esp)
08429e99 +0x3c9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429e9e +0x3ce:  xor    $0x1,%eax
08429ea1 +0x3d1:  test   %al,%al
08429ea3 +0x3d3:  je     08429eaf <+0x3df>
08429ea5 +0x3d5:  mov    $0x0,%ebx
08429eaa +0x3da:  jmp    0842a033 <+0x563>
08429eaf +0x3df:  mov    -0xc(%ebp),%eax
08429eb2 +0x3e2:  imul   $0x1b0,%eax,%eax
08429eb8 +0x3e8:  add    $0x138,%eax
08429ebd +0x3ed:  add    -0x10(%ebp),%eax
08429ec0 +0x3f0:  add    $0x10,%eax
08429ec3 +0x3f3:  mov    %eax,0x8(%esp)
08429ec7 +0x3f7:  movl   $0x9,0x4(%esp)
08429ecf +0x3ff:  mov    -0x14(%ebp),%eax
08429ed2 +0x402:  mov    %eax,(%esp)
08429ed5 +0x405:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429eda +0x40a:  xor    $0x1,%eax
08429edd +0x40d:  test   %al,%al
08429edf +0x40f:  je     08429eeb <+0x41b>
08429ee1 +0x411:  mov    $0x0,%ebx
08429ee6 +0x416:  jmp    0842a033 <+0x563>
08429eeb +0x41b:  mov    -0xc(%ebp),%eax
08429eee +0x41e:  mov    -0x10(%ebp),%edx
08429ef1 +0x421:  imul   $0x1b0,%eax,%eax
08429ef7 +0x427:  lea    (%edx,%eax,1),%eax
08429efa +0x42a:  add    $0xd8,%eax
08429eff +0x42f:  movw   $0x3,0xe(%eax)
08429f05 +0x435:  mov    -0xc(%ebp),%eax
08429f08 +0x438:  imul   $0x1b0,%eax,%eax
08429f0e +0x43e:  add    $0x144,%eax
08429f13 +0x443:  add    -0x10(%ebp),%eax
08429f16 +0x446:  add    $0x10,%eax
08429f19 +0x449:  movl   $0x5c,0xc(%esp)
08429f21 +0x451:  mov    %eax,0x8(%esp)
08429f25 +0x455:  movl   $0xa,0x4(%esp)
08429f2d +0x45d:  mov    -0x14(%ebp),%eax
08429f30 +0x460:  mov    %eax,(%esp)
08429f33 +0x463:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08429f38 +0x468:  xor    $0x1,%eax
08429f3b +0x46b:  test   %al,%al
08429f3d +0x46d:  je     08429f49 <+0x479>
08429f3f +0x46f:  mov    $0x0,%ebx
08429f44 +0x474:  jmp    0842a033 <+0x563>
08429f49 +0x479:  mov    -0xc(%ebp),%eax
08429f4c +0x47c:  imul   $0x1b0,%eax,%eax
08429f52 +0x482:  add    $0x1a4,%eax
08429f57 +0x487:  add    -0x10(%ebp),%eax
08429f5a +0x48a:  add    $0xc,%eax
08429f5d +0x48d:  mov    %eax,0x8(%esp)
08429f61 +0x491:  movl   $0xb,0x4(%esp)
08429f69 +0x499:  mov    -0x14(%ebp),%eax
08429f6c +0x49c:  mov    %eax,(%esp)
08429f6f +0x49f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429f74 +0x4a4:  xor    $0x1,%eax
08429f77 +0x4a7:  test   %al,%al
08429f79 +0x4a9:  je     08429f85 <+0x4b5>
08429f7b +0x4ab:  mov    $0x0,%ebx
08429f80 +0x4b0:  jmp    0842a033 <+0x563>
08429f85 +0x4b5:  mov    -0xc(%ebp),%eax
08429f88 +0x4b8:  imul   $0x1b0,%eax,%eax
08429f8e +0x4be:  add    $0x1a4,%eax
08429f93 +0x4c3:  add    -0x10(%ebp),%eax
08429f96 +0x4c6:  add    $0x10,%eax
08429f99 +0x4c9:  mov    %eax,0x8(%esp)
08429f9d +0x4cd:  movl   $0xc,0x4(%esp)
08429fa5 +0x4d5:  mov    -0x14(%ebp),%eax
08429fa8 +0x4d8:  mov    %eax,(%esp)
08429fab +0x4db:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08429fb0 +0x4e0:  xor    $0x1,%eax
08429fb3 +0x4e3:  test   %al,%al
08429fb5 +0x4e5:  je     08429fbe <+0x4ee>
08429fb7 +0x4e7:  mov    $0x0,%ebx
08429fbc +0x4ec:  jmp    0842a033 <+0x563>
08429fbe +0x4ee:  mov    -0xc(%ebp),%eax
08429fc1 +0x4f1:  mov    -0x10(%ebp),%edx
08429fc4 +0x4f4:  imul   $0x1b0,%eax,%eax
08429fca +0x4fa:  lea    (%edx,%eax,1),%eax
08429fcd +0x4fd:  add    $0x144,%eax
08429fd2 +0x502:  movw   $0x4,0xe(%eax)
08429fd8 +0x508:  addl   $0x1,-0xc(%ebp)
08429fdc +0x50c:  mov    -0x14(%ebp),%eax
08429fdf +0x50f:  mov    %eax,(%esp)
08429fe2 +0x512:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08429fe7 +0x517:  cmp    -0xc(%ebp),%eax
08429fea +0x51a:  seta   %al
08429fed +0x51d:  test   %al,%al
08429fef +0x51f:  jne    08429c44 <+0x174>
08429ff5 +0x525:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08429ffa +0x52a:  lea    -0x20(%ebp),%edx
08429ffd +0x52d:  mov    %edx,0x8(%esp)
0842a001 +0x531:  movl   $0x1,0x4(%esp)
0842a009 +0x539:  mov    %eax,(%esp)
0842a00c +0x53c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842a011 +0x541:  mov    $0x1,%ebx
0842a016 +0x546:  jmp    0842a033 <+0x563>
0842a018 +0x548:  mov    %edx,%ebx
0842a01a +0x54a:  mov    %eax,%esi
0842a01c +0x54c:  lea    -0x20(%ebp),%eax
0842a01f +0x54f:  mov    %eax,(%esp)
0842a022 +0x552:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a027 +0x557:  mov    %esi,%eax
0842a029 +0x559:  mov    %ebx,%edx
0842a02b +0x55b:  mov    %eax,(%esp)
0842a02e +0x55e:  call   08ae3750 <_Unwind_Resume>
0842a033 +0x563:  lea    -0x20(%ebp),%eax
0842a036 +0x566:  mov    %eax,(%esp)
0842a039 +0x569:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a03e +0x56e:  mov    %ebx,%eax
0842a040 +0x570:  add    $0x30,%esp
0842a043 +0x573:  pop    %ebx
0842a044 +0x574:  pop    %esi
0842a045 +0x575:  pop    %ebp
0842a046 +0x576:  ret
0842a047 +0x577:  nop
```

## 反编译 C

```c
// DB_GetDeathTowerBestRecord::dispatch @ 0x8429ad0

/* DB_GetDeathTowerBestRecord::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetDeathTowerBestRecord::dispatch
          (DB_GetDeathTowerBestRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  CStreamGuard local_24 [8];
  uint local_1c;
  MySQL *local_18;
  SIG_DEATH_TOWER_GET_BEST_RECORD *local_14;
  uint local_10;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  Stream::operator>>(param_3,&local_1c);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  MySQL::set_query(local_18,
                   "seLect tower_index, \t\tmember_info_1,stage_1,play_time_1, \t\tmember_info_2,stage_2,play_time_2, \t\tmember_info_3,stage_3,play_time_3, \t\tmember_info_4,stage_4,play_time_4 \t\tfrom charac_tower_record where charac_no=%d limit %d"
                   ,local_1c,5);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = 0;
  }
  else {
    pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6bb2);
    CStreamGuard::CStreamGuard(local_24,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08429bea to 0842a010 has its CatchHandler @ 0842a018 */
    CStreamGuard::operator<<(pCVar5,0xe2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar5,param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_14 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_GET_BEST_RECORD>(pCVar5);
    uVar7 = MySQL::get_n_rows(local_18);
    *(undefined4 *)local_14 = uVar7;
    *(uint *)(local_14 + 4) = local_1c;
    local_10 = 0;
    while (uVar6 = MySQL::get_n_rows(local_18), local_10 < uVar6) {
      cVar2 = MySQL::fetch(local_18);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_ushort(local_18,0,(ushort *)(local_14 + local_10 * 0x1b0 + 0xc));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_binary(local_18,1,local_14 + local_10 * 0x1b0 + 0x10,0x17);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,2,(uint *)(local_14 + local_10 * 0x1b0 + 0x6c));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,3,(uint *)(local_14 + local_10 * 0x1b0 + 0x70));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0xe) = 1;
      cVar2 = MySQL::get_binary(local_18,4,local_14 + local_10 * 0x1b0 + 0x7c,0x2e);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,5,(uint *)(local_14 + local_10 * 0x1b0 + 0xd8));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,6,(uint *)(local_14 + local_10 * 0x1b0 + 0xdc));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0x7a) = 2;
      cVar2 = MySQL::get_binary(local_18,7,local_14 + local_10 * 0x1b0 + 0xe8,0x45);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,8,(uint *)(local_14 + local_10 * 0x1b0 + 0x144));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,9,(uint *)(local_14 + local_10 * 0x1b0 + 0x148));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0xe6) = 3;
      cVar2 = MySQL::get_binary(local_18,10,local_14 + local_10 * 0x1b0 + 0x154,0x5c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,0xb,(uint *)(local_14 + local_10 * 0x1b0 + 0x1b0));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,0xc,(uint *)(local_14 + local_10 * 0x1b0 + 0x1b4));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0x152) = 4;
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
    uVar7 = 1;
LAB_0842a033:
    CStreamGuard::~CStreamGuard(local_24);
  }
  return uVar7;
}
```

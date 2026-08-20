# GetUserPvp

`_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC`

`DB_LoadEtc::GetUserPvp(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08407dc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08407dc2  _ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC
#           DB_LoadEtc::GetUserPvp(SIG_LOAD_ETC*)
# range [0x08407dc2, 0x0840838d]
08407dc2 +0x000:  push   %ebp
08407dc3 +0x001:  mov    %esp,%ebp
08407dc5 +0x003:  sub    $0x68,%esp
08407dc8 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08407dcd +0x00b:  movl   $0x0,0x8(%esp)
08407dd5 +0x013:  movl   $0x2,0x4(%esp)
08407ddd +0x01b:  mov    %eax,(%esp)
08407de0 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08407de5 +0x023:  mov    %eax,-0x18(%ebp)
08407de8 +0x026:  mov    0xc(%ebp),%eax
08407deb +0x029:  mov    0x4(%eax),%eax
08407dee +0x02c:  mov    %eax,0x8(%esp)
08407df2 +0x030:  movl   $"seLect win,lose,pvp_point,pvp_grade,avg_kill_count,avg_buf_count,avg_debuf_count,avg_heal_count,avg_counter_count,avg_back_atk_count,avg_union_hit_count,avg_overkill_count,avg_combo_count,avg_aerial_count,avg_attacked_count,avg_deal_damage,avg_technic,avg_style,avg_hit_penalty,pvp_count,win_point,pvp_grade_ext,unix_timestamp(last_play_time),play_count,play_time,unix_timestamp(pvp_grade_ext_update_time) from pvp_result where charac_no=%u",0x4(%esp)
08407dfa +0x038:  mov    -0x18(%ebp),%eax
08407dfd +0x03b:  mov    %eax,(%esp)
08407e00 +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08407e05 +0x043:  movl   $0x1,0x4(%esp)
08407e0d +0x04b:  mov    -0x18(%ebp),%eax
08407e10 +0x04e:  mov    %eax,(%esp)
08407e13 +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08407e18 +0x056:  xor    $0x1,%eax
08407e1b +0x059:  test   %al,%al
08407e1d +0x05b:  je     08407e29 <+0x67>
08407e1f +0x05d:  mov    $0xffffffff,%eax
08407e24 +0x062:  jmp    0840838b <+0x5c9>
08407e29 +0x067:  mov    -0x18(%ebp),%eax
08407e2c +0x06a:  mov    %eax,(%esp)
08407e2f +0x06d:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08407e34 +0x072:  xor    $0x1,%eax
08407e37 +0x075:  test   %al,%al
08407e39 +0x077:  je     08407e45 <+0x83>
08407e3b +0x079:  mov    $0x1,%eax
08407e40 +0x07e:  jmp    0840838b <+0x5c9>
08407e45 +0x083:  mov    0xc(%ebp),%eax
08407e48 +0x086:  add    $0x340,%eax
08407e4d +0x08b:  mov    %eax,-0x14(%ebp)
08407e50 +0x08e:  mov    -0x14(%ebp),%eax
08407e53 +0x091:  mov    %eax,0x8(%esp)
08407e57 +0x095:  movl   $0x0,0x4(%esp)
08407e5f +0x09d:  mov    -0x18(%ebp),%eax
08407e62 +0x0a0:  mov    %eax,(%esp)
08407e65 +0x0a3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407e6a +0x0a8:  xor    $0x1,%eax
08407e6d +0x0ab:  test   %al,%al
08407e6f +0x0ad:  je     08407e7b <+0xb9>
08407e71 +0x0af:  mov    $0xffffffff,%eax
08407e76 +0x0b4:  jmp    0840838b <+0x5c9>
08407e7b +0x0b9:  mov    -0x14(%ebp),%eax
08407e7e +0x0bc:  add    $0x4,%eax
08407e81 +0x0bf:  mov    %eax,0x8(%esp)
08407e85 +0x0c3:  movl   $0x1,0x4(%esp)
08407e8d +0x0cb:  mov    -0x18(%ebp),%eax
08407e90 +0x0ce:  mov    %eax,(%esp)
08407e93 +0x0d1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407e98 +0x0d6:  xor    $0x1,%eax
08407e9b +0x0d9:  test   %al,%al
08407e9d +0x0db:  je     08407ea9 <+0xe7>
08407e9f +0x0dd:  mov    $0xffffffff,%eax
08407ea4 +0x0e2:  jmp    0840838b <+0x5c9>
08407ea9 +0x0e7:  mov    -0x14(%ebp),%eax
08407eac +0x0ea:  add    $0x8,%eax
08407eaf +0x0ed:  mov    %eax,0x8(%esp)
08407eb3 +0x0f1:  movl   $0x2,0x4(%esp)
08407ebb +0x0f9:  mov    -0x18(%ebp),%eax
08407ebe +0x0fc:  mov    %eax,(%esp)
08407ec1 +0x0ff:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407ec6 +0x104:  xor    $0x1,%eax
08407ec9 +0x107:  test   %al,%al
08407ecb +0x109:  je     08407ed7 <+0x115>
08407ecd +0x10b:  mov    $0xffffffff,%eax
08407ed2 +0x110:  jmp    0840838b <+0x5c9>
08407ed7 +0x115:  mov    -0x14(%ebp),%eax
08407eda +0x118:  add    $0x14,%eax
08407edd +0x11b:  mov    %eax,0x8(%esp)
08407ee1 +0x11f:  movl   $0x3,0x4(%esp)
08407ee9 +0x127:  mov    -0x18(%ebp),%eax
08407eec +0x12a:  mov    %eax,(%esp)
08407eef +0x12d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407ef4 +0x132:  xor    $0x1,%eax
08407ef7 +0x135:  test   %al,%al
08407ef9 +0x137:  je     08407f05 <+0x143>
08407efb +0x139:  mov    $0xffffffff,%eax
08407f00 +0x13e:  jmp    0840838b <+0x5c9>
08407f05 +0x143:  mov    -0x14(%ebp),%eax
08407f08 +0x146:  add    $0x18,%eax
08407f0b +0x149:  mov    %eax,0x8(%esp)
08407f0f +0x14d:  movl   $0x4,0x4(%esp)
08407f17 +0x155:  mov    -0x18(%ebp),%eax
08407f1a +0x158:  mov    %eax,(%esp)
08407f1d +0x15b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407f22 +0x160:  xor    $0x1,%eax
08407f25 +0x163:  test   %al,%al
08407f27 +0x165:  je     08407f33 <+0x171>
08407f29 +0x167:  mov    $0xffffffff,%eax
08407f2e +0x16c:  jmp    0840838b <+0x5c9>
08407f33 +0x171:  mov    -0x14(%ebp),%eax
08407f36 +0x174:  add    $0x1c,%eax
08407f39 +0x177:  mov    %eax,0x8(%esp)
08407f3d +0x17b:  movl   $0x5,0x4(%esp)
08407f45 +0x183:  mov    -0x18(%ebp),%eax
08407f48 +0x186:  mov    %eax,(%esp)
08407f4b +0x189:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407f50 +0x18e:  xor    $0x1,%eax
08407f53 +0x191:  test   %al,%al
08407f55 +0x193:  je     08407f61 <+0x19f>
08407f57 +0x195:  mov    $0xffffffff,%eax
08407f5c +0x19a:  jmp    0840838b <+0x5c9>
08407f61 +0x19f:  mov    -0x14(%ebp),%eax
08407f64 +0x1a2:  add    $0x20,%eax
08407f67 +0x1a5:  mov    %eax,0x8(%esp)
08407f6b +0x1a9:  movl   $0x6,0x4(%esp)
08407f73 +0x1b1:  mov    -0x18(%ebp),%eax
08407f76 +0x1b4:  mov    %eax,(%esp)
08407f79 +0x1b7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407f7e +0x1bc:  xor    $0x1,%eax
08407f81 +0x1bf:  test   %al,%al
08407f83 +0x1c1:  je     08407f8f <+0x1cd>
08407f85 +0x1c3:  mov    $0xffffffff,%eax
08407f8a +0x1c8:  jmp    0840838b <+0x5c9>
08407f8f +0x1cd:  mov    -0x14(%ebp),%eax
08407f92 +0x1d0:  add    $0x24,%eax
08407f95 +0x1d3:  mov    %eax,0x8(%esp)
08407f99 +0x1d7:  movl   $0x7,0x4(%esp)
08407fa1 +0x1df:  mov    -0x18(%ebp),%eax
08407fa4 +0x1e2:  mov    %eax,(%esp)
08407fa7 +0x1e5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407fac +0x1ea:  xor    $0x1,%eax
08407faf +0x1ed:  test   %al,%al
08407fb1 +0x1ef:  je     08407fbd <+0x1fb>
08407fb3 +0x1f1:  mov    $0xffffffff,%eax
08407fb8 +0x1f6:  jmp    0840838b <+0x5c9>
08407fbd +0x1fb:  mov    -0x14(%ebp),%eax
08407fc0 +0x1fe:  add    $0x28,%eax
08407fc3 +0x201:  mov    %eax,0x8(%esp)
08407fc7 +0x205:  movl   $0x8,0x4(%esp)
08407fcf +0x20d:  mov    -0x18(%ebp),%eax
08407fd2 +0x210:  mov    %eax,(%esp)
08407fd5 +0x213:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407fda +0x218:  xor    $0x1,%eax
08407fdd +0x21b:  test   %al,%al
08407fdf +0x21d:  je     08407feb <+0x229>
08407fe1 +0x21f:  mov    $0xffffffff,%eax
08407fe6 +0x224:  jmp    0840838b <+0x5c9>
08407feb +0x229:  mov    -0x14(%ebp),%eax
08407fee +0x22c:  add    $0x2c,%eax
08407ff1 +0x22f:  mov    %eax,0x8(%esp)
08407ff5 +0x233:  movl   $0x9,0x4(%esp)
08407ffd +0x23b:  mov    -0x18(%ebp),%eax
08408000 +0x23e:  mov    %eax,(%esp)
08408003 +0x241:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408008 +0x246:  xor    $0x1,%eax
0840800b +0x249:  test   %al,%al
0840800d +0x24b:  je     08408019 <+0x257>
0840800f +0x24d:  mov    $0xffffffff,%eax
08408014 +0x252:  jmp    0840838b <+0x5c9>
08408019 +0x257:  mov    -0x14(%ebp),%eax
0840801c +0x25a:  add    $0x30,%eax
0840801f +0x25d:  mov    %eax,0x8(%esp)
08408023 +0x261:  movl   $0xa,0x4(%esp)
0840802b +0x269:  mov    -0x18(%ebp),%eax
0840802e +0x26c:  mov    %eax,(%esp)
08408031 +0x26f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408036 +0x274:  xor    $0x1,%eax
08408039 +0x277:  test   %al,%al
0840803b +0x279:  je     08408047 <+0x285>
0840803d +0x27b:  mov    $0xffffffff,%eax
08408042 +0x280:  jmp    0840838b <+0x5c9>
08408047 +0x285:  mov    -0x14(%ebp),%eax
0840804a +0x288:  add    $0x34,%eax
0840804d +0x28b:  mov    %eax,0x8(%esp)
08408051 +0x28f:  movl   $0xb,0x4(%esp)
08408059 +0x297:  mov    -0x18(%ebp),%eax
0840805c +0x29a:  mov    %eax,(%esp)
0840805f +0x29d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408064 +0x2a2:  xor    $0x1,%eax
08408067 +0x2a5:  test   %al,%al
08408069 +0x2a7:  je     08408075 <+0x2b3>
0840806b +0x2a9:  mov    $0xffffffff,%eax
08408070 +0x2ae:  jmp    0840838b <+0x5c9>
08408075 +0x2b3:  mov    -0x14(%ebp),%eax
08408078 +0x2b6:  add    $0x38,%eax
0840807b +0x2b9:  mov    %eax,0x8(%esp)
0840807f +0x2bd:  movl   $0xc,0x4(%esp)
08408087 +0x2c5:  mov    -0x18(%ebp),%eax
0840808a +0x2c8:  mov    %eax,(%esp)
0840808d +0x2cb:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408092 +0x2d0:  xor    $0x1,%eax
08408095 +0x2d3:  test   %al,%al
08408097 +0x2d5:  je     084080a3 <+0x2e1>
08408099 +0x2d7:  mov    $0xffffffff,%eax
0840809e +0x2dc:  jmp    0840838b <+0x5c9>
084080a3 +0x2e1:  mov    -0x14(%ebp),%eax
084080a6 +0x2e4:  add    $0x3c,%eax
084080a9 +0x2e7:  mov    %eax,0x8(%esp)
084080ad +0x2eb:  movl   $0xd,0x4(%esp)
084080b5 +0x2f3:  mov    -0x18(%ebp),%eax
084080b8 +0x2f6:  mov    %eax,(%esp)
084080bb +0x2f9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084080c0 +0x2fe:  xor    $0x1,%eax
084080c3 +0x301:  test   %al,%al
084080c5 +0x303:  je     084080d1 <+0x30f>
084080c7 +0x305:  mov    $0xffffffff,%eax
084080cc +0x30a:  jmp    0840838b <+0x5c9>
084080d1 +0x30f:  mov    -0x14(%ebp),%eax
084080d4 +0x312:  add    $0x40,%eax
084080d7 +0x315:  mov    %eax,0x8(%esp)
084080db +0x319:  movl   $0xe,0x4(%esp)
084080e3 +0x321:  mov    -0x18(%ebp),%eax
084080e6 +0x324:  mov    %eax,(%esp)
084080e9 +0x327:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084080ee +0x32c:  xor    $0x1,%eax
084080f1 +0x32f:  test   %al,%al
084080f3 +0x331:  je     084080ff <+0x33d>
084080f5 +0x333:  mov    $0xffffffff,%eax
084080fa +0x338:  jmp    0840838b <+0x5c9>
084080ff +0x33d:  mov    -0x14(%ebp),%eax
08408102 +0x340:  add    $0x44,%eax
08408105 +0x343:  mov    %eax,0x8(%esp)
08408109 +0x347:  movl   $0xf,0x4(%esp)
08408111 +0x34f:  mov    -0x18(%ebp),%eax
08408114 +0x352:  mov    %eax,(%esp)
08408117 +0x355:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840811c +0x35a:  xor    $0x1,%eax
0840811f +0x35d:  test   %al,%al
08408121 +0x35f:  je     0840812d <+0x36b>
08408123 +0x361:  mov    $0xffffffff,%eax
08408128 +0x366:  jmp    0840838b <+0x5c9>
0840812d +0x36b:  mov    -0x14(%ebp),%eax
08408130 +0x36e:  add    $0x48,%eax
08408133 +0x371:  mov    %eax,0x8(%esp)
08408137 +0x375:  movl   $0x10,0x4(%esp)
0840813f +0x37d:  mov    -0x18(%ebp),%eax
08408142 +0x380:  mov    %eax,(%esp)
08408145 +0x383:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840814a +0x388:  xor    $0x1,%eax
0840814d +0x38b:  test   %al,%al
0840814f +0x38d:  je     0840815b <+0x399>
08408151 +0x38f:  mov    $0xffffffff,%eax
08408156 +0x394:  jmp    0840838b <+0x5c9>
0840815b +0x399:  mov    -0x14(%ebp),%eax
0840815e +0x39c:  add    $0x4c,%eax
08408161 +0x39f:  mov    %eax,0x8(%esp)
08408165 +0x3a3:  movl   $0x11,0x4(%esp)
0840816d +0x3ab:  mov    -0x18(%ebp),%eax
08408170 +0x3ae:  mov    %eax,(%esp)
08408173 +0x3b1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408178 +0x3b6:  xor    $0x1,%eax
0840817b +0x3b9:  test   %al,%al
0840817d +0x3bb:  je     08408189 <+0x3c7>
0840817f +0x3bd:  mov    $0xffffffff,%eax
08408184 +0x3c2:  jmp    0840838b <+0x5c9>
08408189 +0x3c7:  mov    -0x14(%ebp),%eax
0840818c +0x3ca:  add    $0x50,%eax
0840818f +0x3cd:  mov    %eax,0x8(%esp)
08408193 +0x3d1:  movl   $0x12,0x4(%esp)
0840819b +0x3d9:  mov    -0x18(%ebp),%eax
0840819e +0x3dc:  mov    %eax,(%esp)
084081a1 +0x3df:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084081a6 +0x3e4:  xor    $0x1,%eax
084081a9 +0x3e7:  test   %al,%al
084081ab +0x3e9:  je     084081b7 <+0x3f5>
084081ad +0x3eb:  mov    $0xffffffff,%eax
084081b2 +0x3f0:  jmp    0840838b <+0x5c9>
084081b7 +0x3f5:  mov    -0x14(%ebp),%eax
084081ba +0x3f8:  add    $0x54,%eax
084081bd +0x3fb:  mov    %eax,0x8(%esp)
084081c1 +0x3ff:  movl   $0x13,0x4(%esp)
084081c9 +0x407:  mov    -0x18(%ebp),%eax
084081cc +0x40a:  mov    %eax,(%esp)
084081cf +0x40d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084081d4 +0x412:  xor    $0x1,%eax
084081d7 +0x415:  test   %al,%al
084081d9 +0x417:  je     084081e5 <+0x423>
084081db +0x419:  mov    $0xffffffff,%eax
084081e0 +0x41e:  jmp    0840838b <+0x5c9>
084081e5 +0x423:  mov    -0x14(%ebp),%eax
084081e8 +0x426:  add    $0x58,%eax
084081eb +0x429:  mov    %eax,0x8(%esp)
084081ef +0x42d:  movl   $0x14,0x4(%esp)
084081f7 +0x435:  mov    -0x18(%ebp),%eax
084081fa +0x438:  mov    %eax,(%esp)
084081fd +0x43b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408202 +0x440:  xor    $0x1,%eax
08408205 +0x443:  test   %al,%al
08408207 +0x445:  je     08408213 <+0x451>
08408209 +0x447:  mov    $0xffffffff,%eax
0840820e +0x44c:  jmp    0840838b <+0x5c9>
08408213 +0x451:  mov    -0x14(%ebp),%eax
08408216 +0x454:  add    $0x5c,%eax
08408219 +0x457:  mov    %eax,0x8(%esp)
0840821d +0x45b:  movl   $0x15,0x4(%esp)
08408225 +0x463:  mov    -0x18(%ebp),%eax
08408228 +0x466:  mov    %eax,(%esp)
0840822b +0x469:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408230 +0x46e:  xor    $0x1,%eax
08408233 +0x471:  test   %al,%al
08408235 +0x473:  je     08408241 <+0x47f>
08408237 +0x475:  mov    $0xffffffff,%eax
0840823c +0x47a:  jmp    0840838b <+0x5c9>
08408241 +0x47f:  movl   $0x0,-0x1c(%ebp)
08408248 +0x486:  lea    -0x1c(%ebp),%eax
0840824b +0x489:  mov    %eax,0x8(%esp)
0840824f +0x48d:  movl   $0x16,0x4(%esp)
08408257 +0x495:  mov    -0x18(%ebp),%eax
0840825a +0x498:  mov    %eax,(%esp)
0840825d +0x49b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408262 +0x4a0:  xor    $0x1,%eax
08408265 +0x4a3:  test   %al,%al
08408267 +0x4a5:  je     08408273 <+0x4b1>
08408269 +0x4a7:  mov    $0xffffffff,%eax
0840826e +0x4ac:  jmp    0840838b <+0x5c9>
08408273 +0x4b1:  mov    -0x14(%ebp),%eax
08408276 +0x4b4:  add    $0x64,%eax
08408279 +0x4b7:  mov    %eax,0x8(%esp)
0840827d +0x4bb:  movl   $0x17,0x4(%esp)
08408285 +0x4c3:  mov    -0x18(%ebp),%eax
08408288 +0x4c6:  mov    %eax,(%esp)
0840828b +0x4c9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08408290 +0x4ce:  xor    $0x1,%eax
08408293 +0x4d1:  test   %al,%al
08408295 +0x4d3:  je     084082a1 <+0x4df>
08408297 +0x4d5:  mov    $0xffffffff,%eax
0840829c +0x4da:  jmp    0840838b <+0x5c9>
084082a1 +0x4df:  mov    -0x14(%ebp),%eax
084082a4 +0x4e2:  add    $0x60,%eax
084082a7 +0x4e5:  mov    %eax,0x8(%esp)
084082ab +0x4e9:  movl   $0x18,0x4(%esp)
084082b3 +0x4f1:  mov    -0x18(%ebp),%eax
084082b6 +0x4f4:  mov    %eax,(%esp)
084082b9 +0x4f7:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084082be +0x4fc:  xor    $0x1,%eax
084082c1 +0x4ff:  test   %al,%al
084082c3 +0x501:  je     084082cf <+0x50d>
084082c5 +0x503:  mov    $0xffffffff,%eax
084082ca +0x508:  jmp    0840838b <+0x5c9>
084082cf +0x50d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084082d6 +0x514:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084082db +0x519:  mov    %eax,-0x20(%ebp)
084082de +0x51c:  lea    -0x50(%ebp),%eax
084082e1 +0x51f:  mov    %eax,0x4(%esp)
084082e5 +0x523:  lea    -0x20(%ebp),%eax
084082e8 +0x526:  mov    %eax,(%esp)
084082eb +0x529:  call   0807e360 <_init+0xc58>
084082f0 +0x52e:  mov    %eax,-0x10(%ebp)
084082f3 +0x531:  mov    -0x10(%ebp),%eax
084082f6 +0x534:  movl   $0x0,0x8(%eax)
084082fd +0x53b:  mov    -0x10(%ebp),%eax
08408300 +0x53e:  movl   $0x0,0x4(%eax)
08408307 +0x545:  mov    -0x10(%ebp),%eax
0840830a +0x548:  movl   $0x0,(%eax)
08408310 +0x54e:  mov    -0x10(%ebp),%eax
08408313 +0x551:  mov    %eax,(%esp)
08408316 +0x554:  call   0807e820 <_init+0x1118>
0840831b +0x559:  mov    -0x14(%ebp),%edx
0840831e +0x55c:  mov    %eax,0x68(%edx)
08408321 +0x55f:  mov    -0x14(%ebp),%eax
08408324 +0x562:  mov    0x68(%eax),%edx
08408327 +0x565:  mov    -0x1c(%ebp),%eax
0840832a +0x568:  cmp    %eax,%edx
0840832c +0x56a:  jle    08408338 <+0x576>
0840832e +0x56c:  mov    -0x14(%ebp),%eax
08408331 +0x56f:  movl   $0x0,0x60(%eax)
08408338 +0x576:  lea    -0x24(%ebp),%eax
0840833b +0x579:  mov    %eax,0x8(%esp)
0840833f +0x57d:  movl   $0x19,0x4(%esp)
08408347 +0x585:  mov    -0x18(%ebp),%eax
0840834a +0x588:  mov    %eax,(%esp)
0840834d +0x58b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408352 +0x590:  xor    $0x1,%eax
08408355 +0x593:  test   %al,%al
08408357 +0x595:  je     08408360 <+0x59e>
08408359 +0x597:  mov    $0xffffffff,%eax
0840835e +0x59c:  jmp    0840838b <+0x5c9>
08408360 +0x59e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08408367 +0x5a5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840836c +0x5aa:  mov    %eax,-0xc(%ebp)
0840836f +0x5ad:  mov    -0x24(%ebp),%eax
08408372 +0x5b0:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
08408377 +0x5b5:  cmp    -0xc(%ebp),%eax
0840837a +0x5b8:  jge    08408386 <+0x5c4>
0840837c +0x5ba:  mov    -0x14(%ebp),%eax
0840837f +0x5bd:  movl   $0x0,0x5c(%eax)
08408386 +0x5c4:  mov    $0x0,%eax
0840838b +0x5c9:  leave
0840838c +0x5ca:  ret
0840838d +0x5cb:  nop
```

## 反编译 C

```c
// DB_LoadEtc::GetUserPvp @ 0x8407dc2

/* DB_LoadEtc::GetUserPvp(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::GetUserPvp(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  time_t tVar3;
  int iVar4;
  tm local_54;
  int local_28;
  time_t local_24;
  int local_20;
  MySQL *local_1c;
  SIG_LOAD_ETC *local_18;
  tm *local_14;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,
                   "seLect win,lose,pvp_point,pvp_grade,avg_kill_count,avg_buf_count,avg_debuf_count,avg_heal_count,avg_counter_count,avg_back_atk_count,avg_union_hit_count,avg_overkill_count,avg_combo_count,avg_aerial_count,avg_attacked_count,avg_deal_damage,avg_technic,avg_style,avg_hit_penalty,pvp_count,win_point,pvp_grade_ext,unix_timestamp(last_play_time),play_count,play_time,unix_timestamp(pvp_grade_ext_update_time) from pvp_result where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_1c);
    if (cVar1 == '\x01') {
      local_18 = param_1 + 0x340;
      cVar1 = MySQL::get_int(local_1c,0,(int *)local_18);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(local_1c,1,(int *)(local_18 + 4));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_1c,2,(int *)(local_18 + 8));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_1c,3,(int *)(local_18 + 0x14));
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_int(local_1c,4,(int *)(local_18 + 0x18));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_int(local_1c,5,(int *)(local_18 + 0x1c));
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_int(local_1c,6,(int *)(local_18 + 0x20));
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_int(local_1c,7,(int *)(local_18 + 0x24));
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_int(local_1c,8,(int *)(local_18 + 0x28));
                      if (cVar1 == '\x01') {
                        cVar1 = MySQL::get_int(local_1c,9,(int *)(local_18 + 0x2c));
                        if (cVar1 == '\x01') {
                          cVar1 = MySQL::get_int(local_1c,10,(int *)(local_18 + 0x30));
                          if (cVar1 == '\x01') {
                            cVar1 = MySQL::get_int(local_1c,0xb,(int *)(local_18 + 0x34));
                            if (cVar1 == '\x01') {
                              cVar1 = MySQL::get_int(local_1c,0xc,(int *)(local_18 + 0x38));
                              if (cVar1 == '\x01') {
                                cVar1 = MySQL::get_int(local_1c,0xd,(int *)(local_18 + 0x3c));
                                if (cVar1 == '\x01') {
                                  cVar1 = MySQL::get_int(local_1c,0xe,(int *)(local_18 + 0x40));
                                  if (cVar1 == '\x01') {
                                    cVar1 = MySQL::get_int(local_1c,0xf,(int *)(local_18 + 0x44));
                                    if (cVar1 == '\x01') {
                                      cVar1 = MySQL::get_int(local_1c,0x10,(int *)(local_18 + 0x48))
                                      ;
                                      if (cVar1 == '\x01') {
                                        cVar1 = MySQL::get_int(local_1c,0x11,
                                                               (int *)(local_18 + 0x4c));
                                        if (cVar1 == '\x01') {
                                          cVar1 = MySQL::get_int(local_1c,0x12,
                                                                 (int *)(local_18 + 0x50));
                                          if (cVar1 == '\x01') {
                                            cVar1 = MySQL::get_int(local_1c,0x13,
                                                                   (int *)(local_18 + 0x54));
                                            if (cVar1 == '\x01') {
                                              cVar1 = MySQL::get_int(local_1c,0x14,
                                                                     (int *)(local_18 + 0x58));
                                              if (cVar1 == '\x01') {
                                                cVar1 = MySQL::get_int(local_1c,0x15,
                                                                       (int *)(local_18 + 0x5c));
                                                if (cVar1 == '\x01') {
                                                  local_20 = 0;
                                                  cVar1 = MySQL::get_int(local_1c,0x16,&local_20);
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = MySQL::get_uint(local_1c,0x17,
                                                                            (uint *)(local_18 + 100)
                                                                           );
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = MySQL::get_uint(local_1c,0x18,
                                                                              (uint *)(local_18 +
                                                                                      0x60));
                                                      if (cVar1 == '\x01') {
                                                        local_24 = CSystemTime::getCurSec
                                                                             ((CSystemTime *)
                                                                              GlobalData::
                                                                              s_systemTime_);
                                                        local_14 = localtime_r(&local_24,&local_54);
                                                        local_14->tm_hour = 0;
                                                        local_14->tm_min = 0;
                                                        local_14->tm_sec = 0;
                                                        tVar3 = mktime(local_14);
                                                        *(time_t *)(local_18 + 0x68) = tVar3;
                                                        if (local_20 < *(int *)(local_18 + 0x68)) {
                                                          *(int *)(local_18 + 0x60) = 0;
                                                        }
                                                        cVar1 = MySQL::get_int(local_1c,0x19,
                                                                               &local_28);
                                                        if (cVar1 == '\x01') {
                                                          iVar4 = CSystemTime::getCurSec
                                                                            ((CSystemTime *)
                                                                             GlobalData::
                                                                             s_systemTime_);
                                                          if (local_28 + 0x15180 < iVar4) {
                                                            *(int *)(local_18 + 0x5c) = 0;
                                                          }
                                                          uVar2 = 0;
                                                        }
                                                        else {
                                                          uVar2 = 0xffffffff;
                                                        }
                                                      }
                                                      else {
                                                        uVar2 = 0xffffffff;
                                                      }
                                                    }
                                                    else {
                                                      uVar2 = 0xffffffff;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = 0xffffffff;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0xffffffff;
                                                }
                                              }
                                              else {
                                                uVar2 = 0xffffffff;
                                              }
                                            }
                                            else {
                                              uVar2 = 0xffffffff;
                                            }
                                          }
                                          else {
                                            uVar2 = 0xffffffff;
                                          }
                                        }
                                        else {
                                          uVar2 = 0xffffffff;
                                        }
                                      }
                                      else {
                                        uVar2 = 0xffffffff;
                                      }
                                    }
                                    else {
                                      uVar2 = 0xffffffff;
                                    }
                                  }
                                  else {
                                    uVar2 = 0xffffffff;
                                  }
                                }
                                else {
                                  uVar2 = 0xffffffff;
                                }
                              }
                              else {
                                uVar2 = 0xffffffff;
                              }
                            }
                            else {
                              uVar2 = 0xffffffff;
                            }
                          }
                          else {
                            uVar2 = 0xffffffff;
                          }
                        }
                        else {
                          uVar2 = 0xffffffff;
                        }
                      }
                      else {
                        uVar2 = 0xffffffff;
                      }
                    }
                    else {
                      uVar2 = 0xffffffff;
                    }
                  }
                  else {
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```

# _SaveCharacInfo

`_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC`

`DB_SaveCharac::_SaveCharacInfo(SIG_SAVE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415eda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415eda  _ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC
#           DB_SaveCharac::_SaveCharacInfo(SIG_SAVE_CHARAC*)
# range [0x08415eda, 0x084163f1]
08415eda +0x000:  push   %ebp
08415edb +0x001:  mov    %esp,%ebp
08415edd +0x003:  push   %edi
08415ede +0x004:  push   %esi
08415edf +0x005:  push   %ebx
08415ee0 +0x006:  sub    $0x12c,%esp
08415ee6 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08415eeb +0x011:  movl   $0x0,0x8(%esp)
08415ef3 +0x019:  movl   $0x2,0x4(%esp)
08415efb +0x021:  mov    %eax,(%esp)
08415efe +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08415f03 +0x029:  mov    %eax,-0x1c(%ebp)
08415f06 +0x02c:  mov    0xc(%ebp),%eax
08415f09 +0x02f:  movzbl 0x4(%eax),%eax
08415f0d +0x033:  test   %al,%al
08415f0f +0x035:  je     08416185 <+0x2ab>
08415f15 +0x03b:  mov    0xc(%ebp),%eax
08415f18 +0x03e:  movzbl 0x6(%eax),%eax
08415f1c +0x042:  test   %al,%al
08415f1e +0x044:  je     08416185 <+0x2ab>
08415f24 +0x04a:  mov    0xc(%ebp),%eax
08415f27 +0x04d:  mov    (%eax),%eax
08415f29 +0x04f:  mov    %eax,-0xb4(%ebp)
08415f2f +0x055:  mov    0xc(%ebp),%eax
08415f32 +0x058:  movzbl 0xdd(%eax),%eax
08415f39 +0x05f:  movsbl %al,%eax
08415f3c +0x062:  mov    %eax,-0xb0(%ebp)
08415f42 +0x068:  mov    0xc(%ebp),%eax
08415f45 +0x06b:  movzbl 0xfd(%eax),%eax
08415f4c +0x072:  movsbl %al,%eax
08415f4f +0x075:  mov    %eax,-0xac(%ebp)
08415f55 +0x07b:  mov    0xc(%ebp),%eax
08415f58 +0x07e:  movzbl 0x5d(%eax),%eax
08415f5c +0x082:  movsbl %al,%eax
08415f5f +0x085:  mov    %eax,-0xa8(%ebp)
08415f65 +0x08b:  mov    0xc(%ebp),%eax
08415f68 +0x08e:  movzbl 0xda(%eax),%eax
08415f6f +0x095:  movzbl %al,%eax
08415f72 +0x098:  mov    %eax,-0xa4(%ebp)
08415f78 +0x09e:  mov    0xc(%ebp),%eax
08415f7b +0x0a1:  movzwl 0xdb(%eax),%eax
08415f82 +0x0a8:  movzwl %ax,%eax
08415f85 +0x0ab:  mov    %eax,-0xa0(%ebp)
08415f8b +0x0b1:  mov    0xc(%ebp),%eax
08415f8e +0x0b4:  add    $0x23,%eax
08415f91 +0x0b7:  movl   $0x22,0xc(%esp)
08415f99 +0x0bf:  mov    %eax,0x8(%esp)
08415f9d +0x0c3:  movl   $0x1,0x4(%esp)
08415fa5 +0x0cb:  mov    -0x1c(%ebp),%eax
08415fa8 +0x0ce:  mov    %eax,(%esp)
08415fab +0x0d1:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08415fb0 +0x0d6:  mov    %eax,-0x9c(%ebp)
08415fb6 +0x0dc:  mov    0xc(%ebp),%eax
08415fb9 +0x0df:  add    $0x1b,%eax
08415fbc +0x0e2:  movl   $0x8,0xc(%esp)
08415fc4 +0x0ea:  mov    %eax,0x8(%esp)
08415fc8 +0x0ee:  movl   $0x0,0x4(%esp)
08415fd0 +0x0f6:  mov    -0x1c(%ebp),%eax
08415fd3 +0x0f9:  mov    %eax,(%esp)
08415fd6 +0x0fc:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08415fdb +0x101:  mov    %eax,-0x98(%ebp)
08415fe1 +0x107:  mov    0xc(%ebp),%eax
08415fe4 +0x10a:  mov    0x59(%eax),%eax
08415fe7 +0x10d:  mov    %eax,-0x94(%ebp)
08415fed +0x113:  mov    0xc(%ebp),%eax
08415ff0 +0x116:  movzwl 0x57(%eax),%eax
08415ff4 +0x11a:  cwtl
08415ff5 +0x11b:  mov    %eax,-0x90(%ebp)
08415ffb +0x121:  mov    0xc(%ebp),%eax
08415ffe +0x124:  movzwl 0x55(%eax),%eax
08416002 +0x128:  cwtl
08416003 +0x129:  mov    %eax,-0x8c(%ebp)
08416009 +0x12f:  mov    0xc(%ebp),%eax
0841600c +0x132:  movzwl 0x53(%eax),%eax
08416010 +0x136:  movzwl %ax,%eax
08416013 +0x139:  mov    %eax,-0x88(%ebp)
08416019 +0x13f:  mov    0xc(%ebp),%eax
0841601c +0x142:  movzwl 0x51(%eax),%eax
08416020 +0x146:  movzwl %ax,%eax
08416023 +0x149:  mov    %eax,-0x84(%ebp)
08416029 +0x14f:  mov    0xc(%ebp),%eax
0841602c +0x152:  mov    0x4d(%eax),%eax
0841602f +0x155:  mov    %eax,-0x80(%ebp)
08416032 +0x158:  mov    0xc(%ebp),%eax
08416035 +0x15b:  movzwl 0x4b(%eax),%eax
08416039 +0x15f:  cwtl
0841603a +0x160:  mov    %eax,-0x7c(%ebp)
0841603d +0x163:  mov    0xc(%ebp),%eax
08416040 +0x166:  movzwl 0x49(%eax),%eax
08416044 +0x16a:  cwtl
08416045 +0x16b:  mov    %eax,-0x78(%ebp)
08416048 +0x16e:  mov    0xc(%ebp),%eax
0841604b +0x171:  mov    0x45(%eax),%eax
0841604e +0x174:  mov    %eax,-0x74(%ebp)
08416051 +0x177:  mov    0xc(%ebp),%eax
08416054 +0x17a:  movzwl 0x19(%eax),%eax
08416058 +0x17e:  movzwl %ax,%eax
0841605b +0x181:  mov    %eax,-0x70(%ebp)
0841605e +0x184:  mov    0xc(%ebp),%eax
08416061 +0x187:  movzwl 0x17(%eax),%eax
08416065 +0x18b:  movzwl %ax,%eax
08416068 +0x18e:  mov    %eax,-0x6c(%ebp)
0841606b +0x191:  mov    0xc(%ebp),%eax
0841606e +0x194:  movzwl 0x15(%eax),%eax
08416072 +0x198:  movzwl %ax,%edi
08416075 +0x19b:  mov    0xc(%ebp),%eax
08416078 +0x19e:  movzwl 0x13(%eax),%eax
0841607c +0x1a2:  movzwl %ax,%esi
0841607f +0x1a5:  mov    0xc(%ebp),%eax
08416082 +0x1a8:  mov    0xf(%eax),%ebx
08416085 +0x1ab:  mov    0xc(%ebp),%eax
08416088 +0x1ae:  mov    0xb(%eax),%ecx
0841608b +0x1b1:  mov    0xc(%ebp),%eax
0841608e +0x1b4:  movzbl 0xa(%eax),%eax
08416092 +0x1b8:  movsbl %al,%edx
08416095 +0x1bb:  mov    0xc(%ebp),%eax
08416098 +0x1be:  movzwl 0x8(%eax),%eax
0841609c +0x1c2:  cwtl
0841609d +0x1c3:  mov    %eax,-0xbc(%ebp)
084160a3 +0x1c9:  mov    -0xb4(%ebp),%eax
084160a9 +0x1cf:  mov    %eax,0x68(%esp)
084160ad +0x1d3:  mov    -0xb0(%ebp),%eax
084160b3 +0x1d9:  mov    %eax,0x64(%esp)
084160b7 +0x1dd:  mov    -0xac(%ebp),%eax
084160bd +0x1e3:  mov    %eax,0x60(%esp)
084160c1 +0x1e7:  mov    -0xa8(%ebp),%eax
084160c7 +0x1ed:  mov    %eax,0x5c(%esp)
084160cb +0x1f1:  mov    -0xa4(%ebp),%eax
084160d1 +0x1f7:  mov    %eax,0x58(%esp)
084160d5 +0x1fb:  mov    -0xa0(%ebp),%eax
084160db +0x201:  mov    %eax,0x54(%esp)
084160df +0x205:  mov    -0x9c(%ebp),%eax
084160e5 +0x20b:  mov    %eax,0x50(%esp)
084160e9 +0x20f:  mov    -0x98(%ebp),%eax
084160ef +0x215:  mov    %eax,0x4c(%esp)
084160f3 +0x219:  mov    -0x94(%ebp),%eax
084160f9 +0x21f:  mov    %eax,0x48(%esp)
084160fd +0x223:  mov    -0x90(%ebp),%eax
08416103 +0x229:  mov    %eax,0x44(%esp)
08416107 +0x22d:  mov    -0x8c(%ebp),%eax
0841610d +0x233:  mov    %eax,0x40(%esp)
08416111 +0x237:  mov    -0x88(%ebp),%eax
08416117 +0x23d:  mov    %eax,0x3c(%esp)
0841611b +0x241:  mov    -0x84(%ebp),%eax
08416121 +0x247:  mov    %eax,0x38(%esp)
08416125 +0x24b:  mov    -0x80(%ebp),%eax
08416128 +0x24e:  mov    %eax,0x34(%esp)
0841612c +0x252:  mov    -0x7c(%ebp),%eax
0841612f +0x255:  mov    %eax,0x30(%esp)
08416133 +0x259:  mov    -0x78(%ebp),%eax
08416136 +0x25c:  mov    %eax,0x2c(%esp)
0841613a +0x260:  mov    -0x74(%ebp),%eax
0841613d +0x263:  mov    %eax,0x28(%esp)
08416141 +0x267:  mov    -0x70(%ebp),%eax
08416144 +0x26a:  mov    %eax,0x24(%esp)
08416148 +0x26e:  mov    -0x6c(%ebp),%eax
0841614b +0x271:  mov    %eax,0x20(%esp)
0841614f +0x275:  mov    %edi,0x1c(%esp)
08416153 +0x279:  mov    %esi,0x18(%esp)
08416157 +0x27d:  mov    %ebx,0x14(%esp)
0841615b +0x281:  mov    %ecx,0x10(%esp)
0841615f +0x285:  mov    %edx,0xc(%esp)
08416163 +0x289:  mov    -0xbc(%ebp),%eax
08416169 +0x28f:  mov    %eax,0x8(%esp)
0841616d +0x293:  movl   $"upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist='%s',spec_property='%s',max_premium_fatigue=%d,guild_right=%d,expert_job=%d,skill_tree_index=%d, event_charac_level=%d where charac_no = %u",0x4(%esp)
08416175 +0x29b:  mov    -0x1c(%ebp),%eax
08416178 +0x29e:  mov    %eax,(%esp)
0841617b +0x2a1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08416180 +0x2a6:  jmp    084163b9 <+0x4df>
08416185 +0x2ab:  mov    0xc(%ebp),%eax
08416188 +0x2ae:  movzbl 0x4(%eax),%eax
0841618c +0x2b2:  test   %al,%al
0841618e +0x2b4:  je     0841635f <+0x485>
08416194 +0x2ba:  mov    0xc(%ebp),%eax
08416197 +0x2bd:  mov    (%eax),%eax
08416199 +0x2bf:  mov    %eax,-0x68(%ebp)
0841619c +0x2c2:  mov    0xc(%ebp),%eax
0841619f +0x2c5:  movzbl 0xfd(%eax),%eax
084161a6 +0x2cc:  movsbl %al,%eax
084161a9 +0x2cf:  mov    %eax,-0x64(%ebp)
084161ac +0x2d2:  mov    0xc(%ebp),%eax
084161af +0x2d5:  movzbl 0x5d(%eax),%eax
084161b3 +0x2d9:  movsbl %al,%eax
084161b6 +0x2dc:  mov    %eax,-0x60(%ebp)
084161b9 +0x2df:  mov    0xc(%ebp),%eax
084161bc +0x2e2:  add    $0x23,%eax
084161bf +0x2e5:  movl   $0x22,0xc(%esp)
084161c7 +0x2ed:  mov    %eax,0x8(%esp)
084161cb +0x2f1:  movl   $0x1,0x4(%esp)
084161d3 +0x2f9:  mov    -0x1c(%ebp),%eax
084161d6 +0x2fc:  mov    %eax,(%esp)
084161d9 +0x2ff:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084161de +0x304:  mov    %eax,-0x5c(%ebp)
084161e1 +0x307:  mov    0xc(%ebp),%eax
084161e4 +0x30a:  add    $0x1b,%eax
084161e7 +0x30d:  movl   $0x8,0xc(%esp)
084161ef +0x315:  mov    %eax,0x8(%esp)
084161f3 +0x319:  movl   $0x0,0x4(%esp)
084161fb +0x321:  mov    -0x1c(%ebp),%eax
084161fe +0x324:  mov    %eax,(%esp)
08416201 +0x327:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416206 +0x32c:  mov    %eax,-0x58(%ebp)
08416209 +0x32f:  mov    0xc(%ebp),%eax
0841620c +0x332:  mov    0x59(%eax),%eax
0841620f +0x335:  mov    %eax,-0x54(%ebp)
08416212 +0x338:  mov    0xc(%ebp),%eax
08416215 +0x33b:  movzwl 0x57(%eax),%eax
08416219 +0x33f:  cwtl
0841621a +0x340:  mov    %eax,-0x50(%ebp)
0841621d +0x343:  mov    0xc(%ebp),%eax
08416220 +0x346:  movzwl 0x55(%eax),%eax
08416224 +0x34a:  cwtl
08416225 +0x34b:  mov    %eax,-0x4c(%ebp)
08416228 +0x34e:  mov    0xc(%ebp),%eax
0841622b +0x351:  movzwl 0x53(%eax),%eax
0841622f +0x355:  movzwl %ax,%eax
08416232 +0x358:  mov    %eax,-0x48(%ebp)
08416235 +0x35b:  mov    0xc(%ebp),%eax
08416238 +0x35e:  movzwl 0x51(%eax),%eax
0841623c +0x362:  movzwl %ax,%eax
0841623f +0x365:  mov    %eax,-0x44(%ebp)
08416242 +0x368:  mov    0xc(%ebp),%eax
08416245 +0x36b:  mov    0x4d(%eax),%eax
08416248 +0x36e:  mov    %eax,-0x40(%ebp)
0841624b +0x371:  mov    0xc(%ebp),%eax
0841624e +0x374:  movzwl 0x4b(%eax),%eax
08416252 +0x378:  cwtl
08416253 +0x379:  mov    %eax,-0x3c(%ebp)
08416256 +0x37c:  mov    0xc(%ebp),%eax
08416259 +0x37f:  movzwl 0x49(%eax),%eax
0841625d +0x383:  cwtl
0841625e +0x384:  mov    %eax,-0x38(%ebp)
08416261 +0x387:  mov    0xc(%ebp),%eax
08416264 +0x38a:  mov    0x45(%eax),%eax
08416267 +0x38d:  mov    %eax,-0x34(%ebp)
0841626a +0x390:  mov    0xc(%ebp),%eax
0841626d +0x393:  movzwl 0x19(%eax),%eax
08416271 +0x397:  movzwl %ax,%eax
08416274 +0x39a:  mov    %eax,-0x30(%ebp)
08416277 +0x39d:  mov    0xc(%ebp),%eax
0841627a +0x3a0:  movzwl 0x17(%eax),%eax
0841627e +0x3a4:  movzwl %ax,%eax
08416281 +0x3a7:  mov    %eax,-0x2c(%ebp)
08416284 +0x3aa:  mov    0xc(%ebp),%eax
08416287 +0x3ad:  movzwl 0x15(%eax),%eax
0841628b +0x3b1:  movzwl %ax,%edi
0841628e +0x3b4:  mov    0xc(%ebp),%eax
08416291 +0x3b7:  movzwl 0x13(%eax),%eax
08416295 +0x3bb:  movzwl %ax,%esi
08416298 +0x3be:  mov    0xc(%ebp),%eax
0841629b +0x3c1:  mov    0xf(%eax),%ebx
0841629e +0x3c4:  mov    0xc(%ebp),%eax
084162a1 +0x3c7:  mov    0xb(%eax),%ecx
084162a4 +0x3ca:  mov    0xc(%ebp),%eax
084162a7 +0x3cd:  movzbl 0xa(%eax),%eax
084162ab +0x3d1:  movsbl %al,%edx
084162ae +0x3d4:  mov    0xc(%ebp),%eax
084162b1 +0x3d7:  movzwl 0x8(%eax),%eax
084162b5 +0x3db:  cwtl
084162b6 +0x3dc:  mov    %eax,-0xbc(%ebp)
084162bc +0x3e2:  mov    -0x68(%ebp),%eax
084162bf +0x3e5:  mov    %eax,0x5c(%esp)
084162c3 +0x3e9:  mov    -0x64(%ebp),%eax
084162c6 +0x3ec:  mov    %eax,0x58(%esp)
084162ca +0x3f0:  mov    -0x60(%ebp),%eax
084162cd +0x3f3:  mov    %eax,0x54(%esp)
084162d1 +0x3f7:  mov    -0x5c(%ebp),%eax
084162d4 +0x3fa:  mov    %eax,0x50(%esp)
084162d8 +0x3fe:  mov    -0x58(%ebp),%eax
084162db +0x401:  mov    %eax,0x4c(%esp)
084162df +0x405:  mov    -0x54(%ebp),%eax
084162e2 +0x408:  mov    %eax,0x48(%esp)
084162e6 +0x40c:  mov    -0x50(%ebp),%eax
084162e9 +0x40f:  mov    %eax,0x44(%esp)
084162ed +0x413:  mov    -0x4c(%ebp),%eax
084162f0 +0x416:  mov    %eax,0x40(%esp)
084162f4 +0x41a:  mov    -0x48(%ebp),%eax
084162f7 +0x41d:  mov    %eax,0x3c(%esp)
084162fb +0x421:  mov    -0x44(%ebp),%eax
084162fe +0x424:  mov    %eax,0x38(%esp)
08416302 +0x428:  mov    -0x40(%ebp),%eax
08416305 +0x42b:  mov    %eax,0x34(%esp)
08416309 +0x42f:  mov    -0x3c(%ebp),%eax
0841630c +0x432:  mov    %eax,0x30(%esp)
08416310 +0x436:  mov    -0x38(%ebp),%eax
08416313 +0x439:  mov    %eax,0x2c(%esp)
08416317 +0x43d:  mov    -0x34(%ebp),%eax
0841631a +0x440:  mov    %eax,0x28(%esp)
0841631e +0x444:  mov    -0x30(%ebp),%eax
08416321 +0x447:  mov    %eax,0x24(%esp)
08416325 +0x44b:  mov    -0x2c(%ebp),%eax
08416328 +0x44e:  mov    %eax,0x20(%esp)
0841632c +0x452:  mov    %edi,0x1c(%esp)
08416330 +0x456:  mov    %esi,0x18(%esp)
08416334 +0x45a:  mov    %ebx,0x14(%esp)
08416338 +0x45e:  mov    %ecx,0x10(%esp)
0841633c +0x462:  mov    %edx,0xc(%esp)
08416340 +0x466:  mov    -0xbc(%ebp),%eax
08416346 +0x46c:  mov    %eax,0x8(%esp)
0841634a +0x470:  movl   $"upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist='%s',spec_property='%s', expert_job=%d, skill_tree_index=%d where charac_no = %u",0x4(%esp)
08416352 +0x478:  mov    -0x1c(%ebp),%eax
08416355 +0x47b:  mov    %eax,(%esp)
08416358 +0x47e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841635d +0x483:  jmp    084163b9 <+0x4df>
0841635f +0x485:  mov    0xc(%ebp),%eax
08416362 +0x488:  movzbl 0x6(%eax),%eax
08416366 +0x48c:  test   %al,%al
08416368 +0x48e:  je     084163b9 <+0x4df>
0841636a +0x490:  mov    0xc(%ebp),%eax
0841636d +0x493:  mov    (%eax),%ebx
0841636f +0x495:  mov    0xc(%ebp),%eax
08416372 +0x498:  movzbl 0xdd(%eax),%eax
08416379 +0x49f:  movsbl %al,%ecx
0841637c +0x4a2:  mov    0xc(%ebp),%eax
0841637f +0x4a5:  movzbl 0xda(%eax),%eax
08416386 +0x4ac:  movzbl %al,%edx
08416389 +0x4af:  mov    0xc(%ebp),%eax
0841638c +0x4b2:  movzwl 0xdb(%eax),%eax
08416393 +0x4b9:  movzwl %ax,%eax
08416396 +0x4bc:  mov    %ebx,0x14(%esp)
0841639a +0x4c0:  mov    %ecx,0x10(%esp)
0841639e +0x4c4:  mov    %edx,0xc(%esp)
084163a2 +0x4c8:  mov    %eax,0x8(%esp)
084163a6 +0x4cc:  movl   $"upDate charac_info set max_premium_fatigue=%d,guild_right=%d,event_charac_level=%d where charac_no = %u",0x4(%esp)
084163ae +0x4d4:  mov    -0x1c(%ebp),%eax
084163b1 +0x4d7:  mov    %eax,(%esp)
084163b4 +0x4da:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084163b9 +0x4df:  movl   $0x1,0x4(%esp)
084163c1 +0x4e7:  mov    -0x1c(%ebp),%eax
084163c4 +0x4ea:  mov    %eax,(%esp)
084163c7 +0x4ed:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084163cc +0x4f2:  mov    %al,-0x1d(%ebp)
084163cf +0x4f5:  movzbl -0x1d(%ebp),%eax
084163d3 +0x4f9:  xor    $0x1,%eax
084163d6 +0x4fc:  test   %al,%al
084163d8 +0x4fe:  je     084163e1 <+0x507>
084163da +0x500:  mov    $0x0,%eax
084163df +0x505:  jmp    084163e6 <+0x50c>
084163e1 +0x507:  mov    $0x1,%eax
084163e6 +0x50c:  add    $0x12c,%esp
084163ec +0x512:  pop    %ebx
084163ed +0x513:  pop    %esi
084163ee +0x514:  pop    %edi
084163ef +0x515:  pop    %ebp
084163f0 +0x516:  ret
084163f1 +0x517:  nop
```

## 反编译 C

```c
// DB_SaveCharac::_SaveCharacInfo @ 0x8415eda

/* DB_SaveCharac::_SaveCharacInfo(SIG_SAVE_CHARAC*) */

bool __thiscall DB_SaveCharac::_SaveCharacInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  SIG_SAVE_CHARAC SVar1;
  SIG_SAVE_CHARAC SVar2;
  SIG_SAVE_CHARAC SVar3;
  SIG_SAVE_CHARAC SVar4;
  ushort uVar5;
  undefined4 uVar6;
  char cVar7;
  MySQL *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if ((param_1[4] == (SIG_SAVE_CHARAC)0x0) || (param_1[6] == (SIG_SAVE_CHARAC)0x0)) {
    if (param_1[4] == (SIG_SAVE_CHARAC)0x0) {
      if (param_1[6] != (SIG_SAVE_CHARAC)0x0) {
        MySQL::set_query(this_00,
                         "upDate charac_info set max_premium_fatigue=%d,guild_right=%d,event_charac_level=%d where charac_no = %u"
                         ,(uint)*(ushort *)(param_1 + 0xdb),(uint)(byte)param_1[0xda],
                         (int)(char)param_1[0xdd],*(undefined4 *)param_1);
      }
    }
    else {
      uVar6 = *(undefined4 *)param_1;
      SVar1 = param_1[0xfd];
      SVar2 = param_1[0x5d];
      uVar8 = MySQL::blob_to_str(this_00,1,param_1 + 0x23,0x22);
      uVar9 = MySQL::blob_to_str(this_00,0,param_1 + 0x1b,8);
      MySQL::set_query(this_00,
                       "upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist=\'%s\',spec_property=\'%s\', expert_job=%d, skill_tree_index=%d where charac_no = %u"
                       ,(int)*(short *)(param_1 + 8),(int)(char)param_1[10],
                       *(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
                       (uint)*(ushort *)(param_1 + 0x13),(uint)*(ushort *)(param_1 + 0x15),
                       (uint)*(ushort *)(param_1 + 0x17),(uint)*(ushort *)(param_1 + 0x19),
                       *(undefined4 *)(param_1 + 0x45),(int)*(short *)(param_1 + 0x49),
                       (int)*(short *)(param_1 + 0x4b),*(undefined4 *)(param_1 + 0x4d),
                       (uint)*(ushort *)(param_1 + 0x51),(uint)*(ushort *)(param_1 + 0x53),
                       (int)*(short *)(param_1 + 0x55),(int)*(short *)(param_1 + 0x57),
                       *(undefined4 *)(param_1 + 0x59),uVar9,uVar8,(int)(char)SVar2,(int)(char)SVar1
                       ,uVar6);
    }
  }
  else {
    uVar6 = *(undefined4 *)param_1;
    SVar1 = param_1[0xdd];
    SVar2 = param_1[0xfd];
    SVar3 = param_1[0x5d];
    SVar4 = param_1[0xda];
    uVar5 = *(ushort *)(param_1 + 0xdb);
    uVar8 = MySQL::blob_to_str(this_00,1,param_1 + 0x23,0x22);
    uVar9 = MySQL::blob_to_str(this_00,0,param_1 + 0x1b,8);
    MySQL::set_query(this_00,
                     "upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist=\'%s\',spec_property=\'%s\',max_premium_fatigue=%d,guild_right=%d,expert_job=%d,skill_tree_index=%d, event_charac_level=%d where charac_no = %u"
                     ,(int)*(short *)(param_1 + 8),(int)(char)param_1[10],
                     *(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
                     (uint)*(ushort *)(param_1 + 0x13),(uint)*(ushort *)(param_1 + 0x15),
                     (uint)*(ushort *)(param_1 + 0x17),(uint)*(ushort *)(param_1 + 0x19),
                     *(undefined4 *)(param_1 + 0x45),(int)*(short *)(param_1 + 0x49),
                     (int)*(short *)(param_1 + 0x4b),*(undefined4 *)(param_1 + 0x4d),
                     (uint)*(ushort *)(param_1 + 0x51),(uint)*(ushort *)(param_1 + 0x53),
                     (int)*(short *)(param_1 + 0x55),(int)*(short *)(param_1 + 0x57),
                     *(undefined4 *)(param_1 + 0x59),uVar9,uVar8,(uint)uVar5,(uint)(byte)SVar4,
                     (int)(char)SVar3,(int)(char)SVar2,(int)(char)SVar1,uVar6);
  }
  cVar7 = MySQL::exec(this_00,true);
  return cVar7 == '\x01';
}
```

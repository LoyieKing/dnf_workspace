# SavePvp

`_ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP`

`DB_SavePvp::SavePvp(SIG_SAVE_PVP*)`

| 类 | 地址 |
|---|---|
| `DB_SavePvp` | `0x084172c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084172c8  _ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP
#           DB_SavePvp::SavePvp(SIG_SAVE_PVP*)
# range [0x084172c8, 0x084174bf]
084172c8 +0x000:  push   %ebp
084172c9 +0x001:  mov    %esp,%ebp
084172cb +0x003:  push   %edi
084172cc +0x004:  push   %esi
084172cd +0x005:  push   %ebx
084172ce +0x006:  sub    $0xec,%esp
084172d4 +0x00c:  mov    0xc(%ebp),%eax
084172d7 +0x00f:  mov    %eax,-0x24(%ebp)
084172da +0x012:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084172df +0x017:  movl   $0x0,0x8(%esp)
084172e7 +0x01f:  movl   $0x2,0x4(%esp)
084172ef +0x027:  mov    %eax,(%esp)
084172f2 +0x02a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084172f7 +0x02f:  mov    %eax,-0x1c(%ebp)
084172fa +0x032:  mov    0xc(%ebp),%eax
084172fd +0x035:  mov    0x84(%eax),%eax
08417303 +0x03b:  mov    %eax,-0x74(%ebp)
08417306 +0x03e:  mov    -0x24(%ebp),%eax
08417309 +0x041:  mov    0x60(%eax),%eax
0841730c +0x044:  mov    %eax,-0x70(%ebp)
0841730f +0x047:  mov    -0x24(%ebp),%eax
08417312 +0x04a:  mov    0x64(%eax),%eax
08417315 +0x04d:  mov    %eax,-0x6c(%ebp)
08417318 +0x050:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841731f +0x057:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08417324 +0x05c:  mov    %eax,-0x68(%ebp)
08417327 +0x05f:  mov    -0x24(%ebp),%eax
0841732a +0x062:  mov    0x58(%eax),%eax
0841732d +0x065:  mov    %eax,-0x64(%ebp)
08417330 +0x068:  mov    -0x24(%ebp),%eax
08417333 +0x06b:  mov    0x54(%eax),%eax
08417336 +0x06e:  mov    %eax,-0x60(%ebp)
08417339 +0x071:  mov    -0x24(%ebp),%eax
0841733c +0x074:  mov    0x50(%eax),%eax
0841733f +0x077:  mov    %eax,-0x5c(%ebp)
08417342 +0x07a:  mov    -0x24(%ebp),%eax
08417345 +0x07d:  mov    0x4c(%eax),%eax
08417348 +0x080:  mov    %eax,-0x58(%ebp)
0841734b +0x083:  mov    -0x24(%ebp),%eax
0841734e +0x086:  mov    0x48(%eax),%eax
08417351 +0x089:  mov    %eax,-0x54(%ebp)
08417354 +0x08c:  mov    -0x24(%ebp),%eax
08417357 +0x08f:  mov    0x44(%eax),%eax
0841735a +0x092:  mov    %eax,-0x50(%ebp)
0841735d +0x095:  mov    -0x24(%ebp),%eax
08417360 +0x098:  mov    0x40(%eax),%eax
08417363 +0x09b:  mov    %eax,-0x4c(%ebp)
08417366 +0x09e:  mov    -0x24(%ebp),%eax
08417369 +0x0a1:  mov    0x3c(%eax),%eax
0841736c +0x0a4:  mov    %eax,-0x48(%ebp)
0841736f +0x0a7:  mov    -0x24(%ebp),%eax
08417372 +0x0aa:  mov    0x38(%eax),%eax
08417375 +0x0ad:  mov    %eax,-0x44(%ebp)
08417378 +0x0b0:  mov    -0x24(%ebp),%eax
0841737b +0x0b3:  mov    0x34(%eax),%eax
0841737e +0x0b6:  mov    %eax,-0x40(%ebp)
08417381 +0x0b9:  mov    -0x24(%ebp),%eax
08417384 +0x0bc:  mov    0x30(%eax),%eax
08417387 +0x0bf:  mov    %eax,-0x3c(%ebp)
0841738a +0x0c2:  mov    -0x24(%ebp),%eax
0841738d +0x0c5:  mov    0x2c(%eax),%eax
08417390 +0x0c8:  mov    %eax,-0x38(%ebp)
08417393 +0x0cb:  mov    -0x24(%ebp),%eax
08417396 +0x0ce:  mov    0x28(%eax),%eax
08417399 +0x0d1:  mov    %eax,-0x34(%ebp)
0841739c +0x0d4:  mov    -0x24(%ebp),%eax
0841739f +0x0d7:  mov    0x24(%eax),%eax
084173a2 +0x0da:  mov    %eax,-0x30(%ebp)
084173a5 +0x0dd:  mov    -0x24(%ebp),%eax
084173a8 +0x0e0:  mov    0x20(%eax),%eax
084173ab +0x0e3:  mov    %eax,-0x2c(%ebp)
084173ae +0x0e6:  mov    -0x24(%ebp),%eax
084173b1 +0x0e9:  mov    0x1c(%eax),%edi
084173b4 +0x0ec:  mov    -0x24(%ebp),%eax
084173b7 +0x0ef:  mov    0x18(%eax),%esi
084173ba +0x0f2:  mov    -0x24(%ebp),%eax
084173bd +0x0f5:  mov    0x14(%eax),%ebx
084173c0 +0x0f8:  mov    -0x24(%ebp),%eax
084173c3 +0x0fb:  mov    0x8(%eax),%ecx
084173c6 +0x0fe:  mov    -0x24(%ebp),%eax
084173c9 +0x101:  mov    0x4(%eax),%edx
084173cc +0x104:  mov    -0x24(%ebp),%eax
084173cf +0x107:  mov    (%eax),%eax
084173d1 +0x109:  mov    %eax,-0x7c(%ebp)
084173d4 +0x10c:  mov    -0x74(%ebp),%eax
084173d7 +0x10f:  mov    %eax,0x68(%esp)
084173db +0x113:  mov    -0x70(%ebp),%eax
084173de +0x116:  mov    %eax,0x64(%esp)
084173e2 +0x11a:  mov    -0x6c(%ebp),%eax
084173e5 +0x11d:  mov    %eax,0x60(%esp)
084173e9 +0x121:  mov    -0x68(%ebp),%eax
084173ec +0x124:  mov    %eax,0x5c(%esp)
084173f0 +0x128:  mov    -0x64(%ebp),%eax
084173f3 +0x12b:  mov    %eax,0x58(%esp)
084173f7 +0x12f:  mov    -0x60(%ebp),%eax
084173fa +0x132:  mov    %eax,0x54(%esp)
084173fe +0x136:  mov    -0x5c(%ebp),%eax
08417401 +0x139:  mov    %eax,0x50(%esp)
08417405 +0x13d:  mov    -0x58(%ebp),%eax
08417408 +0x140:  mov    %eax,0x4c(%esp)
0841740c +0x144:  mov    -0x54(%ebp),%eax
0841740f +0x147:  mov    %eax,0x48(%esp)
08417413 +0x14b:  mov    -0x50(%ebp),%eax
08417416 +0x14e:  mov    %eax,0x44(%esp)
0841741a +0x152:  mov    -0x4c(%ebp),%eax
0841741d +0x155:  mov    %eax,0x40(%esp)
08417421 +0x159:  mov    -0x48(%ebp),%eax
08417424 +0x15c:  mov    %eax,0x3c(%esp)
08417428 +0x160:  mov    -0x44(%ebp),%eax
0841742b +0x163:  mov    %eax,0x38(%esp)
0841742f +0x167:  mov    -0x40(%ebp),%eax
08417432 +0x16a:  mov    %eax,0x34(%esp)
08417436 +0x16e:  mov    -0x3c(%ebp),%eax
08417439 +0x171:  mov    %eax,0x30(%esp)
0841743d +0x175:  mov    -0x38(%ebp),%eax
08417440 +0x178:  mov    %eax,0x2c(%esp)
08417444 +0x17c:  mov    -0x34(%ebp),%eax
08417447 +0x17f:  mov    %eax,0x28(%esp)
0841744b +0x183:  mov    -0x30(%ebp),%eax
0841744e +0x186:  mov    %eax,0x24(%esp)
08417452 +0x18a:  mov    -0x2c(%ebp),%eax
08417455 +0x18d:  mov    %eax,0x20(%esp)
08417459 +0x191:  mov    %edi,0x1c(%esp)
0841745d +0x195:  mov    %esi,0x18(%esp)
08417461 +0x199:  mov    %ebx,0x14(%esp)
08417465 +0x19d:  mov    %ecx,0x10(%esp)
08417469 +0x1a1:  mov    %edx,0xc(%esp)
0841746d +0x1a5:  mov    -0x7c(%ebp),%eax
08417470 +0x1a8:  mov    %eax,0x8(%esp)
08417474 +0x1ac:  movl   $"upDate pvp_result set win=%d,lose=%d,pvp_point=%d,pvp_grade=%d,avg_kill_count=%d,avg_buf_count=%d,avg_debuf_count=%d,avg_heal_count=%d,avg_counter_count=%d,avg_back_atk_count=%d,avg_union_hit_count=%d,avg_overkill_count=%d,avg_combo_count=%d,avg_aerial_count=%d,avg_attacked_count=%d,avg_deal_damage=%d,avg_technic=%d,avg_style=%d,avg_hit_penalty=%d,pvp_count=%d,win_point=%d,last_play_time=from_unixtime(%d), play_count=%u,play_time=%u where charac_no=%u",0x4(%esp)
0841747c +0x1b4:  mov    -0x1c(%ebp),%eax
0841747f +0x1b7:  mov    %eax,(%esp)
08417482 +0x1ba:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08417487 +0x1bf:  movl   $0x1,0x4(%esp)
0841748f +0x1c7:  mov    -0x1c(%ebp),%eax
08417492 +0x1ca:  mov    %eax,(%esp)
08417495 +0x1cd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841749a +0x1d2:  mov    %al,-0x1d(%ebp)
0841749d +0x1d5:  movzbl -0x1d(%ebp),%eax
084174a1 +0x1d9:  xor    $0x1,%eax
084174a4 +0x1dc:  test   %al,%al
084174a6 +0x1de:  je     084174af <+0x1e7>
084174a8 +0x1e0:  mov    $0x0,%eax
084174ad +0x1e5:  jmp    084174b4 <+0x1ec>
084174af +0x1e7:  mov    $0x1,%eax
084174b4 +0x1ec:  add    $0xec,%esp
084174ba +0x1f2:  pop    %ebx
084174bb +0x1f3:  pop    %esi
084174bc +0x1f4:  pop    %edi
084174bd +0x1f5:  pop    %ebp
084174be +0x1f6:  ret
084174bf +0x1f7:  nop
```

## 反编译 C

```c
// DB_SavePvp::SavePvp @ 0x84172c8

/* DB_SavePvp::SavePvp(SIG_SAVE_PVP*) */

bool __thiscall DB_SavePvp::SavePvp(DB_SavePvp *this,SIG_SAVE_PVP *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this_00;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(this_00,
                   "upDate pvp_result set win=%d,lose=%d,pvp_point=%d,pvp_grade=%d,avg_kill_count=%d,avg_buf_count=%d,avg_debuf_count=%d,avg_heal_count=%d,avg_counter_count=%d,avg_back_atk_count=%d,avg_union_hit_count=%d,avg_overkill_count=%d,avg_combo_count=%d,avg_aerial_count=%d,avg_attacked_count=%d,avg_deal_damage=%d,avg_technic=%d,avg_style=%d,avg_hit_penalty=%d,pvp_count=%d,win_point=%d,last_play_time=from_unixtime(%d), play_count=%u,play_time=%u where charac_no=%u"
                   ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8)
                   ,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                   *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),uVar5,uVar3,uVar2
                   ,uVar1);
  cVar4 = MySQL::exec(this_00,true);
  return cVar4 == '\x01';
}
```

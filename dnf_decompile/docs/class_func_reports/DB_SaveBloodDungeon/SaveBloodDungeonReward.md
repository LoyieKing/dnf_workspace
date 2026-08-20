# SaveBloodDungeonReward

`_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON`

`DB_SaveBloodDungeon::SaveBloodDungeonReward(SIG_BLOOD_DUNGEON*)`

| 类 | 地址 |
|---|---|
| `DB_SaveBloodDungeon` | `0x084374f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084374f8  _ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON
#           DB_SaveBloodDungeon::SaveBloodDungeonReward(SIG_BLOOD_DUNGEON*)
# range [0x084374f8, 0x08437727]
084374f8 +0x000:  push   %ebp
084374f9 +0x001:  mov    %esp,%ebp
084374fb +0x003:  push   %edi
084374fc +0x004:  push   %esi
084374fd +0x005:  push   %ebx
084374fe +0x006:  sub    $0x9c,%esp
08437504 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08437509 +0x011:  movl   $0x0,0x8(%esp)
08437511 +0x019:  movl   $0x2,0x4(%esp)
08437519 +0x021:  mov    %eax,(%esp)
0843751c +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437521 +0x029:  mov    %eax,-0x24(%ebp)
08437524 +0x02c:  movl   $0x0,0x8(%esp)
0843752c +0x034:  movl   $0x0,0x4(%esp)
08437534 +0x03c:  movl   $0x6,(%esp)
0843753b +0x043:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
08437540 +0x048:  mov    %eax,-0x28(%ebp)
08437543 +0x04b:  lea    -0x54(%ebp),%eax
08437546 +0x04e:  mov    %eax,0x4(%esp)
0843754a +0x052:  lea    -0x28(%ebp),%eax
0843754d +0x055:  mov    %eax,(%esp)
08437550 +0x058:  call   0807e360 <_init+0xc58>
08437555 +0x05d:  mov    %eax,-0x20(%ebp)
08437558 +0x060:  movl   $0x0,-0x1c(%ebp)
0843755f +0x067:  mov    -0x20(%ebp),%eax
08437562 +0x06a:  mov    0x18(%eax),%eax
08437565 +0x06d:  test   %eax,%eax
08437567 +0x06f:  jne    08437572 <+0x7a>
08437569 +0x071:  movl   $0x7e900,-0x1c(%ebp)
08437570 +0x078:  jmp    08437584 <+0x8c>
08437572 +0x07a:  mov    -0x20(%ebp),%eax
08437575 +0x07d:  mov    0x18(%eax),%eax
08437578 +0x080:  sub    $0x1,%eax
0843757b +0x083:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08437581 +0x089:  mov    %eax,-0x1c(%ebp)
08437584 +0x08c:  mov    0xc(%ebp),%eax
08437587 +0x08f:  movzbl 0x1c(%eax),%eax
0843758b +0x093:  test   %al,%al
0843758d +0x095:  je     084375df <+0xe7>
0843758f +0x097:  mov    -0x28(%ebp),%eax
08437592 +0x09a:  sub    -0x1c(%ebp),%eax
08437595 +0x09d:  lea    -0x93a80(%eax),%edx
0843759b +0x0a3:  mov    0xc(%ebp),%eax
0843759e +0x0a6:  mov    (%eax),%eax
084375a0 +0x0a8:  mov    %edx,0xc(%esp)
084375a4 +0x0ac:  mov    %eax,0x8(%esp)
084375a8 +0x0b0:  movl   $"upDate charac_blood_dungeon_reward set reward=1 where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)",0x4(%esp)
084375b0 +0x0b8:  mov    -0x24(%ebp),%eax
084375b3 +0x0bb:  mov    %eax,(%esp)
084375b6 +0x0be:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084375bb +0x0c3:  movl   $0x1,0x4(%esp)
084375c3 +0x0cb:  mov    -0x24(%ebp),%eax
084375c6 +0x0ce:  mov    %eax,(%esp)
084375c9 +0x0d1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084375ce +0x0d6:  xor    $0x1,%eax
084375d1 +0x0d9:  test   %al,%al
084375d3 +0x0db:  je     084375df <+0xe7>
084375d5 +0x0dd:  mov    $0x0,%eax
084375da +0x0e2:  jmp    0843771d <+0x225>
084375df +0x0e7:  mov    0xc(%ebp),%eax
084375e2 +0x0ea:  mov    0x14(%eax),%eax
084375e5 +0x0ed:  test   %eax,%eax
084375e7 +0x0ef:  je     08437718 <+0x220>
084375ed +0x0f5:  mov    -0x28(%ebp),%eax
084375f0 +0x0f8:  mov    %eax,%edx
084375f2 +0x0fa:  sub    -0x1c(%ebp),%edx
084375f5 +0x0fd:  mov    %edx,-0x60(%ebp)
084375f8 +0x100:  mov    0xc(%ebp),%eax
084375fb +0x103:  mov    (%eax),%edi
084375fd +0x105:  mov    0xc(%ebp),%eax
08437600 +0x108:  mov    0x14(%eax),%esi
08437603 +0x10b:  mov    0xc(%ebp),%eax
08437606 +0x10e:  mov    0x10(%eax),%ebx
08437609 +0x111:  mov    0xc(%ebp),%eax
0843760c +0x114:  mov    0xc(%eax),%ecx
0843760f +0x117:  mov    0xc(%ebp),%eax
08437612 +0x11a:  mov    0x8(%eax),%edx
08437615 +0x11d:  mov    0xc(%ebp),%eax
08437618 +0x120:  mov    0x4(%eax),%eax
0843761b +0x123:  mov    %eax,-0x6c(%ebp)
0843761e +0x126:  mov    -0x60(%ebp),%eax
08437621 +0x129:  mov    %eax,0x20(%esp)
08437625 +0x12d:  mov    %edi,0x1c(%esp)
08437629 +0x131:  mov    %esi,0x18(%esp)
0843762d +0x135:  mov    %ebx,0x14(%esp)
08437631 +0x139:  mov    %ecx,0x10(%esp)
08437635 +0x13d:  mov    %edx,0xc(%esp)
08437639 +0x141:  mov    -0x6c(%ebp),%edx
0843763c +0x144:  mov    %edx,0x8(%esp)
08437640 +0x148:  movl   $"upDate charac_blood_dungeon_reward set week_point=%u,week_enter_count=%u,week_use_gold=%u,last_play_date=cast(from_unixtime(%d) as date),enter_count=%u where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)",0x4(%esp)
08437648 +0x150:  mov    -0x24(%ebp),%eax
0843764b +0x153:  mov    %eax,(%esp)
0843764e +0x156:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437653 +0x15b:  movl   $0x1,0x4(%esp)
0843765b +0x163:  mov    -0x24(%ebp),%eax
0843765e +0x166:  mov    %eax,(%esp)
08437661 +0x169:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08437666 +0x16e:  xor    $0x1,%eax
08437669 +0x171:  test   %al,%al
0843766b +0x173:  je     08437677 <+0x17f>
0843766d +0x175:  mov    $0x0,%eax
08437672 +0x17a:  jmp    0843771d <+0x225>
08437677 +0x17f:  mov    -0x24(%ebp),%eax
0843767a +0x182:  mov    %eax,(%esp)
0843767d +0x185:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08437682 +0x18a:  or     %edx,%eax
08437684 +0x18c:  test   %eax,%eax
08437686 +0x18e:  sete   %al
08437689 +0x191:  test   %al,%al
0843768b +0x193:  je     08437718 <+0x220>
08437691 +0x199:  mov    0xc(%ebp),%eax
08437694 +0x19c:  mov    0x14(%eax),%eax
08437697 +0x19f:  mov    %eax,-0x5c(%ebp)
0843769a +0x1a2:  mov    0xc(%ebp),%eax
0843769d +0x1a5:  mov    0x10(%eax),%edi
084376a0 +0x1a8:  mov    0xc(%ebp),%eax
084376a3 +0x1ab:  mov    0xc(%eax),%esi
084376a6 +0x1ae:  mov    0xc(%ebp),%eax
084376a9 +0x1b1:  mov    0x8(%eax),%ebx
084376ac +0x1b4:  mov    0xc(%ebp),%eax
084376af +0x1b7:  mov    0x4(%eax),%ecx
084376b2 +0x1ba:  mov    -0x28(%ebp),%eax
084376b5 +0x1bd:  mov    %eax,%edx
084376b7 +0x1bf:  sub    -0x1c(%ebp),%edx
084376ba +0x1c2:  mov    0xc(%ebp),%eax
084376bd +0x1c5:  mov    (%eax),%eax
084376bf +0x1c7:  mov    %eax,-0x6c(%ebp)
084376c2 +0x1ca:  mov    -0x5c(%ebp),%eax
084376c5 +0x1cd:  mov    %eax,0x20(%esp)
084376c9 +0x1d1:  mov    %edi,0x1c(%esp)
084376cd +0x1d5:  mov    %esi,0x18(%esp)
084376d1 +0x1d9:  mov    %ebx,0x14(%esp)
084376d5 +0x1dd:  mov    %ecx,0x10(%esp)
084376d9 +0x1e1:  mov    %edx,0xc(%esp)
084376dd +0x1e5:  mov    -0x6c(%ebp),%edx
084376e0 +0x1e8:  mov    %edx,0x8(%esp)
084376e4 +0x1ec:  movl   $"inSert into charac_blood_dungeon_reward(charac_no,week_occ_date,week_point,week_enter_count,week_use_gold,last_play_date,enter_count) values(%u,cast(from_unixtime(%d) as date),%u,%u,%u,cast(from_unixtime(%d) as date),%u)",0x4(%esp)
084376ec +0x1f4:  mov    -0x24(%ebp),%eax
084376ef +0x1f7:  mov    %eax,(%esp)
084376f2 +0x1fa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084376f7 +0x1ff:  movl   $0x1,0x4(%esp)
084376ff +0x207:  mov    -0x24(%ebp),%eax
08437702 +0x20a:  mov    %eax,(%esp)
08437705 +0x20d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843770a +0x212:  xor    $0x1,%eax
0843770d +0x215:  test   %al,%al
0843770f +0x217:  je     08437718 <+0x220>
08437711 +0x219:  mov    $0x0,%eax
08437716 +0x21e:  jmp    0843771d <+0x225>
08437718 +0x220:  mov    $0x1,%eax
0843771d +0x225:  add    $0x9c,%esp
08437723 +0x22b:  pop    %ebx
08437724 +0x22c:  pop    %esi
08437725 +0x22d:  pop    %edi
08437726 +0x22e:  pop    %ebp
08437727 +0x22f:  ret
```

## 反编译 C

```c
// DB_SaveBloodDungeon::SaveBloodDungeonReward @ 0x84374f8

/* DB_SaveBloodDungeon::SaveBloodDungeonReward(SIG_BLOOD_DUNGEON*) */

undefined4 __thiscall
DB_SaveBloodDungeon::SaveBloodDungeonReward(DB_SaveBloodDungeon *this,SIG_BLOOD_DUNGEON *param_1)

{
  char cVar1;
  longlong lVar2;
  tm local_58;
  int local_2c;
  MySQL *local_28;
  tm *local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = getDailyInitializeTime(6,0,0);
  local_24 = localtime_r(&local_2c,&local_58);
  if (local_24->tm_wday == 0) {
    local_20 = 0x7e900;
  }
  else {
    local_20 = (local_24->tm_wday + -1) * 0x15180;
  }
  if (param_1[0x1c] != (SIG_BLOOD_DUNGEON)0x0) {
    MySQL::set_query(local_28,
                     "upDate charac_blood_dungeon_reward set reward=1 where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)"
                     ,*(undefined4 *)param_1,(local_2c - local_20) + -0x93a80);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    MySQL::set_query(local_28,
                     "upDate charac_blood_dungeon_reward set week_point=%u,week_enter_count=%u,week_use_gold=%u,last_play_date=cast(from_unixtime(%d) as date),enter_count=%u where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)"
                     ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x14),*(undefined4 *)param_1,local_2c - local_20);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_28);
    if (lVar2 == 0) {
      MySQL::set_query(local_28,
                       "inSert into charac_blood_dungeon_reward(charac_no,week_occ_date,week_point,week_enter_count,week_use_gold,last_play_date,enter_count) values(%u,cast(from_unixtime(%d) as date),%u,%u,%u,cast(from_unixtime(%d) as date),%u)"
                       ,*(undefined4 *)param_1,local_2c - local_20,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      cVar1 = MySQL::exec(local_28,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}
```

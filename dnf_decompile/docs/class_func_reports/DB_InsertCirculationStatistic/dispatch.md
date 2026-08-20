# dispatch

`_ZN29DB_InsertCirculationStatistic8dispatchEiiP6Stream`

`DB_InsertCirculationStatistic::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertCirculationStatistic` | `0x084327ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084327ba  _ZN29DB_InsertCirculationStatistic8dispatchEiiP6Stream
#           DB_InsertCirculationStatistic::dispatch(int, int, Stream*)
# range [0x084327ba, 0x08432ad1]
084327ba +0x000:  push   %ebp
084327bb +0x001:  mov    %esp,%ebp
084327bd +0x003:  push   %edi
084327be +0x004:  push   %esi
084327bf +0x005:  push   %ebx
084327c0 +0x006:  sub    $0x13c,%esp
084327c6 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084327cb +0x011:  movl   $0x0,0x8(%esp)
084327d3 +0x019:  movl   $0x4,0x4(%esp)
084327db +0x021:  mov    %eax,(%esp)
084327de +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084327e3 +0x029:  mov    %eax,-0x20(%ebp)
084327e6 +0x02c:  mov    0x14(%ebp),%eax
084327e9 +0x02f:  mov    %eax,(%esp)
084327ec +0x032:  call   08452ff4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5c0a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5c0a
084327f1 +0x037:  mov    %eax,-0x1c(%ebp)
084327f4 +0x03a:  mov    -0x1c(%ebp),%eax
084327f7 +0x03d:  mov    0xa8(%eax),%eax
084327fd +0x043:  mov    %eax,-0xa8(%ebp)
08432803 +0x049:  mov    -0x1c(%ebp),%eax
08432806 +0x04c:  mov    0xa4(%eax),%eax
0843280c +0x052:  mov    %eax,-0xa4(%ebp)
08432812 +0x058:  mov    -0x1c(%ebp),%eax
08432815 +0x05b:  mov    0x98(%eax),%eax
0843281b +0x061:  mov    %eax,-0xa0(%ebp)
08432821 +0x067:  mov    -0x1c(%ebp),%eax
08432824 +0x06a:  mov    0x94(%eax),%eax
0843282a +0x070:  mov    %eax,-0x9c(%ebp)
08432830 +0x076:  mov    -0x1c(%ebp),%eax
08432833 +0x079:  mov    0xa0(%eax),%eax
08432839 +0x07f:  mov    %eax,-0x98(%ebp)
0843283f +0x085:  mov    -0x1c(%ebp),%eax
08432842 +0x088:  mov    0x9c(%eax),%eax
08432848 +0x08e:  mov    %eax,-0x94(%ebp)
0843284e +0x094:  mov    -0x1c(%ebp),%eax
08432851 +0x097:  mov    0x8c(%eax),%eax
08432857 +0x09d:  mov    %eax,-0x90(%ebp)
0843285d +0x0a3:  mov    -0x1c(%ebp),%eax
08432860 +0x0a6:  mov    0x88(%eax),%eax
08432866 +0x0ac:  mov    %eax,-0x8c(%ebp)
0843286c +0x0b2:  mov    -0x1c(%ebp),%eax
0843286f +0x0b5:  mov    0x84(%eax),%eax
08432875 +0x0bb:  mov    %eax,-0x88(%ebp)
0843287b +0x0c1:  mov    -0x1c(%ebp),%eax
0843287e +0x0c4:  mov    0x80(%eax),%eax
08432884 +0x0ca:  mov    %eax,-0x84(%ebp)
0843288a +0x0d0:  mov    -0x1c(%ebp),%eax
0843288d +0x0d3:  mov    0x7c(%eax),%eax
08432890 +0x0d6:  mov    %eax,-0x80(%ebp)
08432893 +0x0d9:  mov    -0x1c(%ebp),%eax
08432896 +0x0dc:  mov    0x78(%eax),%eax
08432899 +0x0df:  mov    %eax,-0x7c(%ebp)
0843289c +0x0e2:  mov    -0x1c(%ebp),%eax
0843289f +0x0e5:  mov    0x74(%eax),%eax
084328a2 +0x0e8:  mov    %eax,-0x78(%ebp)
084328a5 +0x0eb:  mov    -0x1c(%ebp),%eax
084328a8 +0x0ee:  mov    0x70(%eax),%eax
084328ab +0x0f1:  mov    %eax,-0x74(%ebp)
084328ae +0x0f4:  mov    -0x1c(%ebp),%eax
084328b1 +0x0f7:  mov    0x6c(%eax),%eax
084328b4 +0x0fa:  mov    %eax,-0x70(%ebp)
084328b7 +0x0fd:  mov    -0x1c(%ebp),%eax
084328ba +0x100:  mov    0x68(%eax),%eax
084328bd +0x103:  mov    %eax,-0x6c(%ebp)
084328c0 +0x106:  mov    -0x1c(%ebp),%eax
084328c3 +0x109:  mov    0x60(%eax),%eax
084328c6 +0x10c:  mov    %eax,-0x68(%ebp)
084328c9 +0x10f:  mov    -0x1c(%ebp),%eax
084328cc +0x112:  mov    0x5c(%eax),%eax
084328cf +0x115:  mov    %eax,-0x64(%ebp)
084328d2 +0x118:  mov    -0x1c(%ebp),%eax
084328d5 +0x11b:  mov    0x58(%eax),%eax
084328d8 +0x11e:  mov    %eax,-0x60(%ebp)
084328db +0x121:  mov    -0x1c(%ebp),%eax
084328de +0x124:  mov    0x54(%eax),%eax
084328e1 +0x127:  mov    %eax,-0x5c(%ebp)
084328e4 +0x12a:  mov    -0x1c(%ebp),%eax
084328e7 +0x12d:  mov    0x50(%eax),%eax
084328ea +0x130:  mov    %eax,-0x58(%ebp)
084328ed +0x133:  mov    -0x1c(%ebp),%eax
084328f0 +0x136:  mov    0x44(%eax),%eax
084328f3 +0x139:  mov    %eax,-0x54(%ebp)
084328f6 +0x13c:  mov    -0x1c(%ebp),%eax
084328f9 +0x13f:  mov    0x40(%eax),%eax
084328fc +0x142:  mov    %eax,-0x50(%ebp)
084328ff +0x145:  mov    -0x1c(%ebp),%eax
08432902 +0x148:  mov    0x3c(%eax),%eax
08432905 +0x14b:  mov    %eax,-0x4c(%ebp)
08432908 +0x14e:  mov    -0x1c(%ebp),%eax
0843290b +0x151:  mov    0x34(%eax),%eax
0843290e +0x154:  mov    %eax,-0x48(%ebp)
08432911 +0x157:  mov    -0x1c(%ebp),%eax
08432914 +0x15a:  mov    0x24(%eax),%eax
08432917 +0x15d:  mov    %eax,-0x44(%ebp)
0843291a +0x160:  mov    -0x1c(%ebp),%eax
0843291d +0x163:  mov    0x20(%eax),%eax
08432920 +0x166:  mov    %eax,-0x40(%ebp)
08432923 +0x169:  mov    -0x1c(%ebp),%eax
08432926 +0x16c:  mov    0x1c(%eax),%eax
08432929 +0x16f:  mov    %eax,-0x3c(%ebp)
0843292c +0x172:  mov    -0x1c(%ebp),%eax
0843292f +0x175:  mov    0x18(%eax),%eax
08432932 +0x178:  mov    %eax,-0x38(%ebp)
08432935 +0x17b:  mov    -0x1c(%ebp),%eax
08432938 +0x17e:  mov    0x14(%eax),%eax
0843293b +0x181:  mov    %eax,-0x34(%ebp)
0843293e +0x184:  mov    -0x1c(%ebp),%eax
08432941 +0x187:  mov    0x10(%eax),%eax
08432944 +0x18a:  mov    %eax,-0x30(%ebp)
08432947 +0x18d:  mov    -0x1c(%ebp),%eax
0843294a +0x190:  mov    0xc(%eax),%eax
0843294d +0x193:  mov    %eax,-0x2c(%ebp)
08432950 +0x196:  mov    -0x1c(%ebp),%eax
08432953 +0x199:  mov    0x8(%eax),%edi
08432956 +0x19c:  mov    -0x1c(%ebp),%eax
08432959 +0x19f:  mov    0x4(%eax),%esi
0843295c +0x1a2:  mov    -0x1c(%ebp),%eax
0843295f +0x1a5:  mov    (%eax),%ebx
08432961 +0x1a7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08432966 +0x1ac:  mov    %eax,(%esp)
08432969 +0x1af:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0843296e +0x1b4:  mov    -0xa8(%ebp),%edx
08432974 +0x1ba:  mov    %edx,0x94(%esp)
0843297b +0x1c1:  mov    -0xa4(%ebp),%edx
08432981 +0x1c7:  mov    %edx,0x90(%esp)
08432988 +0x1ce:  mov    -0xa0(%ebp),%edx
0843298e +0x1d4:  mov    %edx,0x8c(%esp)
08432995 +0x1db:  mov    -0x9c(%ebp),%edx
0843299b +0x1e1:  mov    %edx,0x88(%esp)
084329a2 +0x1e8:  mov    -0x98(%ebp),%edx
084329a8 +0x1ee:  mov    %edx,0x84(%esp)
084329af +0x1f5:  mov    -0x94(%ebp),%edx
084329b5 +0x1fb:  mov    %edx,0x80(%esp)
084329bc +0x202:  mov    -0x90(%ebp),%edx
084329c2 +0x208:  mov    %edx,0x7c(%esp)
084329c6 +0x20c:  mov    -0x8c(%ebp),%edx
084329cc +0x212:  mov    %edx,0x78(%esp)
084329d0 +0x216:  mov    -0x88(%ebp),%edx
084329d6 +0x21c:  mov    %edx,0x74(%esp)
084329da +0x220:  mov    -0x84(%ebp),%edx
084329e0 +0x226:  mov    %edx,0x70(%esp)
084329e4 +0x22a:  mov    -0x80(%ebp),%edx
084329e7 +0x22d:  mov    %edx,0x6c(%esp)
084329eb +0x231:  mov    -0x7c(%ebp),%edx
084329ee +0x234:  mov    %edx,0x68(%esp)
084329f2 +0x238:  mov    -0x78(%ebp),%edx
084329f5 +0x23b:  mov    %edx,0x64(%esp)
084329f9 +0x23f:  mov    -0x74(%ebp),%edx
084329fc +0x242:  mov    %edx,0x60(%esp)
08432a00 +0x246:  mov    -0x70(%ebp),%edx
08432a03 +0x249:  mov    %edx,0x5c(%esp)
08432a07 +0x24d:  mov    -0x6c(%ebp),%edx
08432a0a +0x250:  mov    %edx,0x58(%esp)
08432a0e +0x254:  mov    -0x68(%ebp),%edx
08432a11 +0x257:  mov    %edx,0x54(%esp)
08432a15 +0x25b:  mov    -0x64(%ebp),%edx
08432a18 +0x25e:  mov    %edx,0x50(%esp)
08432a1c +0x262:  mov    -0x60(%ebp),%edx
08432a1f +0x265:  mov    %edx,0x4c(%esp)
08432a23 +0x269:  mov    -0x5c(%ebp),%edx
08432a26 +0x26c:  mov    %edx,0x48(%esp)
08432a2a +0x270:  mov    -0x58(%ebp),%edx
08432a2d +0x273:  mov    %edx,0x44(%esp)
08432a31 +0x277:  mov    -0x54(%ebp),%edx
08432a34 +0x27a:  mov    %edx,0x40(%esp)
08432a38 +0x27e:  mov    -0x50(%ebp),%edx
08432a3b +0x281:  mov    %edx,0x3c(%esp)
08432a3f +0x285:  mov    -0x4c(%ebp),%edx
08432a42 +0x288:  mov    %edx,0x38(%esp)
08432a46 +0x28c:  mov    -0x48(%ebp),%edx
08432a49 +0x28f:  mov    %edx,0x34(%esp)
08432a4d +0x293:  mov    -0x44(%ebp),%edx
08432a50 +0x296:  mov    %edx,0x30(%esp)
08432a54 +0x29a:  mov    -0x40(%ebp),%edx
08432a57 +0x29d:  mov    %edx,0x2c(%esp)
08432a5b +0x2a1:  mov    -0x3c(%ebp),%edx
08432a5e +0x2a4:  mov    %edx,0x28(%esp)
08432a62 +0x2a8:  mov    -0x38(%ebp),%edx
08432a65 +0x2ab:  mov    %edx,0x24(%esp)
08432a69 +0x2af:  mov    -0x34(%ebp),%edx
08432a6c +0x2b2:  mov    %edx,0x20(%esp)
08432a70 +0x2b6:  mov    -0x30(%ebp),%edx
08432a73 +0x2b9:  mov    %edx,0x1c(%esp)
08432a77 +0x2bd:  mov    -0x2c(%ebp),%edx
08432a7a +0x2c0:  mov    %edx,0x18(%esp)
08432a7e +0x2c4:  mov    %edi,0x14(%esp)
08432a82 +0x2c8:  mov    %esi,0x10(%esp)
08432a86 +0x2cc:  mov    %ebx,0xc(%esp)
08432a8a +0x2d0:  mov    %eax,0x8(%esp)
08432a8e +0x2d4:  movl   $"inSert into log_gold_stat(channel_no,occ_time ,level,dungeon_drop,result_card,sell_store,quest_reward,death_tower_reward,illusion_tower_reward,war_area_drop,member_tax,blood_dungeon_reward,blood_dungeon_lotto,power_dungeon_drop,power_dungeon_result_card,buy_store,stamina_recovery,repair_item,private_store_commission,gold_card,gold_drop,upgrade,quest_use,mail_commission,punish_user,restrict_trade,guild_level_up,guild_skill,guild_mail,item_compound,blood_dungeon_enter,buy_cerashop,war_area_enter,assault_gold,upgrade_guild_agit,upgrade_guild_cargo) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",0x4(%esp)
08432a96 +0x2dc:  mov    -0x20(%ebp),%eax
08432a99 +0x2df:  mov    %eax,(%esp)
08432a9c +0x2e2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432aa1 +0x2e7:  movl   $0x1,0x4(%esp)
08432aa9 +0x2ef:  mov    -0x20(%ebp),%eax
08432aac +0x2f2:  mov    %eax,(%esp)
08432aaf +0x2f5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432ab4 +0x2fa:  xor    $0x1,%eax
08432ab7 +0x2fd:  test   %al,%al
08432ab9 +0x2ff:  je     08432ac2 <+0x308>
08432abb +0x301:  mov    $0x0,%eax
08432ac0 +0x306:  jmp    08432ac7 <+0x30d>
08432ac2 +0x308:  mov    $0x1,%eax
08432ac7 +0x30d:  add    $0x13c,%esp
08432acd +0x313:  pop    %ebx
08432ace +0x314:  pop    %esi
08432acf +0x315:  pop    %edi
08432ad0 +0x316:  pop    %ebp
08432ad1 +0x317:  ret
```

## 反编译 C

```c
// DB_InsertCirculationStatistic::dispatch @ 0x84327ba

/* DB_InsertCirculationStatistic::dispatch(int, int, Stream*) */

bool DB_InsertCirculationStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  char cVar36;
  MySQL *this;
  SIG_CIRCULATION_STATISTIC *pSVar37;
  CEnvironment *this_00;
  undefined4 uVar38;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar37 = Stream::GetOutBuffer<SIG_CIRCULATION_STATISTIC>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar37 + 0xa8);
  uVar2 = *(undefined4 *)(pSVar37 + 0xa4);
  uVar3 = *(undefined4 *)(pSVar37 + 0x98);
  uVar4 = *(undefined4 *)(pSVar37 + 0x94);
  uVar5 = *(undefined4 *)(pSVar37 + 0xa0);
  uVar6 = *(undefined4 *)(pSVar37 + 0x9c);
  uVar7 = *(undefined4 *)(pSVar37 + 0x8c);
  uVar8 = *(undefined4 *)(pSVar37 + 0x88);
  uVar9 = *(undefined4 *)(pSVar37 + 0x84);
  uVar10 = *(undefined4 *)(pSVar37 + 0x80);
  uVar11 = *(undefined4 *)(pSVar37 + 0x7c);
  uVar12 = *(undefined4 *)(pSVar37 + 0x78);
  uVar13 = *(undefined4 *)(pSVar37 + 0x74);
  uVar14 = *(undefined4 *)(pSVar37 + 0x70);
  uVar15 = *(undefined4 *)(pSVar37 + 0x6c);
  uVar16 = *(undefined4 *)(pSVar37 + 0x68);
  uVar17 = *(undefined4 *)(pSVar37 + 0x60);
  uVar18 = *(undefined4 *)(pSVar37 + 0x5c);
  uVar19 = *(undefined4 *)(pSVar37 + 0x58);
  uVar20 = *(undefined4 *)(pSVar37 + 0x54);
  uVar21 = *(undefined4 *)(pSVar37 + 0x50);
  uVar22 = *(undefined4 *)(pSVar37 + 0x44);
  uVar23 = *(undefined4 *)(pSVar37 + 0x40);
  uVar24 = *(undefined4 *)(pSVar37 + 0x3c);
  uVar25 = *(undefined4 *)(pSVar37 + 0x34);
  uVar26 = *(undefined4 *)(pSVar37 + 0x24);
  uVar27 = *(undefined4 *)(pSVar37 + 0x20);
  uVar28 = *(undefined4 *)(pSVar37 + 0x1c);
  uVar29 = *(undefined4 *)(pSVar37 + 0x18);
  uVar30 = *(undefined4 *)(pSVar37 + 0x14);
  uVar31 = *(undefined4 *)(pSVar37 + 0x10);
  uVar32 = *(undefined4 *)(pSVar37 + 0xc);
  uVar33 = *(undefined4 *)(pSVar37 + 8);
  uVar34 = *(undefined4 *)(pSVar37 + 4);
  uVar35 = *(undefined4 *)pSVar37;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar38 = CEnvironment::get_channel_no(this_00);
  MySQL::set_query(this,
                   "inSert into log_gold_stat(channel_no,occ_time ,level,dungeon_drop,result_card,sell_store,quest_reward,death_tower_reward,illusion_tower_reward,war_area_drop,member_tax,blood_dungeon_reward,blood_dungeon_lotto,power_dungeon_drop,power_dungeon_result_card,buy_store,stamina_recovery,repair_item,private_store_commission,gold_card,gold_drop,upgrade,quest_use,mail_commission,punish_user,restrict_trade,guild_level_up,guild_skill,guild_mail,item_compound,blood_dungeon_enter,buy_cerashop,war_area_enter,assault_gold,upgrade_guild_agit,upgrade_guild_cargo) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)"
                   ,uVar38,uVar35,uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,
                   uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,
                   uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,
                   uVar2,uVar1);
  cVar36 = MySQL::exec(this,true);
  return cVar36 == '\x01';
}
```

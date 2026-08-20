# dispatch

`_ZN23DB_InsertValueStatistic8dispatchEiiP6Stream`

`DB_InsertValueStatistic::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertValueStatistic` | `0x0842945e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842945e  _ZN23DB_InsertValueStatistic8dispatchEiiP6Stream
#           DB_InsertValueStatistic::dispatch(int, int, Stream*)
# range [0x0842945e, 0x08429695]
0842945e +0x000:  push   %ebp
0842945f +0x001:  mov    %esp,%ebp
08429461 +0x003:  push   %edi
08429462 +0x004:  push   %esi
08429463 +0x005:  push   %ebx
08429464 +0x006:  sub    $0xfc,%esp
0842946a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842946f +0x011:  movl   $0x0,0x8(%esp)
08429477 +0x019:  movl   $0x4,0x4(%esp)
0842947f +0x021:  mov    %eax,(%esp)
08429482 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08429487 +0x029:  mov    %eax,-0x20(%ebp)
0842948a +0x02c:  mov    0x14(%ebp),%eax
0842948d +0x02f:  mov    %eax,(%esp)
08429490 +0x032:  call   084523b8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4fce>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4fce
08429495 +0x037:  mov    %eax,-0x1c(%ebp)
08429498 +0x03a:  mov    -0x1c(%ebp),%eax
0842949b +0x03d:  mov    0x68(%eax),%eax
0842949e +0x040:  mov    %eax,-0x88(%ebp)
084294a4 +0x046:  mov    -0x1c(%ebp),%eax
084294a7 +0x049:  mov    0x64(%eax),%eax
084294aa +0x04c:  mov    %eax,-0x84(%ebp)
084294b0 +0x052:  mov    -0x1c(%ebp),%eax
084294b3 +0x055:  mov    0x60(%eax),%eax
084294b6 +0x058:  mov    %eax,-0x80(%ebp)
084294b9 +0x05b:  mov    -0x1c(%ebp),%eax
084294bc +0x05e:  mov    0x5c(%eax),%eax
084294bf +0x061:  mov    %eax,-0x7c(%ebp)
084294c2 +0x064:  mov    -0x1c(%ebp),%eax
084294c5 +0x067:  mov    0x58(%eax),%eax
084294c8 +0x06a:  mov    %eax,-0x78(%ebp)
084294cb +0x06d:  mov    -0x1c(%ebp),%eax
084294ce +0x070:  mov    0x54(%eax),%eax
084294d1 +0x073:  mov    %eax,-0x74(%ebp)
084294d4 +0x076:  mov    -0x1c(%ebp),%eax
084294d7 +0x079:  mov    0x50(%eax),%eax
084294da +0x07c:  mov    %eax,-0x70(%ebp)
084294dd +0x07f:  mov    -0x1c(%ebp),%eax
084294e0 +0x082:  mov    0x4c(%eax),%eax
084294e3 +0x085:  mov    %eax,-0x6c(%ebp)
084294e6 +0x088:  mov    -0x1c(%ebp),%eax
084294e9 +0x08b:  mov    0x48(%eax),%eax
084294ec +0x08e:  mov    %eax,-0x68(%ebp)
084294ef +0x091:  mov    -0x1c(%ebp),%eax
084294f2 +0x094:  mov    0x44(%eax),%eax
084294f5 +0x097:  mov    %eax,-0x64(%ebp)
084294f8 +0x09a:  mov    -0x1c(%ebp),%eax
084294fb +0x09d:  mov    0x40(%eax),%eax
084294fe +0x0a0:  mov    %eax,-0x60(%ebp)
08429501 +0x0a3:  mov    -0x1c(%ebp),%eax
08429504 +0x0a6:  mov    0x3c(%eax),%eax
08429507 +0x0a9:  mov    %eax,-0x5c(%ebp)
0842950a +0x0ac:  mov    -0x1c(%ebp),%eax
0842950d +0x0af:  mov    0x38(%eax),%eax
08429510 +0x0b2:  mov    %eax,-0x58(%ebp)
08429513 +0x0b5:  mov    -0x1c(%ebp),%eax
08429516 +0x0b8:  mov    0x34(%eax),%eax
08429519 +0x0bb:  mov    %eax,-0x54(%ebp)
0842951c +0x0be:  mov    -0x1c(%ebp),%eax
0842951f +0x0c1:  mov    0x30(%eax),%eax
08429522 +0x0c4:  mov    %eax,-0x50(%ebp)
08429525 +0x0c7:  mov    -0x1c(%ebp),%eax
08429528 +0x0ca:  mov    0x2c(%eax),%eax
0842952b +0x0cd:  mov    %eax,-0x4c(%ebp)
0842952e +0x0d0:  mov    -0x1c(%ebp),%eax
08429531 +0x0d3:  mov    0x28(%eax),%eax
08429534 +0x0d6:  mov    %eax,-0x48(%ebp)
08429537 +0x0d9:  mov    -0x1c(%ebp),%eax
0842953a +0x0dc:  mov    0x24(%eax),%eax
0842953d +0x0df:  mov    %eax,-0x44(%ebp)
08429540 +0x0e2:  mov    -0x1c(%ebp),%eax
08429543 +0x0e5:  mov    0x20(%eax),%eax
08429546 +0x0e8:  mov    %eax,-0x40(%ebp)
08429549 +0x0eb:  mov    -0x1c(%ebp),%eax
0842954c +0x0ee:  mov    0x1c(%eax),%eax
0842954f +0x0f1:  mov    %eax,-0x3c(%ebp)
08429552 +0x0f4:  mov    -0x1c(%ebp),%eax
08429555 +0x0f7:  mov    0x18(%eax),%eax
08429558 +0x0fa:  mov    %eax,-0x38(%ebp)
0842955b +0x0fd:  mov    -0x1c(%ebp),%eax
0842955e +0x100:  mov    0x14(%eax),%eax
08429561 +0x103:  mov    %eax,-0x34(%ebp)
08429564 +0x106:  mov    -0x1c(%ebp),%eax
08429567 +0x109:  mov    0x10(%eax),%eax
0842956a +0x10c:  mov    %eax,-0x30(%ebp)
0842956d +0x10f:  mov    -0x1c(%ebp),%eax
08429570 +0x112:  mov    0xc(%eax),%eax
08429573 +0x115:  mov    %eax,-0x2c(%ebp)
08429576 +0x118:  mov    -0x1c(%ebp),%eax
08429579 +0x11b:  mov    0x8(%eax),%edi
0842957c +0x11e:  mov    -0x1c(%ebp),%eax
0842957f +0x121:  mov    0x4(%eax),%esi
08429582 +0x124:  mov    -0x1c(%ebp),%eax
08429585 +0x127:  mov    (%eax),%ebx
08429587 +0x129:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842958c +0x12e:  mov    %eax,(%esp)
0842958f +0x131:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08429594 +0x136:  mov    -0x88(%ebp),%edx
0842959a +0x13c:  mov    %edx,0x74(%esp)
0842959e +0x140:  mov    -0x84(%ebp),%edx
084295a4 +0x146:  mov    %edx,0x70(%esp)
084295a8 +0x14a:  mov    -0x80(%ebp),%edx
084295ab +0x14d:  mov    %edx,0x6c(%esp)
084295af +0x151:  mov    -0x7c(%ebp),%edx
084295b2 +0x154:  mov    %edx,0x68(%esp)
084295b6 +0x158:  mov    -0x78(%ebp),%edx
084295b9 +0x15b:  mov    %edx,0x64(%esp)
084295bd +0x15f:  mov    -0x74(%ebp),%edx
084295c0 +0x162:  mov    %edx,0x60(%esp)
084295c4 +0x166:  mov    -0x70(%ebp),%edx
084295c7 +0x169:  mov    %edx,0x5c(%esp)
084295cb +0x16d:  mov    -0x6c(%ebp),%edx
084295ce +0x170:  mov    %edx,0x58(%esp)
084295d2 +0x174:  mov    -0x68(%ebp),%edx
084295d5 +0x177:  mov    %edx,0x54(%esp)
084295d9 +0x17b:  mov    -0x64(%ebp),%edx
084295dc +0x17e:  mov    %edx,0x50(%esp)
084295e0 +0x182:  mov    -0x60(%ebp),%edx
084295e3 +0x185:  mov    %edx,0x4c(%esp)
084295e7 +0x189:  mov    -0x5c(%ebp),%edx
084295ea +0x18c:  mov    %edx,0x48(%esp)
084295ee +0x190:  mov    -0x58(%ebp),%edx
084295f1 +0x193:  mov    %edx,0x44(%esp)
084295f5 +0x197:  mov    -0x54(%ebp),%edx
084295f8 +0x19a:  mov    %edx,0x40(%esp)
084295fc +0x19e:  mov    -0x50(%ebp),%edx
084295ff +0x1a1:  mov    %edx,0x3c(%esp)
08429603 +0x1a5:  mov    -0x4c(%ebp),%edx
08429606 +0x1a8:  mov    %edx,0x38(%esp)
0842960a +0x1ac:  mov    -0x48(%ebp),%edx
0842960d +0x1af:  mov    %edx,0x34(%esp)
08429611 +0x1b3:  mov    -0x44(%ebp),%edx
08429614 +0x1b6:  mov    %edx,0x30(%esp)
08429618 +0x1ba:  mov    -0x40(%ebp),%edx
0842961b +0x1bd:  mov    %edx,0x2c(%esp)
0842961f +0x1c1:  mov    -0x3c(%ebp),%edx
08429622 +0x1c4:  mov    %edx,0x28(%esp)
08429626 +0x1c8:  mov    -0x38(%ebp),%edx
08429629 +0x1cb:  mov    %edx,0x24(%esp)
0842962d +0x1cf:  mov    -0x34(%ebp),%edx
08429630 +0x1d2:  mov    %edx,0x20(%esp)
08429634 +0x1d6:  mov    -0x30(%ebp),%edx
08429637 +0x1d9:  mov    %edx,0x1c(%esp)
0842963b +0x1dd:  mov    -0x2c(%ebp),%edx
0842963e +0x1e0:  mov    %edx,0x18(%esp)
08429642 +0x1e4:  mov    %edi,0x14(%esp)
08429646 +0x1e8:  mov    %esi,0x10(%esp)
0842964a +0x1ec:  mov    %ebx,0xc(%esp)
0842964e +0x1f0:  mov    %eax,0x8(%esp)
08429652 +0x1f4:  movl   $"inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",0x4(%esp)
0842965a +0x1fc:  mov    -0x20(%ebp),%eax
0842965d +0x1ff:  mov    %eax,(%esp)
08429660 +0x202:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08429665 +0x207:  movl   $0x1,0x4(%esp)
0842966d +0x20f:  mov    -0x20(%ebp),%eax
08429670 +0x212:  mov    %eax,(%esp)
08429673 +0x215:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08429678 +0x21a:  xor    $0x1,%eax
0842967b +0x21d:  test   %al,%al
0842967d +0x21f:  je     08429686 <+0x228>
0842967f +0x221:  mov    $0x0,%eax
08429684 +0x226:  jmp    0842968b <+0x22d>
08429686 +0x228:  mov    $0x1,%eax
0842968b +0x22d:  add    $0xfc,%esp
08429691 +0x233:  pop    %ebx
08429692 +0x234:  pop    %esi
08429693 +0x235:  pop    %edi
08429694 +0x236:  pop    %ebp
08429695 +0x237:  ret
```

## 反编译 C

```c
// DB_InsertValueStatistic::dispatch @ 0x842945e

/* DB_InsertValueStatistic::dispatch(int, int, Stream*) */

bool DB_InsertValueStatistic::dispatch(int param_1,int param_2,Stream *param_3)

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
  char cVar28;
  MySQL *this;
  SIG_VALUE_STATISTIC *pSVar29;
  CEnvironment *this_00;
  undefined4 uVar30;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar29 = Stream::GetOutBuffer<SIG_VALUE_STATISTIC>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar29 + 0x68);
  uVar2 = *(undefined4 *)(pSVar29 + 100);
  uVar3 = *(undefined4 *)(pSVar29 + 0x60);
  uVar4 = *(undefined4 *)(pSVar29 + 0x5c);
  uVar5 = *(undefined4 *)(pSVar29 + 0x58);
  uVar6 = *(undefined4 *)(pSVar29 + 0x54);
  uVar7 = *(undefined4 *)(pSVar29 + 0x50);
  uVar8 = *(undefined4 *)(pSVar29 + 0x4c);
  uVar9 = *(undefined4 *)(pSVar29 + 0x48);
  uVar10 = *(undefined4 *)(pSVar29 + 0x44);
  uVar11 = *(undefined4 *)(pSVar29 + 0x40);
  uVar12 = *(undefined4 *)(pSVar29 + 0x3c);
  uVar13 = *(undefined4 *)(pSVar29 + 0x38);
  uVar14 = *(undefined4 *)(pSVar29 + 0x34);
  uVar15 = *(undefined4 *)(pSVar29 + 0x30);
  uVar16 = *(undefined4 *)(pSVar29 + 0x2c);
  uVar17 = *(undefined4 *)(pSVar29 + 0x28);
  uVar18 = *(undefined4 *)(pSVar29 + 0x24);
  uVar19 = *(undefined4 *)(pSVar29 + 0x20);
  uVar20 = *(undefined4 *)(pSVar29 + 0x1c);
  uVar21 = *(undefined4 *)(pSVar29 + 0x18);
  uVar22 = *(undefined4 *)(pSVar29 + 0x14);
  uVar23 = *(undefined4 *)(pSVar29 + 0x10);
  uVar24 = *(undefined4 *)(pSVar29 + 0xc);
  uVar25 = *(undefined4 *)(pSVar29 + 8);
  uVar26 = *(undefined4 *)(pSVar29 + 4);
  uVar27 = *(undefined4 *)pSVar29;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar30 = CEnvironment::get_channel_no(this_00);
  MySQL::set_query(this,
                   "inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)"
                   ,uVar30,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,
                   uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,
                   uVar5,uVar4,uVar3,uVar2,uVar1);
  cVar28 = MySQL::exec(this,true);
  return cVar28 == '\x01';
}
```

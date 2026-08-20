# dispatch

`_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream`

`CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `CLocalGlobal_DB_STATICS_BOSSTOWER` | `0x0812825e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812825e  _ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream
#           CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*)
# range [0x0812825e, 0x08128599]
0812825e +0x000:  push   %ebp
0812825f +0x001:  mov    %esp,%ebp
08128261 +0x003:  push   %edi
08128262 +0x004:  push   %esi
08128263 +0x005:  push   %ebx
08128264 +0x006:  sub    $0xdc,%esp
0812826a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0812826f +0x011:  movl   $0x0,0x8(%esp)
08128277 +0x019:  movl   $0x4,0x4(%esp)
0812827f +0x021:  mov    %eax,(%esp)
08128282 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08128287 +0x029:  mov    %eax,-0x24(%ebp)
0812828a +0x02c:  movl   $0x0,-0x38(%ebp)
08128291 +0x033:  lea    -0x38(%ebp),%eax
08128294 +0x036:  mov    %eax,0x4(%esp)
08128298 +0x03a:  mov    0x14(%ebp),%eax
0812829b +0x03d:  mov    %eax,(%esp)
0812829e +0x040:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
081282a3 +0x045:  mov    -0x38(%ebp),%eax
081282a6 +0x048:  test   %eax,%eax
081282a8 +0x04a:  jg     081282b4 <+0x56>
081282aa +0x04c:  mov    $0x0,%eax
081282af +0x051:  jmp    0812858e <+0x330>
081282b4 +0x056:  lea    -0x74(%ebp),%eax
081282b7 +0x059:  mov    %eax,(%esp)
081282ba +0x05c:  call   086b1fc0 <_Z19__GetCurrentDNFDateR2tm>  ; __GetCurrentDNFDate(tm&)
081282bf +0x061:  movl   $0xc,0x8(%esp)
081282c7 +0x069:  movl   $0x0,0x4(%esp)
081282cf +0x071:  lea    -0x44(%ebp),%eax
081282d2 +0x074:  mov    %eax,(%esp)
081282d5 +0x077:  call   0807dcc0 <_init+0x5b8>
081282da +0x07c:  mov    -0x68(%ebp),%eax
081282dd +0x07f:  mov    -0x64(%ebp),%edx
081282e0 +0x082:  lea    0x1(%edx),%ecx
081282e3 +0x085:  mov    -0x60(%ebp),%edx
081282e6 +0x088:  add    $0x76c,%edx
081282ec +0x08e:  mov    %eax,0x10(%esp)
081282f0 +0x092:  mov    %ecx,0xc(%esp)
081282f4 +0x096:  mov    %edx,0x8(%esp)
081282f8 +0x09a:  movl   $"%04d-%02d-%02d",0x4(%esp)
08128300 +0x0a2:  lea    -0x44(%ebp),%eax
08128303 +0x0a5:  mov    %eax,(%esp)
08128306 +0x0a8:  call   0807e440 <_init+0xd38>
0812830b +0x0ad:  movl   $0x0,-0x20(%ebp)
08128312 +0x0b4:  jmp    08128578 <+0x31a>
08128317 +0x0b9:  lea    -0x48(%ebp),%eax
0812831a +0x0bc:  mov    %eax,0x4(%esp)
0812831e +0x0c0:  mov    0x14(%ebp),%eax
08128321 +0x0c3:  mov    %eax,(%esp)
08128324 +0x0c6:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08128329 +0x0cb:  mov    0x14(%ebp),%eax
0812832c +0x0ce:  mov    %eax,(%esp)
0812832f +0x0d1:  call   08128a92 <_GLOBAL__I__ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream+0x1d>  ; global constructors keyed to CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)+0x1d
08128334 +0x0d6:  mov    %eax,-0x1c(%ebp)
08128337 +0x0d9:  mov    -0x1c(%ebp),%eax
0812833a +0x0dc:  mov    0x8(%eax),%eax
0812833d +0x0df:  mov    %eax,-0xa4(%ebp)
08128343 +0x0e5:  mov    -0x1c(%ebp),%eax
08128346 +0x0e8:  mov    0xc(%eax),%eax
08128349 +0x0eb:  mov    %eax,-0xa0(%ebp)
0812834f +0x0f1:  mov    -0x1c(%ebp),%eax
08128352 +0x0f4:  mov    0x4(%eax),%eax
08128355 +0x0f7:  mov    %eax,-0x9c(%ebp)
0812835b +0x0fd:  mov    -0x1c(%ebp),%eax
0812835e +0x100:  mov    (%eax),%eax
08128360 +0x102:  mov    %eax,-0x98(%ebp)
08128366 +0x108:  movzbl -0x47(%ebp),%eax
0812836a +0x10c:  movzbl %al,%eax
0812836d +0x10f:  mov    %eax,-0x94(%ebp)
08128373 +0x115:  movzbl -0x46(%ebp),%eax
08128377 +0x119:  movzbl %al,%eax
0812837a +0x11c:  mov    %eax,-0x90(%ebp)
08128380 +0x122:  movzbl -0x45(%ebp),%eax
08128384 +0x126:  and    $0xf,%eax
08128387 +0x129:  movzbl %al,%eax
0812838a +0x12c:  mov    %eax,-0x8c(%ebp)
08128390 +0x132:  movzbl -0x45(%ebp),%eax
08128394 +0x136:  shr    $0x4,%al
08128397 +0x139:  movzbl %al,%edi
0812839a +0x13c:  movzbl -0x48(%ebp),%eax
0812839e +0x140:  movzbl %al,%esi
081283a1 +0x143:  mov    -0x48(%ebp),%ebx
081283a4 +0x146:  movl   $0x5,0xc(%esp)
081283ac +0x14e:  movl   $0x4f9,0x8(%esp)
081283b4 +0x156:  movl   $&_ZZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
081283bc +0x15e:  lea    -0x34(%ebp),%eax
081283bf +0x161:  mov    %eax,(%esp)
081283c2 +0x164:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081283c7 +0x169:  mov    -0xa4(%ebp),%eax
081283cd +0x16f:  mov    %eax,0x2c(%esp)
081283d1 +0x173:  mov    -0xa0(%ebp),%eax
081283d7 +0x179:  mov    %eax,0x28(%esp)
081283db +0x17d:  mov    -0x9c(%ebp),%eax
081283e1 +0x183:  mov    %eax,0x24(%esp)
081283e5 +0x187:  mov    -0x98(%ebp),%eax
081283eb +0x18d:  mov    %eax,0x20(%esp)
081283ef +0x191:  mov    -0x94(%ebp),%eax
081283f5 +0x197:  mov    %eax,0x1c(%esp)
081283f9 +0x19b:  mov    -0x90(%ebp),%eax
081283ff +0x1a1:  mov    %eax,0x18(%esp)
08128403 +0x1a5:  mov    -0x8c(%ebp),%eax
08128409 +0x1ab:  mov    %eax,0x14(%esp)
0812840d +0x1af:  mov    %edi,0x10(%esp)
08128411 +0x1b3:  mov    %esi,0xc(%esp)
08128415 +0x1b7:  mov    %ebx,0x8(%esp)
08128419 +0x1bb:  movl   $"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
08128421 +0x1c3:  lea    -0x34(%ebp),%eax
08128424 +0x1c6:  mov    %eax,(%esp)
08128427 +0x1c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812842c +0x1ce:  mov    -0x48(%ebp),%esi
0812842f +0x1d1:  mov    -0x1c(%ebp),%eax
08128432 +0x1d4:  mov    0x8(%eax),%ebx
08128435 +0x1d7:  mov    -0x1c(%ebp),%eax
08128438 +0x1da:  mov    0xc(%eax),%ecx
0812843b +0x1dd:  mov    -0x1c(%ebp),%eax
0812843e +0x1e0:  mov    0x4(%eax),%edx
08128441 +0x1e3:  mov    -0x1c(%ebp),%eax
08128444 +0x1e6:  mov    (%eax),%eax
08128446 +0x1e8:  mov    %esi,0x1c(%esp)
0812844a +0x1ec:  lea    -0x44(%ebp),%esi
0812844d +0x1ef:  mov    %esi,0x18(%esp)
08128451 +0x1f3:  mov    %ebx,0x14(%esp)
08128455 +0x1f7:  mov    %ecx,0x10(%esp)
08128459 +0x1fb:  mov    %edx,0xc(%esp)
0812845d +0x1ff:  mov    %eax,0x8(%esp)
08128461 +0x203:  movl   $"upDate log_monstertower_layer_stat SET play_cnt = play_cnt + %u, success_cnt = success_cnt + %u, play_time = play_time + %u, uniq_cnt = uniq_cnt + %u WHERE occ_date = '%s' and key_id = %u",0x4(%esp)
08128469 +0x20b:  mov    -0x24(%ebp),%eax
0812846c +0x20e:  mov    %eax,(%esp)
0812846f +0x211:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08128474 +0x216:  movl   $0x1,0x4(%esp)
0812847c +0x21e:  mov    -0x24(%ebp),%eax
0812847f +0x221:  mov    %eax,(%esp)
08128482 +0x224:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08128487 +0x229:  xor    $0x1,%eax
0812848a +0x22c:  test   %al,%al
0812848c +0x22e:  jne    0812849f <+0x241>
0812848e +0x230:  mov    -0x24(%ebp),%eax
08128491 +0x233:  mov    %eax,(%esp)
08128494 +0x236:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08128499 +0x23b:  or     %edx,%eax
0812849b +0x23d:  test   %eax,%eax
0812849d +0x23f:  jne    081284a6 <+0x248>
0812849f +0x241:  mov    $0x1,%eax
081284a4 +0x246:  jmp    081284ab <+0x24d>
081284a6 +0x248:  mov    $0x0,%eax
081284ab +0x24d:  test   %al,%al
081284ad +0x24f:  je     08128574 <+0x316>
081284b3 +0x255:  mov    -0x1c(%ebp),%eax
081284b6 +0x258:  mov    0x8(%eax),%ebx
081284b9 +0x25b:  mov    -0x1c(%ebp),%eax
081284bc +0x25e:  mov    0xc(%eax),%edi
081284bf +0x261:  mov    -0x1c(%ebp),%eax
081284c2 +0x264:  mov    0x4(%eax),%eax
081284c5 +0x267:  mov    %eax,-0x88(%ebp)
081284cb +0x26d:  mov    -0x1c(%ebp),%eax
081284ce +0x270:  mov    (%eax),%eax
081284d0 +0x272:  mov    %eax,-0x84(%ebp)
081284d6 +0x278:  movzbl -0x47(%ebp),%eax
081284da +0x27c:  movzbl %al,%eax
081284dd +0x27f:  mov    %eax,-0x80(%ebp)
081284e0 +0x282:  movzbl -0x46(%ebp),%eax
081284e4 +0x286:  movzbl %al,%eax
081284e7 +0x289:  mov    %eax,-0x7c(%ebp)
081284ea +0x28c:  movzbl -0x45(%ebp),%eax
081284ee +0x290:  and    $0xf,%eax
081284f1 +0x293:  movzbl %al,%esi
081284f4 +0x296:  movzbl -0x45(%ebp),%eax
081284f8 +0x29a:  shr    $0x4,%al
081284fb +0x29d:  movzbl %al,%ecx
081284fe +0x2a0:  movzbl -0x48(%ebp),%eax
08128502 +0x2a4:  movzbl %al,%edx
08128505 +0x2a7:  mov    -0x48(%ebp),%eax
08128508 +0x2aa:  mov    %ebx,0x30(%esp)
0812850c +0x2ae:  mov    %edi,0x2c(%esp)
08128510 +0x2b2:  mov    -0x88(%ebp),%ebx
08128516 +0x2b8:  mov    %ebx,0x28(%esp)
0812851a +0x2bc:  mov    -0x84(%ebp),%ebx
08128520 +0x2c2:  mov    %ebx,0x24(%esp)
08128524 +0x2c6:  mov    -0x80(%ebp),%ebx
08128527 +0x2c9:  mov    %ebx,0x20(%esp)
0812852b +0x2cd:  mov    -0x7c(%ebp),%ebx
0812852e +0x2d0:  mov    %ebx,0x1c(%esp)
08128532 +0x2d4:  mov    %esi,0x18(%esp)
08128536 +0x2d8:  mov    %ecx,0x14(%esp)
0812853a +0x2dc:  mov    %edx,0x10(%esp)
0812853e +0x2e0:  mov    %eax,0xc(%esp)
08128542 +0x2e4:  lea    -0x44(%ebp),%eax
08128545 +0x2e7:  mov    %eax,0x8(%esp)
08128549 +0x2eb:  movl   $"inSert into log_monstertower_layer_stat(occ_date, key_id, layer, monster_diff, charac_job, charac_grow, level, play_cnt, success_cnt, play_time, uniq_cnt) values('%s', %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)",0x4(%esp)
08128551 +0x2f3:  mov    -0x24(%ebp),%eax
08128554 +0x2f6:  mov    %eax,(%esp)
08128557 +0x2f9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0812855c +0x2fe:  movl   $0x1,0x4(%esp)
08128564 +0x306:  mov    -0x24(%ebp),%eax
08128567 +0x309:  mov    %eax,(%esp)
0812856a +0x30c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0812856f +0x311:  xor    $0x1,%eax
08128572 +0x314:  test   %al,%al
08128574 +0x316:  addl   $0x1,-0x20(%ebp)
08128578 +0x31a:  mov    -0x38(%ebp),%eax
0812857b +0x31d:  cmp    %eax,-0x20(%ebp)
0812857e +0x320:  setl   %al
08128581 +0x323:  test   %al,%al
08128583 +0x325:  jne    08128317 <+0xb9>
08128589 +0x32b:  mov    $0x1,%eax
0812858e +0x330:  add    $0xdc,%esp
08128594 +0x336:  pop    %ebx
08128595 +0x337:  pop    %esi
08128596 +0x338:  pop    %edi
08128597 +0x339:  pop    %ebp
08128598 +0x33a:  ret
08128599 +0x33b:  nop
```

## 反编译 C

```c
// CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch @ 0x812825e

/* CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*) */

undefined4 CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  Stream *in_stack_00000010;
  tm local_78;
  undefined4 local_4c;
  char local_48 [12];
  int local_3c;
  cMyTrace local_38 [16];
  MySQL *local_28;
  int local_24;
  STBossDungeonTowerLog *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_3c = 0;
  Stream::operator>>(in_stack_00000010,&local_3c);
  if (local_3c < 1) {
    uVar11 = 0;
  }
  else {
    __GetCurrentDNFDate(&local_78);
    memset(local_48,0,0xc);
    sprintf(local_48,"%04d-%02d-%02d",local_78.tm_year + 0x76c,local_78.tm_mon + 1,local_78.tm_mday)
    ;
    for (local_24 = 0; local_24 < local_3c; local_24 = local_24 + 1) {
      Stream::operator>>(in_stack_00000010,&local_4c);
      local_20 = Stream::GetOutBuffer<STBossDungeonTowerLog>(in_stack_00000010);
      uVar7 = local_4c;
      uVar11 = *(undefined4 *)(local_20 + 8);
      uVar1 = *(undefined4 *)(local_20 + 0xc);
      uVar2 = *(undefined4 *)(local_20 + 4);
      uVar3 = *(undefined4 *)local_20;
      uVar5 = local_4c >> 8;
      uVar6 = local_4c >> 0x10;
      bVar8 = local_4c._3_1_ & 0xf;
      bVar9 = local_4c._3_1_ >> 4;
      uVar12 = local_4c & 0xff;
      cMyTrace::cMyTrace(local_38,
                         "virtual bool CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*)"
                         ,0x4f9,5);
      cMyTrace::operator()
                (local_38,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",uVar7,uVar12,(uint)bVar9,(uint)bVar8,
                 uVar6 & 0xff,uVar5 & 0xff,uVar3,uVar2,uVar1,uVar11);
      MySQL::set_query(local_28,
                       "upDate log_monstertower_layer_stat SET play_cnt = play_cnt + %u, success_cnt = success_cnt + %u, play_time = play_time + %u, uniq_cnt = uniq_cnt + %u WHERE occ_date = \'%s\' and key_id = %u"
                       ,*(undefined4 *)local_20,*(undefined4 *)(local_20 + 4),
                       *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 8),local_48,
                       local_4c);
      cVar10 = MySQL::exec(local_28,true);
      if (cVar10 == '\x01') {
        lVar13 = MySQL::getAffectedRowCount(local_28);
        if (lVar13 == 0) goto LAB_0812849f;
        bVar4 = false;
      }
      else {
LAB_0812849f:
        bVar4 = true;
      }
      if (bVar4) {
        MySQL::set_query(local_28,
                         "inSert into log_monstertower_layer_stat(occ_date, key_id, layer, monster_diff, charac_job, charac_grow, level, play_cnt, success_cnt, play_time, uniq_cnt) values(\'%s\', %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)"
                         ,local_48,local_4c,local_4c & 0xff,(uint)(local_4c._3_1_ >> 4),
                         (uint)(local_4c._3_1_ & 0xf),local_4c >> 0x10 & 0xff,local_4c >> 8 & 0xff,
                         *(undefined4 *)local_20,*(undefined4 *)(local_20 + 4),
                         *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 8));
        MySQL::exec(local_28,true);
      }
    }
    uVar11 = 1;
  }
  return uVar11;
}
```

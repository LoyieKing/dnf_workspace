# dispatch

`_ZN13DB_LogBuyItem8dispatchEiiP6Stream`

`DB_LogBuyItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LogBuyItem` | `0x0812859a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812859a  _ZN13DB_LogBuyItem8dispatchEiiP6Stream
#           DB_LogBuyItem::dispatch(int, int, Stream*)
# range [0x0812859a, 0x0812887d]
0812859a +0x000:  push   %ebp
0812859b +0x001:  mov    %esp,%ebp
0812859d +0x003:  push   %edi
0812859e +0x004:  push   %esi
0812859f +0x005:  push   %ebx
081285a0 +0x006:  sub    $0x8c,%esp
081285a6 +0x00c:  lea    -0x3c(%ebp),%eax
081285a9 +0x00f:  mov    %eax,(%esp)
081285ac +0x012:  call   0807d750 <_init+0x48>
081285b1 +0x017:  lea    -0x3c(%ebp),%eax
081285b4 +0x01a:  mov    %eax,(%esp)
081285b7 +0x01d:  call   0807e330 <_init+0xc28>
081285bc +0x022:  mov    %eax,-0x28(%ebp)
081285bf +0x025:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081285c4 +0x02a:  mov    0x37c(%eax),%eax
081285ca +0x030:  mov    %eax,-0x20(%ebp)
081285cd +0x033:  mov    -0x28(%ebp),%eax
081285d0 +0x036:  mov    0x8(%eax),%eax
081285d3 +0x039:  cmp    -0x20(%ebp),%eax
081285d6 +0x03c:  jge    081285f8 <+0x5e>
081285d8 +0x03e:  movl   $0x0,-0x28(%ebp)
081285df +0x045:  mov    -0x3c(%ebp),%eax
081285e2 +0x048:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
081285e7 +0x04d:  mov    %eax,-0x3c(%ebp)
081285ea +0x050:  lea    -0x3c(%ebp),%eax
081285ed +0x053:  mov    %eax,(%esp)
081285f0 +0x056:  call   0807e330 <_init+0xc28>
081285f5 +0x05b:  mov    %eax,-0x28(%ebp)
081285f8 +0x05e:  mov    -0x28(%ebp),%eax
081285fb +0x061:  mov    -0x20(%ebp),%edx
081285fe +0x064:  mov    %edx,0x8(%eax)
08128601 +0x067:  mov    -0x28(%ebp),%eax
08128604 +0x06a:  movl   $0x0,0x4(%eax)
0812860b +0x071:  mov    -0x28(%ebp),%eax
0812860e +0x074:  movl   $0x0,(%eax)
08128614 +0x07a:  mov    -0x28(%ebp),%eax
08128617 +0x07d:  mov    %eax,(%esp)
0812861a +0x080:  call   0807e820 <_init+0x1118>
0812861f +0x085:  mov    %eax,-0x24(%ebp)
08128622 +0x088:  movl   $0x0,-0x40(%ebp)
08128629 +0x08f:  movl   $0x0,-0x44(%ebp)
08128630 +0x096:  movl   $0x0,-0x48(%ebp)
08128637 +0x09d:  movl   $0x0,-0x4c(%ebp)
0812863e +0x0a4:  movl   $0x0,-0x50(%ebp)
08128645 +0x0ab:  movl   $0xc,0x8(%esp)
0812864d +0x0b3:  movl   $0x0,0x4(%esp)
08128655 +0x0bb:  lea    -0x5c(%ebp),%eax
08128658 +0x0be:  mov    %eax,(%esp)
0812865b +0x0c1:  call   0807dcc0 <_init+0x5b8>
08128660 +0x0c6:  mov    -0x28(%ebp),%eax
08128663 +0x0c9:  mov    0xc(%eax),%eax
08128666 +0x0cc:  mov    -0x28(%ebp),%edx
08128669 +0x0cf:  mov    0x10(%edx),%edx
0812866c +0x0d2:  lea    0x1(%edx),%ecx
0812866f +0x0d5:  mov    -0x28(%ebp),%edx
08128672 +0x0d8:  mov    0x14(%edx),%edx
08128675 +0x0db:  add    $0x76c,%edx
0812867b +0x0e1:  mov    %eax,0x10(%esp)
0812867f +0x0e5:  mov    %ecx,0xc(%esp)
08128683 +0x0e9:  mov    %edx,0x8(%esp)
08128687 +0x0ed:  movl   $"%04d-%02d-%02d",0x4(%esp)
0812868f +0x0f5:  lea    -0x5c(%ebp),%eax
08128692 +0x0f8:  mov    %eax,(%esp)
08128695 +0x0fb:  call   0807e440 <_init+0xd38>
0812869a +0x100:  lea    -0x40(%ebp),%eax
0812869d +0x103:  mov    %eax,0x4(%esp)
081286a1 +0x107:  mov    0x14(%ebp),%eax
081286a4 +0x10a:  mov    %eax,(%esp)
081286a7 +0x10d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
081286ac +0x112:  lea    -0x44(%ebp),%eax
081286af +0x115:  mov    %eax,0x4(%esp)
081286b3 +0x119:  mov    0x14(%ebp),%eax
081286b6 +0x11c:  mov    %eax,(%esp)
081286b9 +0x11f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
081286be +0x124:  lea    -0x48(%ebp),%eax
081286c1 +0x127:  mov    %eax,0x4(%esp)
081286c5 +0x12b:  mov    0x14(%ebp),%eax
081286c8 +0x12e:  mov    %eax,(%esp)
081286cb +0x131:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
081286d0 +0x136:  lea    -0x4c(%ebp),%eax
081286d3 +0x139:  mov    %eax,0x4(%esp)
081286d7 +0x13d:  mov    0x14(%ebp),%eax
081286da +0x140:  mov    %eax,(%esp)
081286dd +0x143:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
081286e2 +0x148:  lea    -0x50(%ebp),%eax
081286e5 +0x14b:  mov    %eax,0x4(%esp)
081286e9 +0x14f:  mov    0x14(%ebp),%eax
081286ec +0x152:  mov    %eax,(%esp)
081286ef +0x155:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
081286f4 +0x15a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081286f9 +0x15f:  movl   $0x0,0x8(%esp)
08128701 +0x167:  movl   $0x4,0x4(%esp)
08128709 +0x16f:  mov    %eax,(%esp)
0812870c +0x172:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08128711 +0x177:  mov    %eax,-0x1c(%ebp)
08128714 +0x17a:  mov    -0x48(%ebp),%ecx
08128717 +0x17d:  mov    -0x44(%ebp),%edx
0812871a +0x180:  mov    -0x4c(%ebp),%eax
0812871d +0x183:  mov    %ecx,0x14(%esp)
08128721 +0x187:  mov    %edx,0x10(%esp)
08128725 +0x18b:  lea    -0x5c(%ebp),%edx
08128728 +0x18e:  mov    %edx,0xc(%esp)
0812872c +0x192:  mov    %eax,0x8(%esp)
08128730 +0x196:  movl   $"update log_acquire_item\t\t\t\t\t\tset item_count = item_count + %d\t\t\t\t\t\twhere occ_date = '%s' and charac_no = %u and item_id = %u",0x4(%esp)
08128738 +0x19e:  mov    -0x1c(%ebp),%eax
0812873b +0x1a1:  mov    %eax,(%esp)
0812873e +0x1a4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08128743 +0x1a9:  movl   $0x1,0x4(%esp)
0812874b +0x1b1:  mov    -0x1c(%ebp),%eax
0812874e +0x1b4:  mov    %eax,(%esp)
08128751 +0x1b7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08128756 +0x1bc:  xor    $0x1,%eax
08128759 +0x1bf:  test   %al,%al
0812875b +0x1c1:  jne    0812876e <+0x1d4>
0812875d +0x1c3:  mov    -0x1c(%ebp),%eax
08128760 +0x1c6:  mov    %eax,(%esp)
08128763 +0x1c9:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08128768 +0x1ce:  or     %edx,%eax
0812876a +0x1d0:  test   %eax,%eax
0812876c +0x1d2:  jne    08128775 <+0x1db>
0812876e +0x1d4:  mov    $0x1,%eax
08128773 +0x1d9:  jmp    0812877a <+0x1e0>
08128775 +0x1db:  mov    $0x0,%eax
0812877a +0x1e0:  test   %al,%al
0812877c +0x1e2:  je     0812886d <+0x2d3>
08128782 +0x1e8:  mov    -0x50(%ebp),%eax
08128785 +0x1eb:  mov    %eax,-0x74(%ebp)
08128788 +0x1ee:  mov    -0x4c(%ebp),%edi
0812878b +0x1f1:  mov    -0x48(%ebp),%esi
0812878e +0x1f4:  mov    -0x44(%ebp),%ebx
08128791 +0x1f7:  mov    -0x40(%ebp),%eax
08128794 +0x1fa:  movl   $0x0,0x4(%esp)
0812879c +0x202:  mov    %eax,(%esp)
0812879f +0x205:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081287a4 +0x20a:  mov    -0x74(%ebp),%edx
081287a7 +0x20d:  mov    %edx,0x1c(%esp)
081287ab +0x211:  mov    %edi,0x18(%esp)
081287af +0x215:  mov    %esi,0x14(%esp)
081287b3 +0x219:  mov    %ebx,0x10(%esp)
081287b7 +0x21d:  mov    %eax,0xc(%esp)
081287bb +0x221:  lea    -0x5c(%ebp),%eax
081287be +0x224:  mov    %eax,0x8(%esp)
081287c2 +0x228:  movl   $"insert into log_acquire_item\t\t\t\t\t\t\t(occ_date, m_id, charac_no, item_id, item_count, item_type)\t\t\t\t\t\t\tvalues ('%s', %s, %u, %u, %u, %d)",0x4(%esp)
081287ca +0x230:  mov    -0x1c(%ebp),%eax
081287cd +0x233:  mov    %eax,(%esp)
081287d0 +0x236:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081287d5 +0x23b:  movl   $0x1,0x4(%esp)
081287dd +0x243:  mov    -0x1c(%ebp),%eax
081287e0 +0x246:  mov    %eax,(%esp)
081287e3 +0x249:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081287e8 +0x24e:  xor    $0x1,%eax
081287eb +0x251:  test   %al,%al
081287ed +0x253:  je     0812886d <+0x2d3>
081287ef +0x255:  mov    -0x50(%ebp),%eax
081287f2 +0x258:  mov    %eax,-0x70(%ebp)
081287f5 +0x25b:  mov    -0x4c(%ebp),%edx
081287f8 +0x25e:  mov    %edx,-0x6c(%ebp)
081287fb +0x261:  mov    -0x48(%ebp),%edi
081287fe +0x264:  mov    -0x44(%ebp),%esi
08128801 +0x267:  mov    -0x40(%ebp),%eax
08128804 +0x26a:  movl   $0x0,0x4(%esp)
0812880c +0x272:  mov    %eax,(%esp)
0812880f +0x275:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08128814 +0x27a:  mov    %eax,%ebx
08128816 +0x27c:  movl   $0x5,0xc(%esp)
0812881e +0x284:  movl   $0x566,0x8(%esp)
08128826 +0x28c:  movl   $&_ZZN13DB_LogBuyItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0812882e +0x294:  lea    -0x38(%ebp),%eax
08128831 +0x297:  mov    %eax,(%esp)
08128834 +0x29a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08128839 +0x29f:  mov    -0x70(%ebp),%eax
0812883c +0x2a2:  mov    %eax,0x18(%esp)
08128840 +0x2a6:  mov    -0x6c(%ebp),%edx
08128843 +0x2a9:  mov    %edx,0x14(%esp)
08128847 +0x2ad:  mov    %edi,0x10(%esp)
0812884b +0x2b1:  mov    %esi,0xc(%esp)
0812884f +0x2b5:  mov    %ebx,0x8(%esp)
08128853 +0x2b9:  movl   $"DB_LogBuyItem, exec ERROR m_id=%s charac_no=%u ItemID=%u Count=%u Type=%d",0x4(%esp)
0812885b +0x2c1:  lea    -0x38(%ebp),%eax
0812885e +0x2c4:  mov    %eax,(%esp)
08128861 +0x2c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08128866 +0x2cc:  mov    $0x0,%eax
0812886b +0x2d1:  jmp    08128872 <+0x2d8>
0812886d +0x2d3:  mov    $0x1,%eax
08128872 +0x2d8:  add    $0x8c,%esp
08128878 +0x2de:  pop    %ebx
08128879 +0x2df:  pop    %esi
0812887a +0x2e0:  pop    %edi
0812887b +0x2e1:  pop    %ebp
0812887c +0x2e2:  ret
0812887d +0x2e3:  nop
```

## 反编译 C

```c
// DB_LogBuyItem::dispatch @ 0x812859a

/* DB_LogBuyItem::dispatch(int, int, Stream*) */

undefined4 DB_LogBuyItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  char local_60 [12];
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  cMyTrace local_3c [16];
  tm *local_2c;
  time_t local_28;
  int local_24;
  MySQL *local_20;
  
  time(&local_40);
  local_2c = localtime(&local_40);
  iVar6 = G_CEnvironment();
  local_24 = *(int *)(iVar6 + 0x37c);
  if (local_2c->tm_hour < local_24) {
    local_2c = (tm *)0x0;
    local_40 = local_40 + -0x15180;
    local_2c = localtime(&local_40);
  }
  local_2c->tm_hour = local_24;
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  local_28 = mktime(local_2c);
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  memset(local_60,0,0xc);
  sprintf(local_60,"%04d-%02d-%02d",local_2c->tm_year + 0x76c,local_2c->tm_mon + 1,local_2c->tm_mday
         );
  Stream::operator>>(in_stack_00000010,&local_44);
  Stream::operator>>(in_stack_00000010,&local_48);
  Stream::operator>>(in_stack_00000010,&local_4c);
  Stream::operator>>(in_stack_00000010,&local_50);
  Stream::operator>>(in_stack_00000010,&local_54);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_20,
                   "update log_acquire_item\t\t\t\t\t\tset item_count = item_count + %d\t\t\t\t\t\twhere occ_date = \'%s\' and charac_no = %u and item_id = %u"
                   ,local_50,local_60,local_48,local_4c);
  cVar5 = MySQL::exec(local_20,true);
  if ((cVar5 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_20), lVar8 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar4 = local_48;
  uVar3 = local_4c;
  uVar2 = local_50;
  iVar6 = local_54;
  if (bVar1) {
    uVar7 = NumberToString(local_44,0);
    MySQL::set_query(local_20,
                     "insert into log_acquire_item\t\t\t\t\t\t\t(occ_date, m_id, charac_no, item_id, item_count, item_type)\t\t\t\t\t\t\tvalues (\'%s\', %s, %u, %u, %u, %d)"
                     ,local_60,uVar7,uVar4,uVar3,uVar2,iVar6);
    cVar5 = MySQL::exec(local_20,true);
    uVar4 = local_48;
    uVar3 = local_4c;
    uVar2 = local_50;
    iVar6 = local_54;
    if (cVar5 != '\x01') {
      uVar7 = NumberToString(local_44,0);
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_LogBuyItem::dispatch(int, int, Stream*)",0x566,5)
      ;
      cMyTrace::operator()
                (local_3c,
                 "DB_LogBuyItem, exec ERROR m_id=%s charac_no=%u ItemID=%u Count=%u Type=%d",uVar7,
                 uVar4,uVar3,uVar2,iVar6);
      return 0;
    }
  }
  return 1;
}
```

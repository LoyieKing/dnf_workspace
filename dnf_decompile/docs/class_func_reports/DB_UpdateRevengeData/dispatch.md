# dispatch

`_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream`

`DB_UpdateRevengeData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateRevengeData` | `0x0843f34c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f34c  _ZN20DB_UpdateRevengeData8dispatchEiiP6Stream
#           DB_UpdateRevengeData::dispatch(int, int, Stream*)
# range [0x0843f34c, 0x0843f5d1]
0843f34c +0x000:  push   %ebp
0843f34d +0x001:  mov    %esp,%ebp
0843f34f +0x003:  sub    $0x78,%esp
0843f352 +0x006:  movl   $0x0,-0x3c(%ebp)
0843f359 +0x00d:  movb   $0x0,-0x3d(%ebp)
0843f35d +0x011:  movb   $0x0,-0x3e(%ebp)
0843f361 +0x015:  lea    -0x3c(%ebp),%eax
0843f364 +0x018:  mov    %eax,0x4(%esp)
0843f368 +0x01c:  mov    0x14(%ebp),%eax
0843f36b +0x01f:  mov    %eax,(%esp)
0843f36e +0x022:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843f373 +0x027:  lea    -0x3d(%ebp),%eax
0843f376 +0x02a:  mov    %eax,0x4(%esp)
0843f37a +0x02e:  mov    0x14(%ebp),%eax
0843f37d +0x031:  mov    %eax,(%esp)
0843f380 +0x034:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
0843f385 +0x039:  lea    -0x3e(%ebp),%eax
0843f388 +0x03c:  mov    %eax,0x4(%esp)
0843f38c +0x040:  mov    0x14(%ebp),%eax
0843f38f +0x043:  mov    %eax,(%esp)
0843f392 +0x046:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
0843f397 +0x04b:  mov    -0x3c(%ebp),%eax
0843f39a +0x04e:  test   %eax,%eax
0843f39c +0x050:  jne    0843f3a8 <+0x5c>
0843f39e +0x052:  mov    $0x0,%eax
0843f3a3 +0x057:  jmp    0843f5cf <+0x283>
0843f3a8 +0x05c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0843f3af +0x063:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0843f3b4 +0x068:  mov    %eax,-0x44(%ebp)
0843f3b7 +0x06b:  lea    -0x44(%ebp),%eax
0843f3ba +0x06e:  mov    %eax,(%esp)
0843f3bd +0x071:  call   0807e330 <_init+0xc28>
0843f3c2 +0x076:  mov    %eax,-0x18(%ebp)
0843f3c5 +0x079:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0843f3ca +0x07e:  mov    0x37c(%eax),%eax
0843f3d0 +0x084:  mov    %eax,-0x10(%ebp)
0843f3d3 +0x087:  mov    -0x18(%ebp),%eax
0843f3d6 +0x08a:  mov    0x8(%eax),%eax
0843f3d9 +0x08d:  cmp    -0x10(%ebp),%eax
0843f3dc +0x090:  jge    0843f3fe <+0xb2>
0843f3de +0x092:  movl   $0x0,-0x18(%ebp)
0843f3e5 +0x099:  mov    -0x44(%ebp),%eax
0843f3e8 +0x09c:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
0843f3ed +0x0a1:  mov    %eax,-0x44(%ebp)
0843f3f0 +0x0a4:  lea    -0x44(%ebp),%eax
0843f3f3 +0x0a7:  mov    %eax,(%esp)
0843f3f6 +0x0aa:  call   0807e330 <_init+0xc28>
0843f3fb +0x0af:  mov    %eax,-0x18(%ebp)
0843f3fe +0x0b2:  mov    -0x18(%ebp),%eax
0843f401 +0x0b5:  mov    %eax,(%esp)
0843f404 +0x0b8:  call   0807e820 <_init+0x1118>
0843f409 +0x0bd:  mov    %eax,-0x14(%ebp)
0843f40c +0x0c0:  movl   $0xc,0x8(%esp)
0843f414 +0x0c8:  movl   $0x0,0x4(%esp)
0843f41c +0x0d0:  lea    -0x50(%ebp),%eax
0843f41f +0x0d3:  mov    %eax,(%esp)
0843f422 +0x0d6:  call   0807dcc0 <_init+0x5b8>
0843f427 +0x0db:  mov    -0x18(%ebp),%eax
0843f42a +0x0de:  mov    0xc(%eax),%eax
0843f42d +0x0e1:  mov    -0x18(%ebp),%edx
0843f430 +0x0e4:  mov    0x10(%edx),%edx
0843f433 +0x0e7:  lea    0x1(%edx),%ecx
0843f436 +0x0ea:  mov    -0x18(%ebp),%edx
0843f439 +0x0ed:  mov    0x14(%edx),%edx
0843f43c +0x0f0:  add    $0x76c,%edx
0843f442 +0x0f6:  mov    %eax,0x10(%esp)
0843f446 +0x0fa:  mov    %ecx,0xc(%esp)
0843f44a +0x0fe:  mov    %edx,0x8(%esp)
0843f44e +0x102:  movl   $"%04d-%02d-%02d",0x4(%esp)
0843f456 +0x10a:  lea    -0x50(%ebp),%eax
0843f459 +0x10d:  mov    %eax,(%esp)
0843f45c +0x110:  call   0807e440 <_init+0xd38>
0843f461 +0x115:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843f466 +0x11a:  movl   $0x0,0x8(%esp)
0843f46e +0x122:  movl   $0x3,0x4(%esp)
0843f476 +0x12a:  mov    %eax,(%esp)
0843f479 +0x12d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843f47e +0x132:  mov    %eax,-0xc(%ebp)
0843f481 +0x135:  cmpl   $0x0,-0xc(%ebp)
0843f485 +0x139:  jne    0843f491 <+0x145>
0843f487 +0x13b:  mov    $0x0,%eax
0843f48c +0x140:  jmp    0843f5cf <+0x283>
0843f491 +0x145:  mov    -0x3c(%ebp),%ecx
0843f494 +0x148:  movzbl -0x3e(%ebp),%eax
0843f498 +0x14c:  movzbl %al,%edx
0843f49b +0x14f:  movzbl -0x3d(%ebp),%eax
0843f49f +0x153:  movzbl %al,%eax
0843f4a2 +0x156:  mov    %ecx,0x14(%esp)
0843f4a6 +0x15a:  lea    -0x50(%ebp),%ecx
0843f4a9 +0x15d:  mov    %ecx,0x10(%esp)
0843f4ad +0x161:  mov    %edx,0xc(%esp)
0843f4b1 +0x165:  mov    %eax,0x8(%esp)
0843f4b5 +0x169:  movl   $"upDate village_attack_dungeon set attack_count = %u, revenge_dungeon = %u where occ_date = '%s' and charac_no = %u",0x4(%esp)
0843f4bd +0x171:  mov    -0xc(%ebp),%eax
0843f4c0 +0x174:  mov    %eax,(%esp)
0843f4c3 +0x177:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f4c8 +0x17c:  movl   $0x1,0x4(%esp)
0843f4d0 +0x184:  mov    -0xc(%ebp),%eax
0843f4d3 +0x187:  mov    %eax,(%esp)
0843f4d6 +0x18a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f4db +0x18f:  xor    $0x1,%eax
0843f4de +0x192:  test   %al,%al
0843f4e0 +0x194:  je     0843f522 <+0x1d6>
0843f4e2 +0x196:  movl   $0x5,0xc(%esp)
0843f4ea +0x19e:  movl   $0x98fc,0x8(%esp)
0843f4f2 +0x1a6:  movl   $&_ZZN20DB_UpdateRevengeData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0843f4fa +0x1ae:  lea    -0x38(%ebp),%eax
0843f4fd +0x1b1:  mov    %eax,(%esp)
0843f500 +0x1b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0843f505 +0x1b9:  movl   $"village_attack_dungeon upDate exec fail",0x4(%esp)
0843f50d +0x1c1:  lea    -0x38(%ebp),%eax
0843f510 +0x1c4:  mov    %eax,(%esp)
0843f513 +0x1c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843f518 +0x1cc:  mov    $0x0,%eax
0843f51d +0x1d1:  jmp    0843f5cf <+0x283>
0843f522 +0x1d6:  mov    -0xc(%ebp),%eax
0843f525 +0x1d9:  mov    %eax,(%esp)
0843f528 +0x1dc:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843f52d +0x1e1:  or     %edx,%eax
0843f52f +0x1e3:  test   %eax,%eax
0843f531 +0x1e5:  sete   %al
0843f534 +0x1e8:  test   %al,%al
0843f536 +0x1ea:  je     0843f5ca <+0x27e>
0843f53c +0x1f0:  movzbl -0x3e(%ebp),%eax
0843f540 +0x1f4:  movzbl %al,%ecx
0843f543 +0x1f7:  movzbl -0x3d(%ebp),%eax
0843f547 +0x1fb:  movzbl %al,%edx
0843f54a +0x1fe:  mov    -0x3c(%ebp),%eax
0843f54d +0x201:  mov    %ecx,0x14(%esp)
0843f551 +0x205:  mov    %edx,0x10(%esp)
0843f555 +0x209:  mov    %eax,0xc(%esp)
0843f559 +0x20d:  lea    -0x50(%ebp),%eax
0843f55c +0x210:  mov    %eax,0x8(%esp)
0843f560 +0x214:  movl   $"inSert into village_attack_dungeon(occ_date, charac_no, attack_count, revenge_dungeon) values('%s', %u, %u, %u)",0x4(%esp)
0843f568 +0x21c:  mov    -0xc(%ebp),%eax
0843f56b +0x21f:  mov    %eax,(%esp)
0843f56e +0x222:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f573 +0x227:  movl   $0x1,0x4(%esp)
0843f57b +0x22f:  mov    -0xc(%ebp),%eax
0843f57e +0x232:  mov    %eax,(%esp)
0843f581 +0x235:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f586 +0x23a:  xor    $0x1,%eax
0843f589 +0x23d:  test   %al,%al
0843f58b +0x23f:  je     0843f5ca <+0x27e>
0843f58d +0x241:  movl   $0x5,0xc(%esp)
0843f595 +0x249:  movl   $0x9907,0x8(%esp)
0843f59d +0x251:  movl   $&_ZZN20DB_UpdateRevengeData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0843f5a5 +0x259:  lea    -0x28(%ebp),%eax
0843f5a8 +0x25c:  mov    %eax,(%esp)
0843f5ab +0x25f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0843f5b0 +0x264:  movl   $"event_integration_charac inSert exec fail",0x4(%esp)
0843f5b8 +0x26c:  lea    -0x28(%ebp),%eax
0843f5bb +0x26f:  mov    %eax,(%esp)
0843f5be +0x272:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843f5c3 +0x277:  mov    $0x0,%eax
0843f5c8 +0x27c:  jmp    0843f5cf <+0x283>
0843f5ca +0x27e:  mov    $0x1,%eax
0843f5cf +0x283:  leave
0843f5d0 +0x284:  ret
0843f5d1 +0x285:  nop
```

## 反编译 C

```c
// DB_UpdateRevengeData::dispatch @ 0x843f34c

/* DB_UpdateRevengeData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateRevengeData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char local_54 [12];
  int local_48;
  byte local_42;
  byte local_41;
  uint local_40;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  tm *local_1c;
  time_t local_18;
  int local_14;
  MySQL *local_10;
  
  local_40 = 0;
  local_41 = 0;
  local_42 = 0;
  Stream::operator>>(in_stack_00000010,&local_40);
  Stream::operator>>(in_stack_00000010,&local_41);
  Stream::operator>>(in_stack_00000010,&local_42);
  if (local_40 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c = localtime(&local_48);
    iVar3 = G_CEnvironment();
    local_14 = *(int *)(iVar3 + 0x37c);
    if (local_1c->tm_hour < local_14) {
      local_1c = (tm *)0x0;
      local_48 = local_48 + -0x15180;
      local_1c = localtime(&local_48);
    }
    local_18 = mktime(local_1c);
    memset(local_54,0,0xc);
    sprintf(local_54,"%04d-%02d-%02d",local_1c->tm_year + 0x76c,local_1c->tm_mon + 1,
            local_1c->tm_mday);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_10 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      MySQL::set_query(local_10,
                       "upDate village_attack_dungeon set attack_count = %u, revenge_dungeon = %u where occ_date = \'%s\' and charac_no = %u"
                       ,(uint)local_41,(uint)local_42,local_54,local_40);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        lVar4 = MySQL::getAffectedRowCount(local_10);
        if (lVar4 == 0) {
          MySQL::set_query(local_10,
                           "inSert into village_attack_dungeon(occ_date, charac_no, attack_count, revenge_dungeon) values(\'%s\', %u, %u, %u)"
                           ,local_54,local_40,(uint)local_41,(uint)local_42);
          cVar1 = MySQL::exec(local_10,true);
          if (cVar1 != '\x01') {
            cMyTrace::cMyTrace(local_2c,
                               "virtual bool DB_UpdateRevengeData::dispatch(int, int, Stream*)",
                               0x9907,5);
            cMyTrace::operator()(local_2c,"event_integration_charac inSert exec fail");
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_3c,"virtual bool DB_UpdateRevengeData::dispatch(int, int, Stream*)"
                           ,0x98fc,5);
        cMyTrace::operator()(local_3c,"village_attack_dungeon upDate exec fail");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```

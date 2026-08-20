# dispatch

`_ZN18DB_UpdateDimension8dispatchEiiP6Stream`

`DB_UpdateDimension::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateDimension` | `0x0843230a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843230a  _ZN18DB_UpdateDimension8dispatchEiiP6Stream
#           DB_UpdateDimension::dispatch(int, int, Stream*)
# range [0x0843230a, 0x08432645]
0843230a +0x000:  push   %ebp
0843230b +0x001:  mov    %esp,%ebp
0843230d +0x003:  push   %edi
0843230e +0x004:  push   %esi
0843230f +0x005:  push   %ebx
08432310 +0x006:  sub    $0x6c,%esp
08432313 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08432318 +0x00e:  movl   $0x0,0x8(%esp)
08432320 +0x016:  movl   $0x2,0x4(%esp)
08432328 +0x01e:  mov    %eax,(%esp)
0843232b +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08432330 +0x026:  mov    %eax,-0x20(%ebp)
08432333 +0x029:  mov    0x14(%ebp),%eax
08432336 +0x02c:  mov    %eax,(%esp)
08432339 +0x02f:  call   08452f4c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5b62>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5b62
0843233e +0x034:  mov    %eax,-0x1c(%ebp)
08432341 +0x037:  mov    -0x1c(%ebp),%eax
08432344 +0x03a:  movzbl 0xd(%eax),%eax
08432348 +0x03e:  test   %al,%al
0843234a +0x040:  je     0843253a <+0x230>
08432350 +0x046:  mov    -0x1c(%ebp),%eax
08432353 +0x049:  mov    (%eax),%eax
08432355 +0x04b:  mov    %eax,-0x34(%ebp)
08432358 +0x04e:  mov    -0x1c(%ebp),%eax
0843235b +0x051:  movzbl 0x9(%eax),%eax
0843235f +0x055:  movsbl %al,%edi
08432362 +0x058:  mov    -0x1c(%ebp),%eax
08432365 +0x05b:  movzbl 0x8(%eax),%eax
08432369 +0x05f:  movsbl %al,%esi
0843236c +0x062:  mov    -0x1c(%ebp),%eax
0843236f +0x065:  movzbl 0x7(%eax),%eax
08432373 +0x069:  movsbl %al,%ebx
08432376 +0x06c:  mov    -0x1c(%ebp),%eax
08432379 +0x06f:  movzbl 0x6(%eax),%eax
0843237d +0x073:  movsbl %al,%ecx
08432380 +0x076:  mov    -0x1c(%ebp),%eax
08432383 +0x079:  movzbl 0x5(%eax),%eax
08432387 +0x07d:  movsbl %al,%edx
0843238a +0x080:  mov    -0x1c(%ebp),%eax
0843238d +0x083:  movzbl 0x4(%eax),%eax
08432391 +0x087:  movsbl %al,%eax
08432394 +0x08a:  mov    %eax,-0x3c(%ebp)
08432397 +0x08d:  mov    -0x34(%ebp),%eax
0843239a +0x090:  mov    %eax,0x20(%esp)
0843239e +0x094:  mov    %edi,0x1c(%esp)
084323a2 +0x098:  mov    %esi,0x18(%esp)
084323a6 +0x09c:  mov    %ebx,0x14(%esp)
084323aa +0x0a0:  mov    %ecx,0x10(%esp)
084323ae +0x0a4:  mov    %edx,0xc(%esp)
084323b2 +0x0a8:  mov    -0x3c(%ebp),%eax
084323b5 +0x0ab:  mov    %eax,0x8(%esp)
084323b9 +0x0af:  movl   $"upDate charac_dimension_inout set dungeon1=%d, dungeon2=%d, dungeon3=%d,  dungeon4=%d, dungeon5=%d, dungeon6=%d where charac_no=%u",0x4(%esp)
084323c1 +0x0b7:  mov    -0x20(%ebp),%eax
084323c4 +0x0ba:  mov    %eax,(%esp)
084323c7 +0x0bd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084323cc +0x0c2:  movl   $0x1,0x4(%esp)
084323d4 +0x0ca:  mov    -0x20(%ebp),%eax
084323d7 +0x0cd:  mov    %eax,(%esp)
084323da +0x0d0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084323df +0x0d5:  xor    $0x1,%eax
084323e2 +0x0d8:  test   %al,%al
084323e4 +0x0da:  jne    084323f7 <+0xed>
084323e6 +0x0dc:  mov    -0x20(%ebp),%eax
084323e9 +0x0df:  mov    %eax,(%esp)
084323ec +0x0e2:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084323f1 +0x0e7:  or     %edx,%eax
084323f3 +0x0e9:  test   %eax,%eax
084323f5 +0x0eb:  jne    084323fe <+0xf4>
084323f7 +0x0ed:  mov    $0x1,%eax
084323fc +0x0f2:  jmp    08432403 <+0xf9>
084323fe +0x0f4:  mov    $0x0,%eax
08432403 +0x0f9:  test   %al,%al
08432405 +0x0fb:  je     0843253a <+0x230>
0843240b +0x101:  mov    -0x1c(%ebp),%eax
0843240e +0x104:  movzbl 0x9(%eax),%eax
08432412 +0x108:  movsbl %al,%eax
08432415 +0x10b:  mov    %eax,-0x30(%ebp)
08432418 +0x10e:  mov    -0x1c(%ebp),%eax
0843241b +0x111:  movzbl 0x8(%eax),%eax
0843241f +0x115:  movsbl %al,%edi
08432422 +0x118:  mov    -0x1c(%ebp),%eax
08432425 +0x11b:  movzbl 0x7(%eax),%eax
08432429 +0x11f:  movsbl %al,%esi
0843242c +0x122:  mov    -0x1c(%ebp),%eax
0843242f +0x125:  movzbl 0x6(%eax),%eax
08432433 +0x129:  movsbl %al,%ebx
08432436 +0x12c:  mov    -0x1c(%ebp),%eax
08432439 +0x12f:  movzbl 0x5(%eax),%eax
0843243d +0x133:  movsbl %al,%ecx
08432440 +0x136:  mov    -0x1c(%ebp),%eax
08432443 +0x139:  movzbl 0x4(%eax),%eax
08432447 +0x13d:  movsbl %al,%edx
0843244a +0x140:  mov    -0x1c(%ebp),%eax
0843244d +0x143:  mov    (%eax),%eax
0843244f +0x145:  mov    %eax,-0x3c(%ebp)
08432452 +0x148:  mov    -0x30(%ebp),%eax
08432455 +0x14b:  mov    %eax,0x20(%esp)
08432459 +0x14f:  mov    %edi,0x1c(%esp)
0843245d +0x153:  mov    %esi,0x18(%esp)
08432461 +0x157:  mov    %ebx,0x14(%esp)
08432465 +0x15b:  mov    %ecx,0x10(%esp)
08432469 +0x15f:  mov    %edx,0xc(%esp)
0843246d +0x163:  mov    -0x3c(%ebp),%eax
08432470 +0x166:  mov    %eax,0x8(%esp)
08432474 +0x16a:  movl   $"inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)",0x4(%esp)
0843247c +0x172:  mov    -0x20(%ebp),%eax
0843247f +0x175:  mov    %eax,(%esp)
08432482 +0x178:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432487 +0x17d:  movl   $0x1,0x4(%esp)
0843248f +0x185:  mov    -0x20(%ebp),%eax
08432492 +0x188:  mov    %eax,(%esp)
08432495 +0x18b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843249a +0x190:  xor    $0x1,%eax
0843249d +0x193:  test   %al,%al
0843249f +0x195:  je     0843253a <+0x230>
084324a5 +0x19b:  mov    -0x1c(%ebp),%eax
084324a8 +0x19e:  movzbl 0x9(%eax),%eax
084324ac +0x1a2:  movsbl %al,%eax
084324af +0x1a5:  mov    %eax,-0x2c(%ebp)
084324b2 +0x1a8:  mov    -0x1c(%ebp),%eax
084324b5 +0x1ab:  movzbl 0x8(%eax),%eax
084324b9 +0x1af:  movsbl %al,%edi
084324bc +0x1b2:  mov    -0x1c(%ebp),%eax
084324bf +0x1b5:  movzbl 0x7(%eax),%eax
084324c3 +0x1b9:  movsbl %al,%esi
084324c6 +0x1bc:  mov    -0x1c(%ebp),%eax
084324c9 +0x1bf:  movzbl 0x6(%eax),%eax
084324cd +0x1c3:  movsbl %al,%ebx
084324d0 +0x1c6:  mov    -0x1c(%ebp),%eax
084324d3 +0x1c9:  movzbl 0x5(%eax),%eax
084324d7 +0x1cd:  movsbl %al,%ecx
084324da +0x1d0:  mov    -0x1c(%ebp),%eax
084324dd +0x1d3:  movzbl 0x4(%eax),%eax
084324e1 +0x1d7:  movsbl %al,%edx
084324e4 +0x1da:  mov    -0x1c(%ebp),%eax
084324e7 +0x1dd:  mov    (%eax),%eax
084324e9 +0x1df:  mov    %eax,-0x3c(%ebp)
084324ec +0x1e2:  mov    -0x2c(%ebp),%eax
084324ef +0x1e5:  mov    %eax,0x2c(%esp)
084324f3 +0x1e9:  mov    %edi,0x28(%esp)
084324f7 +0x1ed:  mov    %esi,0x24(%esp)
084324fb +0x1f1:  mov    %ebx,0x20(%esp)
084324ff +0x1f5:  mov    %ecx,0x1c(%esp)
08432503 +0x1f9:  mov    %edx,0x18(%esp)
08432507 +0x1fd:  mov    -0x3c(%ebp),%eax
0843250a +0x200:  mov    %eax,0x14(%esp)
0843250e +0x204:  movl   $"DIMENSION_LOG : INOUT CNT INSERT DB ERROR!! values(characno:%u,dungeon1:%d,2:%d,3:%d,4:%d,5:%d,6:%d)",0x10(%esp)
08432516 +0x20c:  movl   $0x7972,0xc(%esp)
0843251e +0x214:  movl   $&_ZZN18DB_UpdateDimension8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08432526 +0x21c:  movl   $"DBThread.cpp",0x4(%esp)
0843252e +0x224:  movl   $0x1,(%esp)
08432535 +0x22b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0843253a +0x230:  mov    -0x1c(%ebp),%eax
0843253d +0x233:  movzbl 0xe(%eax),%eax
08432541 +0x237:  test   %al,%al
08432543 +0x239:  je     08432639 <+0x32f>
08432549 +0x23f:  mov    -0x1c(%ebp),%eax
0843254c +0x242:  mov    (%eax),%edx
0843254e +0x244:  mov    -0x1c(%ebp),%eax
08432551 +0x247:  movzbl 0xc(%eax),%eax
08432555 +0x24b:  movsbl %al,%eax
08432558 +0x24e:  mov    %edx,0xc(%esp)
0843255c +0x252:  mov    %eax,0x8(%esp)
08432560 +0x256:  movl   $"upDate charac_blood_inout set dungeon1=%d where charac_no=%u",0x4(%esp)
08432568 +0x25e:  mov    -0x20(%ebp),%eax
0843256b +0x261:  mov    %eax,(%esp)
0843256e +0x264:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432573 +0x269:  movl   $0x1,0x4(%esp)
0843257b +0x271:  mov    -0x20(%ebp),%eax
0843257e +0x274:  mov    %eax,(%esp)
08432581 +0x277:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432586 +0x27c:  xor    $0x1,%eax
08432589 +0x27f:  test   %al,%al
0843258b +0x281:  jne    0843259e <+0x294>
0843258d +0x283:  mov    -0x20(%ebp),%eax
08432590 +0x286:  mov    %eax,(%esp)
08432593 +0x289:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08432598 +0x28e:  or     %edx,%eax
0843259a +0x290:  test   %eax,%eax
0843259c +0x292:  jne    084325a5 <+0x29b>
0843259e +0x294:  mov    $0x1,%eax
084325a3 +0x299:  jmp    084325aa <+0x2a0>
084325a5 +0x29b:  mov    $0x0,%eax
084325aa +0x2a0:  test   %al,%al
084325ac +0x2a2:  je     08432639 <+0x32f>
084325b2 +0x2a8:  mov    -0x1c(%ebp),%eax
084325b5 +0x2ab:  movzbl 0xc(%eax),%eax
084325b9 +0x2af:  movsbl %al,%edx
084325bc +0x2b2:  mov    -0x1c(%ebp),%eax
084325bf +0x2b5:  mov    (%eax),%eax
084325c1 +0x2b7:  mov    %edx,0xc(%esp)
084325c5 +0x2bb:  mov    %eax,0x8(%esp)
084325c9 +0x2bf:  movl   $"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",0x4(%esp)
084325d1 +0x2c7:  mov    -0x20(%ebp),%eax
084325d4 +0x2ca:  mov    %eax,(%esp)
084325d7 +0x2cd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084325dc +0x2d2:  movl   $0x1,0x4(%esp)
084325e4 +0x2da:  mov    -0x20(%ebp),%eax
084325e7 +0x2dd:  mov    %eax,(%esp)
084325ea +0x2e0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084325ef +0x2e5:  xor    $0x1,%eax
084325f2 +0x2e8:  test   %al,%al
084325f4 +0x2ea:  je     08432639 <+0x32f>
084325f6 +0x2ec:  mov    -0x1c(%ebp),%eax
084325f9 +0x2ef:  movzbl 0xc(%eax),%eax
084325fd +0x2f3:  movsbl %al,%edx
08432600 +0x2f6:  mov    -0x1c(%ebp),%eax
08432603 +0x2f9:  mov    (%eax),%eax
08432605 +0x2fb:  mov    %edx,0x18(%esp)
08432609 +0x2ff:  mov    %eax,0x14(%esp)
0843260d +0x303:  movl   $"BLOOD_LOG : INOUT CNT INSERT DB ERROR!! values(charac_no:%u,dungeon1:%d)",0x10(%esp)
08432615 +0x30b:  movl   $0x797e,0xc(%esp)
0843261d +0x313:  movl   $&_ZZN18DB_UpdateDimension8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08432625 +0x31b:  movl   $"DBThread.cpp",0x4(%esp)
0843262d +0x323:  movl   $0x1,(%esp)
08432634 +0x32a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08432639 +0x32f:  mov    $0x1,%eax
0843263e +0x334:  add    $0x6c,%esp
08432641 +0x337:  pop    %ebx
08432642 +0x338:  pop    %esi
08432643 +0x339:  pop    %edi
08432644 +0x33a:  pop    %ebp
08432645 +0x33b:  ret
```

## 反编译 C

```c
// DB_UpdateDimension::dispatch @ 0x843230a

/* DB_UpdateDimension::dispatch(int, int, Stream*) */

undefined4 DB_UpdateDimension::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_DIMENSION *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_DIMENSION>(in_stack_00000010);
  if (pSVar3[0xd] != (SIG_UPDATE_DIMENSION)0x0) {
    MySQL::set_query(this,
                     "upDate charac_dimension_inout set dungeon1=%d, dungeon2=%d, dungeon3=%d,  dungeon4=%d, dungeon5=%d, dungeon6=%d where charac_no=%u"
                     ,(int)(char)pSVar3[4],(int)(char)pSVar3[5],(int)(char)pSVar3[6],
                     (int)(char)pSVar3[7],(int)(char)pSVar3[8],(int)(char)pSVar3[9],
                     *(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(this,
                       "inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)"
                       ,*(undefined4 *)pSVar3,(int)(char)pSVar3[4],(int)(char)pSVar3[5],
                       (int)(char)pSVar3[6],(int)(char)pSVar3[7],(int)(char)pSVar3[8],
                       (int)(char)pSVar3[9]);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_UpdateDimension::dispatch(int, int, Stream*)",
                   0x7972,
                   "DIMENSION_LOG : INOUT CNT INSERT DB ERROR!! values(characno:%u,dungeon1:%d,2:%d,3:%d,4:%d,5:%d,6:%d)"
                   ,*(undefined4 *)pSVar3,(int)(char)pSVar3[4],(int)(char)pSVar3[5],
                   (int)(char)pSVar3[6],(int)(char)pSVar3[7],(int)(char)pSVar3[8],
                   (int)(char)pSVar3[9]);
      }
    }
  }
  if (pSVar3[0xe] != (SIG_UPDATE_DIMENSION)0x0) {
    MySQL::set_query(this,"upDate charac_blood_inout set dungeon1=%d where charac_no=%u",
                     (int)(char)pSVar3[0xc],*(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(this,"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",
                       *(undefined4 *)pSVar3,(int)(char)pSVar3[0xc]);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_UpdateDimension::dispatch(int, int, Stream*)",
                   0x797e,"BLOOD_LOG : INOUT CNT INSERT DB ERROR!! values(charac_no:%u,dungeon1:%d)"
                   ,*(undefined4 *)pSVar3,(int)(char)pSVar3[0xc]);
      }
    }
    return 1;
  }
  return 1;
}
```

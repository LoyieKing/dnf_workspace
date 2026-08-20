# dispatch

`_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream`

`DB_MailBoxSendNewMailWithDBWork::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBoxSendNewMailWithDBWork` | `0x084272de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084272de  _ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream
#           DB_MailBoxSendNewMailWithDBWork::dispatch(int, int, Stream*)
# range [0x084272de, 0x084276af]
084272de +0x000:  push   %ebp
084272df +0x001:  mov    %esp,%ebp
084272e1 +0x003:  push   %esi
084272e2 +0x004:  push   %ebx
084272e3 +0x005:  sub    $0x1a0,%esp
084272e9 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084272ee +0x010:  movl   $0x0,0x8(%esp)
084272f6 +0x018:  movl   $0x3,0x4(%esp)
084272fe +0x020:  mov    %eax,(%esp)
08427301 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427306 +0x028:  mov    %eax,-0x1c(%ebp)
08427309 +0x02b:  mov    0x14(%ebp),%eax
0842730c +0x02e:  mov    %eax,(%esp)
0842730f +0x031:  call   0845213e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4d54>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4d54
08427314 +0x036:  mov    %eax,-0x18(%ebp)
08427317 +0x039:  movl   $0x168,0x8(%esp)
0842731f +0x041:  movl   $0x0,0x4(%esp)
08427327 +0x049:  lea    -0x194(%ebp),%eax
0842732d +0x04f:  mov    %eax,(%esp)
08427330 +0x052:  call   0807dcc0 <_init+0x5b8>
08427335 +0x057:  mov    -0x18(%ebp),%eax
08427338 +0x05a:  add    $0x4,%eax
0842733b +0x05d:  movl   $0x1d,0x8(%esp)
08427343 +0x065:  mov    %eax,0x4(%esp)
08427347 +0x069:  lea    -0x194(%ebp),%eax
0842734d +0x06f:  mov    %eax,(%esp)
08427350 +0x072:  call   0807d8d0 <_init+0x1c8>
08427355 +0x077:  mov    -0x18(%ebp),%eax
08427358 +0x07a:  mov    0x24(%eax),%eax
0842735b +0x07d:  mov    %eax,-0x172(%ebp)
08427361 +0x083:  mov    -0x18(%ebp),%eax
08427364 +0x086:  mov    0x28(%eax),%eax
08427367 +0x089:  mov    %eax,-0x176(%ebp)
0842736d +0x08f:  movl   $0x0,-0x16e(%ebp)
08427377 +0x099:  mov    -0x18(%ebp),%eax
0842737a +0x09c:  movzbl 0x1a2(%eax),%eax
08427381 +0x0a3:  mov    %al,-0x13d(%ebp)
08427387 +0x0a9:  mov    -0x18(%ebp),%eax
0842738a +0x0ac:  add    $0xa2,%eax
0842738f +0x0b1:  test   %eax,%eax
08427391 +0x0b3:  je     084273e2 <+0x104>
08427393 +0x0b5:  mov    -0x18(%ebp),%eax
08427396 +0x0b8:  movzwl 0xa0(%eax),%eax
0842739d +0x0bf:  test   %ax,%ax
084273a0 +0x0c2:  je     084273e2 <+0x104>
084273a2 +0x0c4:  mov    -0x18(%ebp),%eax
084273a5 +0x0c7:  movzwl 0xa0(%eax),%eax
084273ac +0x0ce:  mov    %ax,-0x13b(%ebp)
084273b3 +0x0d5:  mov    -0x18(%ebp),%eax
084273b6 +0x0d8:  movzwl 0xa0(%eax),%eax
084273bd +0x0df:  movzwl %ax,%eax
084273c0 +0x0e2:  mov    -0x18(%ebp),%edx
084273c3 +0x0e5:  add    $0xa2,%edx
084273c9 +0x0eb:  mov    %eax,0x8(%esp)
084273cd +0x0ef:  mov    %edx,0x4(%esp)
084273d1 +0x0f3:  lea    -0x194(%ebp),%eax
084273d7 +0x0f9:  add    $0x5b,%eax
084273da +0x0fc:  mov    %eax,(%esp)
084273dd +0x0ff:  call   0807d8d0 <_init+0x1c8>
084273e2 +0x104:  mov    -0x18(%ebp),%eax
084273e5 +0x107:  mov    (%eax),%eax
084273e7 +0x109:  test   %eax,%eax
084273e9 +0x10b:  jne    084274bc <+0x1de>
084273ef +0x111:  mov    -0x18(%ebp),%eax
084273f2 +0x114:  add    $0x2c,%eax
084273f5 +0x117:  mov    %eax,(%esp)
084273f8 +0x11a:  call   083ffe0e <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT>  ; DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)
084273fd +0x11f:  xor    $0x1,%eax
08427400 +0x122:  test   %al,%al
08427402 +0x124:  je     08427430 <+0x152>
08427404 +0x126:  movl   $0x4,(%esp)
0842740b +0x12d:  call   08725800 <__cxa_allocate_exception>
08427410 +0x132:  mov    %eax,%edx
08427412 +0x134:  movl   $0x6871,(%edx)
08427418 +0x13a:  movl   $0x0,0x8(%esp)
08427420 +0x142:  movl   $&_ZTIi,0x4(%esp)
08427428 +0x14a:  mov    %eax,(%esp)
0842742b +0x14d:  call   08724c50 <__cxa_throw>
08427430 +0x152:  mov    -0x1c(%ebp),%eax
08427433 +0x155:  mov    %eax,(%esp)
08427436 +0x158:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
0842743b +0x15d:  mov    %eax,-0x14(%ebp)
0842743e +0x160:  cmpl   $0x0,-0x14(%ebp)
08427442 +0x164:  jne    08427470 <+0x192>
08427444 +0x166:  movl   $0x4,(%esp)
0842744b +0x16d:  call   08725800 <__cxa_allocate_exception>
08427450 +0x172:  mov    %eax,%edx
08427452 +0x174:  movl   $0x6874,(%edx)
08427458 +0x17a:  movl   $0x0,0x8(%esp)
08427460 +0x182:  movl   $&_ZTIi,0x4(%esp)
08427468 +0x18a:  mov    %eax,(%esp)
0842746b +0x18d:  call   08724c50 <__cxa_throw>
08427470 +0x192:  movb   $0x0,-0x16a(%ebp)
08427477 +0x199:  mov    -0x18(%ebp),%eax
0842747a +0x19c:  mov    0x30(%eax),%eax
0842747d +0x19f:  mov    %eax,-0x169(%ebp)
08427483 +0x1a5:  mov    -0x18(%ebp),%eax
08427486 +0x1a8:  movzbl 0x35(%eax),%eax
0842748a +0x1ac:  movzbl %al,%eax
0842748d +0x1af:  mov    %ax,-0x160(%ebp)
08427494 +0x1b6:  movb   $0x0,-0x161(%ebp)
0842749b +0x1bd:  mov    -0x14(%ebp),%eax
0842749e +0x1c0:  mov    %eax,-0x165(%ebp)
084274a4 +0x1c6:  mov    -0x18(%ebp),%eax
084274a7 +0x1c9:  mov    0x54(%eax),%eax
084274aa +0x1cc:  mov    %eax,-0x15e(%ebp)
084274b0 +0x1d2:  movb   $0x1,-0x13e(%ebp)
084274b7 +0x1d9:  jmp    0842758a <+0x2ac>
084274bc +0x1de:  mov    -0x18(%ebp),%eax
084274bf +0x1e1:  mov    (%eax),%eax
084274c1 +0x1e3:  cmp    $0x1,%eax
084274c4 +0x1e6:  jne    0842758a <+0x2ac>
084274ca +0x1ec:  mov    -0x18(%ebp),%eax
084274cd +0x1ef:  add    $0x2c,%eax
084274d0 +0x1f2:  mov    %eax,0x4(%esp)
084274d4 +0x1f6:  mov    -0x1c(%ebp),%eax
084274d7 +0x1f9:  mov    %eax,(%esp)
084274da +0x1fc:  call   0841fa28 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM>  ; DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*)
084274df +0x201:  xor    $0x1,%eax
084274e2 +0x204:  test   %al,%al
084274e4 +0x206:  je     08427512 <+0x234>
084274e6 +0x208:  movl   $0x4,(%esp)
084274ed +0x20f:  call   08725800 <__cxa_allocate_exception>
084274f2 +0x214:  mov    %eax,%edx
084274f4 +0x216:  movl   $0x6883,(%edx)
084274fa +0x21c:  movl   $0x0,0x8(%esp)
08427502 +0x224:  movl   $&_ZTIi,0x4(%esp)
0842750a +0x22c:  mov    %eax,(%esp)
0842750d +0x22f:  call   08724c50 <__cxa_throw>
08427512 +0x234:  mov    -0x1c(%ebp),%eax
08427515 +0x237:  mov    %eax,(%esp)
08427518 +0x23a:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
0842751d +0x23f:  mov    %eax,-0x10(%ebp)
08427520 +0x242:  cmpl   $0x0,-0x10(%ebp)
08427524 +0x246:  jne    08427552 <+0x274>
08427526 +0x248:  movl   $0x4,(%esp)
0842752d +0x24f:  call   08725800 <__cxa_allocate_exception>
08427532 +0x254:  mov    %eax,%edx
08427534 +0x256:  movl   $0x6886,(%edx)
0842753a +0x25c:  movl   $0x0,0x8(%esp)
08427542 +0x264:  movl   $&_ZTIi,0x4(%esp)
0842754a +0x26c:  mov    %eax,(%esp)
0842754d +0x26f:  call   08724c50 <__cxa_throw>
08427552 +0x274:  movb   $0x0,-0x16a(%ebp)
08427559 +0x27b:  mov    -0x18(%ebp),%eax
0842755c +0x27e:  mov    0x34(%eax),%eax
0842755f +0x281:  mov    %eax,-0x169(%ebp)
08427565 +0x287:  mov    -0x18(%ebp),%eax
08427568 +0x28a:  movzwl 0x40(%eax),%eax
0842756c +0x28e:  mov    %ax,-0x160(%ebp)
08427573 +0x295:  movb   $0x0,-0x161(%ebp)
0842757a +0x29c:  mov    -0x10(%ebp),%eax
0842757d +0x29f:  mov    %eax,-0x165(%ebp)
08427583 +0x2a5:  movb   $0x1,-0x13c(%ebp)
0842758a +0x2ac:  lea    -0x194(%ebp),%eax
08427590 +0x2b2:  mov    %eax,0x4(%esp)
08427594 +0x2b6:  mov    -0x1c(%ebp),%eax
08427597 +0x2b9:  mov    %eax,(%esp)
0842759a +0x2bc:  call   0841f2fa <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL>  ; DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*)
0842759f +0x2c1:  xor    $0x1,%eax
084275a2 +0x2c4:  test   %al,%al
084275a4 +0x2c6:  je     084275d2 <+0x2f4>
084275a6 +0x2c8:  movl   $0x4,(%esp)
084275ad +0x2cf:  call   08725800 <__cxa_allocate_exception>
084275b2 +0x2d4:  mov    %eax,%edx
084275b4 +0x2d6:  movl   $0x6891,(%edx)
084275ba +0x2dc:  movl   $0x0,0x8(%esp)
084275c2 +0x2e4:  movl   $&_ZTIi,0x4(%esp)
084275ca +0x2ec:  mov    %eax,(%esp)
084275cd +0x2ef:  call   08724c50 <__cxa_throw>
084275d2 +0x2f4:  mov    -0x18(%ebp),%eax
084275d5 +0x2f7:  mov    0x24(%eax),%eax
084275d8 +0x2fa:  movl   $0x0,0xc(%esp)
084275e0 +0x302:  mov    %eax,0x8(%esp)
084275e4 +0x306:  movl   $0x0,0x4(%esp)
084275ec +0x30e:  mov    0x10(%ebp),%eax
084275ef +0x311:  mov    %eax,(%esp)
084275f2 +0x314:  call   0841f75a <_ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP>  ; DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP)
084275f7 +0x319:  xor    $0x1,%eax
084275fa +0x31c:  test   %al,%al
084275fc +0x31e:  je     084276a1 <+0x3c3>
08427602 +0x324:  movl   $0x4,(%esp)
08427609 +0x32b:  call   08725800 <__cxa_allocate_exception>
0842760e +0x330:  mov    %eax,%edx
08427610 +0x332:  movl   $0x6894,(%edx)
08427616 +0x338:  movl   $0x0,0x8(%esp)
0842761e +0x340:  movl   $&_ZTIi,0x4(%esp)
08427626 +0x348:  mov    %eax,(%esp)
08427629 +0x34b:  call   08724c50 <__cxa_throw>
0842762e +0x350:  cmp    $0x1,%edx
08427631 +0x353:  je     0842763b <+0x35d>
08427633 +0x355:  mov    %eax,(%esp)
08427636 +0x358:  call   08ae3750 <_Unwind_Resume>
0842763b +0x35d:  mov    %eax,(%esp)
0842763e +0x360:  call   08725ce0 <__cxa_begin_catch>
08427643 +0x365:  mov    (%eax),%eax
08427645 +0x367:  mov    %eax,-0xc(%ebp)
08427648 +0x36a:  movl   $0x5,0xc(%esp)
08427650 +0x372:  movl   $0x6899,0x8(%esp)
08427658 +0x37a:  movl   $&_ZZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08427660 +0x382:  lea    -0x2c(%ebp),%eax
08427663 +0x385:  mov    %eax,(%esp)
08427666 +0x388:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842766b +0x38d:  mov    -0xc(%ebp),%eax
0842766e +0x390:  mov    %eax,0x8(%esp)
08427672 +0x394:  movl   $"%d",0x4(%esp)
0842767a +0x39c:  lea    -0x2c(%ebp),%eax
0842767d +0x39f:  mov    %eax,(%esp)
08427680 +0x3a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08427685 +0x3a7:  jmp    0842769c <+0x3be>
08427687 +0x3a9:  mov    %edx,%ebx
08427689 +0x3ab:  mov    %eax,%esi
0842768b +0x3ad:  call   08725c30 <__cxa_end_catch>
08427690 +0x3b2:  mov    %esi,%eax
08427692 +0x3b4:  mov    %ebx,%edx
08427694 +0x3b6:  mov    %eax,(%esp)
08427697 +0x3b9:  call   08ae3750 <_Unwind_Resume>
0842769c +0x3be:  call   08725c30 <__cxa_end_catch>
084276a1 +0x3c3:  mov    $0x1,%eax
084276a6 +0x3c8:  add    $0x1a0,%esp
084276ac +0x3ce:  pop    %ebx
084276ad +0x3cf:  pop    %esi
084276ae +0x3d0:  pop    %ebp
084276af +0x3d1:  ret
```

## 反编译 C

```c
// DB_MailBoxSendNewMailWithDBWork::dispatch @ 0x84272de

/* DB_MailBoxSendNewMailWithDBWork::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBoxSendNewMailWithDBWork::dispatch
          (DB_MailBoxSendNewMailWithDBWork *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  SIG_MAILBOX_SEND_NEW_MAIL local_198 [30];
  int local_17a;
  int local_176;
  undefined4 local_172;
  undefined1 local_16e;
  int local_16d;
  int local_169;
  undefined1 local_165;
  ushort local_164;
  int local_162;
  undefined1 local_142;
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK local_141;
  undefined1 local_140;
  undefined2 local_13f;
  char acStack_13d [285];
  MySQL *local_20;
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_1c;
  int local_18;
  int local_14;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_1c = Stream::GetOutBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(param_3);
  memset(local_198,0,0x168);
  strncpy((char *)local_198,(char *)(local_1c + 4),0x1d);
  local_176 = *(int *)(local_1c + 0x24);
  local_17a = *(int *)(local_1c + 0x28);
  local_172 = 0;
  local_141 = local_1c[0x1a2];
  if ((local_1c != (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *)0xffffff5e) &&
     (*(short *)(local_1c + 0xa0) != 0)) {
    local_13f = *(undefined2 *)(local_1c + 0xa0);
    strncpy(acStack_13d,(char *)(local_1c + 0xa2),(uint)*(ushort *)(local_1c + 0xa0));
  }
  if (*(int *)local_1c == 0) {
                    /* try { // try from 084273f8 to 0842762d has its CatchHandler @ 0842762e */
    cVar1 = DB_AvatarItemInsert::InsertAvatarItem((SIG_AVATAR_INSERT *)(local_1c + 0x2c));
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6871;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_169 = WongWork::DBCommon::GetIdentity(local_20);
    local_18 = local_169;
    if (local_169 == 0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6874;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_16e = 0;
    local_16d = *(int *)(local_1c + 0x30);
    local_164 = (ushort)(byte)local_1c[0x35];
    local_165 = 0;
    local_162 = *(int *)(local_1c + 0x54);
    local_142 = 1;
  }
  else if (*(int *)local_1c == 1) {
    cVar1 = DB_InsertCreatureItem::insertCreatureItem
                      (local_20,(SIG_CREATURE_ITEM *)(local_1c + 0x2c));
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_169 = WongWork::DBCommon::GetIdentity(local_20);
    local_14 = local_169;
    if (local_169 == 0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6886;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_16e = 0;
    local_16d = *(int *)(local_1c + 0x34);
    local_164 = *(ushort *)(local_1c + 0x40);
    local_165 = 0;
    local_140 = 1;
  }
  cVar1 = DB_MailBox_Req_Send::insertMailData(local_20,local_198);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x6891;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = DB_MailBox_Req_Send::sendResult(param_2,0,*(int *)(local_1c + 0x24),0);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x6894;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```

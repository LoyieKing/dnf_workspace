# dispatch

`_ZN16DB_LoadInventory8dispatchEiiP6Stream`

`DB_LoadInventory::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840a66e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840a66e  _ZN16DB_LoadInventory8dispatchEiiP6Stream
#           DB_LoadInventory::dispatch(int, int, Stream*)
# range [0x0840a66e, 0x0840aac7]
0840a66e +0x000:  push   %ebp
0840a66f +0x001:  mov    %esp,%ebp
0840a671 +0x003:  push   %ebx
0840a672 +0x004:  sub    $0x84,%esp
0840a678 +0x00a:  mov    0x8(%ebp),%eax
0840a67b +0x00d:  mov    0x14(%ebp),%edx
0840a67e +0x010:  mov    %edx,0xc(%esp)
0840a682 +0x014:  mov    0x10(%ebp),%edx
0840a685 +0x017:  mov    %edx,0x8(%esp)
0840a689 +0x01b:  mov    0xc(%ebp),%edx
0840a68c +0x01e:  mov    %edx,0x4(%esp)
0840a690 +0x022:  mov    %eax,(%esp)
0840a693 +0x025:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0840a698 +0x02a:  xor    $0x1,%eax
0840a69b +0x02d:  test   %al,%al
0840a69d +0x02f:  je     0840a6a9 <+0x3b>
0840a69f +0x031:  mov    $0x0,%eax
0840a6a4 +0x036:  jmp    0840aabe <+0x450>
0840a6a9 +0x03b:  mov    0x14(%ebp),%eax
0840a6ac +0x03e:  mov    %eax,(%esp)
0840a6af +0x041:  call   084507f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3408>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3408
0840a6b4 +0x046:  mov    %eax,-0x14(%ebp)
0840a6b7 +0x049:  cmpl   $0x0,-0x14(%ebp)
0840a6bb +0x04d:  jne    0840a6c7 <+0x59>
0840a6bd +0x04f:  mov    $0x0,%eax
0840a6c2 +0x054:  jmp    0840aabe <+0x450>
0840a6c7 +0x059:  mov    -0x14(%ebp),%eax
0840a6ca +0x05c:  mov    %eax,0x4(%esp)
0840a6ce +0x060:  mov    0x8(%ebp),%eax
0840a6d1 +0x063:  mov    %eax,(%esp)
0840a6d4 +0x066:  call   0840b0d8 <_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)
0840a6d9 +0x06b:  xor    $0x1,%eax
0840a6dc +0x06e:  test   %al,%al
0840a6de +0x070:  je     0840a74c <+0xde>
0840a6e0 +0x072:  mov    -0x14(%ebp),%eax
0840a6e3 +0x075:  mov    0x4(%eax),%ebx
0840a6e6 +0x078:  movl   $0x5,0xc(%esp)
0840a6ee +0x080:  movl   $0x2364,0x8(%esp)
0840a6f6 +0x088:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840a6fe +0x090:  lea    -0x78(%ebp),%eax
0840a701 +0x093:  mov    %eax,(%esp)
0840a704 +0x096:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a709 +0x09b:  mov    %ebx,0x8(%esp)
0840a70d +0x09f:  movl   $"DB_LoadInventory::dispatch, GetUserInven ERROR charac_no=%u",0x4(%esp)
0840a715 +0x0a7:  lea    -0x78(%ebp),%eax
0840a718 +0x0aa:  mov    %eax,(%esp)
0840a71b +0x0ad:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a720 +0x0b2:  movl   $0x4,(%esp)
0840a727 +0x0b9:  call   08725800 <__cxa_allocate_exception>
0840a72c +0x0be:  mov    %eax,%edx
0840a72e +0x0c0:  movl   $0x1,(%edx)
0840a734 +0x0c6:  movl   $0x0,0x8(%esp)
0840a73c +0x0ce:  movl   $&_ZTIi,0x4(%esp)
0840a744 +0x0d6:  mov    %eax,(%esp)
0840a747 +0x0d9:  call   08724c50 <__cxa_throw>
0840a74c +0x0de:  mov    -0x14(%ebp),%eax
0840a74f +0x0e1:  mov    %eax,0x4(%esp)
0840a753 +0x0e5:  mov    0x8(%ebp),%eax
0840a756 +0x0e8:  mov    %eax,(%esp)
0840a759 +0x0eb:  call   0840bd3a <_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)
0840a75e +0x0f0:  xor    $0x1,%eax
0840a761 +0x0f3:  test   %al,%al
0840a763 +0x0f5:  je     0840a7d1 <+0x163>
0840a765 +0x0f7:  mov    -0x14(%ebp),%eax
0840a768 +0x0fa:  mov    0x4(%eax),%ebx
0840a76b +0x0fd:  movl   $0x5,0xc(%esp)
0840a773 +0x105:  movl   $0x2369,0x8(%esp)
0840a77b +0x10d:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840a783 +0x115:  lea    -0x68(%ebp),%eax
0840a786 +0x118:  mov    %eax,(%esp)
0840a789 +0x11b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a78e +0x120:  mov    %ebx,0x8(%esp)
0840a792 +0x124:  movl   $"DB_LoadInventory::dispatch, GetUserAvatar ERROR charac_no=%u",0x4(%esp)
0840a79a +0x12c:  lea    -0x68(%ebp),%eax
0840a79d +0x12f:  mov    %eax,(%esp)
0840a7a0 +0x132:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a7a5 +0x137:  movl   $0x4,(%esp)
0840a7ac +0x13e:  call   08725800 <__cxa_allocate_exception>
0840a7b1 +0x143:  mov    %eax,%edx
0840a7b3 +0x145:  movl   $0x2,(%edx)
0840a7b9 +0x14b:  movl   $0x0,0x8(%esp)
0840a7c1 +0x153:  movl   $&_ZTIi,0x4(%esp)
0840a7c9 +0x15b:  mov    %eax,(%esp)
0840a7cc +0x15e:  call   08724c50 <__cxa_throw>
0840a7d1 +0x163:  movl   $0x0,-0xc(%ebp)
0840a7d8 +0x16a:  jmp    0840a7f7 <+0x189>
0840a7da +0x16c:  mov    -0xc(%ebp),%eax
0840a7dd +0x16f:  imul   $0x3d,%eax,%eax
0840a7e0 +0x172:  add    $0xeed0,%eax
0840a7e5 +0x177:  add    -0x14(%ebp),%eax
0840a7e8 +0x17a:  add    $0x1,%eax
0840a7eb +0x17d:  mov    %eax,(%esp)
0840a7ee +0x180:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0840a7f3 +0x185:  addl   $0x1,-0xc(%ebp)
0840a7f7 +0x189:  cmpl   $0x8b,-0xc(%ebp)
0840a7fe +0x190:  setle  %al
0840a801 +0x193:  test   %al,%al
0840a803 +0x195:  jne    0840a7da <+0x16c>
0840a805 +0x197:  mov    -0x14(%ebp),%eax
0840a808 +0x19a:  add    $&_ZL14gUnicodeBuffer+0x825b,%eax
0840a80d +0x19f:  mov    %eax,(%esp)
0840a810 +0x1a2:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0840a815 +0x1a7:  mov    -0x14(%ebp),%eax
0840a818 +0x1aa:  mov    &_ZL14gUnicodeBuffer+0x8350(%eax),%eax
0840a81e +0x1b0:  test   %eax,%eax
0840a820 +0x1b2:  je     0840a8ab <+0x23d>
0840a826 +0x1b8:  mov    -0x14(%ebp),%eax
0840a829 +0x1bb:  mov    %eax,0x4(%esp)
0840a82d +0x1bf:  mov    0x8(%ebp),%eax
0840a830 +0x1c2:  mov    %eax,(%esp)
0840a833 +0x1c5:  call   0840ca74 <_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)
0840a838 +0x1ca:  xor    $0x1,%eax
0840a83b +0x1cd:  test   %al,%al
0840a83d +0x1cf:  je     0840a8ab <+0x23d>
0840a83f +0x1d1:  mov    -0x14(%ebp),%eax
0840a842 +0x1d4:  mov    0x4(%eax),%ebx
0840a845 +0x1d7:  movl   $0x5,0xc(%esp)
0840a84d +0x1df:  movl   $0x2379,0x8(%esp)
0840a855 +0x1e7:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840a85d +0x1ef:  lea    -0x58(%ebp),%eax
0840a860 +0x1f2:  mov    %eax,(%esp)
0840a863 +0x1f5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a868 +0x1fa:  mov    %ebx,0x8(%esp)
0840a86c +0x1fe:  movl   $"DB_LoadInventory::dispatch, GetUserCreature ERROR charac_no=%u",0x4(%esp)
0840a874 +0x206:  lea    -0x58(%ebp),%eax
0840a877 +0x209:  mov    %eax,(%esp)
0840a87a +0x20c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a87f +0x211:  movl   $0x4,(%esp)
0840a886 +0x218:  call   08725800 <__cxa_allocate_exception>
0840a88b +0x21d:  mov    %eax,%edx
0840a88d +0x21f:  movl   $0x3,(%edx)
0840a893 +0x225:  movl   $0x0,0x8(%esp)
0840a89b +0x22d:  movl   $&_ZTIi,0x4(%esp)
0840a8a3 +0x235:  mov    %eax,(%esp)
0840a8a6 +0x238:  call   08724c50 <__cxa_throw>
0840a8ab +0x23d:  movl   $0x0,-0x10(%ebp)
0840a8b2 +0x244:  mov    -0x14(%ebp),%eax
0840a8b5 +0x247:  mov    %eax,0x4(%esp)
0840a8b9 +0x24b:  mov    0x8(%ebp),%eax
0840a8bc +0x24e:  mov    %eax,(%esp)
0840a8bf +0x251:  call   0840ad2a <_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::_getCharacInvenExpand(SIG_LOAD_INVENTORY*) const
0840a8c4 +0x256:  mov    %eax,-0x10(%ebp)
0840a8c7 +0x259:  cmpl   $0x0,-0x10(%ebp)
0840a8cb +0x25d:  setne  %al
0840a8ce +0x260:  test   %al,%al
0840a8d0 +0x262:  je     0840a945 <+0x2d7>
0840a8d2 +0x264:  mov    -0x14(%ebp),%eax
0840a8d5 +0x267:  mov    0x4(%eax),%ebx
0840a8d8 +0x26a:  movl   $0x5,0xc(%esp)
0840a8e0 +0x272:  movl   $0x2381,0x8(%esp)
0840a8e8 +0x27a:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840a8f0 +0x282:  lea    -0x48(%ebp),%eax
0840a8f3 +0x285:  mov    %eax,(%esp)
0840a8f6 +0x288:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a8fb +0x28d:  mov    -0x10(%ebp),%eax
0840a8fe +0x290:  mov    %eax,0xc(%esp)
0840a902 +0x294:  mov    %ebx,0x8(%esp)
0840a906 +0x298:  movl   $"DB_LoadInventory::dispatch, _getCharacInvenExpand ERROR charac_no=%u, line(%d)",0x4(%esp)
0840a90e +0x2a0:  lea    -0x48(%ebp),%eax
0840a911 +0x2a3:  mov    %eax,(%esp)
0840a914 +0x2a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a919 +0x2ab:  movl   $0x4,(%esp)
0840a920 +0x2b2:  call   08725800 <__cxa_allocate_exception>
0840a925 +0x2b7:  mov    %eax,%edx
0840a927 +0x2b9:  movl   $0x4,(%edx)
0840a92d +0x2bf:  movl   $0x0,0x8(%esp)
0840a935 +0x2c7:  movl   $&_ZTIi,0x4(%esp)
0840a93d +0x2cf:  mov    %eax,(%esp)
0840a940 +0x2d2:  call   08724c50 <__cxa_throw>
0840a945 +0x2d7:  mov    -0x14(%ebp),%eax
0840a948 +0x2da:  lea    &_ZL14gUnicodeBuffer+0xa258(%eax),%edx
0840a94e +0x2e0:  mov    -0x14(%ebp),%eax
0840a951 +0x2e3:  mov    0x4(%eax),%eax
0840a954 +0x2e6:  mov    %edx,0x4(%esp)
0840a958 +0x2ea:  mov    %eax,(%esp)
0840a95b +0x2ed:  call   0840d766 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo>  ; DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)
0840a960 +0x2f2:  mov    %eax,-0x10(%ebp)
0840a963 +0x2f5:  cmpl   $0x0,-0x10(%ebp)
0840a967 +0x2f9:  setne  %al
0840a96a +0x2fc:  test   %al,%al
0840a96c +0x2fe:  je     0840a9e1 <+0x373>
0840a96e +0x300:  mov    -0x14(%ebp),%eax
0840a971 +0x303:  mov    0x4(%eax),%ebx
0840a974 +0x306:  movl   $0x5,0xc(%esp)
0840a97c +0x30e:  movl   $0x2395,0x8(%esp)
0840a984 +0x316:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840a98c +0x31e:  lea    -0x38(%ebp),%eax
0840a98f +0x321:  mov    %eax,(%esp)
0840a992 +0x324:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a997 +0x329:  mov    -0x10(%ebp),%eax
0840a99a +0x32c:  mov    %eax,0xc(%esp)
0840a99e +0x330:  mov    %ebx,0x8(%esp)
0840a9a2 +0x334:  movl   $"DB_LoadInventory::dispatch, GetItemLock ERROR charac_no=%u, line(%d)",0x4(%esp)
0840a9aa +0x33c:  lea    -0x38(%ebp),%eax
0840a9ad +0x33f:  mov    %eax,(%esp)
0840a9b0 +0x342:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a9b5 +0x347:  movl   $0x4,(%esp)
0840a9bc +0x34e:  call   08725800 <__cxa_allocate_exception>
0840a9c1 +0x353:  mov    %eax,%edx
0840a9c3 +0x355:  movl   $0x6,(%edx)
0840a9c9 +0x35b:  movl   $0x0,0x8(%esp)
0840a9d1 +0x363:  movl   $&_ZTIi,0x4(%esp)
0840a9d9 +0x36b:  mov    %eax,(%esp)
0840a9dc +0x36e:  call   08724c50 <__cxa_throw>
0840a9e1 +0x373:  mov    -0x14(%ebp),%eax
0840a9e4 +0x376:  mov    %eax,0x4(%esp)
0840a9e8 +0x37a:  mov    0x8(%ebp),%eax
0840a9eb +0x37d:  mov    %eax,(%esp)
0840a9ee +0x380:  call   0840aac8 <_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::_GetEquipMaxItemLevel(SIG_LOAD_INVENTORY*)
0840a9f3 +0x385:  xor    $0x1,%eax
0840a9f6 +0x388:  test   %al,%al
0840a9f8 +0x38a:  je     0840aa84 <+0x416>
0840a9fe +0x390:  mov    -0x14(%ebp),%eax
0840aa01 +0x393:  mov    0x4(%eax),%ebx
0840aa04 +0x396:  movl   $0x5,0xc(%esp)
0840aa0c +0x39e:  movl   $0x23a4,0x8(%esp)
0840aa14 +0x3a6:  movl   $&_ZZN16DB_LoadInventory8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0840aa1c +0x3ae:  lea    -0x28(%ebp),%eax
0840aa1f +0x3b1:  mov    %eax,(%esp)
0840aa22 +0x3b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840aa27 +0x3b9:  mov    %ebx,0x8(%esp)
0840aa2b +0x3bd:  movl   $"DB_LoadInventory::dispatch, _GetEquipMaxItemLevel ERROR charac_no=%u",0x4(%esp)
0840aa33 +0x3c5:  lea    -0x28(%ebp),%eax
0840aa36 +0x3c8:  mov    %eax,(%esp)
0840aa39 +0x3cb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840aa3e +0x3d0:  movl   $0x4,(%esp)
0840aa45 +0x3d7:  call   08725800 <__cxa_allocate_exception>
0840aa4a +0x3dc:  mov    %eax,%edx
0840aa4c +0x3de:  movl   $0x7,(%edx)
0840aa52 +0x3e4:  movl   $0x0,0x8(%esp)
0840aa5a +0x3ec:  movl   $&_ZTIi,0x4(%esp)
0840aa62 +0x3f4:  mov    %eax,(%esp)
0840aa65 +0x3f7:  call   08724c50 <__cxa_throw>
0840aa6a +0x3fc:  mov    %eax,(%esp)
0840aa6d +0x3ff:  call   08725ce0 <__cxa_begin_catch>
0840aa72 +0x404:  mov    -0x14(%ebp),%eax
0840aa75 +0x407:  movl   $0x1,0x4030(%eax)
0840aa7f +0x411:  call   08725c30 <__cxa_end_catch>
0840aa84 +0x416:  mov    -0x14(%ebp),%eax
0840aa87 +0x419:  mov    %eax,0xc(%esp)
0840aa8b +0x41d:  mov    0x10(%ebp),%eax
0840aa8e +0x420:  mov    %eax,0x8(%esp)
0840aa92 +0x424:  mov    0xc(%ebp),%eax
0840aa95 +0x427:  mov    %eax,0x4(%esp)
0840aa99 +0x42b:  mov    0x8(%ebp),%eax
0840aa9c +0x42e:  mov    %eax,(%esp)
0840aa9f +0x431:  call   0840da6e <_ZN16DB_LoadInventory10SendResultEiiP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::SendResult(int, int, SIG_LOAD_INVENTORY*)
0840aaa4 +0x436:  mov    %al,-0x15(%ebp)
0840aaa7 +0x439:  movzbl -0x15(%ebp),%eax
0840aaab +0x43d:  xor    $0x1,%eax
0840aaae +0x440:  test   %al,%al
0840aab0 +0x442:  je     0840aab9 <+0x44b>
0840aab2 +0x444:  mov    $0x0,%eax
0840aab7 +0x449:  jmp    0840aabe <+0x450>
0840aab9 +0x44b:  mov    $0x1,%eax
0840aabe +0x450:  add    $0x84,%esp
0840aac4 +0x456:  pop    %ebx
0840aac5 +0x457:  pop    %ebp
0840aac6 +0x458:  ret
0840aac7 +0x459:  nop
```

## 反编译 C

```c
// DB_LoadInventory::dispatch @ 0x840a66e

/* DB_LoadInventory::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadInventory::dispatch(DB_LoadInventory *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [20];
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_18 = Stream::GetOutBuffer<SIG_LOAD_INVENTORY>(param_3);
    if (local_18 == (SIG_LOAD_INVENTORY *)0x0) {
      uVar2 = 0;
    }
    else {
                    /* try { // try from 0840a6d4 to 0840aa69 has its CatchHandler @ 0840aa6a */
      cVar1 = GetUserInven(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_7c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2364,5);
        cMyTrace::operator()
                  (local_7c,"DB_LoadInventory::dispatch, GetUserInven ERROR charac_no=%u",uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = GetUserAvatar(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_6c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2369,5);
        cMyTrace::operator()
                  (local_6c,"DB_LoadInventory::dispatch, GetUserAvatar ERROR charac_no=%u",uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 2;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      for (local_10 = 0; local_10 < 0x8c; local_10 = local_10 + 1) {
        Inven_Item::reset((Inven_Item *)(local_18 + local_10 * 0x3d + 0xeed1));
      }
      Inven_Item::reset((Inven_Item *)(local_18 + 0x12787));
      if (*(int *)(local_18 + 0x1287c) != 0) {
        cVar1 = GetUserCreature(this,local_18);
        if (cVar1 != '\x01') {
          uVar2 = *(undefined4 *)(local_18 + 4);
          cMyTrace::cMyTrace(local_5c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                             0x2379,5);
          cMyTrace::operator()
                    (local_5c,"DB_LoadInventory::dispatch, GetUserCreature ERROR charac_no=%u",uVar2
                    );
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&int::typeinfo,0);
        }
      }
      local_14 = 0;
      local_14 = _getCharacInvenExpand(this,local_18);
      if (local_14 != 0) {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_4c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2381,5);
        cMyTrace::operator()
                  (local_4c,
                   "DB_LoadInventory::dispatch, _getCharacInvenExpand ERROR charac_no=%u, line(%d)",
                   uVar2,local_14);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 4;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      local_14 = GetItemLock(*(uint *)(local_18 + 4),(stItemLockInfo *)(local_18 + 0x14784));
      if (local_14 != 0) {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_3c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x2395,5);
        cMyTrace::operator()
                  (local_3c,"DB_LoadInventory::dispatch, GetItemLock ERROR charac_no=%u, line(%d)",
                   uVar2,local_14);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 6;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = _GetEquipMaxItemLevel(this,local_18);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace(local_2c,"virtual bool DB_LoadInventory::dispatch(int, int, Stream*)",
                           0x23a4,5);
        cMyTrace::operator()
                  (local_2c,"DB_LoadInventory::dispatch, _GetEquipMaxItemLevel ERROR charac_no=%u",
                   uVar2);
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 7;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&int::typeinfo,0);
      }
      cVar1 = SendResult(this,param_1,param_2,local_18);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

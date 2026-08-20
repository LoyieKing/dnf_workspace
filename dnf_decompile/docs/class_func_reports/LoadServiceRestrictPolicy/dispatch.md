# dispatch

`_ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream`

`LoadServiceRestrictPolicy::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `LoadServiceRestrictPolicy` | `0x0815a8f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a8f2  _ZN25LoadServiceRestrictPolicy8dispatchEiiP6Stream
#           LoadServiceRestrictPolicy::dispatch(int, int, Stream*)
# range [0x0815a8f2, 0x0815ac3f]
0815a8f2 +0x000:  push   %ebp
0815a8f3 +0x001:  mov    %esp,%ebp
0815a8f5 +0x003:  push   %esi
0815a8f6 +0x004:  push   %ebx
0815a8f7 +0x005:  sub    $0x1240,%esp
0815a8fd +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815a902 +0x010:  movl   $0x0,0x8(%esp)
0815a90a +0x018:  movl   $0x1,0x4(%esp)
0815a912 +0x020:  mov    %eax,(%esp)
0815a915 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815a91a +0x028:  mov    %eax,-0x18(%ebp)
0815a91d +0x02b:  cmpl   $0x0,-0x18(%ebp)
0815a921 +0x02f:  jne    0815a94f <+0x5d>
0815a923 +0x031:  movl   $0x4,(%esp)
0815a92a +0x038:  call   08725800 <__cxa_allocate_exception>
0815a92f +0x03d:  mov    %eax,%edx
0815a931 +0x03f:  movl   $"handle null",(%edx)
0815a937 +0x045:  movl   $0x0,0x8(%esp)
0815a93f +0x04d:  movl   $&_ZTIPKc,0x4(%esp)
0815a947 +0x055:  mov    %eax,(%esp)
0815a94a +0x058:  call   08724c50 <__cxa_throw>
0815a94f +0x05d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815a954 +0x062:  mov    %eax,(%esp)
0815a957 +0x065:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815a95c +0x06a:  mov    %eax,-0x14(%ebp)
0815a95f +0x06d:  mov    -0x14(%ebp),%eax
0815a962 +0x070:  mov    %eax,0x8(%esp)
0815a966 +0x074:  movl   $"seLect category, restrict_code, restrict_value from dnf_restrict_state where server_group=%d",0x4(%esp)
0815a96e +0x07c:  mov    -0x18(%ebp),%eax
0815a971 +0x07f:  mov    %eax,(%esp)
0815a974 +0x082:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815a979 +0x087:  xor    $0x1,%eax
0815a97c +0x08a:  test   %al,%al
0815a97e +0x08c:  je     0815a9ac <+0xba>
0815a980 +0x08e:  movl   $0x4,(%esp)
0815a987 +0x095:  call   08725800 <__cxa_allocate_exception>
0815a98c +0x09a:  mov    %eax,%edx
0815a98e +0x09c:  movl   $"set_query",(%edx)
0815a994 +0x0a2:  movl   $0x0,0x8(%esp)
0815a99c +0x0aa:  movl   $&_ZTIPKc,0x4(%esp)
0815a9a4 +0x0b2:  mov    %eax,(%esp)
0815a9a7 +0x0b5:  call   08724c50 <__cxa_throw>
0815a9ac +0x0ba:  movl   $0x1,0x4(%esp)
0815a9b4 +0x0c2:  mov    -0x18(%ebp),%eax
0815a9b7 +0x0c5:  mov    %eax,(%esp)
0815a9ba +0x0c8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815a9bf +0x0cd:  xor    $0x1,%eax
0815a9c2 +0x0d0:  test   %al,%al
0815a9c4 +0x0d2:  je     0815a9f2 <+0x100>
0815a9c6 +0x0d4:  movl   $0x4,(%esp)
0815a9cd +0x0db:  call   08725800 <__cxa_allocate_exception>
0815a9d2 +0x0e0:  mov    %eax,%edx
0815a9d4 +0x0e2:  movl   $"exec",(%edx)
0815a9da +0x0e8:  movl   $0x0,0x8(%esp)
0815a9e2 +0x0f0:  movl   $&_ZTIPKc,0x4(%esp)
0815a9ea +0x0f8:  mov    %eax,(%esp)
0815a9ed +0x0fb:  call   08724c50 <__cxa_throw>
0815a9f2 +0x100:  lea    -0x1221(%ebp),%eax
0815a9f8 +0x106:  mov    %eax,(%esp)
0815a9fb +0x109:  call   0815dda8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c
0815aa00 +0x10e:  jmp    0815ab98 <+0x2a6>
0815aa05 +0x113:  movl   $0x0,-0x10(%ebp)
0815aa0c +0x11a:  movl   $0x0,-0x1c(%ebp)
0815aa13 +0x121:  movl   $0x0,-0x20(%ebp)
0815aa1a +0x128:  movb   $0x0,-0x21(%ebp)
0815aa1e +0x12c:  mov    -0x10(%ebp),%eax
0815aa21 +0x12f:  addl   $0x1,-0x10(%ebp)
0815aa25 +0x133:  lea    -0x1c(%ebp),%edx
0815aa28 +0x136:  mov    %edx,0x8(%esp)
0815aa2c +0x13a:  mov    %eax,0x4(%esp)
0815aa30 +0x13e:  mov    -0x18(%ebp),%eax
0815aa33 +0x141:  mov    %eax,(%esp)
0815aa36 +0x144:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815aa3b +0x149:  xor    $0x1,%eax
0815aa3e +0x14c:  test   %al,%al
0815aa40 +0x14e:  je     0815aa6e <+0x17c>
0815aa42 +0x150:  movl   $0x4,(%esp)
0815aa49 +0x157:  call   08725800 <__cxa_allocate_exception>
0815aa4e +0x15c:  mov    %eax,%edx
0815aa50 +0x15e:  movl   $"category",(%edx)
0815aa56 +0x164:  movl   $0x0,0x8(%esp)
0815aa5e +0x16c:  movl   $&_ZTIPKc,0x4(%esp)
0815aa66 +0x174:  mov    %eax,(%esp)
0815aa69 +0x177:  call   08724c50 <__cxa_throw>
0815aa6e +0x17c:  mov    -0x10(%ebp),%eax
0815aa71 +0x17f:  addl   $0x1,-0x10(%ebp)
0815aa75 +0x183:  lea    -0x20(%ebp),%edx
0815aa78 +0x186:  mov    %edx,0x8(%esp)
0815aa7c +0x18a:  mov    %eax,0x4(%esp)
0815aa80 +0x18e:  mov    -0x18(%ebp),%eax
0815aa83 +0x191:  mov    %eax,(%esp)
0815aa86 +0x194:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815aa8b +0x199:  xor    $0x1,%eax
0815aa8e +0x19c:  test   %al,%al
0815aa90 +0x19e:  je     0815aabe <+0x1cc>
0815aa92 +0x1a0:  movl   $0x4,(%esp)
0815aa99 +0x1a7:  call   08725800 <__cxa_allocate_exception>
0815aa9e +0x1ac:  mov    %eax,%edx
0815aaa0 +0x1ae:  movl   $"restrict",(%edx)
0815aaa6 +0x1b4:  movl   $0x0,0x8(%esp)
0815aaae +0x1bc:  movl   $&_ZTIPKc,0x4(%esp)
0815aab6 +0x1c4:  mov    %eax,(%esp)
0815aab9 +0x1c7:  call   08724c50 <__cxa_throw>
0815aabe +0x1cc:  mov    -0x10(%ebp),%eax
0815aac1 +0x1cf:  addl   $0x1,-0x10(%ebp)
0815aac5 +0x1d3:  lea    -0x21(%ebp),%edx
0815aac8 +0x1d6:  mov    %edx,0x8(%esp)
0815aacc +0x1da:  mov    %eax,0x4(%esp)
0815aad0 +0x1de:  mov    -0x18(%ebp),%eax
0815aad3 +0x1e1:  mov    %eax,(%esp)
0815aad6 +0x1e4:  call   0815e6a6 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x91a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x91a
0815aadb +0x1e9:  xor    $0x1,%eax
0815aade +0x1ec:  test   %al,%al
0815aae0 +0x1ee:  je     0815ab0e <+0x21c>
0815aae2 +0x1f0:  movl   $0x4,(%esp)
0815aae9 +0x1f7:  call   08725800 <__cxa_allocate_exception>
0815aaee +0x1fc:  mov    %eax,%edx
0815aaf0 +0x1fe:  movl   $"values",(%edx)
0815aaf6 +0x204:  movl   $0x0,0x8(%esp)
0815aafe +0x20c:  movl   $&_ZTIPKc,0x4(%esp)
0815ab06 +0x214:  mov    %eax,(%esp)
0815ab09 +0x217:  call   08724c50 <__cxa_throw>
0815ab0e +0x21c:  mov    -0x1221(%ebp),%eax
0815ab14 +0x222:  test   %eax,%eax
0815ab16 +0x224:  je     0815ab25 <+0x233>
0815ab18 +0x226:  mov    -0x1221(%ebp),%edx
0815ab1e +0x22c:  mov    -0x1c(%ebp),%eax
0815ab21 +0x22f:  cmp    %eax,%edx
0815ab23 +0x231:  jne    0815ab4e <+0x25c>
0815ab25 +0x233:  movzbl -0x21(%ebp),%eax
0815ab29 +0x237:  movsbl %al,%ecx
0815ab2c +0x23a:  mov    -0x20(%ebp),%edx
0815ab2f +0x23d:  mov    -0x1c(%ebp),%eax
0815ab32 +0x240:  mov    %ecx,0xc(%esp)
0815ab36 +0x244:  mov    %edx,0x8(%esp)
0815ab3a +0x248:  mov    %eax,0x4(%esp)
0815ab3e +0x24c:  lea    -0x1221(%ebp),%eax
0815ab44 +0x252:  mov    %eax,(%esp)
0815ab47 +0x255:  call   0815de02 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x76>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x76
0815ab4c +0x25a:  jmp    0815ab98 <+0x2a6>
0815ab4e +0x25c:  lea    -0x1221(%ebp),%eax
0815ab54 +0x262:  mov    %eax,0x4(%esp)
0815ab58 +0x266:  mov    0x8(%ebp),%eax
0815ab5b +0x269:  mov    %eax,(%esp)
0815ab5e +0x26c:  call   0815ac40 <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE>  ; LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&)
0815ab63 +0x271:  lea    -0x1221(%ebp),%eax
0815ab69 +0x277:  mov    %eax,(%esp)
0815ab6c +0x27a:  call   0815dda8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c
0815ab71 +0x27f:  movzbl -0x21(%ebp),%eax
0815ab75 +0x283:  movsbl %al,%ecx
0815ab78 +0x286:  mov    -0x20(%ebp),%edx
0815ab7b +0x289:  mov    -0x1c(%ebp),%eax
0815ab7e +0x28c:  mov    %ecx,0xc(%esp)
0815ab82 +0x290:  mov    %edx,0x8(%esp)
0815ab86 +0x294:  mov    %eax,0x4(%esp)
0815ab8a +0x298:  lea    -0x1221(%ebp),%eax
0815ab90 +0x29e:  mov    %eax,(%esp)
0815ab93 +0x2a1:  call   0815de02 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x76>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x76
0815ab98 +0x2a6:  mov    -0x18(%ebp),%eax
0815ab9b +0x2a9:  mov    %eax,(%esp)
0815ab9e +0x2ac:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815aba3 +0x2b1:  test   %al,%al
0815aba5 +0x2b3:  jne    0815aa05 <+0x113>
0815abab +0x2b9:  lea    -0x1221(%ebp),%eax
0815abb1 +0x2bf:  mov    %eax,0x4(%esp)
0815abb5 +0x2c3:  mov    0x8(%ebp),%eax
0815abb8 +0x2c6:  mov    %eax,(%esp)
0815abbb +0x2c9:  call   0815ac40 <_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE>  ; LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&)
0815abc0 +0x2ce:  mov    $0x1,%ebx
0815abc5 +0x2d3:  jmp    0815ac33 <+0x341>
0815abc7 +0x2d5:  cmp    $0x1,%edx
0815abca +0x2d8:  je     0815abd4 <+0x2e2>
0815abcc +0x2da:  mov    %eax,(%esp)
0815abcf +0x2dd:  call   08ae3750 <_Unwind_Resume>
0815abd4 +0x2e2:  mov    %eax,(%esp)
0815abd7 +0x2e5:  call   08725ce0 <__cxa_begin_catch>
0815abdc +0x2ea:  mov    %eax,-0xc(%ebp)
0815abdf +0x2ed:  mov    -0xc(%ebp),%eax
0815abe2 +0x2f0:  mov    %eax,0x14(%esp)
0815abe6 +0x2f4:  movl   $"[Taiwan, Restrict] select dnf_restrict_state. (error:%s)",0x10(%esp)
0815abee +0x2fc:  movl   $0xd2,0xc(%esp)
0815abf6 +0x304:  movl   $&_ZZN25LoadServiceRestrictPolicy8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815abfe +0x30c:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815ac06 +0x314:  movl   $0x1,(%esp)
0815ac0d +0x31b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815ac12 +0x320:  mov    $0x0,%ebx
0815ac17 +0x325:  call   08725c30 <__cxa_end_catch>
0815ac1c +0x32a:  jmp    0815ac33 <+0x341>
0815ac1e +0x32c:  mov    %edx,%ebx
0815ac20 +0x32e:  mov    %eax,%esi
0815ac22 +0x330:  call   08725c30 <__cxa_end_catch>
0815ac27 +0x335:  mov    %esi,%eax
0815ac29 +0x337:  mov    %ebx,%edx
0815ac2b +0x339:  mov    %eax,(%esp)
0815ac2e +0x33c:  call   08ae3750 <_Unwind_Resume>
0815ac33 +0x341:  mov    %ebx,%eax
0815ac35 +0x343:  add    $0x1240,%esp
0815ac3b +0x349:  pop    %ebx
0815ac3c +0x34a:  pop    %esi
0815ac3d +0x34b:  pop    %ebp
0815ac3e +0x34c:  ret
0815ac3f +0x34d:  nop
```

## 反编译 C

```c
// LoadServiceRestrictPolicy::dispatch @ 0x815a8f2

/* LoadServiceRestrictPolicy::dispatch(int, int, Stream*) */

undefined4 LoadServiceRestrictPolicy::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  CEnvironment *this;
  int local_1225 [1152];
  char local_25;
  int local_24;
  int local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  
                    /* try { // try from 0815a915 to 0815abbf has its CatchHandler @ 0815abc7 */
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_1c == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this = (CEnvironment *)G_CEnvironment();
  local_18 = CEnvironment::get_server_group(this);
  cVar2 = MySQL::set_query(local_1c,
                           "seLect category, restrict_code, restrict_value from dnf_restrict_state where server_group=%d"
                           ,local_18);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadRestrictPolicy::init((SigLoadRestrictPolicy *)local_1225);
  while( true ) {
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 == '\0') {
      sendRestrictData((LoadServiceRestrictPolicy *)param_1,(SigLoadRestrictPolicy *)local_1225);
      return 1;
    }
    local_20 = 0;
    local_24 = 0;
    local_25 = '\0';
    local_14 = 1;
    cVar2 = MySQL::get_int(local_1c,0,&local_20);
    iVar1 = local_14;
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "category";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = local_14 + 1;
    cVar2 = MySQL::get_int(local_1c,iVar1,&local_24);
    iVar1 = local_14;
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "restrict";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = local_14 + 1;
    cVar2 = MySQL::get_char(local_1c,iVar1,&local_25);
    if (cVar2 != '\x01') break;
    if ((local_1225[0] == 0) || (local_1225[0] == local_20)) {
      Taiwan::SigLoadRestrictPolicy::set
                ((SigLoadRestrictPolicy *)local_1225,local_20,local_24,local_25);
    }
    else {
      sendRestrictData((LoadServiceRestrictPolicy *)param_1,(SigLoadRestrictPolicy *)local_1225);
      Taiwan::SigLoadRestrictPolicy::init((SigLoadRestrictPolicy *)local_1225);
      Taiwan::SigLoadRestrictPolicy::set
                ((SigLoadRestrictPolicy *)local_1225,local_20,local_24,local_25);
    }
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = "values";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&char_const*::typeinfo,0);
}
```

# dispatch

`_ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream`

`DBSelectPcroomDailyReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBSelectPcroomDailyReward` | `0x0815ca94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815ca94  _ZN25DBSelectPcroomDailyReward8dispatchEiiP6Stream
#           DBSelectPcroomDailyReward::dispatch(int, int, Stream*)
# range [0x0815ca94, 0x0815cf05]
0815ca94 +0x000:  push   %ebp
0815ca95 +0x001:  mov    %esp,%ebp
0815ca97 +0x003:  push   %esi
0815ca98 +0x004:  push   %ebx
0815ca99 +0x005:  sub    $0x70,%esp
0815ca9c +0x008:  movb   $0x1,-0x15(%ebp)
0815caa0 +0x00c:  mov    0x14(%ebp),%eax
0815caa3 +0x00f:  mov    %eax,(%esp)
0815caa6 +0x012:  call   0815ec4a <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xebe>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xebe
0815caab +0x017:  mov    %eax,-0x14(%ebp)
0815caae +0x01a:  cmpl   $0x0,-0x14(%ebp)
0815cab2 +0x01e:  jne    0815cae0 <+0x4c>
0815cab4 +0x020:  movl   $0x4,(%esp)
0815cabb +0x027:  call   08725800 <__cxa_allocate_exception>
0815cac0 +0x02c:  mov    %eax,%edx
0815cac2 +0x02e:  movl   $"msg is null",(%edx)
0815cac8 +0x034:  movl   $0x0,0x8(%esp)
0815cad0 +0x03c:  movl   $&_ZTIPKc,0x4(%esp)
0815cad8 +0x044:  mov    %eax,(%esp)
0815cadb +0x047:  call   08724c50 <__cxa_throw>
0815cae0 +0x04c:  movl   $0x0,-0x4c(%ebp)
0815cae7 +0x053:  movl   $0x0,-0x50(%ebp)
0815caee +0x05a:  movb   $0x0,-0x51(%ebp)
0815caf2 +0x05e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815caf7 +0x063:  movl   $0x0,0x8(%esp)
0815caff +0x06b:  movl   $0x9,0x4(%esp)
0815cb07 +0x073:  mov    %eax,(%esp)
0815cb0a +0x076:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815cb0f +0x07b:  mov    %eax,-0x10(%ebp)
0815cb12 +0x07e:  cmpl   $0x0,-0x10(%ebp)
0815cb16 +0x082:  jne    0815cb44 <+0xb0>
0815cb18 +0x084:  movl   $0x4,(%esp)
0815cb1f +0x08b:  call   08725800 <__cxa_allocate_exception>
0815cb24 +0x090:  mov    %eax,%edx
0815cb26 +0x092:  movl   $"handle null",(%edx)
0815cb2c +0x098:  movl   $0x0,0x8(%esp)
0815cb34 +0x0a0:  movl   $&_ZTIPKc,0x4(%esp)
0815cb3c +0x0a8:  mov    %eax,(%esp)
0815cb3f +0x0ab:  call   08724c50 <__cxa_throw>
0815cb44 +0x0b0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815cb49 +0x0b5:  mov    0x37c(%eax),%ebx
0815cb4f +0x0bb:  mov    -0x14(%ebp),%eax
0815cb52 +0x0be:  mov    (%eax),%eax
0815cb54 +0x0c0:  movl   $0x0,0x4(%esp)
0815cb5c +0x0c8:  mov    %eax,(%esp)
0815cb5f +0x0cb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815cb64 +0x0d0:  mov    %ebx,0xc(%esp)
0815cb68 +0x0d4:  mov    %eax,0x8(%esp)
0815cb6c +0x0d8:  movl   $"seLect m_id, remain_reward_count, unix_timestamp(occ_date) FROM pcroom_daily_reward_tw WHERE m_id=%s",0x4(%esp)
0815cb74 +0x0e0:  mov    -0x10(%ebp),%eax
0815cb77 +0x0e3:  mov    %eax,(%esp)
0815cb7a +0x0e6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815cb7f +0x0eb:  movl   $0x1,0x4(%esp)
0815cb87 +0x0f3:  mov    -0x10(%ebp),%eax
0815cb8a +0x0f6:  mov    %eax,(%esp)
0815cb8d +0x0f9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815cb92 +0x0fe:  xor    $0x1,%eax
0815cb95 +0x101:  test   %al,%al
0815cb97 +0x103:  je     0815cbc5 <+0x131>
0815cb99 +0x105:  movl   $0x4,(%esp)
0815cba0 +0x10c:  call   08725800 <__cxa_allocate_exception>
0815cba5 +0x111:  mov    %eax,%edx
0815cba7 +0x113:  movl   $"select_exec",(%edx)
0815cbad +0x119:  movl   $0x0,0x8(%esp)
0815cbb5 +0x121:  movl   $&_ZTIPKc,0x4(%esp)
0815cbbd +0x129:  mov    %eax,(%esp)
0815cbc0 +0x12c:  call   08724c50 <__cxa_throw>
0815cbc5 +0x131:  mov    -0x10(%ebp),%eax
0815cbc8 +0x134:  mov    %eax,(%esp)
0815cbcb +0x137:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815cbd0 +0x13c:  test   %eax,%eax
0815cbd2 +0x13e:  sete   %al
0815cbd5 +0x141:  test   %al,%al
0815cbd7 +0x143:  je     0815cc49 <+0x1b5>
0815cbd9 +0x145:  mov    -0x4c(%ebp),%eax
0815cbdc +0x148:  movl   $0x4,0x8(%esp)
0815cbe4 +0x150:  mov    %eax,0x4(%esp)
0815cbe8 +0x154:  mov    0x10(%ebp),%eax
0815cbeb +0x157:  mov    %eax,(%esp)
0815cbee +0x15a:  call   0816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>  ; InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char)
0815cbf3 +0x15f:  mov    -0x14(%ebp),%eax
0815cbf6 +0x162:  mov    (%eax),%eax
0815cbf8 +0x164:  movl   $0x0,0x4(%esp)
0815cc00 +0x16c:  mov    %eax,(%esp)
0815cc03 +0x16f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815cc08 +0x174:  mov    %eax,%ebx
0815cc0a +0x176:  movl   $0x0,0xc(%esp)
0815cc12 +0x17e:  movl   $0x300,0x8(%esp)
0815cc1a +0x186:  movl   $&_ZZN25DBSelectPcroomDailyReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815cc22 +0x18e:  lea    -0x48(%ebp),%eax
0815cc25 +0x191:  mov    %eax,(%esp)
0815cc28 +0x194:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815cc2d +0x199:  mov    %ebx,0x8(%esp)
0815cc31 +0x19d:  movl   $"[Taiwan, Pcroom] pcroom_daily_reward_tw get_n_row==0 m_id:%s",0x4(%esp)
0815cc39 +0x1a5:  lea    -0x48(%ebp),%eax
0815cc3c +0x1a8:  mov    %eax,(%esp)
0815cc3f +0x1ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815cc44 +0x1b0:  jmp    0815cef7 <+0x463>
0815cc49 +0x1b5:  mov    -0x10(%ebp),%eax
0815cc4c +0x1b8:  mov    %eax,(%esp)
0815cc4f +0x1bb:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815cc54 +0x1c0:  xor    $0x1,%eax
0815cc57 +0x1c3:  test   %al,%al
0815cc59 +0x1c5:  je     0815cc87 <+0x1f3>
0815cc5b +0x1c7:  movl   $0x4,(%esp)
0815cc62 +0x1ce:  call   08725800 <__cxa_allocate_exception>
0815cc67 +0x1d3:  mov    %eax,%edx
0815cc69 +0x1d5:  movl   $"fetch",(%edx)
0815cc6f +0x1db:  movl   $0x0,0x8(%esp)
0815cc77 +0x1e3:  movl   $&_ZTIPKc,0x4(%esp)
0815cc7f +0x1eb:  mov    %eax,(%esp)
0815cc82 +0x1ee:  call   08724c50 <__cxa_throw>
0815cc87 +0x1f3:  lea    -0x4c(%ebp),%eax
0815cc8a +0x1f6:  mov    %eax,0x8(%esp)
0815cc8e +0x1fa:  movl   $0x0,0x4(%esp)
0815cc96 +0x202:  mov    -0x10(%ebp),%eax
0815cc99 +0x205:  mov    %eax,(%esp)
0815cc9c +0x208:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0815cca1 +0x20d:  xor    $0x1,%eax
0815cca4 +0x210:  test   %al,%al
0815cca6 +0x212:  je     0815ccd4 <+0x240>
0815cca8 +0x214:  movl   $0x4,(%esp)
0815ccaf +0x21b:  call   08725800 <__cxa_allocate_exception>
0815ccb4 +0x220:  mov    %eax,%edx
0815ccb6 +0x222:  movl   $"get_int 0",(%edx)
0815ccbc +0x228:  movl   $0x0,0x8(%esp)
0815ccc4 +0x230:  movl   $&_ZTIPKc,0x4(%esp)
0815cccc +0x238:  mov    %eax,(%esp)
0815cccf +0x23b:  call   08724c50 <__cxa_throw>
0815ccd4 +0x240:  lea    -0x51(%ebp),%eax
0815ccd7 +0x243:  mov    %eax,0x8(%esp)
0815ccdb +0x247:  movl   $0x1,0x4(%esp)
0815cce3 +0x24f:  mov    -0x10(%ebp),%eax
0815cce6 +0x252:  mov    %eax,(%esp)
0815cce9 +0x255:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0815ccee +0x25a:  xor    $0x1,%eax
0815ccf1 +0x25d:  test   %al,%al
0815ccf3 +0x25f:  je     0815cd21 <+0x28d>
0815ccf5 +0x261:  movl   $0x4,(%esp)
0815ccfc +0x268:  call   08725800 <__cxa_allocate_exception>
0815cd01 +0x26d:  mov    %eax,%edx
0815cd03 +0x26f:  movl   $"get_int 1",(%edx)
0815cd09 +0x275:  movl   $0x0,0x8(%esp)
0815cd11 +0x27d:  movl   $&_ZTIPKc,0x4(%esp)
0815cd19 +0x285:  mov    %eax,(%esp)
0815cd1c +0x288:  call   08724c50 <__cxa_throw>
0815cd21 +0x28d:  lea    -0x50(%ebp),%eax
0815cd24 +0x290:  mov    %eax,0x8(%esp)
0815cd28 +0x294:  movl   $0x2,0x4(%esp)
0815cd30 +0x29c:  mov    -0x10(%ebp),%eax
0815cd33 +0x29f:  mov    %eax,(%esp)
0815cd36 +0x2a2:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0815cd3b +0x2a7:  xor    $0x1,%eax
0815cd3e +0x2aa:  test   %al,%al
0815cd40 +0x2ac:  je     0815cd6e <+0x2da>
0815cd42 +0x2ae:  movl   $0x4,(%esp)
0815cd49 +0x2b5:  call   08725800 <__cxa_allocate_exception>
0815cd4e +0x2ba:  mov    %eax,%edx
0815cd50 +0x2bc:  movl   $"get_int 2",(%edx)
0815cd56 +0x2c2:  movl   $0x0,0x8(%esp)
0815cd5e +0x2ca:  movl   $&_ZTIPKc,0x4(%esp)
0815cd66 +0x2d2:  mov    %eax,(%esp)
0815cd69 +0x2d5:  call   08724c50 <__cxa_throw>
0815cd6e +0x2da:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0815cd75 +0x2e1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0815cd7a +0x2e6:  mov    %eax,%ebx
0815cd7c +0x2e8:  mov    -0x50(%ebp),%eax
0815cd7f +0x2eb:  mov    %eax,%esi
0815cd81 +0x2ed:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815cd86 +0x2f2:  mov    0x37c(%eax),%eax
0815cd8c +0x2f8:  mov    %ebx,0x8(%esp)
0815cd90 +0x2fc:  mov    %esi,0x4(%esp)
0815cd94 +0x300:  mov    %eax,(%esp)
0815cd97 +0x303:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
0815cd9c +0x308:  test   %al,%al
0815cd9e +0x30a:  je     0815ce10 <+0x37c>
0815cda0 +0x30c:  mov    -0x4c(%ebp),%eax
0815cda3 +0x30f:  movl   $0x4,0x8(%esp)
0815cdab +0x317:  mov    %eax,0x4(%esp)
0815cdaf +0x31b:  mov    0x10(%ebp),%eax
0815cdb2 +0x31e:  mov    %eax,(%esp)
0815cdb5 +0x321:  call   0816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>  ; InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char)
0815cdba +0x326:  mov    -0x14(%ebp),%eax
0815cdbd +0x329:  mov    (%eax),%eax
0815cdbf +0x32b:  movl   $0x0,0x4(%esp)
0815cdc7 +0x333:  mov    %eax,(%esp)
0815cdca +0x336:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815cdcf +0x33b:  mov    %eax,%ebx
0815cdd1 +0x33d:  movl   $0x0,0xc(%esp)
0815cdd9 +0x345:  movl   $0x311,0x8(%esp)
0815cde1 +0x34d:  movl   $&_ZZN25DBSelectPcroomDailyReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815cde9 +0x355:  lea    -0x38(%ebp),%eax
0815cdec +0x358:  mov    %eax,(%esp)
0815cdef +0x35b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815cdf4 +0x360:  mov    %ebx,0x8(%esp)
0815cdf8 +0x364:  movl   $"[Taiwan, Pcroom] pcroom_daily_reward_tw yesterday m_id:%s",0x4(%esp)
0815ce00 +0x36c:  lea    -0x38(%ebp),%eax
0815ce03 +0x36f:  mov    %eax,(%esp)
0815ce06 +0x372:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815ce0b +0x377:  jmp    0815cef7 <+0x463>
0815ce10 +0x37c:  movzbl -0x51(%ebp),%eax
0815ce14 +0x380:  movsbl %al,%edx
0815ce17 +0x383:  mov    -0x4c(%ebp),%eax
0815ce1a +0x386:  mov    %edx,0x8(%esp)
0815ce1e +0x38a:  mov    %eax,0x4(%esp)
0815ce22 +0x38e:  mov    0x10(%ebp),%eax
0815ce25 +0x391:  mov    %eax,(%esp)
0815ce28 +0x394:  call   0816179c <_ZN28InterSelectPcroomDailyReward11makeRequestEijc>  ; InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char)
0815ce2d +0x399:  movzbl -0x51(%ebp),%eax
0815ce31 +0x39d:  movsbl %al,%esi
0815ce34 +0x3a0:  mov    -0x14(%ebp),%eax
0815ce37 +0x3a3:  mov    (%eax),%eax
0815ce39 +0x3a5:  movl   $0x0,0x4(%esp)
0815ce41 +0x3ad:  mov    %eax,(%esp)
0815ce44 +0x3b0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815ce49 +0x3b5:  mov    %eax,%ebx
0815ce4b +0x3b7:  movl   $0x0,0xc(%esp)
0815ce53 +0x3bf:  movl   $0x316,0x8(%esp)
0815ce5b +0x3c7:  movl   $&_ZZN25DBSelectPcroomDailyReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815ce63 +0x3cf:  lea    -0x28(%ebp),%eax
0815ce66 +0x3d2:  mov    %eax,(%esp)
0815ce69 +0x3d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815ce6e +0x3da:  mov    %esi,0xc(%esp)
0815ce72 +0x3de:  mov    %ebx,0x8(%esp)
0815ce76 +0x3e2:  movl   $"[Taiwan, Pcroom] pcroom_daily_reward_tw today m_id:%s, remain_reward_count:%d",0x4(%esp)
0815ce7e +0x3ea:  lea    -0x28(%ebp),%eax
0815ce81 +0x3ed:  mov    %eax,(%esp)
0815ce84 +0x3f0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815ce89 +0x3f5:  jmp    0815cef7 <+0x463>
0815ce8b +0x3f7:  cmp    $0x1,%edx
0815ce8e +0x3fa:  je     0815ce98 <+0x404>
0815ce90 +0x3fc:  mov    %eax,(%esp)
0815ce93 +0x3ff:  call   08ae3750 <_Unwind_Resume>
0815ce98 +0x404:  mov    %eax,(%esp)
0815ce9b +0x407:  call   08725ce0 <__cxa_begin_catch>
0815cea0 +0x40c:  mov    %eax,-0xc(%ebp)
0815cea3 +0x40f:  mov    -0xc(%ebp),%eax
0815cea6 +0x412:  mov    %eax,0x14(%esp)
0815ceaa +0x416:  movl   $"[Taiwan, Pcroom] mobile_auth_reward_tw. (error:%s)",0x10(%esp)
0815ceb2 +0x41e:  movl   $0x31c,0xc(%esp)
0815ceba +0x426:  movl   $&_ZZN25DBSelectPcroomDailyReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815cec2 +0x42e:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815ceca +0x436:  movl   $0x1,(%esp)
0815ced1 +0x43d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815ced6 +0x442:  mov    $0x0,%ebx
0815cedb +0x447:  call   08725c30 <__cxa_end_catch>
0815cee0 +0x44c:  jmp    0815cefc <+0x468>
0815cee2 +0x44e:  mov    %edx,%ebx
0815cee4 +0x450:  mov    %eax,%esi
0815cee6 +0x452:  call   08725c30 <__cxa_end_catch>
0815ceeb +0x457:  mov    %esi,%eax
0815ceed +0x459:  mov    %ebx,%edx
0815ceef +0x45b:  mov    %eax,(%esp)
0815cef2 +0x45e:  call   08ae3750 <_Unwind_Resume>
0815cef7 +0x463:  mov    $0x1,%ebx
0815cefc +0x468:  mov    %ebx,%eax
0815cefe +0x46a:  add    $0x70,%esp
0815cf01 +0x46d:  pop    %ebx
0815cf02 +0x46e:  pop    %esi
0815cf03 +0x46f:  pop    %ebp
0815cf04 +0x470:  ret
0815cf05 +0x471:  nop
```

## 反编译 C

```c
// DBSelectPcroomDailyReward::dispatch @ 0x815ca94

/* DBSelectPcroomDailyReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectPcroomDailyReward::dispatch
          (DBSelectPcroomDailyReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char local_55;
  uint local_54;
  uint local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  undefined1 local_19;
  MSG *local_18;
  MySQL *local_14;
  
  local_19 = 1;
                    /* try { // try from 0815caa6 to 0815ce88 has its CatchHandler @ 0815ce8b */
  local_18 = Stream::GetOutBuffer<DBSelectPcroomDailyReward::MSG>(param_3);
  if (local_18 == (MSG *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_50 = 0;
  local_54 = 0;
  local_55 = '\0';
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  iVar4 = G_CEnvironment();
  uVar6 = *(undefined4 *)(iVar4 + 0x37c);
  uVar5 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,
                   "seLect m_id, remain_reward_count, unix_timestamp(occ_date) FROM pcroom_daily_reward_tw WHERE m_id=%s"
                   ,uVar5,uVar6);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    InterSelectPcroomDailyReward::makeRequest(param_2,local_50,'\x04');
    uVar6 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_4c,
                       "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x300,0
                      );
    cMyTrace::operator()
              (local_4c,"[Taiwan, Pcroom] pcroom_daily_reward_tw get_n_row==0 m_id:%s",uVar6);
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_14,0,&local_50);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 0";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_byte(local_14,1,&local_55);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 1";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_14,2,&local_54);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "get_int 2";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    lVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    uVar1 = local_54;
    iVar4 = G_CEnvironment();
    cVar2 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),uVar1,lVar7);
    if (cVar2 == '\0') {
      InterSelectPcroomDailyReward::makeRequest(param_2,local_50,local_55);
      iVar4 = (int)local_55;
      uVar6 = NumberToString(*(uint *)local_18,0);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x316
                         ,0);
      cMyTrace::operator()
                (local_2c,
                 "[Taiwan, Pcroom] pcroom_daily_reward_tw today m_id:%s, remain_reward_count:%d",
                 uVar6,iVar4);
    }
    else {
      InterSelectPcroomDailyReward::makeRequest(param_2,local_50,'\x04');
      uVar6 = NumberToString(*(uint *)local_18,0);
      cMyTrace::cMyTrace(local_3c,
                         "virtual bool DBSelectPcroomDailyReward::dispatch(int, int, Stream*)",0x311
                         ,0);
      cMyTrace::operator()
                (local_3c,"[Taiwan, Pcroom] pcroom_daily_reward_tw yesterday m_id:%s",uVar6);
    }
  }
  return 1;
}
```

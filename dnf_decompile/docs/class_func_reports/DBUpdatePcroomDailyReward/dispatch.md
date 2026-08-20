# dispatch

`_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream`

`DBUpdatePcroomDailyReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBUpdatePcroomDailyReward` | `0x0815d024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815d024  _ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream
#           DBUpdatePcroomDailyReward::dispatch(int, int, Stream*)
# range [0x0815d024, 0x0815d2c7]
0815d024 +0x000:  push   %ebp
0815d025 +0x001:  mov    %esp,%ebp
0815d027 +0x003:  push   %esi
0815d028 +0x004:  push   %ebx
0815d029 +0x005:  sub    $0x30,%esp
0815d02c +0x008:  mov    0x14(%ebp),%eax
0815d02f +0x00b:  mov    %eax,(%esp)
0815d032 +0x00e:  call   0815ecb4 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xf28>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xf28
0815d037 +0x013:  mov    %eax,-0x14(%ebp)
0815d03a +0x016:  cmpl   $0x0,-0x14(%ebp)
0815d03e +0x01a:  jne    0815d06c <+0x48>
0815d040 +0x01c:  movl   $0x4,(%esp)
0815d047 +0x023:  call   08725800 <__cxa_allocate_exception>
0815d04c +0x028:  mov    %eax,%edx
0815d04e +0x02a:  movl   $"context null",(%edx)
0815d054 +0x030:  movl   $0x0,0x8(%esp)
0815d05c +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815d064 +0x040:  mov    %eax,(%esp)
0815d067 +0x043:  call   08724c50 <__cxa_throw>
0815d06c +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815d071 +0x04d:  movl   $0x0,0x8(%esp)
0815d079 +0x055:  movl   $0x9,0x4(%esp)
0815d081 +0x05d:  mov    %eax,(%esp)
0815d084 +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815d089 +0x065:  mov    %eax,-0x10(%ebp)
0815d08c +0x068:  cmpl   $0x0,-0x10(%ebp)
0815d090 +0x06c:  jne    0815d0be <+0x9a>
0815d092 +0x06e:  movl   $0x4,(%esp)
0815d099 +0x075:  call   08725800 <__cxa_allocate_exception>
0815d09e +0x07a:  mov    %eax,%edx
0815d0a0 +0x07c:  movl   $"handle null",(%edx)
0815d0a6 +0x082:  movl   $0x0,0x8(%esp)
0815d0ae +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815d0b6 +0x092:  mov    %eax,(%esp)
0815d0b9 +0x095:  call   08724c50 <__cxa_throw>
0815d0be +0x09a:  mov    -0x14(%ebp),%eax
0815d0c1 +0x09d:  mov    (%eax),%eax
0815d0c3 +0x09f:  movl   $0x0,0x4(%esp)
0815d0cb +0x0a7:  mov    %eax,(%esp)
0815d0ce +0x0aa:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815d0d3 +0x0af:  mov    %eax,0x8(%esp)
0815d0d7 +0x0b3:  movl   $"seLect m_id from pcroom_daily_reward_tw where m_id=%s",0x4(%esp)
0815d0df +0x0bb:  mov    -0x10(%ebp),%eax
0815d0e2 +0x0be:  mov    %eax,(%esp)
0815d0e5 +0x0c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d0ea +0x0c6:  movl   $0x1,0x4(%esp)
0815d0f2 +0x0ce:  mov    -0x10(%ebp),%eax
0815d0f5 +0x0d1:  mov    %eax,(%esp)
0815d0f8 +0x0d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d0fd +0x0d9:  xor    $0x1,%eax
0815d100 +0x0dc:  test   %al,%al
0815d102 +0x0de:  je     0815d130 <+0x10c>
0815d104 +0x0e0:  movl   $0x4,(%esp)
0815d10b +0x0e7:  call   08725800 <__cxa_allocate_exception>
0815d110 +0x0ec:  mov    %eax,%edx
0815d112 +0x0ee:  movl   $"select_exec",(%edx)
0815d118 +0x0f4:  movl   $0x0,0x8(%esp)
0815d120 +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
0815d128 +0x104:  mov    %eax,(%esp)
0815d12b +0x107:  call   08724c50 <__cxa_throw>
0815d130 +0x10c:  mov    -0x10(%ebp),%eax
0815d133 +0x10f:  mov    %eax,(%esp)
0815d136 +0x112:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815d13b +0x117:  test   %eax,%eax
0815d13d +0x119:  sete   %al
0815d140 +0x11c:  test   %al,%al
0815d142 +0x11e:  je     0815d1cc <+0x1a8>
0815d148 +0x124:  mov    -0x14(%ebp),%eax
0815d14b +0x127:  movzbl 0x4(%eax),%eax
0815d14f +0x12b:  movsbl %al,%ebx
0815d152 +0x12e:  mov    -0x14(%ebp),%eax
0815d155 +0x131:  mov    (%eax),%eax
0815d157 +0x133:  movl   $0x0,0x4(%esp)
0815d15f +0x13b:  mov    %eax,(%esp)
0815d162 +0x13e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815d167 +0x143:  mov    %ebx,0xc(%esp)
0815d16b +0x147:  mov    %eax,0x8(%esp)
0815d16f +0x14b:  movl   $"inSert into pcroom_daily_reward_tw(m_id, occ_date, remain_reward_count) values('%s', now(), %d)",0x4(%esp)
0815d177 +0x153:  mov    -0x10(%ebp),%eax
0815d17a +0x156:  mov    %eax,(%esp)
0815d17d +0x159:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d182 +0x15e:  movl   $0x1,0x4(%esp)
0815d18a +0x166:  mov    -0x10(%ebp),%eax
0815d18d +0x169:  mov    %eax,(%esp)
0815d190 +0x16c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d195 +0x171:  xor    $0x1,%eax
0815d198 +0x174:  test   %al,%al
0815d19a +0x176:  je     0815d24c <+0x228>
0815d1a0 +0x17c:  movl   $0x4,(%esp)
0815d1a7 +0x183:  call   08725800 <__cxa_allocate_exception>
0815d1ac +0x188:  mov    %eax,%edx
0815d1ae +0x18a:  movl   $"insert_exec",(%edx)
0815d1b4 +0x190:  movl   $0x0,0x8(%esp)
0815d1bc +0x198:  movl   $&_ZTIPKc,0x4(%esp)
0815d1c4 +0x1a0:  mov    %eax,(%esp)
0815d1c7 +0x1a3:  call   08724c50 <__cxa_throw>
0815d1cc +0x1a8:  mov    -0x14(%ebp),%eax
0815d1cf +0x1ab:  mov    (%eax),%eax
0815d1d1 +0x1ad:  movl   $0x0,0x4(%esp)
0815d1d9 +0x1b5:  mov    %eax,(%esp)
0815d1dc +0x1b8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815d1e1 +0x1bd:  mov    -0x14(%ebp),%edx
0815d1e4 +0x1c0:  movzbl 0x4(%edx),%edx
0815d1e8 +0x1c4:  movsbl %dl,%edx
0815d1eb +0x1c7:  mov    %eax,0xc(%esp)
0815d1ef +0x1cb:  mov    %edx,0x8(%esp)
0815d1f3 +0x1cf:  movl   $"upDate pcroom_daily_reward_tw set occ_date=now(), remain_reward_count=%d where m_id = %s",0x4(%esp)
0815d1fb +0x1d7:  mov    -0x10(%ebp),%eax
0815d1fe +0x1da:  mov    %eax,(%esp)
0815d201 +0x1dd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815d206 +0x1e2:  movl   $0x1,0x4(%esp)
0815d20e +0x1ea:  mov    -0x10(%ebp),%eax
0815d211 +0x1ed:  mov    %eax,(%esp)
0815d214 +0x1f0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815d219 +0x1f5:  xor    $0x1,%eax
0815d21c +0x1f8:  test   %al,%al
0815d21e +0x1fa:  je     0815d24c <+0x228>
0815d220 +0x1fc:  movl   $0x4,(%esp)
0815d227 +0x203:  call   08725800 <__cxa_allocate_exception>
0815d22c +0x208:  mov    %eax,%edx
0815d22e +0x20a:  movl   $"update_exec",(%edx)
0815d234 +0x210:  movl   $0x0,0x8(%esp)
0815d23c +0x218:  movl   $&_ZTIPKc,0x4(%esp)
0815d244 +0x220:  mov    %eax,(%esp)
0815d247 +0x223:  call   08724c50 <__cxa_throw>
0815d24c +0x228:  mov    $0x1,%ebx
0815d251 +0x22d:  jmp    0815d2bf <+0x29b>
0815d253 +0x22f:  cmp    $0x1,%edx
0815d256 +0x232:  je     0815d260 <+0x23c>
0815d258 +0x234:  mov    %eax,(%esp)
0815d25b +0x237:  call   08ae3750 <_Unwind_Resume>
0815d260 +0x23c:  mov    %eax,(%esp)
0815d263 +0x23f:  call   08725ce0 <__cxa_begin_catch>
0815d268 +0x244:  mov    %eax,-0xc(%ebp)
0815d26b +0x247:  mov    -0xc(%ebp),%eax
0815d26e +0x24a:  mov    %eax,0x14(%esp)
0815d272 +0x24e:  movl   $"[Taiwan, Pcroom] pcroom_daily_reward_tw. (error:%s)",0x10(%esp)
0815d27a +0x256:  movl   $0x35d,0xc(%esp)
0815d282 +0x25e:  movl   $&_ZZN25DBUpdatePcroomDailyReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815d28a +0x266:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815d292 +0x26e:  movl   $0x1,(%esp)
0815d299 +0x275:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815d29e +0x27a:  mov    $0x0,%ebx
0815d2a3 +0x27f:  call   08725c30 <__cxa_end_catch>
0815d2a8 +0x284:  jmp    0815d2bf <+0x29b>
0815d2aa +0x286:  mov    %edx,%ebx
0815d2ac +0x288:  mov    %eax,%esi
0815d2ae +0x28a:  call   08725c30 <__cxa_end_catch>
0815d2b3 +0x28f:  mov    %esi,%eax
0815d2b5 +0x291:  mov    %ebx,%edx
0815d2b7 +0x293:  mov    %eax,(%esp)
0815d2ba +0x296:  call   08ae3750 <_Unwind_Resume>
0815d2bf +0x29b:  mov    %ebx,%eax
0815d2c1 +0x29d:  add    $0x30,%esp
0815d2c4 +0x2a0:  pop    %ebx
0815d2c5 +0x2a1:  pop    %esi
0815d2c6 +0x2a2:  pop    %ebp
0815d2c7 +0x2a3:  ret
```

## 反编译 C

```c
// DBUpdatePcroomDailyReward::dispatch @ 0x815d024

/* DBUpdatePcroomDailyReward::dispatch(int, int, Stream*) */

undefined4 DBUpdatePcroomDailyReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  MSG MVar1;
  char cVar2;
  MSG *pMVar3;
  undefined4 *puVar4;
  MySQL *this;
  undefined4 uVar5;
  int iVar6;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815d032 to 0815d24b has its CatchHandler @ 0815d253 */
  pMVar3 = Stream::GetOutBuffer<DBUpdatePcroomDailyReward::MSG>(in_stack_00000010);
  if (pMVar3 == (MSG *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar5 = NumberToString(*(uint *)pMVar3,0);
  MySQL::set_query(this,"seLect m_id from pcroom_daily_reward_tw where m_id=%s",uVar5);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar6 = MySQL::get_n_rows(this);
  if (iVar6 == 0) {
    MVar1 = pMVar3[4];
    uVar5 = NumberToString(*(uint *)pMVar3,0);
    MySQL::set_query(this,
                     "inSert into pcroom_daily_reward_tw(m_id, occ_date, remain_reward_count) values(\'%s\', now(), %d)"
                     ,uVar5,(int)(char)MVar1);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      puVar4 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar4 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&char_const*::typeinfo,0);
    }
  }
  else {
    uVar5 = NumberToString(*(uint *)pMVar3,0);
    MySQL::set_query(this,
                     "upDate pcroom_daily_reward_tw set occ_date=now(), remain_reward_count=%d where m_id = %s"
                     ,(int)(char)pMVar3[4],uVar5);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      puVar4 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar4 = "update_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&char_const*::typeinfo,0);
    }
  }
  return 1;
}
```

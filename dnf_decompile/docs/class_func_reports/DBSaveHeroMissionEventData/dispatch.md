# dispatch

`_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream`

`DBSaveHeroMissionEventData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBSaveHeroMissionEventData` | `0x0815db98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815db98  _ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream
#           DBSaveHeroMissionEventData::dispatch(int, int, Stream*)
# range [0x0815db98, 0x0815dd4b]
0815db98 +0x000:  push   %ebp
0815db99 +0x001:  mov    %esp,%ebp
0815db9b +0x003:  push   %esi
0815db9c +0x004:  push   %ebx
0815db9d +0x005:  sub    $0x30,%esp
0815dba0 +0x008:  mov    0x14(%ebp),%eax
0815dba3 +0x00b:  mov    %eax,(%esp)
0815dba6 +0x00e:  call   0815eddc <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1050>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1050
0815dbab +0x013:  mov    %eax,-0x14(%ebp)
0815dbae +0x016:  cmpl   $0x0,-0x14(%ebp)
0815dbb2 +0x01a:  jne    0815dbe0 <+0x48>
0815dbb4 +0x01c:  movl   $0x4,(%esp)
0815dbbb +0x023:  call   08725800 <__cxa_allocate_exception>
0815dbc0 +0x028:  mov    %eax,%edx
0815dbc2 +0x02a:  movl   $"context_null",(%edx)
0815dbc8 +0x030:  movl   $0x0,0x8(%esp)
0815dbd0 +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815dbd8 +0x040:  mov    %eax,(%esp)
0815dbdb +0x043:  call   08724c50 <__cxa_throw>
0815dbe0 +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815dbe5 +0x04d:  movl   $0x0,0x8(%esp)
0815dbed +0x055:  movl   $0x9,0x4(%esp)
0815dbf5 +0x05d:  mov    %eax,(%esp)
0815dbf8 +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815dbfd +0x065:  mov    %eax,-0x10(%ebp)
0815dc00 +0x068:  cmpl   $0x0,-0x10(%ebp)
0815dc04 +0x06c:  jne    0815dc32 <+0x9a>
0815dc06 +0x06e:  movl   $0x4,(%esp)
0815dc0d +0x075:  call   08725800 <__cxa_allocate_exception>
0815dc12 +0x07a:  mov    %eax,%edx
0815dc14 +0x07c:  movl   $"handle_null",(%edx)
0815dc1a +0x082:  movl   $0x0,0x8(%esp)
0815dc22 +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815dc2a +0x092:  mov    %eax,(%esp)
0815dc2d +0x095:  call   08724c50 <__cxa_throw>
0815dc32 +0x09a:  mov    -0x14(%ebp),%eax
0815dc35 +0x09d:  mov    (%eax),%esi
0815dc37 +0x09f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815dc3c +0x0a4:  mov    %eax,(%esp)
0815dc3f +0x0a7:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815dc44 +0x0ac:  mov    %eax,%ebx
0815dc46 +0x0ae:  mov    -0x14(%ebp),%eax
0815dc49 +0x0b1:  add    $0x4,%eax
0815dc4c +0x0b4:  movl   $0x100,0xc(%esp)
0815dc54 +0x0bc:  mov    %eax,0x8(%esp)
0815dc58 +0x0c0:  movl   $0x0,0x4(%esp)
0815dc60 +0x0c8:  mov    -0x10(%ebp),%eax
0815dc63 +0x0cb:  mov    %eax,(%esp)
0815dc66 +0x0ce:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0815dc6b +0x0d3:  mov    %esi,0x10(%esp)
0815dc6f +0x0d7:  mov    %ebx,0xc(%esp)
0815dc73 +0x0db:  mov    %eax,0x8(%esp)
0815dc77 +0x0df:  movl   $"upDate event_hero_mission_data set mission='%s' where server_group=%d and charac_no=%u",0x4(%esp)
0815dc7f +0x0e7:  mov    -0x10(%ebp),%eax
0815dc82 +0x0ea:  mov    %eax,(%esp)
0815dc85 +0x0ed:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815dc8a +0x0f2:  movl   $0x1,0x4(%esp)
0815dc92 +0x0fa:  mov    -0x10(%ebp),%eax
0815dc95 +0x0fd:  mov    %eax,(%esp)
0815dc98 +0x100:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815dc9d +0x105:  xor    $0x1,%eax
0815dca0 +0x108:  test   %al,%al
0815dca2 +0x10a:  je     0815dcd0 <+0x138>
0815dca4 +0x10c:  movl   $0x4,(%esp)
0815dcab +0x113:  call   08725800 <__cxa_allocate_exception>
0815dcb0 +0x118:  mov    %eax,%edx
0815dcb2 +0x11a:  movl   $"exec_update",(%edx)
0815dcb8 +0x120:  movl   $0x0,0x8(%esp)
0815dcc0 +0x128:  movl   $&_ZTIPKc,0x4(%esp)
0815dcc8 +0x130:  mov    %eax,(%esp)
0815dccb +0x133:  call   08724c50 <__cxa_throw>
0815dcd0 +0x138:  mov    $0x1,%ebx
0815dcd5 +0x13d:  jmp    0815dd43 <+0x1ab>
0815dcd7 +0x13f:  cmp    $0x1,%edx
0815dcda +0x142:  je     0815dce4 <+0x14c>
0815dcdc +0x144:  mov    %eax,(%esp)
0815dcdf +0x147:  call   08ae3750 <_Unwind_Resume>
0815dce4 +0x14c:  mov    %eax,(%esp)
0815dce7 +0x14f:  call   08725ce0 <__cxa_begin_catch>
0815dcec +0x154:  mov    %eax,-0xc(%ebp)
0815dcef +0x157:  mov    -0xc(%ebp),%eax
0815dcf2 +0x15a:  mov    %eax,0x14(%esp)
0815dcf6 +0x15e:  movl   $"[HeroMission] Error load hero mission. (msg:%s)",0x10(%esp)
0815dcfe +0x166:  movl   $0x413,0xc(%esp)
0815dd06 +0x16e:  movl   $&_ZZN26DBSaveHeroMissionEventData8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815dd0e +0x176:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815dd16 +0x17e:  movl   $0x1,(%esp)
0815dd1d +0x185:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815dd22 +0x18a:  mov    $0x0,%ebx
0815dd27 +0x18f:  call   08725c30 <__cxa_end_catch>
0815dd2c +0x194:  jmp    0815dd43 <+0x1ab>
0815dd2e +0x196:  mov    %edx,%ebx
0815dd30 +0x198:  mov    %eax,%esi
0815dd32 +0x19a:  call   08725c30 <__cxa_end_catch>
0815dd37 +0x19f:  mov    %esi,%eax
0815dd39 +0x1a1:  mov    %ebx,%edx
0815dd3b +0x1a3:  mov    %eax,(%esp)
0815dd3e +0x1a6:  call   08ae3750 <_Unwind_Resume>
0815dd43 +0x1ab:  mov    %ebx,%eax
0815dd45 +0x1ad:  add    $0x30,%esp
0815dd48 +0x1b0:  pop    %ebx
0815dd49 +0x1b1:  pop    %esi
0815dd4a +0x1b2:  pop    %ebp
0815dd4b +0x1b3:  ret
```

## 反编译 C

```c
// DBSaveHeroMissionEventData::dispatch @ 0x815db98

/* DBSaveHeroMissionEventData::dispatch(int, int, Stream*) */

undefined4 DBSaveHeroMissionEventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  SigSaveHeroMissionData *pSVar3;
  undefined4 *puVar4;
  MySQL *this;
  CEnvironment *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815dba6 to 0815dccf has its CatchHandler @ 0815dcd7 */
  pSVar3 = Stream::GetOutBuffer<Taiwan::SigSaveHeroMissionData>(in_stack_00000010);
  if (pSVar3 == (SigSaveHeroMissionData *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "context_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar1 = *(undefined4 *)pSVar3;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar5 = CEnvironment::get_server_group(this_00);
  uVar6 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x100);
  MySQL::set_query(this,
                   "upDate event_hero_mission_data set mission=\'%s\' where server_group=%d and charac_no=%u"
                   ,uVar6,uVar5,uVar1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "exec_update";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  return 1;
}
```

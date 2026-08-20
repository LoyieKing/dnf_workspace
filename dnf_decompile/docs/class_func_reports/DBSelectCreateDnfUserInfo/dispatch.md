# dispatch

`_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream`

`DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBSelectCreateDnfUserInfo` | `0x0815c034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c034  _ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream
#           DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*)
# range [0x0815c034, 0x0815c25b]
0815c034 +0x000:  push   %ebp
0815c035 +0x001:  mov    %esp,%ebp
0815c037 +0x003:  push   %esi
0815c038 +0x004:  push   %ebx
0815c039 +0x005:  sub    $0x40,%esp
0815c03c +0x008:  mov    0x14(%ebp),%eax
0815c03f +0x00b:  mov    %eax,(%esp)
0815c042 +0x00e:  call   0815eb0c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xd80>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xd80
0815c047 +0x013:  mov    %eax,-0x18(%ebp)
0815c04a +0x016:  cmpl   $0x0,-0x18(%ebp)
0815c04e +0x01a:  jne    0815c07c <+0x48>
0815c050 +0x01c:  movl   $0x4,(%esp)
0815c057 +0x023:  call   08725800 <__cxa_allocate_exception>
0815c05c +0x028:  mov    %eax,%edx
0815c05e +0x02a:  movl   $"msg is null",(%edx)
0815c064 +0x030:  movl   $0x0,0x8(%esp)
0815c06c +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815c074 +0x040:  mov    %eax,(%esp)
0815c077 +0x043:  call   08724c50 <__cxa_throw>
0815c07c +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815c081 +0x04d:  movl   $0x0,0x8(%esp)
0815c089 +0x055:  movl   $0x9,0x4(%esp)
0815c091 +0x05d:  mov    %eax,(%esp)
0815c094 +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815c099 +0x065:  mov    %eax,-0x14(%ebp)
0815c09c +0x068:  cmpl   $0x0,-0x14(%ebp)
0815c0a0 +0x06c:  jne    0815c0ce <+0x9a>
0815c0a2 +0x06e:  movl   $0x4,(%esp)
0815c0a9 +0x075:  call   08725800 <__cxa_allocate_exception>
0815c0ae +0x07a:  mov    %eax,%edx
0815c0b0 +0x07c:  movl   $"handle null",(%edx)
0815c0b6 +0x082:  movl   $0x0,0x8(%esp)
0815c0be +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815c0c6 +0x092:  mov    %eax,(%esp)
0815c0c9 +0x095:  call   08724c50 <__cxa_throw>
0815c0ce +0x09a:  mov    -0x18(%ebp),%eax
0815c0d1 +0x09d:  mov    (%eax),%eax
0815c0d3 +0x09f:  movl   $0x0,0x4(%esp)
0815c0db +0x0a7:  mov    %eax,(%esp)
0815c0de +0x0aa:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c0e3 +0x0af:  mov    %eax,0x8(%esp)
0815c0e7 +0x0b3:  movl   $"seLect m_id from event_create_dnf_user where occ_date=CURDATE() and m_id=%s",0x4(%esp)
0815c0ef +0x0bb:  mov    -0x14(%ebp),%eax
0815c0f2 +0x0be:  mov    %eax,(%esp)
0815c0f5 +0x0c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815c0fa +0x0c6:  movl   $0x1,0x4(%esp)
0815c102 +0x0ce:  mov    -0x14(%ebp),%eax
0815c105 +0x0d1:  mov    %eax,(%esp)
0815c108 +0x0d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815c10d +0x0d9:  xor    $0x1,%eax
0815c110 +0x0dc:  test   %al,%al
0815c112 +0x0de:  je     0815c140 <+0x10c>
0815c114 +0x0e0:  movl   $0x4,(%esp)
0815c11b +0x0e7:  call   08725800 <__cxa_allocate_exception>
0815c120 +0x0ec:  mov    %eax,%edx
0815c122 +0x0ee:  movl   $"select_exec",(%edx)
0815c128 +0x0f4:  movl   $0x0,0x8(%esp)
0815c130 +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
0815c138 +0x104:  mov    %eax,(%esp)
0815c13b +0x107:  call   08724c50 <__cxa_throw>
0815c140 +0x10c:  movb   $0x0,-0xd(%ebp)
0815c144 +0x110:  mov    -0x14(%ebp),%eax
0815c147 +0x113:  mov    %eax,(%esp)
0815c14a +0x116:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815c14f +0x11b:  test   %eax,%eax
0815c151 +0x11d:  setne  %al
0815c154 +0x120:  test   %al,%al
0815c156 +0x122:  je     0815c15c <+0x128>
0815c158 +0x124:  movb   $0x1,-0xd(%ebp)
0815c15c +0x128:  movzbl -0xd(%ebp),%edx
0815c160 +0x12c:  mov    -0x18(%ebp),%eax
0815c163 +0x12f:  mov    (%eax),%eax
0815c165 +0x131:  mov    %edx,0x8(%esp)
0815c169 +0x135:  mov    %eax,0x4(%esp)
0815c16d +0x139:  mov    0x10(%ebp),%eax
0815c170 +0x13c:  mov    %eax,(%esp)
0815c173 +0x13f:  call   08161218 <_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb>  ; InterSelectCreateDnfUserInfo::makeRequest(int, unsigned int, bool)
0815c178 +0x144:  cmpb   $0x0,-0xd(%ebp)
0815c17c +0x148:  je     0815c185 <+0x151>
0815c17e +0x14a:  mov    $0x1,%ebx
0815c183 +0x14f:  jmp    0815c18a <+0x156>
0815c185 +0x151:  mov    $0x0,%ebx
0815c18a +0x156:  mov    -0x18(%ebp),%eax
0815c18d +0x159:  mov    (%eax),%eax
0815c18f +0x15b:  movl   $0x0,0x4(%esp)
0815c197 +0x163:  mov    %eax,(%esp)
0815c19a +0x166:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c19f +0x16b:  mov    %eax,%esi
0815c1a1 +0x16d:  movl   $0x0,0xc(%esp)
0815c1a9 +0x175:  movl   $0x24d,0x8(%esp)
0815c1b1 +0x17d:  movl   $&_ZZN25DBSelectCreateDnfUserInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815c1b9 +0x185:  lea    -0x28(%ebp),%eax
0815c1bc +0x188:  mov    %eax,(%esp)
0815c1bf +0x18b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c1c4 +0x190:  mov    %ebx,0xc(%esp)
0815c1c8 +0x194:  mov    %esi,0x8(%esp)
0815c1cc +0x198:  movl   $"[Taiwan, Event] select event_create_dnf_user. m_id:%s isReceived:%d",0x4(%esp)
0815c1d4 +0x1a0:  lea    -0x28(%ebp),%eax
0815c1d7 +0x1a3:  mov    %eax,(%esp)
0815c1da +0x1a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c1df +0x1ab:  mov    $0x1,%ebx
0815c1e4 +0x1b0:  jmp    0815c252 <+0x21e>
0815c1e6 +0x1b2:  cmp    $0x1,%edx
0815c1e9 +0x1b5:  je     0815c1f3 <+0x1bf>
0815c1eb +0x1b7:  mov    %eax,(%esp)
0815c1ee +0x1ba:  call   08ae3750 <_Unwind_Resume>
0815c1f3 +0x1bf:  mov    %eax,(%esp)
0815c1f6 +0x1c2:  call   08725ce0 <__cxa_begin_catch>
0815c1fb +0x1c7:  mov    %eax,-0xc(%ebp)
0815c1fe +0x1ca:  mov    -0xc(%ebp),%eax
0815c201 +0x1cd:  mov    %eax,0x14(%esp)
0815c205 +0x1d1:  movl   $"[Taiwan, Event] select event_create_dnf_user. (error:%s)",0x10(%esp)
0815c20d +0x1d9:  movl   $0x253,0xc(%esp)
0815c215 +0x1e1:  movl   $&_ZZN25DBSelectCreateDnfUserInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815c21d +0x1e9:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c225 +0x1f1:  movl   $0x1,(%esp)
0815c22c +0x1f8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815c231 +0x1fd:  mov    $0x0,%ebx
0815c236 +0x202:  call   08725c30 <__cxa_end_catch>
0815c23b +0x207:  jmp    0815c252 <+0x21e>
0815c23d +0x209:  mov    %edx,%ebx
0815c23f +0x20b:  mov    %eax,%esi
0815c241 +0x20d:  call   08725c30 <__cxa_end_catch>
0815c246 +0x212:  mov    %esi,%eax
0815c248 +0x214:  mov    %ebx,%edx
0815c24a +0x216:  mov    %eax,(%esp)
0815c24d +0x219:  call   08ae3750 <_Unwind_Resume>
0815c252 +0x21e:  mov    %ebx,%eax
0815c254 +0x220:  add    $0x40,%esp
0815c257 +0x223:  pop    %ebx
0815c258 +0x224:  pop    %esi
0815c259 +0x225:  pop    %ebp
0815c25a +0x226:  ret
0815c25b +0x227:  nop
```

## 反编译 C

```c
// DBSelectCreateDnfUserInfo::dispatch @ 0x815c034

/* DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectCreateDnfUserInfo::dispatch
          (DBSelectCreateDnfUserInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  cMyTrace local_2c [16];
  MSG *local_1c;
  MySQL *local_18;
  bool local_11;
  
                    /* try { // try from 0815c042 to 0815c1de has its CatchHandler @ 0815c1e6 */
  local_1c = Stream::GetOutBuffer<DBSelectCreateDnfUserInfo::MSG>(param_3);
  if (local_1c == (MSG *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect m_id from event_create_dnf_user where occ_date=CURDATE() and m_id=%s",
                   uVar3);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_11 = false;
  iVar4 = MySQL::get_n_rows(local_18);
  if (iVar4 != 0) {
    local_11 = true;
  }
  InterSelectCreateDnfUserInfo::makeRequest(param_2,*(uint *)local_1c,local_11);
  bVar5 = local_11 != false;
  uVar3 = NumberToString(*(uint *)local_1c,0);
  cMyTrace::cMyTrace(local_2c,"virtual bool DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*)",
                     0x24d,0);
  cMyTrace::operator()
            (local_2c,"[Taiwan, Event] select event_create_dnf_user. m_id:%s isReceived:%d",uVar3,
             (uint)bVar5);
  return 1;
}
```

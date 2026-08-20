# dispatch

`_ZN17DB_CheckJoinGuild8dispatchEiiP6Stream`

`DB_CheckJoinGuild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckJoinGuild` | `0x0843c98e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c98e  _ZN17DB_CheckJoinGuild8dispatchEiiP6Stream
#           DB_CheckJoinGuild::dispatch(int, int, Stream*)
# range [0x0843c98e, 0x0843cc05]
0843c98e +0x000:  push   %ebp
0843c98f +0x001:  mov    %esp,%ebp
0843c991 +0x003:  push   %esi
0843c992 +0x004:  push   %ebx
0843c993 +0x005:  sub    $0x60,%esp
0843c996 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843c99b +0x00d:  movl   $0x0,0x8(%esp)
0843c9a3 +0x015:  movl   $0x8,0x4(%esp)
0843c9ab +0x01d:  mov    %eax,(%esp)
0843c9ae +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843c9b3 +0x025:  mov    %eax,-0x18(%ebp)
0843c9b6 +0x028:  mov    0x14(%ebp),%eax
0843c9b9 +0x02b:  mov    %eax,(%esp)
0843c9bc +0x02e:  call   08453a7a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6690>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6690
0843c9c1 +0x033:  mov    %eax,-0x14(%ebp)
0843c9c4 +0x036:  movl   $0x0,-0x10(%ebp)
0843c9cb +0x03d:  mov    -0x14(%ebp),%eax
0843c9ce +0x040:  mov    %eax,0x8(%esp)
0843c9d2 +0x044:  lea    -0x4f(%ebp),%eax
0843c9d5 +0x047:  mov    %eax,0x4(%esp)
0843c9d9 +0x04b:  mov    -0x18(%ebp),%eax
0843c9dc +0x04e:  mov    %eax,(%esp)
0843c9df +0x051:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0843c9e4 +0x056:  mov    -0x14(%ebp),%eax
0843c9e7 +0x059:  mov    0x18(%eax),%eax
0843c9ea +0x05c:  lea    -0x4f(%ebp),%edx
0843c9ed +0x05f:  mov    %edx,0xc(%esp)
0843c9f1 +0x063:  mov    %eax,0x8(%esp)
0843c9f5 +0x067:  movl   $"seLect guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name='%s'",0x4(%esp)
0843c9fd +0x06f:  mov    -0x18(%ebp),%eax
0843ca00 +0x072:  mov    %eax,(%esp)
0843ca03 +0x075:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ca08 +0x07a:  movl   $0x1,0x4(%esp)
0843ca10 +0x082:  mov    -0x18(%ebp),%eax
0843ca13 +0x085:  mov    %eax,(%esp)
0843ca16 +0x088:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ca1b +0x08d:  xor    $0x1,%eax
0843ca1e +0x090:  test   %al,%al
0843ca20 +0x092:  je     0843ca2c <+0x9e>
0843ca22 +0x094:  mov    $0x0,%ebx
0843ca27 +0x099:  jmp    0843cbfd <+0x26f>
0843ca2c +0x09e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ca31 +0x0a3:  movl   $0x90e6,0x8(%esp)
0843ca39 +0x0ab:  movl   $"DBThread.cpp",0x4(%esp)
0843ca41 +0x0b3:  mov    %eax,(%esp)
0843ca44 +0x0b6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843ca49 +0x0bb:  movl   $0x1,0x8(%esp)
0843ca51 +0x0c3:  mov    %eax,0x4(%esp)
0843ca55 +0x0c7:  lea    -0x20(%ebp),%eax
0843ca58 +0x0ca:  mov    %eax,(%esp)
0843ca5b +0x0cd:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843ca60 +0x0d2:  lea    -0x20(%ebp),%eax
0843ca63 +0x0d5:  mov    %eax,(%esp)
0843ca66 +0x0d8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ca6b +0x0dd:  movl   $0x216,0x4(%esp)
0843ca73 +0x0e5:  mov    %eax,(%esp)
0843ca76 +0x0e8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ca7b +0x0ed:  lea    -0x20(%ebp),%eax
0843ca7e +0x0f0:  mov    %eax,(%esp)
0843ca81 +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ca86 +0x0f8:  mov    0x10(%ebp),%edx
0843ca89 +0x0fb:  mov    %edx,0x4(%esp)
0843ca8d +0x0ff:  mov    %eax,(%esp)
0843ca90 +0x102:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ca95 +0x107:  lea    -0x20(%ebp),%eax
0843ca98 +0x10a:  mov    %eax,(%esp)
0843ca9b +0x10d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843caa0 +0x112:  mov    %eax,(%esp)
0843caa3 +0x115:  call   08453ace <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x66e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x66e4
0843caa8 +0x11a:  mov    %eax,-0xc(%ebp)
0843caab +0x11d:  mov    -0x18(%ebp),%eax
0843caae +0x120:  mov    %eax,(%esp)
0843cab1 +0x123:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843cab6 +0x128:  test   %eax,%eax
0843cab8 +0x12a:  sete   %al
0843cabb +0x12d:  test   %al,%al
0843cabd +0x12f:  je     0843cacd <+0x13f>
0843cabf +0x131:  mov    -0xc(%ebp),%eax
0843cac2 +0x134:  movl   $0x15,(%eax)
0843cac8 +0x13a:  jmp    0843cbb4 <+0x226>
0843cacd +0x13f:  mov    -0x18(%ebp),%eax
0843cad0 +0x142:  mov    %eax,(%esp)
0843cad3 +0x145:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843cad8 +0x14a:  xor    $0x1,%eax
0843cadb +0x14d:  test   %al,%al
0843cadd +0x14f:  je     0843cae9 <+0x15b>
0843cadf +0x151:  mov    $0x0,%ebx
0843cae4 +0x156:  jmp    0843cbf2 <+0x264>
0843cae9 +0x15b:  mov    -0xc(%ebp),%eax
0843caec +0x15e:  movl   $0x0,(%eax)
0843caf2 +0x164:  mov    -0xc(%ebp),%eax
0843caf5 +0x167:  add    $0x22,%eax
0843caf8 +0x16a:  movl   $0x17,0xc(%esp)
0843cb00 +0x172:  mov    %eax,0x8(%esp)
0843cb04 +0x176:  movl   $0x0,0x4(%esp)
0843cb0c +0x17e:  mov    -0x18(%ebp),%eax
0843cb0f +0x181:  mov    %eax,(%esp)
0843cb12 +0x184:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843cb17 +0x189:  xor    $0x1,%eax
0843cb1a +0x18c:  test   %al,%al
0843cb1c +0x18e:  je     0843cb28 <+0x19a>
0843cb1e +0x190:  mov    $0x0,%ebx
0843cb23 +0x195:  jmp    0843cbf2 <+0x264>
0843cb28 +0x19a:  mov    -0xc(%ebp),%eax
0843cb2b +0x19d:  add    $0x4,%eax
0843cb2e +0x1a0:  movl   $0x1e,0xc(%esp)
0843cb36 +0x1a8:  mov    %eax,0x8(%esp)
0843cb3a +0x1ac:  movl   $0x1,0x4(%esp)
0843cb42 +0x1b4:  mov    -0x18(%ebp),%eax
0843cb45 +0x1b7:  mov    %eax,(%esp)
0843cb48 +0x1ba:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843cb4d +0x1bf:  xor    $0x1,%eax
0843cb50 +0x1c2:  test   %al,%al
0843cb52 +0x1c4:  je     0843cb5e <+0x1d0>
0843cb54 +0x1c6:  mov    $0x0,%ebx
0843cb59 +0x1cb:  jmp    0843cbf2 <+0x264>
0843cb5e +0x1d0:  mov    -0xc(%ebp),%eax
0843cb61 +0x1d3:  add    $0x3c,%eax
0843cb64 +0x1d6:  mov    %eax,0x8(%esp)
0843cb68 +0x1da:  movl   $0x2,0x4(%esp)
0843cb70 +0x1e2:  mov    -0x18(%ebp),%eax
0843cb73 +0x1e5:  mov    %eax,(%esp)
0843cb76 +0x1e8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843cb7b +0x1ed:  xor    $0x1,%eax
0843cb7e +0x1f0:  test   %al,%al
0843cb80 +0x1f2:  je     0843cb89 <+0x1fb>
0843cb82 +0x1f4:  mov    $0x0,%ebx
0843cb87 +0x1f9:  jmp    0843cbf2 <+0x264>
0843cb89 +0x1fb:  mov    -0xc(%ebp),%eax
0843cb8c +0x1fe:  add    $0x40,%eax
0843cb8f +0x201:  mov    %eax,0x8(%esp)
0843cb93 +0x205:  movl   $0x3,0x4(%esp)
0843cb9b +0x20d:  mov    -0x18(%ebp),%eax
0843cb9e +0x210:  mov    %eax,(%esp)
0843cba1 +0x213:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843cba6 +0x218:  xor    $0x1,%eax
0843cba9 +0x21b:  test   %al,%al
0843cbab +0x21d:  je     0843cbb4 <+0x226>
0843cbad +0x21f:  mov    $0x0,%ebx
0843cbb2 +0x224:  jmp    0843cbf2 <+0x264>
0843cbb4 +0x226:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843cbb9 +0x22b:  lea    -0x20(%ebp),%edx
0843cbbc +0x22e:  mov    %edx,0x8(%esp)
0843cbc0 +0x232:  movl   $0x1,0x4(%esp)
0843cbc8 +0x23a:  mov    %eax,(%esp)
0843cbcb +0x23d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843cbd0 +0x242:  mov    $0x1,%ebx
0843cbd5 +0x247:  jmp    0843cbf2 <+0x264>
0843cbd7 +0x249:  mov    %edx,%ebx
0843cbd9 +0x24b:  mov    %eax,%esi
0843cbdb +0x24d:  lea    -0x20(%ebp),%eax
0843cbde +0x250:  mov    %eax,(%esp)
0843cbe1 +0x253:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843cbe6 +0x258:  mov    %esi,%eax
0843cbe8 +0x25a:  mov    %ebx,%edx
0843cbea +0x25c:  mov    %eax,(%esp)
0843cbed +0x25f:  call   08ae3750 <_Unwind_Resume>
0843cbf2 +0x264:  lea    -0x20(%ebp),%eax
0843cbf5 +0x267:  mov    %eax,(%esp)
0843cbf8 +0x26a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843cbfd +0x26f:  mov    %ebx,%eax
0843cbff +0x271:  add    $0x60,%esp
0843cc02 +0x274:  pop    %ebx
0843cc03 +0x275:  pop    %esi
0843cc04 +0x276:  pop    %ebp
0843cc05 +0x277:  ret
```

## 反编译 C

```c
// DB_CheckJoinGuild::dispatch @ 0x843c98e

/* DB_CheckJoinGuild::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckJoinGuild::dispatch(DB_CheckJoinGuild *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  char local_53 [47];
  CStreamGuard local_24 [8];
  MySQL *local_1c;
  SIG_CHECK_JOIN_GUILD *local_18;
  undefined4 local_14;
  SIG_CHECK_JOIN_GUILD_DB_REPLY *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = Stream::GetOutBuffer<SIG_CHECK_JOIN_GUILD>(param_3);
  local_14 = 0;
  MySQL::escape_string(local_1c,local_53,(char *)local_18);
  MySQL::set_query(local_1c,
                   "seLect guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name=\'%s\'"
                   ,*(undefined4 *)(local_18 + 0x18),local_53);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x90e6);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0843ca76 to 0843cbcf has its CatchHandler @ 0843cbd7 */
  CStreamGuard::operator<<(pCVar3,0x216);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_JOIN_GUILD_DB_REPLY>(pCVar3);
  iVar4 = MySQL::get_n_rows(local_1c);
  if (iVar4 == 0) {
    *(undefined4 *)local_10 = 0x15;
  }
  else {
    cVar1 = MySQL::fetch(local_1c);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    *(undefined4 *)local_10 = 0;
    cVar1 = MySQL::get_str(local_1c,0,(char *)(local_10 + 0x22),0x17);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_str(local_1c,1,(char *)(local_10 + 4),0x1e);
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_int(local_1c,2,(int *)(local_10 + 0x3c));
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
    cVar1 = MySQL::get_int(local_1c,3,(int *)(local_10 + 0x40));
    if (cVar1 != '\x01') {
      uVar5 = 0;
      goto LAB_0843cbf2;
    }
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  uVar5 = 1;
LAB_0843cbf2:
  CStreamGuard::~CStreamGuard(local_24);
  return uVar5;
}
```

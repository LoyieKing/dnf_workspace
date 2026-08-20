# dispatch

`_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream`

`DB_CheckDoubleGuildName::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckDoubleGuildName` | `0x0842a9fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a9fc  _ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream
#           DB_CheckDoubleGuildName::dispatch(int, int, Stream*)
# range [0x0842a9fc, 0x0842ab77]
0842a9fc +0x000:  push   %ebp
0842a9fd +0x001:  mov    %esp,%ebp
0842a9ff +0x003:  push   %esi
0842aa00 +0x004:  push   %ebx
0842aa01 +0x005:  sub    $0x20,%esp
0842aa04 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842aa09 +0x00d:  movl   $0x0,0x8(%esp)
0842aa11 +0x015:  movl   $0x8,0x4(%esp)
0842aa19 +0x01d:  mov    %eax,(%esp)
0842aa1c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842aa21 +0x025:  mov    %eax,-0x10(%ebp)
0842aa24 +0x028:  mov    0x14(%ebp),%eax
0842aa27 +0x02b:  mov    %eax,(%esp)
0842aa2a +0x02e:  call   084524a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x50b8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x50b8
0842aa2f +0x033:  mov    %eax,-0xc(%ebp)
0842aa32 +0x036:  mov    -0xc(%ebp),%eax
0842aa35 +0x039:  mov    %eax,0x8(%esp)
0842aa39 +0x03d:  movl   $"seLect * from guild_info where expire_flag=0 and guild_name='%s'",0x4(%esp)
0842aa41 +0x045:  mov    -0x10(%ebp),%eax
0842aa44 +0x048:  mov    %eax,(%esp)
0842aa47 +0x04b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842aa4c +0x050:  movl   $0x1,0x4(%esp)
0842aa54 +0x058:  mov    -0x10(%ebp),%eax
0842aa57 +0x05b:  mov    %eax,(%esp)
0842aa5a +0x05e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842aa5f +0x063:  xor    $0x1,%eax
0842aa62 +0x066:  test   %al,%al
0842aa64 +0x068:  je     0842aa70 <+0x74>
0842aa66 +0x06a:  mov    $0x0,%ebx
0842aa6b +0x06f:  jmp    0842ab6e <+0x172>
0842aa70 +0x074:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842aa75 +0x079:  movl   $0x6c86,0x8(%esp)
0842aa7d +0x081:  movl   $"DBThread.cpp",0x4(%esp)
0842aa85 +0x089:  mov    %eax,(%esp)
0842aa88 +0x08c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842aa8d +0x091:  movl   $0x1,0x8(%esp)
0842aa95 +0x099:  mov    %eax,0x4(%esp)
0842aa99 +0x09d:  lea    -0x18(%ebp),%eax
0842aa9c +0x0a0:  mov    %eax,(%esp)
0842aa9f +0x0a3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842aaa4 +0x0a8:  lea    -0x18(%ebp),%eax
0842aaa7 +0x0ab:  mov    %eax,(%esp)
0842aaaa +0x0ae:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842aaaf +0x0b3:  movl   $0xeb,0x4(%esp)
0842aab7 +0x0bb:  mov    %eax,(%esp)
0842aaba +0x0be:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842aabf +0x0c3:  lea    -0x18(%ebp),%eax
0842aac2 +0x0c6:  mov    %eax,(%esp)
0842aac5 +0x0c9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842aaca +0x0ce:  mov    0x10(%ebp),%edx
0842aacd +0x0d1:  mov    %edx,0x4(%esp)
0842aad1 +0x0d5:  mov    %eax,(%esp)
0842aad4 +0x0d8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842aad9 +0x0dd:  mov    -0x10(%ebp),%eax
0842aadc +0x0e0:  mov    %eax,(%esp)
0842aadf +0x0e3:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842aae4 +0x0e8:  test   %eax,%eax
0842aae6 +0x0ea:  sete   %al
0842aae9 +0x0ed:  test   %al,%al
0842aaeb +0x0ef:  je     0842ab0a <+0x10e>
0842aaed +0x0f1:  lea    -0x18(%ebp),%eax
0842aaf0 +0x0f4:  mov    %eax,(%esp)
0842aaf3 +0x0f7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842aaf8 +0x0fc:  movl   $0x1,0x4(%esp)
0842ab00 +0x104:  mov    %eax,(%esp)
0842ab03 +0x107:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0842ab08 +0x10c:  jmp    0842ab25 <+0x129>
0842ab0a +0x10e:  lea    -0x18(%ebp),%eax
0842ab0d +0x111:  mov    %eax,(%esp)
0842ab10 +0x114:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ab15 +0x119:  movl   $0x2,0x4(%esp)
0842ab1d +0x121:  mov    %eax,(%esp)
0842ab20 +0x124:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0842ab25 +0x129:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842ab2a +0x12e:  lea    -0x18(%ebp),%edx
0842ab2d +0x131:  mov    %edx,0x8(%esp)
0842ab31 +0x135:  movl   $0x1,0x4(%esp)
0842ab39 +0x13d:  mov    %eax,(%esp)
0842ab3c +0x140:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842ab41 +0x145:  mov    $0x1,%ebx
0842ab46 +0x14a:  lea    -0x18(%ebp),%eax
0842ab49 +0x14d:  mov    %eax,(%esp)
0842ab4c +0x150:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ab51 +0x155:  jmp    0842ab6e <+0x172>
0842ab53 +0x157:  mov    %edx,%ebx
0842ab55 +0x159:  mov    %eax,%esi
0842ab57 +0x15b:  lea    -0x18(%ebp),%eax
0842ab5a +0x15e:  mov    %eax,(%esp)
0842ab5d +0x161:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ab62 +0x166:  mov    %esi,%eax
0842ab64 +0x168:  mov    %ebx,%edx
0842ab66 +0x16a:  mov    %eax,(%esp)
0842ab69 +0x16d:  call   08ae3750 <_Unwind_Resume>
0842ab6e +0x172:  mov    %ebx,%eax
0842ab70 +0x174:  add    $0x20,%esp
0842ab73 +0x177:  pop    %ebx
0842ab74 +0x178:  pop    %esi
0842ab75 +0x179:  pop    %ebp
0842ab76 +0x17a:  ret
0842ab77 +0x17b:  nop
```

## 反编译 C

```c
// DB_CheckDoubleGuildName::dispatch @ 0x842a9fc

/* DB_CheckDoubleGuildName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckDoubleGuildName::dispatch
          (DB_CheckDoubleGuildName *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_DOUBLE_CHECK_GUILD_NAME *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_10 = Stream::GetOutBuffer<SIG_DOUBLE_CHECK_GUILD_NAME>(param_3);
  MySQL::set_query(local_14,"seLect * from guild_info where expire_flag=0 and guild_name=\'%s\'",
                   local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6c86);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0842aaba to 0842ab40 has its CatchHandler @ 0842ab53 */
    CStreamGuard::operator<<(pCVar3,0xeb);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,param_2);
    iVar4 = MySQL::get_n_rows(local_14);
    if (iVar4 == 0) {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,'\x01');
    }
    else {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,'\x02');
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

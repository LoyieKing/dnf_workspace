# dispatch

`_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream`

`DB_CheckDoubleGuildAddress::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckDoubleGuildAddress` | `0x0842ab78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ab78  _ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream
#           DB_CheckDoubleGuildAddress::dispatch(int, int, Stream*)
# range [0x0842ab78, 0x0842acf3]
0842ab78 +0x000:  push   %ebp
0842ab79 +0x001:  mov    %esp,%ebp
0842ab7b +0x003:  push   %esi
0842ab7c +0x004:  push   %ebx
0842ab7d +0x005:  sub    $0x20,%esp
0842ab80 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842ab85 +0x00d:  movl   $0x0,0x8(%esp)
0842ab8d +0x015:  movl   $0x8,0x4(%esp)
0842ab95 +0x01d:  mov    %eax,(%esp)
0842ab98 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ab9d +0x025:  mov    %eax,-0x10(%ebp)
0842aba0 +0x028:  mov    0x14(%ebp),%eax
0842aba3 +0x02b:  mov    %eax,(%esp)
0842aba6 +0x02e:  call   084524f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x510c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x510c
0842abab +0x033:  mov    %eax,-0xc(%ebp)
0842abae +0x036:  mov    -0xc(%ebp),%eax
0842abb1 +0x039:  mov    %eax,0x8(%esp)
0842abb5 +0x03d:  movl   $"seLect * from guild_info where guild_url='%s'",0x4(%esp)
0842abbd +0x045:  mov    -0x10(%ebp),%eax
0842abc0 +0x048:  mov    %eax,(%esp)
0842abc3 +0x04b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842abc8 +0x050:  movl   $0x1,0x4(%esp)
0842abd0 +0x058:  mov    -0x10(%ebp),%eax
0842abd3 +0x05b:  mov    %eax,(%esp)
0842abd6 +0x05e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842abdb +0x063:  xor    $0x1,%eax
0842abde +0x066:  test   %al,%al
0842abe0 +0x068:  je     0842abec <+0x74>
0842abe2 +0x06a:  mov    $0x0,%ebx
0842abe7 +0x06f:  jmp    0842acea <+0x172>
0842abec +0x074:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842abf1 +0x079:  movl   $0x6c9f,0x8(%esp)
0842abf9 +0x081:  movl   $"DBThread.cpp",0x4(%esp)
0842ac01 +0x089:  mov    %eax,(%esp)
0842ac04 +0x08c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842ac09 +0x091:  movl   $0x1,0x8(%esp)
0842ac11 +0x099:  mov    %eax,0x4(%esp)
0842ac15 +0x09d:  lea    -0x18(%ebp),%eax
0842ac18 +0x0a0:  mov    %eax,(%esp)
0842ac1b +0x0a3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ac20 +0x0a8:  lea    -0x18(%ebp),%eax
0842ac23 +0x0ab:  mov    %eax,(%esp)
0842ac26 +0x0ae:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ac2b +0x0b3:  movl   $0xec,0x4(%esp)
0842ac33 +0x0bb:  mov    %eax,(%esp)
0842ac36 +0x0be:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ac3b +0x0c3:  lea    -0x18(%ebp),%eax
0842ac3e +0x0c6:  mov    %eax,(%esp)
0842ac41 +0x0c9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ac46 +0x0ce:  mov    0x10(%ebp),%edx
0842ac49 +0x0d1:  mov    %edx,0x4(%esp)
0842ac4d +0x0d5:  mov    %eax,(%esp)
0842ac50 +0x0d8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ac55 +0x0dd:  mov    -0x10(%ebp),%eax
0842ac58 +0x0e0:  mov    %eax,(%esp)
0842ac5b +0x0e3:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842ac60 +0x0e8:  test   %eax,%eax
0842ac62 +0x0ea:  sete   %al
0842ac65 +0x0ed:  test   %al,%al
0842ac67 +0x0ef:  je     0842ac86 <+0x10e>
0842ac69 +0x0f1:  lea    -0x18(%ebp),%eax
0842ac6c +0x0f4:  mov    %eax,(%esp)
0842ac6f +0x0f7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ac74 +0x0fc:  movl   $0x1,0x4(%esp)
0842ac7c +0x104:  mov    %eax,(%esp)
0842ac7f +0x107:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0842ac84 +0x10c:  jmp    0842aca1 <+0x129>
0842ac86 +0x10e:  lea    -0x18(%ebp),%eax
0842ac89 +0x111:  mov    %eax,(%esp)
0842ac8c +0x114:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ac91 +0x119:  movl   $0x2,0x4(%esp)
0842ac99 +0x121:  mov    %eax,(%esp)
0842ac9c +0x124:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0842aca1 +0x129:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842aca6 +0x12e:  lea    -0x18(%ebp),%edx
0842aca9 +0x131:  mov    %edx,0x8(%esp)
0842acad +0x135:  movl   $0x1,0x4(%esp)
0842acb5 +0x13d:  mov    %eax,(%esp)
0842acb8 +0x140:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842acbd +0x145:  mov    $0x1,%ebx
0842acc2 +0x14a:  lea    -0x18(%ebp),%eax
0842acc5 +0x14d:  mov    %eax,(%esp)
0842acc8 +0x150:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842accd +0x155:  jmp    0842acea <+0x172>
0842accf +0x157:  mov    %edx,%ebx
0842acd1 +0x159:  mov    %eax,%esi
0842acd3 +0x15b:  lea    -0x18(%ebp),%eax
0842acd6 +0x15e:  mov    %eax,(%esp)
0842acd9 +0x161:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842acde +0x166:  mov    %esi,%eax
0842ace0 +0x168:  mov    %ebx,%edx
0842ace2 +0x16a:  mov    %eax,(%esp)
0842ace5 +0x16d:  call   08ae3750 <_Unwind_Resume>
0842acea +0x172:  mov    %ebx,%eax
0842acec +0x174:  add    $0x20,%esp
0842acef +0x177:  pop    %ebx
0842acf0 +0x178:  pop    %esi
0842acf1 +0x179:  pop    %ebp
0842acf2 +0x17a:  ret
0842acf3 +0x17b:  nop
```

## 反编译 C

```c
// DB_CheckDoubleGuildAddress::dispatch @ 0x842ab78

/* DB_CheckDoubleGuildAddress::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckDoubleGuildAddress::dispatch
          (DB_CheckDoubleGuildAddress *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_DOUBLE_CHECK_GUILD_ADDRESS *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_10 = Stream::GetOutBuffer<SIG_DOUBLE_CHECK_GUILD_ADDRESS>(param_3);
  MySQL::set_query(local_14,"seLect * from guild_info where guild_url=\'%s\'",local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6c9f);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0842ac36 to 0842acbc has its CatchHandler @ 0842accf */
    CStreamGuard::operator<<(pCVar3,0xec);
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

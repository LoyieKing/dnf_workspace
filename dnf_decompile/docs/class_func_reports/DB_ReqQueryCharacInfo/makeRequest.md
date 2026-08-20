# makeRequest

`_ZN21DB_ReqQueryCharacInfo11makeRequestEiPKc`

`DB_ReqQueryCharacInfo::makeRequest(int, char const*)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfo` | `0x08426d18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08426d18  _ZN21DB_ReqQueryCharacInfo11makeRequestEiPKc
#           DB_ReqQueryCharacInfo::makeRequest(int, char const*)
# range [0x08426d18, 0x08426e03]
08426d18 +0x00:  push   %ebp
08426d19 +0x01:  mov    %esp,%ebp
08426d1b +0x03:  push   %esi
08426d1c +0x04:  push   %ebx
08426d1d +0x05:  sub    $0x20,%esp
08426d20 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08426d25 +0x0d:  movl   $0x66eb,0x8(%esp)
08426d2d +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08426d35 +0x1d:  mov    %eax,(%esp)
08426d38 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08426d3d +0x25:  movl   $0x1,0x8(%esp)
08426d45 +0x2d:  mov    %eax,0x4(%esp)
08426d49 +0x31:  lea    -0x14(%ebp),%eax
08426d4c +0x34:  mov    %eax,(%esp)
08426d4f +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08426d54 +0x3c:  lea    -0x14(%ebp),%eax
08426d57 +0x3f:  mov    %eax,(%esp)
08426d5a +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426d5f +0x47:  movl   $0xc4,0x4(%esp)
08426d67 +0x4f:  mov    %eax,(%esp)
08426d6a +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426d6f +0x57:  lea    -0x14(%ebp),%eax
08426d72 +0x5a:  mov    %eax,(%esp)
08426d75 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426d7a +0x62:  mov    0x8(%ebp),%edx
08426d7d +0x65:  mov    %edx,0x4(%esp)
08426d81 +0x69:  mov    %eax,(%esp)
08426d84 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426d89 +0x71:  lea    -0x14(%ebp),%eax
08426d8c +0x74:  mov    %eax,(%esp)
08426d8f +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08426d94 +0x7c:  mov    %eax,(%esp)
08426d97 +0x7f:  call   08452128 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4d3e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4d3e
08426d9c +0x84:  mov    %eax,-0xc(%ebp)
08426d9f +0x87:  mov    -0xc(%ebp),%eax
08426da2 +0x8a:  movl   $0x1d,0x8(%esp)
08426daa +0x92:  mov    0xc(%ebp),%edx
08426dad +0x95:  mov    %edx,0x4(%esp)
08426db1 +0x99:  mov    %eax,(%esp)
08426db4 +0x9c:  call   0807d8d0 <_init+0x1c8>
08426db9 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08426dbe +0xa6:  lea    -0x14(%ebp),%edx
08426dc1 +0xa9:  mov    %edx,0x8(%esp)
08426dc5 +0xad:  movl   $0x2,0x4(%esp)
08426dcd +0xb5:  mov    %eax,(%esp)
08426dd0 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08426dd5 +0xbd:  jmp    08426df2 <+0xda>
08426dd7 +0xbf:  mov    %edx,%ebx
08426dd9 +0xc1:  mov    %eax,%esi
08426ddb +0xc3:  lea    -0x14(%ebp),%eax
08426dde +0xc6:  mov    %eax,(%esp)
08426de1 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426de6 +0xce:  mov    %esi,%eax
08426de8 +0xd0:  mov    %ebx,%edx
08426dea +0xd2:  mov    %eax,(%esp)
08426ded +0xd5:  call   08ae3750 <_Unwind_Resume>
08426df2 +0xda:  lea    -0x14(%ebp),%eax
08426df5 +0xdd:  mov    %eax,(%esp)
08426df8 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426dfd +0xe5:  add    $0x20,%esp
08426e00 +0xe8:  pop    %ebx
08426e01 +0xe9:  pop    %esi
08426e02 +0xea:  pop    %ebp
08426e03 +0xeb:  ret
```

## 反编译 C

```c
// DB_ReqQueryCharacInfo::makeRequest @ 0x8426d18

/* DB_ReqQueryCharacInfo::makeRequest(int, char const*) */

void DB_ReqQueryCharacInfo::makeRequest(int param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x66eb);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08426d6a to 08426dd4 has its CatchHandler @ 08426dd7 */
  CStreamGuard::operator<<(pCVar2,0xc4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

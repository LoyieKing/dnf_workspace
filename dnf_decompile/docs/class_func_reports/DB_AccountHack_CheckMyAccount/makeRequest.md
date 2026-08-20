# makeRequest

`_ZN29DB_AccountHack_CheckMyAccount11makeRequestEjjjjPci`

`DB_AccountHack_CheckMyAccount::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char*, int)`

| 类 | 地址 |
|---|---|
| `DB_AccountHack_CheckMyAccount` | `0x0843a13e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a13e  _ZN29DB_AccountHack_CheckMyAccount11makeRequestEjjjjPci
#           DB_AccountHack_CheckMyAccount::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char*, int)
# range [0x0843a13e, 0x0843a263]
0843a13e +0x000:  push   %ebp
0843a13f +0x001:  mov    %esp,%ebp
0843a141 +0x003:  push   %esi
0843a142 +0x004:  push   %ebx
0843a143 +0x005:  sub    $0x20,%esp
0843a146 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a14b +0x00d:  movl   $0x8846,0x8(%esp)
0843a153 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843a15b +0x01d:  mov    %eax,(%esp)
0843a15e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a163 +0x025:  movl   $0x1,0x8(%esp)
0843a16b +0x02d:  mov    %eax,0x4(%esp)
0843a16f +0x031:  lea    -0x14(%ebp),%eax
0843a172 +0x034:  mov    %eax,(%esp)
0843a175 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a17a +0x03c:  lea    -0x14(%ebp),%eax
0843a17d +0x03f:  mov    %eax,(%esp)
0843a180 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a185 +0x047:  movl   $0x18b,0x4(%esp)
0843a18d +0x04f:  mov    %eax,(%esp)
0843a190 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a195 +0x057:  mov    0x8(%ebp),%ebx
0843a198 +0x05a:  lea    -0x14(%ebp),%eax
0843a19b +0x05d:  mov    %eax,(%esp)
0843a19e +0x060:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a1a3 +0x065:  mov    %ebx,0x4(%esp)
0843a1a7 +0x069:  mov    %eax,(%esp)
0843a1aa +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a1af +0x071:  lea    -0x14(%ebp),%eax
0843a1b2 +0x074:  mov    %eax,(%esp)
0843a1b5 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a1ba +0x07c:  mov    %eax,(%esp)
0843a1bd +0x07f:  call   08453890 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x64a6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x64a6
0843a1c2 +0x084:  mov    %eax,-0xc(%ebp)
0843a1c5 +0x087:  mov    -0xc(%ebp),%eax
0843a1c8 +0x08a:  mov    0x10(%ebp),%edx
0843a1cb +0x08d:  mov    %edx,(%eax)
0843a1cd +0x08f:  mov    -0xc(%ebp),%eax
0843a1d0 +0x092:  mov    0xc(%ebp),%edx
0843a1d3 +0x095:  mov    %edx,0x4(%eax)
0843a1d6 +0x098:  mov    -0xc(%ebp),%eax
0843a1d9 +0x09b:  mov    0x14(%ebp),%edx
0843a1dc +0x09e:  mov    %edx,0x25(%eax)
0843a1df +0x0a1:  mov    -0xc(%ebp),%eax
0843a1e2 +0x0a4:  add    $0x8,%eax
0843a1e5 +0x0a7:  movl   $0x1d,0x8(%esp)
0843a1ed +0x0af:  movl   $0x0,0x4(%esp)
0843a1f5 +0x0b7:  mov    %eax,(%esp)
0843a1f8 +0x0ba:  call   0807dcc0 <_init+0x5b8>
0843a1fd +0x0bf:  mov    0x1c(%ebp),%eax
0843a200 +0x0c2:  mov    -0xc(%ebp),%edx
0843a203 +0x0c5:  add    $0x8,%edx
0843a206 +0x0c8:  mov    %eax,0x8(%esp)
0843a20a +0x0cc:  mov    0x18(%ebp),%eax
0843a20d +0x0cf:  mov    %eax,0x4(%esp)
0843a211 +0x0d3:  mov    %edx,(%esp)
0843a214 +0x0d6:  call   0807d8d0 <_init+0x1c8>
0843a219 +0x0db:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a21e +0x0e0:  lea    -0x14(%ebp),%edx
0843a221 +0x0e3:  mov    %edx,0x8(%esp)
0843a225 +0x0e7:  movl   $0x2,0x4(%esp)
0843a22d +0x0ef:  mov    %eax,(%esp)
0843a230 +0x0f2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a235 +0x0f7:  jmp    0843a252 <+0x114>
0843a237 +0x0f9:  mov    %edx,%ebx
0843a239 +0x0fb:  mov    %eax,%esi
0843a23b +0x0fd:  lea    -0x14(%ebp),%eax
0843a23e +0x100:  mov    %eax,(%esp)
0843a241 +0x103:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a246 +0x108:  mov    %esi,%eax
0843a248 +0x10a:  mov    %ebx,%edx
0843a24a +0x10c:  mov    %eax,(%esp)
0843a24d +0x10f:  call   08ae3750 <_Unwind_Resume>
0843a252 +0x114:  lea    -0x14(%ebp),%eax
0843a255 +0x117:  mov    %eax,(%esp)
0843a258 +0x11a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a25d +0x11f:  add    $0x20,%esp
0843a260 +0x122:  pop    %ebx
0843a261 +0x123:  pop    %esi
0843a262 +0x124:  pop    %ebp
0843a263 +0x125:  ret
```

## 反编译 C

```c
// DB_AccountHack_CheckMyAccount::makeRequest @ 0x843a13e

/* DB_AccountHack_CheckMyAccount::makeRequest(unsigned int, unsigned int, unsigned int, unsigned
   int, char*, int) */

void DB_AccountHack_CheckMyAccount::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,char *param_5,int param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_MY_ACCOUNT_IN_DB *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8846);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a190 to 0843a234 has its CatchHandler @ 0843a237 */
  CStreamGuard::operator<<(pCVar2,0x18b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_MY_ACCOUNT_IN_DB>(pCVar2);
  *(uint *)local_10 = param_3;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 0x25) = param_4;
  memset(local_10 + 8,0,0x1d);
  strncpy((char *)(local_10 + 8),param_5,param_6);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

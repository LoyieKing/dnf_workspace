# makeRequest

`_ZN19DB_SaveAccountCargo11makeRequestEijP13CAccountCargo`

`DB_SaveAccountCargo::makeRequest(int, unsigned int, CAccountCargo*)`

| 类 | 地址 |
|---|---|
| `DB_SaveAccountCargo` | `0x0843b946` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b946  _ZN19DB_SaveAccountCargo11makeRequestEijP13CAccountCargo
#           DB_SaveAccountCargo::makeRequest(int, unsigned int, CAccountCargo*)
# range [0x0843b946, 0x0843ba93]
0843b946 +0x000:  push   %ebp
0843b947 +0x001:  mov    %esp,%ebp
0843b949 +0x003:  push   %esi
0843b94a +0x004:  push   %ebx
0843b94b +0x005:  sub    $0x20,%esp
0843b94e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843b953 +0x00d:  movl   $0x8c9f,0x8(%esp)
0843b95b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843b963 +0x01d:  mov    %eax,(%esp)
0843b966 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843b96b +0x025:  movl   $0x1,0x8(%esp)
0843b973 +0x02d:  mov    %eax,0x4(%esp)
0843b977 +0x031:  lea    -0x14(%ebp),%eax
0843b97a +0x034:  mov    %eax,(%esp)
0843b97d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843b982 +0x03c:  lea    -0x14(%ebp),%eax
0843b985 +0x03f:  mov    %eax,(%esp)
0843b988 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b98d +0x047:  movl   $0x1f1,0x4(%esp)
0843b995 +0x04f:  mov    %eax,(%esp)
0843b998 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b99d +0x057:  lea    -0x14(%ebp),%eax
0843b9a0 +0x05a:  mov    %eax,(%esp)
0843b9a3 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b9a8 +0x062:  mov    0x8(%ebp),%edx
0843b9ab +0x065:  mov    %edx,0x4(%esp)
0843b9af +0x069:  mov    %eax,(%esp)
0843b9b2 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b9b7 +0x071:  lea    -0x14(%ebp),%eax
0843b9ba +0x074:  mov    %eax,(%esp)
0843b9bd +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b9c2 +0x07c:  mov    0xc(%ebp),%edx
0843b9c5 +0x07f:  mov    %edx,0x4(%esp)
0843b9c9 +0x083:  mov    %eax,(%esp)
0843b9cc +0x086:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843b9d1 +0x08b:  lea    -0x14(%ebp),%eax
0843b9d4 +0x08e:  mov    %eax,(%esp)
0843b9d7 +0x091:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843b9dc +0x096:  mov    %eax,(%esp)
0843b9df +0x099:  call   08453a10 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6626>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6626
0843b9e4 +0x09e:  mov    %eax,-0xc(%ebp)
0843b9e7 +0x0a1:  movl   $0xd60,0x8(%esp)
0843b9ef +0x0a9:  movl   $0x0,0x4(%esp)
0843b9f7 +0x0b1:  mov    -0xc(%ebp),%eax
0843b9fa +0x0b4:  mov    %eax,(%esp)
0843b9fd +0x0b7:  call   0807dcc0 <_init+0x5b8>
0843ba02 +0x0bc:  mov    0x10(%ebp),%eax
0843ba05 +0x0bf:  mov    0xd60(%eax),%edx
0843ba0b +0x0c5:  mov    -0xc(%ebp),%eax
0843ba0e +0x0c8:  mov    %edx,(%eax)
0843ba10 +0x0ca:  mov    0x10(%ebp),%eax
0843ba13 +0x0cd:  mov    0xd5c(%eax),%edx
0843ba19 +0x0d3:  mov    -0xc(%ebp),%eax
0843ba1c +0x0d6:  mov    %edx,0x4(%eax)
0843ba1f +0x0d9:  mov    0x10(%ebp),%eax
0843ba22 +0x0dc:  lea    0x4(%eax),%edx
0843ba25 +0x0df:  mov    -0xc(%ebp),%eax
0843ba28 +0x0e2:  add    $0x8,%eax
0843ba2b +0x0e5:  movl   $0xd58,0x8(%esp)
0843ba33 +0x0ed:  mov    %edx,0x4(%esp)
0843ba37 +0x0f1:  mov    %eax,(%esp)
0843ba3a +0x0f4:  call   0807d8a0 <_init+0x198>
0843ba3f +0x0f9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843ba44 +0x0fe:  lea    -0x14(%ebp),%edx
0843ba47 +0x101:  mov    %edx,0x8(%esp)
0843ba4b +0x105:  movl   $0x2,0x4(%esp)
0843ba53 +0x10d:  mov    %eax,(%esp)
0843ba56 +0x110:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843ba5b +0x115:  mov    0x10(%ebp),%eax
0843ba5e +0x118:  mov    %eax,(%esp)
0843ba61 +0x11b:  call   0844dc16 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x82c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x82c
0843ba66 +0x120:  lea    -0x14(%ebp),%eax
0843ba69 +0x123:  mov    %eax,(%esp)
0843ba6c +0x126:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ba71 +0x12b:  add    $0x20,%esp
0843ba74 +0x12e:  pop    %ebx
0843ba75 +0x12f:  pop    %esi
0843ba76 +0x130:  pop    %ebp
0843ba77 +0x131:  ret
0843ba78 +0x132:  mov    %edx,%ebx
0843ba7a +0x134:  mov    %eax,%esi
0843ba7c +0x136:  lea    -0x14(%ebp),%eax
0843ba7f +0x139:  mov    %eax,(%esp)
0843ba82 +0x13c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ba87 +0x141:  mov    %esi,%eax
0843ba89 +0x143:  mov    %ebx,%edx
0843ba8b +0x145:  mov    %eax,(%esp)
0843ba8e +0x148:  call   08ae3750 <_Unwind_Resume>
0843ba93 +0x14d:  nop
```

## 反编译 C

```c
// DB_SaveAccountCargo::makeRequest @ 0x843b946

/* DB_SaveAccountCargo::makeRequest(int, unsigned int, CAccountCargo*) */

void DB_SaveAccountCargo::makeRequest(int param_1,uint param_2,CAccountCargo *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ACCOUNT_CARGO_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",35999);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843b998 to 0843ba5a has its CatchHandler @ 0843ba78 */
  CStreamGuard::operator<<(pCVar2,0x1f1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ACCOUNT_CARGO_DATA>(pCVar2);
  memset(local_10,0,0xd60);
  *(undefined4 *)local_10 = *(undefined4 *)(param_3 + 0xd60);
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(param_3 + 0xd5c);
  memcpy(local_10 + 8,param_3 + 4,0xd58);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CAccountCargo::SetStable(param_3);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

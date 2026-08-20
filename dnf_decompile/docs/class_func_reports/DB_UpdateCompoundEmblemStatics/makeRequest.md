# makeRequest

`_ZN30DB_UpdateCompoundEmblemStatics11makeRequestEijjjjjjj`

`DB_UpdateCompoundEmblemStatics::makeRequest(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCompoundEmblemStatics` | `0x08439dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08439dec  _ZN30DB_UpdateCompoundEmblemStatics11makeRequestEijjjjjjj
#           DB_UpdateCompoundEmblemStatics::makeRequest(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08439dec, 0x08439f05]
08439dec +0x000:  push   %ebp
08439ded +0x001:  mov    %esp,%ebp
08439def +0x003:  push   %esi
08439df0 +0x004:  push   %ebx
08439df1 +0x005:  sub    $0x20,%esp
08439df4 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08439df9 +0x00d:  movl   $0x87fc,0x8(%esp)
08439e01 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08439e09 +0x01d:  mov    %eax,(%esp)
08439e0c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08439e11 +0x025:  movl   $0x1,0x8(%esp)
08439e19 +0x02d:  mov    %eax,0x4(%esp)
08439e1d +0x031:  lea    -0x14(%ebp),%eax
08439e20 +0x034:  mov    %eax,(%esp)
08439e23 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08439e28 +0x03c:  lea    -0x14(%ebp),%eax
08439e2b +0x03f:  mov    %eax,(%esp)
08439e2e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439e33 +0x047:  movl   $0x1c4,0x4(%esp)
08439e3b +0x04f:  mov    %eax,(%esp)
08439e3e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439e43 +0x057:  lea    -0x14(%ebp),%eax
08439e46 +0x05a:  mov    %eax,(%esp)
08439e49 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439e4e +0x062:  movl   $0xffffffff,0x4(%esp)
08439e56 +0x06a:  mov    %eax,(%esp)
08439e59 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439e5e +0x072:  lea    -0x14(%ebp),%eax
08439e61 +0x075:  mov    %eax,(%esp)
08439e64 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08439e69 +0x07d:  mov    %eax,(%esp)
08439e6c +0x080:  call   08453810 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6426>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6426
08439e71 +0x085:  mov    %eax,-0xc(%ebp)
08439e74 +0x088:  mov    -0xc(%ebp),%eax
08439e77 +0x08b:  mov    0x8(%ebp),%edx
08439e7a +0x08e:  mov    %edx,(%eax)
08439e7c +0x090:  mov    -0xc(%ebp),%eax
08439e7f +0x093:  mov    0xc(%ebp),%edx
08439e82 +0x096:  mov    %edx,0x4(%eax)
08439e85 +0x099:  mov    -0xc(%ebp),%eax
08439e88 +0x09c:  mov    0x10(%ebp),%edx
08439e8b +0x09f:  mov    %edx,0x8(%eax)
08439e8e +0x0a2:  mov    -0xc(%ebp),%eax
08439e91 +0x0a5:  mov    0x14(%ebp),%edx
08439e94 +0x0a8:  mov    %edx,0xc(%eax)
08439e97 +0x0ab:  mov    -0xc(%ebp),%eax
08439e9a +0x0ae:  mov    0x18(%ebp),%edx
08439e9d +0x0b1:  mov    %edx,0x10(%eax)
08439ea0 +0x0b4:  mov    -0xc(%ebp),%eax
08439ea3 +0x0b7:  mov    0x1c(%ebp),%edx
08439ea6 +0x0ba:  mov    %edx,0x14(%eax)
08439ea9 +0x0bd:  mov    -0xc(%ebp),%eax
08439eac +0x0c0:  mov    0x20(%ebp),%edx
08439eaf +0x0c3:  mov    %edx,0x18(%eax)
08439eb2 +0x0c6:  mov    -0xc(%ebp),%eax
08439eb5 +0x0c9:  mov    0x24(%ebp),%edx
08439eb8 +0x0cc:  mov    %edx,0x1c(%eax)
08439ebb +0x0cf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08439ec0 +0x0d4:  lea    -0x14(%ebp),%edx
08439ec3 +0x0d7:  mov    %edx,0x8(%esp)
08439ec7 +0x0db:  movl   $0x4,0x4(%esp)
08439ecf +0x0e3:  mov    %eax,(%esp)
08439ed2 +0x0e6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08439ed7 +0x0eb:  jmp    08439ef4 <+0x108>
08439ed9 +0x0ed:  mov    %edx,%ebx
08439edb +0x0ef:  mov    %eax,%esi
08439edd +0x0f1:  lea    -0x14(%ebp),%eax
08439ee0 +0x0f4:  mov    %eax,(%esp)
08439ee3 +0x0f7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439ee8 +0x0fc:  mov    %esi,%eax
08439eea +0x0fe:  mov    %ebx,%edx
08439eec +0x100:  mov    %eax,(%esp)
08439eef +0x103:  call   08ae3750 <_Unwind_Resume>
08439ef4 +0x108:  lea    -0x14(%ebp),%eax
08439ef7 +0x10b:  mov    %eax,(%esp)
08439efa +0x10e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439eff +0x113:  add    $0x20,%esp
08439f02 +0x116:  pop    %ebx
08439f03 +0x117:  pop    %esi
08439f04 +0x118:  pop    %ebp
08439f05 +0x119:  ret
```

## 反编译 C

```c
// DB_UpdateCompoundEmblemStatics::makeRequest @ 0x8439dec

/* DB_UpdateCompoundEmblemStatics::makeRequest(int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

void DB_UpdateCompoundEmblemStatics::makeRequest
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x87fc);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08439e3e to 08439ed6 has its CatchHandler @ 08439ed9 */
  CStreamGuard::operator<<(pCVar2,0x1c4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC>(pCVar2);
  *(int *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  *(uint *)(local_10 + 0xc) = param_4;
  *(uint *)(local_10 + 0x10) = param_5;
  *(uint *)(local_10 + 0x14) = param_6;
  *(uint *)(local_10 + 0x18) = param_7;
  *(uint *)(local_10 + 0x1c) = param_8;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

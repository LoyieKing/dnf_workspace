# makeRequest

`_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii`

`DB_UpdateCeraShopPurchaseCount::makeRequest(unsigned int, unsigned long, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCeraShopPurchaseCount` | `0x0844b31c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b31c  _ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii
#           DB_UpdateCeraShopPurchaseCount::makeRequest(unsigned int, unsigned long, int, int)
# range [0x0844b31c, 0x0844b44f]
0844b31c +0x000:  push   %ebp
0844b31d +0x001:  mov    %esp,%ebp
0844b31f +0x003:  push   %esi
0844b320 +0x004:  push   %ebx
0844b321 +0x005:  sub    $0x30,%esp
0844b324 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844b329 +0x00d:  movl   $0xbbd6,0x8(%esp)
0844b331 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0844b339 +0x01d:  mov    %eax,(%esp)
0844b33c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844b341 +0x025:  movl   $0x1,0x8(%esp)
0844b349 +0x02d:  mov    %eax,0x4(%esp)
0844b34d +0x031:  lea    -0x24(%ebp),%eax
0844b350 +0x034:  mov    %eax,(%esp)
0844b353 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844b358 +0x03c:  lea    -0x24(%ebp),%eax
0844b35b +0x03f:  mov    %eax,(%esp)
0844b35e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b363 +0x047:  movl   $0x2d9,0x4(%esp)
0844b36b +0x04f:  mov    %eax,(%esp)
0844b36e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844b373 +0x057:  lea    -0x24(%ebp),%eax
0844b376 +0x05a:  mov    %eax,(%esp)
0844b379 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b37e +0x062:  mov    0x14(%ebp),%edx
0844b381 +0x065:  mov    %edx,0x4(%esp)
0844b385 +0x069:  mov    %eax,(%esp)
0844b388 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844b38d +0x071:  lea    -0x24(%ebp),%eax
0844b390 +0x074:  mov    %eax,(%esp)
0844b393 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844b398 +0x07c:  mov    %eax,(%esp)
0844b39b +0x07f:  call   084547f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x740c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x740c
0844b3a0 +0x084:  mov    %eax,-0xc(%ebp)
0844b3a3 +0x087:  cmpl   $0x0,-0xc(%ebp)
0844b3a7 +0x08b:  jne    0844b3e1 <+0xc5>
0844b3a9 +0x08d:  movl   $0x5,0xc(%esp)
0844b3b1 +0x095:  movl   $0xbbde,0x8(%esp)
0844b3b9 +0x09d:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmiiE19__PRETTY_FUNCTION__,0x4(%esp)
0844b3c1 +0x0a5:  lea    -0x1c(%ebp),%eax
0844b3c4 +0x0a8:  mov    %eax,(%esp)
0844b3c7 +0x0ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b3cc +0x0b0:  movl   $"[PURCAHSE BONUS] ptrData is null",0x4(%esp)
0844b3d4 +0x0b8:  lea    -0x1c(%ebp),%eax
0844b3d7 +0x0bb:  mov    %eax,(%esp)
0844b3da +0x0be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b3df +0x0c3:  jmp    0844b43d <+0x121>
0844b3e1 +0x0c5:  mov    -0xc(%ebp),%eax
0844b3e4 +0x0c8:  mov    0x10(%ebp),%edx
0844b3e7 +0x0cb:  mov    %edx,0xc(%eax)
0844b3ea +0x0ce:  mov    -0xc(%ebp),%eax
0844b3ed +0x0d1:  mov    0x8(%ebp),%edx
0844b3f0 +0x0d4:  mov    %edx,(%eax)
0844b3f2 +0x0d6:  mov    -0xc(%ebp),%eax
0844b3f5 +0x0d9:  mov    0xc(%ebp),%edx
0844b3f8 +0x0dc:  mov    %edx,0x4(%eax)
0844b3fb +0x0df:  mov    -0xc(%ebp),%eax
0844b3fe +0x0e2:  movw   $0x0,0x8(%eax)
0844b404 +0x0e8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844b409 +0x0ed:  lea    -0x24(%ebp),%edx
0844b40c +0x0f0:  mov    %edx,0x8(%esp)
0844b410 +0x0f4:  movl   $0x2,0x4(%esp)
0844b418 +0x0fc:  mov    %eax,(%esp)
0844b41b +0x0ff:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844b420 +0x104:  jmp    0844b43d <+0x121>
0844b422 +0x106:  mov    %edx,%ebx
0844b424 +0x108:  mov    %eax,%esi
0844b426 +0x10a:  lea    -0x24(%ebp),%eax
0844b429 +0x10d:  mov    %eax,(%esp)
0844b42c +0x110:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b431 +0x115:  mov    %esi,%eax
0844b433 +0x117:  mov    %ebx,%edx
0844b435 +0x119:  mov    %eax,(%esp)
0844b438 +0x11c:  call   08ae3750 <_Unwind_Resume>
0844b43d +0x121:  lea    -0x24(%ebp),%eax
0844b440 +0x124:  mov    %eax,(%esp)
0844b443 +0x127:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b448 +0x12c:  add    $0x30,%esp
0844b44b +0x12f:  pop    %ebx
0844b44c +0x130:  pop    %esi
0844b44d +0x131:  pop    %ebp
0844b44e +0x132:  ret
0844b44f +0x133:  nop
```

## 反编译 C

```c
// DB_UpdateCeraShopPurchaseCount::makeRequest @ 0x844b31c

/* DB_UpdateCeraShopPurchaseCount::makeRequest(unsigned int, unsigned long, int, int) */

void DB_UpdateCeraShopPurchaseCount::makeRequest(uint param_1,ulong param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_CERASHOP_PURCHASE_COUNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbbd6);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0844b36e to 0844b41f has its CatchHandler @ 0844b422 */
  CStreamGuard::operator<<(pCVar2,0x2d9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_CERASHOP_PURCHASE_COUNT>(pCVar2);
  if (local_10 == (SIG_CERASHOP_PURCHASE_COUNT *)0x0) {
    cMyTrace::cMyTrace(local_20,
                       "static void DB_UpdateCeraShopPurchaseCount::makeRequest(memberIdentificationNumber_t, itemIndexOnlyServer_t, int, int)"
                       ,0xbbde,5);
    cMyTrace::operator()(local_20,"[PURCAHSE BONUS] ptrData is null");
  }
  else {
    *(int *)(local_10 + 0xc) = param_3;
    *(uint *)local_10 = param_1;
    *(ulong *)(local_10 + 4) = param_2;
    *(undefined2 *)(local_10 + 8) = 0;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```

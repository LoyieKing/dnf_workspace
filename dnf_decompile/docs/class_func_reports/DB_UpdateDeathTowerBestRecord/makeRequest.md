# makeRequest

`_ZN29DB_UpdateDeathTowerBestRecord11makeRequestEjjjPK30stDeathTowerRecordMemberInfo_tjj`

`DB_UpdateDeathTowerBestRecord::makeRequest(unsigned int, unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateDeathTowerBestRecord` | `0x0842a35e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a35e  _ZN29DB_UpdateDeathTowerBestRecord11makeRequestEjjjPK30stDeathTowerRecordMemberInfo_tjj
#           DB_UpdateDeathTowerBestRecord::makeRequest(unsigned int, unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
# range [0x0842a35e, 0x0842a483]
0842a35e +0x000:  push   %ebp
0842a35f +0x001:  mov    %esp,%ebp
0842a361 +0x003:  push   %esi
0842a362 +0x004:  push   %ebx
0842a363 +0x005:  sub    $0x20,%esp
0842a366 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842a36b +0x00d:  movl   $0x6bfe,0x8(%esp)
0842a373 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842a37b +0x01d:  mov    %eax,(%esp)
0842a37e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842a383 +0x025:  movl   $0x1,0x8(%esp)
0842a38b +0x02d:  mov    %eax,0x4(%esp)
0842a38f +0x031:  lea    -0x14(%ebp),%eax
0842a392 +0x034:  mov    %eax,(%esp)
0842a395 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842a39a +0x03c:  lea    -0x14(%ebp),%eax
0842a39d +0x03f:  mov    %eax,(%esp)
0842a3a0 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a3a5 +0x047:  movl   $0xe3,0x4(%esp)
0842a3ad +0x04f:  mov    %eax,(%esp)
0842a3b0 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a3b5 +0x057:  lea    -0x14(%ebp),%eax
0842a3b8 +0x05a:  mov    %eax,(%esp)
0842a3bb +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a3c0 +0x062:  movl   $0xffffffff,0x4(%esp)
0842a3c8 +0x06a:  mov    %eax,(%esp)
0842a3cb +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a3d0 +0x072:  lea    -0x14(%ebp),%eax
0842a3d3 +0x075:  mov    %eax,(%esp)
0842a3d6 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842a3db +0x07d:  mov    %eax,(%esp)
0842a3de +0x080:  call   08452476 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x508c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x508c
0842a3e3 +0x085:  mov    %eax,-0xc(%ebp)
0842a3e6 +0x088:  mov    -0xc(%ebp),%eax
0842a3e9 +0x08b:  mov    0xc(%ebp),%edx
0842a3ec +0x08e:  mov    %edx,(%eax)
0842a3ee +0x090:  mov    0x8(%ebp),%eax
0842a3f1 +0x093:  mov    %eax,%edx
0842a3f3 +0x095:  mov    -0xc(%ebp),%eax
0842a3f6 +0x098:  mov    %dx,0x4(%eax)
0842a3fa +0x09c:  mov    0x10(%ebp),%eax
0842a3fd +0x09f:  movzbl %al,%edx
0842a400 +0x0a2:  mov    -0xc(%ebp),%eax
0842a403 +0x0a5:  mov    %dx,0x6(%eax)
0842a407 +0x0a9:  mov    0x10(%ebp),%eax
0842a40a +0x0ac:  imul   $0x17,%eax,%eax
0842a40d +0x0af:  mov    -0xc(%ebp),%edx
0842a410 +0x0b2:  add    $0x8,%edx
0842a413 +0x0b5:  mov    %eax,0x8(%esp)
0842a417 +0x0b9:  mov    0x14(%ebp),%eax
0842a41a +0x0bc:  mov    %eax,0x4(%esp)
0842a41e +0x0c0:  mov    %edx,(%esp)
0842a421 +0x0c3:  call   0807d8a0 <_init+0x198>
0842a426 +0x0c8:  mov    -0xc(%ebp),%eax
0842a429 +0x0cb:  mov    0x18(%ebp),%edx
0842a42c +0x0ce:  mov    %edx,0x64(%eax)
0842a42f +0x0d1:  mov    -0xc(%ebp),%eax
0842a432 +0x0d4:  mov    0x1c(%ebp),%edx
0842a435 +0x0d7:  mov    %edx,0x68(%eax)
0842a438 +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842a43d +0x0df:  lea    -0x14(%ebp),%edx
0842a440 +0x0e2:  mov    %edx,0x8(%esp)
0842a444 +0x0e6:  movl   $0x2,0x4(%esp)
0842a44c +0x0ee:  mov    %eax,(%esp)
0842a44f +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842a454 +0x0f6:  jmp    0842a471 <+0x113>
0842a456 +0x0f8:  mov    %edx,%ebx
0842a458 +0x0fa:  mov    %eax,%esi
0842a45a +0x0fc:  lea    -0x14(%ebp),%eax
0842a45d +0x0ff:  mov    %eax,(%esp)
0842a460 +0x102:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a465 +0x107:  mov    %esi,%eax
0842a467 +0x109:  mov    %ebx,%edx
0842a469 +0x10b:  mov    %eax,(%esp)
0842a46c +0x10e:  call   08ae3750 <_Unwind_Resume>
0842a471 +0x113:  lea    -0x14(%ebp),%eax
0842a474 +0x116:  mov    %eax,(%esp)
0842a477 +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a47c +0x11e:  add    $0x20,%esp
0842a47f +0x121:  pop    %ebx
0842a480 +0x122:  pop    %esi
0842a481 +0x123:  pop    %ebp
0842a482 +0x124:  ret
0842a483 +0x125:  nop
```

## 反编译 C

```c
// DB_UpdateDeathTowerBestRecord::makeRequest @ 0x842a35e

/* DB_UpdateDeathTowerBestRecord::makeRequest(unsigned int, unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void DB_UpdateDeathTowerBestRecord::makeRequest
               (uint param_1,uint param_2,uint param_3,stDeathTowerRecordMemberInfo_t *param_4,
               uint param_5,uint param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_DEATH_TOWER_UPDATE_BEST_RECORD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6bfe);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842a3b0 to 0842a453 has its CatchHandler @ 0842a456 */
  CStreamGuard::operator<<(pCVar2,0xe3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_UPDATE_BEST_RECORD>(pCVar2);
  *(uint *)local_10 = param_2;
  *(short *)(local_10 + 4) = (short)param_1;
  *(ushort *)(local_10 + 6) = (ushort)param_3 & 0xff;
  memcpy(local_10 + 8,param_4,param_3 * 0x17);
  *(uint *)(local_10 + 100) = param_5;
  *(uint *)(local_10 + 0x68) = param_6;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

# makeRequest

`_ZN24DB_GoblinPadUpdateReward11makeRequestEjcbPc`

`DB_GoblinPadUpdateReward::makeRequest(unsigned int, char, bool, char*)`

| 类 | 地址 |
|---|---|
| `DB_GoblinPadUpdateReward` | `0x08424452` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08424452  _ZN24DB_GoblinPadUpdateReward11makeRequestEjcbPc
#           DB_GoblinPadUpdateReward::makeRequest(unsigned int, char, bool, char*)
# range [0x08424452, 0x08424569]
08424452 +0x000:  push   %ebp
08424453 +0x001:  mov    %esp,%ebp
08424455 +0x003:  push   %esi
08424456 +0x004:  push   %ebx
08424457 +0x005:  sub    $0x30,%esp
0842445a +0x008:  mov    0xc(%ebp),%edx
0842445d +0x00b:  mov    0x10(%ebp),%eax
08424460 +0x00e:  mov    %dl,-0x1c(%ebp)
08424463 +0x011:  mov    %al,-0x20(%ebp)
08424466 +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842446b +0x019:  movl   $0x5fc3,0x8(%esp)
08424473 +0x021:  movl   $"DBThread.cpp",0x4(%esp)
0842447b +0x029:  mov    %eax,(%esp)
0842447e +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08424483 +0x031:  movl   $0x1,0x8(%esp)
0842448b +0x039:  mov    %eax,0x4(%esp)
0842448f +0x03d:  lea    -0x14(%ebp),%eax
08424492 +0x040:  mov    %eax,(%esp)
08424495 +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842449a +0x048:  lea    -0x14(%ebp),%eax
0842449d +0x04b:  mov    %eax,(%esp)
084244a0 +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084244a5 +0x053:  movl   $0x12b,0x4(%esp)
084244ad +0x05b:  mov    %eax,(%esp)
084244b0 +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084244b5 +0x063:  lea    -0x14(%ebp),%eax
084244b8 +0x066:  mov    %eax,(%esp)
084244bb +0x069:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084244c0 +0x06e:  movl   $0xffffffff,0x4(%esp)
084244c8 +0x076:  mov    %eax,(%esp)
084244cb +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084244d0 +0x07e:  lea    -0x14(%ebp),%eax
084244d3 +0x081:  mov    %eax,(%esp)
084244d6 +0x084:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084244db +0x089:  mov    %eax,(%esp)
084244de +0x08c:  call   08451e84 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a9a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a9a
084244e3 +0x091:  mov    %eax,-0xc(%ebp)
084244e6 +0x094:  mov    -0xc(%ebp),%eax
084244e9 +0x097:  mov    0x8(%ebp),%edx
084244ec +0x09a:  mov    %edx,(%eax)
084244ee +0x09c:  mov    -0xc(%ebp),%eax
084244f1 +0x09f:  movzbl -0x1c(%ebp),%edx
084244f5 +0x0a3:  mov    %dl,0x4(%eax)
084244f8 +0x0a6:  mov    -0xc(%ebp),%eax
084244fb +0x0a9:  movzbl -0x20(%ebp),%edx
084244ff +0x0ad:  mov    %dl,0x5(%eax)
08424502 +0x0b0:  mov    -0xc(%ebp),%eax
08424505 +0x0b3:  lea    0x6(%eax),%edx
08424508 +0x0b6:  movl   $0x10,0x8(%esp)
08424510 +0x0be:  mov    0x14(%ebp),%eax
08424513 +0x0c1:  mov    %eax,0x4(%esp)
08424517 +0x0c5:  mov    %edx,(%esp)
0842451a +0x0c8:  call   0807d8d0 <_init+0x1c8>
0842451f +0x0cd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08424524 +0x0d2:  lea    -0x14(%ebp),%edx
08424527 +0x0d5:  mov    %edx,0x8(%esp)
0842452b +0x0d9:  movl   $0x2,0x4(%esp)
08424533 +0x0e1:  mov    %eax,(%esp)
08424536 +0x0e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842453b +0x0e9:  jmp    08424558 <+0x106>
0842453d +0x0eb:  mov    %edx,%ebx
0842453f +0x0ed:  mov    %eax,%esi
08424541 +0x0ef:  lea    -0x14(%ebp),%eax
08424544 +0x0f2:  mov    %eax,(%esp)
08424547 +0x0f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842454c +0x0fa:  mov    %esi,%eax
0842454e +0x0fc:  mov    %ebx,%edx
08424550 +0x0fe:  mov    %eax,(%esp)
08424553 +0x101:  call   08ae3750 <_Unwind_Resume>
08424558 +0x106:  lea    -0x14(%ebp),%eax
0842455b +0x109:  mov    %eax,(%esp)
0842455e +0x10c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08424563 +0x111:  add    $0x30,%esp
08424566 +0x114:  pop    %ebx
08424567 +0x115:  pop    %esi
08424568 +0x116:  pop    %ebp
08424569 +0x117:  ret
```

## 反编译 C

```c
// DB_GoblinPadUpdateReward::makeRequest @ 0x8424452

/* DB_GoblinPadUpdateReward::makeRequest(unsigned int, char, bool, char*) */

void DB_GoblinPadUpdateReward::makeRequest(uint param_1,char param_2,bool param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GOBLIN_UPDATE_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5fc3);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084244b0 to 0842453a has its CatchHandler @ 0842453d */
  CStreamGuard::operator<<(pCVar2,299);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_UPDATE_REWARD>(pCVar2);
  *(uint *)local_10 = param_1;
  local_10[4] = (SIG_GOBLIN_UPDATE_REWARD)param_2;
  local_10[5] = (SIG_GOBLIN_UPDATE_REWARD)param_3;
  strncpy((char *)(local_10 + 6),param_4,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

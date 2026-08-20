# makeRequest

`_ZN22DB_SelectLevelUpReward11makeRequestEiji`

`DB_SelectLevelUpReward::makeRequest(int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_SelectLevelUpReward` | `0x0844271a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844271a  _ZN22DB_SelectLevelUpReward11makeRequestEiji
#           DB_SelectLevelUpReward::makeRequest(int, unsigned int, int)
# range [0x0844271a, 0x08442809]
0844271a +0x00:  push   %ebp
0844271b +0x01:  mov    %esp,%ebp
0844271d +0x03:  push   %esi
0844271e +0x04:  push   %ebx
0844271f +0x05:  sub    $0x20,%esp
08442722 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08442727 +0x0d:  movl   $0xa2c6,0x8(%esp)
0844272f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08442737 +0x1d:  mov    %eax,(%esp)
0844273a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844273f +0x25:  movl   $0x1,0x8(%esp)
08442747 +0x2d:  mov    %eax,0x4(%esp)
0844274b +0x31:  lea    -0x10(%ebp),%eax
0844274e +0x34:  mov    %eax,(%esp)
08442751 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08442756 +0x3c:  lea    -0x10(%ebp),%eax
08442759 +0x3f:  mov    %eax,(%esp)
0844275c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442761 +0x47:  movl   $0x28e,0x4(%esp)
08442769 +0x4f:  mov    %eax,(%esp)
0844276c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442771 +0x57:  lea    -0x10(%ebp),%eax
08442774 +0x5a:  mov    %eax,(%esp)
08442777 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844277c +0x62:  mov    0x8(%ebp),%edx
0844277f +0x65:  mov    %edx,0x4(%esp)
08442783 +0x69:  mov    %eax,(%esp)
08442786 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844278b +0x71:  lea    -0x10(%ebp),%eax
0844278e +0x74:  mov    %eax,(%esp)
08442791 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442796 +0x7c:  mov    0xc(%ebp),%edx
08442799 +0x7f:  mov    %edx,0x4(%esp)
0844279d +0x83:  mov    %eax,(%esp)
084427a0 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084427a5 +0x8b:  lea    -0x10(%ebp),%eax
084427a8 +0x8e:  mov    %eax,(%esp)
084427ab +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084427b0 +0x96:  mov    0x10(%ebp),%edx
084427b3 +0x99:  mov    %edx,0x4(%esp)
084427b7 +0x9d:  mov    %eax,(%esp)
084427ba +0xa0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084427bf +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084427c4 +0xaa:  lea    -0x10(%ebp),%edx
084427c7 +0xad:  mov    %edx,0x8(%esp)
084427cb +0xb1:  movl   $0x2,0x4(%esp)
084427d3 +0xb9:  mov    %eax,(%esp)
084427d6 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084427db +0xc1:  jmp    084427f8 <+0xde>
084427dd +0xc3:  mov    %edx,%ebx
084427df +0xc5:  mov    %eax,%esi
084427e1 +0xc7:  lea    -0x10(%ebp),%eax
084427e4 +0xca:  mov    %eax,(%esp)
084427e7 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084427ec +0xd2:  mov    %esi,%eax
084427ee +0xd4:  mov    %ebx,%edx
084427f0 +0xd6:  mov    %eax,(%esp)
084427f3 +0xd9:  call   08ae3750 <_Unwind_Resume>
084427f8 +0xde:  lea    -0x10(%ebp),%eax
084427fb +0xe1:  mov    %eax,(%esp)
084427fe +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442803 +0xe9:  add    $0x20,%esp
08442806 +0xec:  pop    %ebx
08442807 +0xed:  pop    %esi
08442808 +0xee:  pop    %ebp
08442809 +0xef:  ret
```

## 反编译 C

```c
// DB_SelectLevelUpReward::makeRequest @ 0x844271a

/* DB_SelectLevelUpReward::makeRequest(int, unsigned int, int) */

void DB_SelectLevelUpReward::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa2c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844276c to 084427da has its CatchHandler @ 084427dd */
  CStreamGuard::operator<<(pCVar2,0x28e);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

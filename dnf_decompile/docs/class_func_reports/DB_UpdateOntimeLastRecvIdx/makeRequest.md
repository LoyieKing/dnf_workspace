# makeRequest

`_ZN26DB_UpdateOntimeLastRecvIdx11makeRequestEiji`

`DB_UpdateOntimeLastRecvIdx::makeRequest(int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOntimeLastRecvIdx` | `0x08442966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442966  _ZN26DB_UpdateOntimeLastRecvIdx11makeRequestEiji
#           DB_UpdateOntimeLastRecvIdx::makeRequest(int, unsigned int, int)
# range [0x08442966, 0x08442a55]
08442966 +0x00:  push   %ebp
08442967 +0x01:  mov    %esp,%ebp
08442969 +0x03:  push   %esi
0844296a +0x04:  push   %ebx
0844296b +0x05:  sub    $0x20,%esp
0844296e +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08442973 +0x0d:  movl   $0xa40f,0x8(%esp)
0844297b +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08442983 +0x1d:  mov    %eax,(%esp)
08442986 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844298b +0x25:  movl   $0x1,0x8(%esp)
08442993 +0x2d:  mov    %eax,0x4(%esp)
08442997 +0x31:  lea    -0x10(%ebp),%eax
0844299a +0x34:  mov    %eax,(%esp)
0844299d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084429a2 +0x3c:  lea    -0x10(%ebp),%eax
084429a5 +0x3f:  mov    %eax,(%esp)
084429a8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084429ad +0x47:  movl   $0x297,0x4(%esp)
084429b5 +0x4f:  mov    %eax,(%esp)
084429b8 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084429bd +0x57:  lea    -0x10(%ebp),%eax
084429c0 +0x5a:  mov    %eax,(%esp)
084429c3 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084429c8 +0x62:  mov    0x8(%ebp),%edx
084429cb +0x65:  mov    %edx,0x4(%esp)
084429cf +0x69:  mov    %eax,(%esp)
084429d2 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084429d7 +0x71:  lea    -0x10(%ebp),%eax
084429da +0x74:  mov    %eax,(%esp)
084429dd +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084429e2 +0x7c:  mov    0xc(%ebp),%edx
084429e5 +0x7f:  mov    %edx,0x4(%esp)
084429e9 +0x83:  mov    %eax,(%esp)
084429ec +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084429f1 +0x8b:  lea    -0x10(%ebp),%eax
084429f4 +0x8e:  mov    %eax,(%esp)
084429f7 +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084429fc +0x96:  mov    0x10(%ebp),%edx
084429ff +0x99:  mov    %edx,0x4(%esp)
08442a03 +0x9d:  mov    %eax,(%esp)
08442a06 +0xa0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442a0b +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08442a10 +0xaa:  lea    -0x10(%ebp),%edx
08442a13 +0xad:  mov    %edx,0x8(%esp)
08442a17 +0xb1:  movl   $0x2,0x4(%esp)
08442a1f +0xb9:  mov    %eax,(%esp)
08442a22 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08442a27 +0xc1:  jmp    08442a44 <+0xde>
08442a29 +0xc3:  mov    %edx,%ebx
08442a2b +0xc5:  mov    %eax,%esi
08442a2d +0xc7:  lea    -0x10(%ebp),%eax
08442a30 +0xca:  mov    %eax,(%esp)
08442a33 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442a38 +0xd2:  mov    %esi,%eax
08442a3a +0xd4:  mov    %ebx,%edx
08442a3c +0xd6:  mov    %eax,(%esp)
08442a3f +0xd9:  call   08ae3750 <_Unwind_Resume>
08442a44 +0xde:  lea    -0x10(%ebp),%eax
08442a47 +0xe1:  mov    %eax,(%esp)
08442a4a +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442a4f +0xe9:  add    $0x20,%esp
08442a52 +0xec:  pop    %ebx
08442a53 +0xed:  pop    %esi
08442a54 +0xee:  pop    %ebp
08442a55 +0xef:  ret
```

## 反编译 C

```c
// DB_UpdateOntimeLastRecvIdx::makeRequest @ 0x8442966

/* DB_UpdateOntimeLastRecvIdx::makeRequest(int, unsigned int, int) */

void DB_UpdateOntimeLastRecvIdx::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",41999);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084429b8 to 08442a26 has its CatchHandler @ 08442a29 */
  CStreamGuard::operator<<(pCVar2,0x297);
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

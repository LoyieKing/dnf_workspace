# makeRequest

`_ZN22DB_UpgradeAccountCargo11makeRequestEijj`

`DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpgradeAccountCargo` | `0x0843b15e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b15e  _ZN22DB_UpgradeAccountCargo11makeRequestEijj
#           DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int)
# range [0x0843b15e, 0x0843b24d]
0843b15e +0x00:  push   %ebp
0843b15f +0x01:  mov    %esp,%ebp
0843b161 +0x03:  push   %esi
0843b162 +0x04:  push   %ebx
0843b163 +0x05:  sub    $0x20,%esp
0843b166 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843b16b +0x0d:  movl   $0x8c1d,0x8(%esp)
0843b173 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843b17b +0x1d:  mov    %eax,(%esp)
0843b17e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843b183 +0x25:  movl   $0x1,0x8(%esp)
0843b18b +0x2d:  mov    %eax,0x4(%esp)
0843b18f +0x31:  lea    -0x10(%ebp),%eax
0843b192 +0x34:  mov    %eax,(%esp)
0843b195 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843b19a +0x3c:  lea    -0x10(%ebp),%eax
0843b19d +0x3f:  mov    %eax,(%esp)
0843b1a0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b1a5 +0x47:  movl   $0x1ef,0x4(%esp)
0843b1ad +0x4f:  mov    %eax,(%esp)
0843b1b0 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b1b5 +0x57:  lea    -0x10(%ebp),%eax
0843b1b8 +0x5a:  mov    %eax,(%esp)
0843b1bb +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b1c0 +0x62:  mov    0x8(%ebp),%edx
0843b1c3 +0x65:  mov    %edx,0x4(%esp)
0843b1c7 +0x69:  mov    %eax,(%esp)
0843b1ca +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b1cf +0x71:  lea    -0x10(%ebp),%eax
0843b1d2 +0x74:  mov    %eax,(%esp)
0843b1d5 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b1da +0x7c:  mov    0xc(%ebp),%edx
0843b1dd +0x7f:  mov    %edx,0x4(%esp)
0843b1e1 +0x83:  mov    %eax,(%esp)
0843b1e4 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843b1e9 +0x8b:  lea    -0x10(%ebp),%eax
0843b1ec +0x8e:  mov    %eax,(%esp)
0843b1ef +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b1f4 +0x96:  mov    0x10(%ebp),%edx
0843b1f7 +0x99:  mov    %edx,0x4(%esp)
0843b1fb +0x9d:  mov    %eax,(%esp)
0843b1fe +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843b203 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b208 +0xaa:  lea    -0x10(%ebp),%edx
0843b20b +0xad:  mov    %edx,0x8(%esp)
0843b20f +0xb1:  movl   $0x2,0x4(%esp)
0843b217 +0xb9:  mov    %eax,(%esp)
0843b21a +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b21f +0xc1:  jmp    0843b23c <+0xde>
0843b221 +0xc3:  mov    %edx,%ebx
0843b223 +0xc5:  mov    %eax,%esi
0843b225 +0xc7:  lea    -0x10(%ebp),%eax
0843b228 +0xca:  mov    %eax,(%esp)
0843b22b +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b230 +0xd2:  mov    %esi,%eax
0843b232 +0xd4:  mov    %ebx,%edx
0843b234 +0xd6:  mov    %eax,(%esp)
0843b237 +0xd9:  call   08ae3750 <_Unwind_Resume>
0843b23c +0xde:  lea    -0x10(%ebp),%eax
0843b23f +0xe1:  mov    %eax,(%esp)
0843b242 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b247 +0xe9:  add    $0x20,%esp
0843b24a +0xec:  pop    %ebx
0843b24b +0xed:  pop    %esi
0843b24c +0xee:  pop    %ebp
0843b24d +0xef:  ret
```

## 反编译 C

```c
// DB_UpgradeAccountCargo::makeRequest @ 0x843b15e

/* DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int) */

void DB_UpgradeAccountCargo::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c1d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b1b0 to 0843b21e has its CatchHandler @ 0843b221 */
  CStreamGuard::operator<<(pCVar2,0x1ef);
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

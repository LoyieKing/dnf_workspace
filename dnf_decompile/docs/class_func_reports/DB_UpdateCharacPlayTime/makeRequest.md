# makeRequest

`_ZN23DB_UpdateCharacPlayTime11makeRequestEil`

`DB_UpdateCharacPlayTime::makeRequest(int, long)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCharacPlayTime` | `0x0843f7ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f7ee  _ZN23DB_UpdateCharacPlayTime11makeRequestEil
#           DB_UpdateCharacPlayTime::makeRequest(int, long)
# range [0x0843f7ee, 0x0843f8f9]
0843f7ee +0x000:  push   %ebp
0843f7ef +0x001:  mov    %esp,%ebp
0843f7f1 +0x003:  push   %esi
0843f7f2 +0x004:  push   %ebx
0843f7f3 +0x005:  sub    $0x20,%esp
0843f7f6 +0x008:  cmpl   $0x0,0x8(%ebp)
0843f7fa +0x00c:  je     0843f8ee <+0x100>
0843f800 +0x012:  cmpl   $0x0,0xc(%ebp)
0843f804 +0x016:  je     0843f8f1 <+0x103>
0843f80a +0x01c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843f80f +0x021:  movl   $0x99a6,0x8(%esp)
0843f817 +0x029:  movl   $"DBThread.cpp",0x4(%esp)
0843f81f +0x031:  mov    %eax,(%esp)
0843f822 +0x034:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843f827 +0x039:  movl   $0x1,0x8(%esp)
0843f82f +0x041:  mov    %eax,0x4(%esp)
0843f833 +0x045:  lea    -0x10(%ebp),%eax
0843f836 +0x048:  mov    %eax,(%esp)
0843f839 +0x04b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843f83e +0x050:  lea    -0x10(%ebp),%eax
0843f841 +0x053:  mov    %eax,(%esp)
0843f844 +0x056:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f849 +0x05b:  movl   $0x24e,0x4(%esp)
0843f851 +0x063:  mov    %eax,(%esp)
0843f854 +0x066:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f859 +0x06b:  lea    -0x10(%ebp),%eax
0843f85c +0x06e:  mov    %eax,(%esp)
0843f85f +0x071:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f864 +0x076:  movl   $0xffffffff,0x4(%esp)
0843f86c +0x07e:  mov    %eax,(%esp)
0843f86f +0x081:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f874 +0x086:  lea    -0x10(%ebp),%eax
0843f877 +0x089:  mov    %eax,(%esp)
0843f87a +0x08c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f87f +0x091:  mov    0x8(%ebp),%edx
0843f882 +0x094:  mov    %edx,0x4(%esp)
0843f886 +0x098:  mov    %eax,(%esp)
0843f889 +0x09b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f88e +0x0a0:  lea    -0x10(%ebp),%eax
0843f891 +0x0a3:  mov    %eax,(%esp)
0843f894 +0x0a6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f899 +0x0ab:  mov    0xc(%ebp),%edx
0843f89c +0x0ae:  mov    %edx,0x4(%esp)
0843f8a0 +0x0b2:  mov    %eax,(%esp)
0843f8a3 +0x0b5:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
0843f8a8 +0x0ba:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843f8ad +0x0bf:  lea    -0x10(%ebp),%edx
0843f8b0 +0x0c2:  mov    %edx,0x8(%esp)
0843f8b4 +0x0c6:  movl   $0x2,0x4(%esp)
0843f8bc +0x0ce:  mov    %eax,(%esp)
0843f8bf +0x0d1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843f8c4 +0x0d6:  jmp    0843f8e1 <+0xf3>
0843f8c6 +0x0d8:  mov    %edx,%ebx
0843f8c8 +0x0da:  mov    %eax,%esi
0843f8ca +0x0dc:  lea    -0x10(%ebp),%eax
0843f8cd +0x0df:  mov    %eax,(%esp)
0843f8d0 +0x0e2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f8d5 +0x0e7:  mov    %esi,%eax
0843f8d7 +0x0e9:  mov    %ebx,%edx
0843f8d9 +0x0eb:  mov    %eax,(%esp)
0843f8dc +0x0ee:  call   08ae3750 <_Unwind_Resume>
0843f8e1 +0x0f3:  lea    -0x10(%ebp),%eax
0843f8e4 +0x0f6:  mov    %eax,(%esp)
0843f8e7 +0x0f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f8ec +0x0fe:  jmp    0843f8f2 <+0x104>
0843f8ee +0x100:  nop
0843f8ef +0x101:  jmp    0843f8f2 <+0x104>
0843f8f1 +0x103:  nop
0843f8f2 +0x104:  add    $0x20,%esp
0843f8f5 +0x107:  pop    %ebx
0843f8f6 +0x108:  pop    %esi
0843f8f7 +0x109:  pop    %ebp
0843f8f8 +0x10a:  ret
0843f8f9 +0x10b:  nop
```

## 反编译 C

```c
// DB_UpdateCharacPlayTime::makeRequest @ 0x843f7ee

/* DB_UpdateCharacPlayTime::makeRequest(int, long) */

void DB_UpdateCharacPlayTime::makeRequest(int param_1,long param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x99a6);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f854 to 0843f8c3 has its CatchHandler @ 0843f8c6 */
    CStreamGuard::operator<<(pCVar2,0x24e);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```

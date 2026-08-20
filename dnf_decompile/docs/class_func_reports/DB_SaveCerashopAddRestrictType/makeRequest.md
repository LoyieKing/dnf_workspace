# makeRequest

`_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE`

`DB_SaveCerashopAddRestrictType::makeRequest(CUser*, CerashopAddRestrict::DBInputData&)`

| 类 | 地址 |
|---|---|
| `DB_SaveCerashopAddRestrictType` | `0x080e17ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e17ba  _ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE
#           DB_SaveCerashopAddRestrictType::makeRequest(CUser*, CerashopAddRestrict::DBInputData&)
# range [0x080e17ba, 0x080e1ac9]
080e17ba +0x000:  push   %ebp
080e17bb +0x001:  mov    %esp,%ebp
080e17bd +0x003:  push   %esi
080e17be +0x004:  push   %ebx
080e17bf +0x005:  sub    $0x20,%esp
080e17c2 +0x008:  mov    0xc(%ebp),%eax
080e17c5 +0x00b:  mov    0x4(%eax),%eax
080e17c8 +0x00e:  mov    (%eax),%eax
080e17ca +0x010:  test   %eax,%eax
080e17cc +0x012:  je     080e17dc <+0x22>
080e17ce +0x014:  cmp    $0x1,%eax
080e17d1 +0x017:  je     080e1952 <+0x198>
080e17d7 +0x01d:  jmp    080e1ac3 <+0x309>
080e17dc +0x022:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e17e1 +0x027:  movl   $0x18c,0x8(%esp)
080e17e9 +0x02f:  movl   $"CerashopAddRestrictType.cpp",0x4(%esp)
080e17f1 +0x037:  mov    %eax,(%esp)
080e17f4 +0x03a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e17f9 +0x03f:  movl   $0x1,0x8(%esp)
080e1801 +0x047:  mov    %eax,0x4(%esp)
080e1805 +0x04b:  lea    -0x10(%ebp),%eax
080e1808 +0x04e:  mov    %eax,(%esp)
080e180b +0x051:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e1810 +0x056:  lea    -0x10(%ebp),%eax
080e1813 +0x059:  mov    %eax,(%esp)
080e1816 +0x05c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e181b +0x061:  movl   $0x340,0x4(%esp)
080e1823 +0x069:  mov    %eax,(%esp)
080e1826 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e182b +0x071:  lea    -0x10(%ebp),%eax
080e182e +0x074:  mov    %eax,(%esp)
080e1831 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1836 +0x07c:  movl   $0xffffffff,0x4(%esp)
080e183e +0x084:  mov    %eax,(%esp)
080e1841 +0x087:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e1846 +0x08c:  mov    0xc(%ebp),%eax
080e1849 +0x08f:  mov    0x4(%eax),%eax
080e184c +0x092:  mov    (%eax),%eax
080e184e +0x094:  mov    %eax,%ebx
080e1850 +0x096:  lea    -0x10(%ebp),%eax
080e1853 +0x099:  mov    %eax,(%esp)
080e1856 +0x09c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e185b +0x0a1:  mov    %ebx,0x4(%esp)
080e185f +0x0a5:  mov    %eax,(%esp)
080e1862 +0x0a8:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e1867 +0x0ad:  mov    0xc(%ebp),%eax
080e186a +0x0b0:  mov    0x4(%eax),%eax
080e186d +0x0b3:  mov    0x4(%eax),%ebx
080e1870 +0x0b6:  lea    -0x10(%ebp),%eax
080e1873 +0x0b9:  mov    %eax,(%esp)
080e1876 +0x0bc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e187b +0x0c1:  mov    %ebx,0x4(%esp)
080e187f +0x0c5:  mov    %eax,(%esp)
080e1882 +0x0c8:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e1887 +0x0cd:  mov    0xc(%ebp),%eax
080e188a +0x0d0:  mov    (%eax),%eax
080e188c +0x0d2:  mov    0x4(%eax),%ebx
080e188f +0x0d5:  lea    -0x10(%ebp),%eax
080e1892 +0x0d8:  mov    %eax,(%esp)
080e1895 +0x0db:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e189a +0x0e0:  mov    %ebx,0x4(%esp)
080e189e +0x0e4:  mov    %eax,(%esp)
080e18a1 +0x0e7:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e18a6 +0x0ec:  mov    0xc(%ebp),%eax
080e18a9 +0x0ef:  mov    (%eax),%eax
080e18ab +0x0f1:  mov    0x8(%eax),%ebx
080e18ae +0x0f4:  lea    -0x10(%ebp),%eax
080e18b1 +0x0f7:  mov    %eax,(%esp)
080e18b4 +0x0fa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e18b9 +0x0ff:  mov    %ebx,0x4(%esp)
080e18bd +0x103:  mov    %eax,(%esp)
080e18c0 +0x106:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
080e18c5 +0x10b:  mov    0xc(%ebp),%eax
080e18c8 +0x10e:  mov    0x4(%eax),%eax
080e18cb +0x111:  mov    0x10(%eax),%ebx
080e18ce +0x114:  lea    -0x10(%ebp),%eax
080e18d1 +0x117:  mov    %eax,(%esp)
080e18d4 +0x11a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e18d9 +0x11f:  mov    %ebx,0x4(%esp)
080e18dd +0x123:  mov    %eax,(%esp)
080e18e0 +0x126:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
080e18e5 +0x12b:  mov    0x8(%ebp),%eax
080e18e8 +0x12e:  mov    %eax,(%esp)
080e18eb +0x131:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080e18f0 +0x136:  mov    %eax,%ebx
080e18f2 +0x138:  lea    -0x10(%ebp),%eax
080e18f5 +0x13b:  mov    %eax,(%esp)
080e18f8 +0x13e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e18fd +0x143:  mov    %ebx,0x4(%esp)
080e1901 +0x147:  mov    %eax,(%esp)
080e1904 +0x14a:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e1909 +0x14f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e190e +0x154:  lea    -0x10(%ebp),%edx
080e1911 +0x157:  mov    %edx,0x8(%esp)
080e1915 +0x15b:  movl   $0x2,0x4(%esp)
080e191d +0x163:  mov    %eax,(%esp)
080e1920 +0x166:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e1925 +0x16b:  jmp    080e1942 <+0x188>
080e1927 +0x16d:  mov    %edx,%ebx
080e1929 +0x16f:  mov    %eax,%esi
080e192b +0x171:  lea    -0x10(%ebp),%eax
080e192e +0x174:  mov    %eax,(%esp)
080e1931 +0x177:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1936 +0x17c:  mov    %esi,%eax
080e1938 +0x17e:  mov    %ebx,%edx
080e193a +0x180:  mov    %eax,(%esp)
080e193d +0x183:  call   08ae3750 <_Unwind_Resume>
080e1942 +0x188:  lea    -0x10(%ebp),%eax
080e1945 +0x18b:  mov    %eax,(%esp)
080e1948 +0x18e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e194d +0x193:  jmp    080e1ac3 <+0x309>
080e1952 +0x198:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e1957 +0x19d:  movl   $0x19a,0x8(%esp)
080e195f +0x1a5:  movl   $"CerashopAddRestrictType.cpp",0x4(%esp)
080e1967 +0x1ad:  mov    %eax,(%esp)
080e196a +0x1b0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e196f +0x1b5:  movl   $0x1,0x8(%esp)
080e1977 +0x1bd:  mov    %eax,0x4(%esp)
080e197b +0x1c1:  lea    -0x18(%ebp),%eax
080e197e +0x1c4:  mov    %eax,(%esp)
080e1981 +0x1c7:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e1986 +0x1cc:  lea    -0x18(%ebp),%eax
080e1989 +0x1cf:  mov    %eax,(%esp)
080e198c +0x1d2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1991 +0x1d7:  movl   $0x340,0x4(%esp)
080e1999 +0x1df:  mov    %eax,(%esp)
080e199c +0x1e2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e19a1 +0x1e7:  lea    -0x18(%ebp),%eax
080e19a4 +0x1ea:  mov    %eax,(%esp)
080e19a7 +0x1ed:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e19ac +0x1f2:  movl   $0xffffffff,0x4(%esp)
080e19b4 +0x1fa:  mov    %eax,(%esp)
080e19b7 +0x1fd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e19bc +0x202:  mov    0xc(%ebp),%eax
080e19bf +0x205:  mov    0x4(%eax),%eax
080e19c2 +0x208:  mov    (%eax),%eax
080e19c4 +0x20a:  mov    %eax,%ebx
080e19c6 +0x20c:  lea    -0x18(%ebp),%eax
080e19c9 +0x20f:  mov    %eax,(%esp)
080e19cc +0x212:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e19d1 +0x217:  mov    %ebx,0x4(%esp)
080e19d5 +0x21b:  mov    %eax,(%esp)
080e19d8 +0x21e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e19dd +0x223:  mov    0xc(%ebp),%eax
080e19e0 +0x226:  mov    0x4(%eax),%eax
080e19e3 +0x229:  mov    0x4(%eax),%ebx
080e19e6 +0x22c:  lea    -0x18(%ebp),%eax
080e19e9 +0x22f:  mov    %eax,(%esp)
080e19ec +0x232:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e19f1 +0x237:  mov    %ebx,0x4(%esp)
080e19f5 +0x23b:  mov    %eax,(%esp)
080e19f8 +0x23e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e19fd +0x243:  mov    0xc(%ebp),%eax
080e1a00 +0x246:  mov    (%eax),%eax
080e1a02 +0x248:  mov    0x4(%eax),%ebx
080e1a05 +0x24b:  lea    -0x18(%ebp),%eax
080e1a08 +0x24e:  mov    %eax,(%esp)
080e1a0b +0x251:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1a10 +0x256:  mov    %ebx,0x4(%esp)
080e1a14 +0x25a:  mov    %eax,(%esp)
080e1a17 +0x25d:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e1a1c +0x262:  mov    0xc(%ebp),%eax
080e1a1f +0x265:  mov    (%eax),%eax
080e1a21 +0x267:  mov    0x8(%eax),%ebx
080e1a24 +0x26a:  lea    -0x18(%ebp),%eax
080e1a27 +0x26d:  mov    %eax,(%esp)
080e1a2a +0x270:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1a2f +0x275:  mov    %ebx,0x4(%esp)
080e1a33 +0x279:  mov    %eax,(%esp)
080e1a36 +0x27c:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
080e1a3b +0x281:  mov    0xc(%ebp),%eax
080e1a3e +0x284:  mov    0x4(%eax),%eax
080e1a41 +0x287:  mov    0x10(%eax),%ebx
080e1a44 +0x28a:  lea    -0x18(%ebp),%eax
080e1a47 +0x28d:  mov    %eax,(%esp)
080e1a4a +0x290:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1a4f +0x295:  mov    %ebx,0x4(%esp)
080e1a53 +0x299:  mov    %eax,(%esp)
080e1a56 +0x29c:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
080e1a5b +0x2a1:  mov    0x8(%ebp),%eax
080e1a5e +0x2a4:  mov    %eax,(%esp)
080e1a61 +0x2a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080e1a66 +0x2ac:  mov    %eax,%ebx
080e1a68 +0x2ae:  lea    -0x18(%ebp),%eax
080e1a6b +0x2b1:  mov    %eax,(%esp)
080e1a6e +0x2b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1a73 +0x2b9:  mov    %ebx,0x4(%esp)
080e1a77 +0x2bd:  mov    %eax,(%esp)
080e1a7a +0x2c0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e1a7f +0x2c5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e1a84 +0x2ca:  lea    -0x18(%ebp),%edx
080e1a87 +0x2cd:  mov    %edx,0x8(%esp)
080e1a8b +0x2d1:  movl   $0x2,0x4(%esp)
080e1a93 +0x2d9:  mov    %eax,(%esp)
080e1a96 +0x2dc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e1a9b +0x2e1:  jmp    080e1ab8 <+0x2fe>
080e1a9d +0x2e3:  mov    %edx,%ebx
080e1a9f +0x2e5:  mov    %eax,%esi
080e1aa1 +0x2e7:  lea    -0x18(%ebp),%eax
080e1aa4 +0x2ea:  mov    %eax,(%esp)
080e1aa7 +0x2ed:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1aac +0x2f2:  mov    %esi,%eax
080e1aae +0x2f4:  mov    %ebx,%edx
080e1ab0 +0x2f6:  mov    %eax,(%esp)
080e1ab3 +0x2f9:  call   08ae3750 <_Unwind_Resume>
080e1ab8 +0x2fe:  lea    -0x18(%ebp),%eax
080e1abb +0x301:  mov    %eax,(%esp)
080e1abe +0x304:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1ac3 +0x309:  add    $0x20,%esp
080e1ac6 +0x30c:  pop    %ebx
080e1ac7 +0x30d:  pop    %esi
080e1ac8 +0x30e:  pop    %ebp
080e1ac9 +0x30f:  ret
```

## 反编译 C

```c
// DB_SaveCerashopAddRestrictType::makeRequest @ 0x80e17ba

/* DB_SaveCerashopAddRestrictType::makeRequest(CUser*, CerashopAddRestrict::DBInputData&) */

void DB_SaveCerashopAddRestrictType::makeRequest(CUser *param_1,DBInputData *param_2)

{
  long lVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (**(int **)(param_2 + 4) == 0) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x18c);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080e1826 to 080e1924 has its CatchHandler @ 080e1927 */
    CStreamGuard::operator<<(pCVar3,0x340);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    uVar4 = **(uint **)(param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)(param_2 + 4) + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    lVar1 = *(long *)(*(int *)param_2 + 8);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,lVar1);
    lVar1 = *(long *)(*(int *)(param_2 + 4) + 0x10);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,lVar1);
    uVar4 = CUser::get_acc_id(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  else if (**(int **)(param_2 + 4) == 1) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x19a);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 080e199c to 080e1a9a has its CatchHandler @ 080e1a9d */
    CStreamGuard::operator<<(pCVar3,0x340);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    uVar4 = **(uint **)(param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)(param_2 + 4) + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    lVar1 = *(long *)(*(int *)param_2 + 8);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,lVar1);
    lVar1 = *(long *)(*(int *)(param_2 + 4) + 0x10);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,lVar1);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}
```

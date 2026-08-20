# makeRequest

`_ZN20DB_UpdateSchoolPoint11makeRequestEjii`

`DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateSchoolPoint` | `0x0842f0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f0f0  _ZN20DB_UpdateSchoolPoint11makeRequestEjii
#           DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int)
# range [0x0842f0f0, 0x0842f229]
0842f0f0 +0x000:  push   %ebp
0842f0f1 +0x001:  mov    %esp,%ebp
0842f0f3 +0x003:  push   %esi
0842f0f4 +0x004:  push   %ebx
0842f0f5 +0x005:  sub    $0x30,%esp
0842f0f8 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842f0fd +0x00d:  movl   $0x7425,0x8(%esp)
0842f105 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842f10d +0x01d:  mov    %eax,(%esp)
0842f110 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842f115 +0x025:  movl   $0x1,0x8(%esp)
0842f11d +0x02d:  mov    %eax,0x4(%esp)
0842f121 +0x031:  lea    -0x14(%ebp),%eax
0842f124 +0x034:  mov    %eax,(%esp)
0842f127 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842f12c +0x03c:  lea    -0x14(%ebp),%eax
0842f12f +0x03f:  mov    %eax,(%esp)
0842f132 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f137 +0x047:  movl   $0x129,0x4(%esp)
0842f13f +0x04f:  mov    %eax,(%esp)
0842f142 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f147 +0x057:  lea    -0x14(%ebp),%eax
0842f14a +0x05a:  mov    %eax,(%esp)
0842f14d +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f152 +0x062:  mov    0x10(%ebp),%edx
0842f155 +0x065:  mov    %edx,0x4(%esp)
0842f159 +0x069:  mov    %eax,(%esp)
0842f15c +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f161 +0x071:  cmpl   $0x64,0xc(%ebp)
0842f165 +0x075:  jle    0842f1b8 <+0xc8>
0842f167 +0x077:  movl   $0x64,0xc(%ebp)
0842f16e +0x07e:  movl   $0x0,0x4(%esp)
0842f176 +0x086:  mov    0x8(%ebp),%eax
0842f179 +0x089:  mov    %eax,(%esp)
0842f17c +0x08c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f181 +0x091:  mov    0xc(%ebp),%edx
0842f184 +0x094:  mov    %edx,0x18(%esp)
0842f188 +0x098:  mov    %eax,0x14(%esp)
0842f18c +0x09c:  movl   $"School event point error (m_id: %s)(point: %d)",0x10(%esp)
0842f194 +0x0a4:  movl   $0x742d,0xc(%esp)
0842f19c +0x0ac:  movl   $&_ZZN20DB_UpdateSchoolPoint11makeRequestEjiiE19__PRETTY_FUNCTION__,0x8(%esp)
0842f1a4 +0x0b4:  movl   $"DBThread.cpp",0x4(%esp)
0842f1ac +0x0bc:  movl   $0x1,(%esp)
0842f1b3 +0x0c3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0842f1b8 +0x0c8:  lea    -0x14(%ebp),%eax
0842f1bb +0x0cb:  mov    %eax,(%esp)
0842f1be +0x0ce:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842f1c3 +0x0d3:  mov    %eax,(%esp)
0842f1c6 +0x0d6:  call   08452a6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5684>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5684
0842f1cb +0x0db:  mov    %eax,-0xc(%ebp)
0842f1ce +0x0de:  mov    -0xc(%ebp),%eax
0842f1d1 +0x0e1:  mov    0x8(%ebp),%edx
0842f1d4 +0x0e4:  mov    %edx,(%eax)
0842f1d6 +0x0e6:  mov    -0xc(%ebp),%eax
0842f1d9 +0x0e9:  mov    0xc(%ebp),%edx
0842f1dc +0x0ec:  mov    %edx,0x4(%eax)
0842f1df +0x0ef:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f1e4 +0x0f4:  lea    -0x14(%ebp),%edx
0842f1e7 +0x0f7:  mov    %edx,0x8(%esp)
0842f1eb +0x0fb:  movl   $0x2,0x4(%esp)
0842f1f3 +0x103:  mov    %eax,(%esp)
0842f1f6 +0x106:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f1fb +0x10b:  jmp    0842f218 <+0x128>
0842f1fd +0x10d:  mov    %edx,%ebx
0842f1ff +0x10f:  mov    %eax,%esi
0842f201 +0x111:  lea    -0x14(%ebp),%eax
0842f204 +0x114:  mov    %eax,(%esp)
0842f207 +0x117:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f20c +0x11c:  mov    %esi,%eax
0842f20e +0x11e:  mov    %ebx,%edx
0842f210 +0x120:  mov    %eax,(%esp)
0842f213 +0x123:  call   08ae3750 <_Unwind_Resume>
0842f218 +0x128:  lea    -0x14(%ebp),%eax
0842f21b +0x12b:  mov    %eax,(%esp)
0842f21e +0x12e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f223 +0x133:  add    $0x30,%esp
0842f226 +0x136:  pop    %ebx
0842f227 +0x137:  pop    %esi
0842f228 +0x138:  pop    %ebp
0842f229 +0x139:  ret
```

## 反编译 C

```c
// DB_UpdateSchoolPoint::makeRequest @ 0x842f0f0

/* DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int) */

void DB_UpdateSchoolPoint::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_18 [8];
  SIG_UPDATE_SCHOOL_POINT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7425);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f142 to 0842f1fa has its CatchHandler @ 0842f1fd */
  CStreamGuard::operator<<(pCVar2,0x129);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_3);
  if (100 < param_2) {
    param_2 = 100;
    uVar3 = NumberToString(param_1,0);
    LogManager::logFormat
              (1,"DBThread.cpp",
               "static void DB_UpdateSchoolPoint::makeRequest(memberIdentificationNumber_t, int, int)"
               ,0x742d,"School event point error (m_id: %s)(point: %d)",uVar3,100);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SCHOOL_POINT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(int *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

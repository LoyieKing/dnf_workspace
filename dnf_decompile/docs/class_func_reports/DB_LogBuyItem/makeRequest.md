# makeRequest

`_ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE`

`DB_LogBuyItem::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)`

| 类 | 地址 |
|---|---|
| `DB_LogBuyItem` | `0x0812887e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812887e  _ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE
#           DB_LogBuyItem::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)
# range [0x0812887e, 0x08128a34]
0812887e +0x000:  push   %ebp
0812887f +0x001:  mov    %esp,%ebp
08128881 +0x003:  push   %esi
08128882 +0x004:  push   %ebx
08128883 +0x005:  sub    $0x40,%esp
08128886 +0x008:  cmpl   $0x0,0xc(%ebp)
0812888a +0x00c:  je     08128a2d <+0x1af>
08128890 +0x012:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08128895 +0x017:  movl   $0x59b,0x8(%esp)
0812889d +0x01f:  movl   $"localchina/localchina_DBThread.cpp",0x4(%esp)
081288a5 +0x027:  mov    %eax,(%esp)
081288a8 +0x02a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081288ad +0x02f:  movl   $0x1,0x8(%esp)
081288b5 +0x037:  mov    %eax,0x4(%esp)
081288b9 +0x03b:  lea    -0x20(%ebp),%eax
081288bc +0x03e:  mov    %eax,(%esp)
081288bf +0x041:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081288c4 +0x046:  lea    -0x20(%ebp),%eax
081288c7 +0x049:  mov    %eax,(%esp)
081288ca +0x04c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081288cf +0x051:  movl   $0x251,0x4(%esp)
081288d7 +0x059:  mov    %eax,(%esp)
081288da +0x05c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081288df +0x061:  lea    -0x20(%ebp),%eax
081288e2 +0x064:  mov    %eax,(%esp)
081288e5 +0x067:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081288ea +0x06c:  movl   $0xffffffff,0x4(%esp)
081288f2 +0x074:  mov    %eax,(%esp)
081288f5 +0x077:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081288fa +0x07c:  lea    -0x20(%ebp),%eax
081288fd +0x07f:  mov    %eax,(%esp)
08128900 +0x082:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128905 +0x087:  mov    0x8(%ebp),%edx
08128908 +0x08a:  mov    %edx,0x4(%esp)
0812890c +0x08e:  mov    %eax,(%esp)
0812890f +0x091:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08128914 +0x096:  lea    -0x20(%ebp),%eax
08128917 +0x099:  mov    %eax,(%esp)
0812891a +0x09c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0812891f +0x0a1:  mov    0xc(%ebp),%edx
08128922 +0x0a4:  mov    %edx,0x4(%esp)
08128926 +0x0a8:  mov    %eax,(%esp)
08128929 +0x0ab:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0812892e +0x0b0:  lea    -0x20(%ebp),%eax
08128931 +0x0b3:  mov    %eax,(%esp)
08128934 +0x0b6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128939 +0x0bb:  mov    0x10(%ebp),%edx
0812893c +0x0be:  mov    %edx,0x4(%esp)
08128940 +0x0c2:  mov    %eax,(%esp)
08128943 +0x0c5:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08128948 +0x0ca:  lea    -0x20(%ebp),%eax
0812894b +0x0cd:  mov    %eax,(%esp)
0812894e +0x0d0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128953 +0x0d5:  mov    0x14(%ebp),%edx
08128956 +0x0d8:  mov    %edx,0x4(%esp)
0812895a +0x0dc:  mov    %eax,(%esp)
0812895d +0x0df:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08128962 +0x0e4:  mov    0x18(%ebp),%ebx
08128965 +0x0e7:  lea    -0x20(%ebp),%eax
08128968 +0x0ea:  mov    %eax,(%esp)
0812896b +0x0ed:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128970 +0x0f2:  mov    %ebx,0x4(%esp)
08128974 +0x0f6:  mov    %eax,(%esp)
08128977 +0x0f9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0812897c +0x0fe:  mov    0x18(%ebp),%esi
0812897f +0x101:  movl   $0x0,0x4(%esp)
08128987 +0x109:  mov    0x8(%ebp),%eax
0812898a +0x10c:  mov    %eax,(%esp)
0812898d +0x10f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08128992 +0x114:  mov    %eax,%ebx
08128994 +0x116:  movl   $0x0,0xc(%esp)
0812899c +0x11e:  movl   $0x5af,0x8(%esp)
081289a4 +0x126:  movl   $&_ZZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
081289ac +0x12e:  lea    -0x18(%ebp),%eax
081289af +0x131:  mov    %eax,(%esp)
081289b2 +0x134:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081289b7 +0x139:  mov    %esi,0x18(%esp)
081289bb +0x13d:  mov    0x14(%ebp),%eax
081289be +0x140:  mov    %eax,0x14(%esp)
081289c2 +0x144:  mov    0x10(%ebp),%eax
081289c5 +0x147:  mov    %eax,0x10(%esp)
081289c9 +0x14b:  mov    0xc(%ebp),%eax
081289cc +0x14e:  mov    %eax,0xc(%esp)
081289d0 +0x152:  mov    %ebx,0x8(%esp)
081289d4 +0x156:  movl   $"DB_LogBuyItem::makeRequest m_id=%s nCharacNo=%d nItemID=%u nCount=%u nType=%d",0x4(%esp)
081289dc +0x15e:  lea    -0x18(%ebp),%eax
081289df +0x161:  mov    %eax,(%esp)
081289e2 +0x164:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081289e7 +0x169:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081289ec +0x16e:  lea    -0x20(%ebp),%edx
081289ef +0x171:  mov    %edx,0x8(%esp)
081289f3 +0x175:  movl   $0x4,0x4(%esp)
081289fb +0x17d:  mov    %eax,(%esp)
081289fe +0x180:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08128a03 +0x185:  jmp    08128a20 <+0x1a2>
08128a05 +0x187:  mov    %edx,%ebx
08128a07 +0x189:  mov    %eax,%esi
08128a09 +0x18b:  lea    -0x20(%ebp),%eax
08128a0c +0x18e:  mov    %eax,(%esp)
08128a0f +0x191:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08128a14 +0x196:  mov    %esi,%eax
08128a16 +0x198:  mov    %ebx,%edx
08128a18 +0x19a:  mov    %eax,(%esp)
08128a1b +0x19d:  call   08ae3750 <_Unwind_Resume>
08128a20 +0x1a2:  lea    -0x20(%ebp),%eax
08128a23 +0x1a5:  mov    %eax,(%esp)
08128a26 +0x1a8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08128a2b +0x1ad:  jmp    08128a2e <+0x1b0>
08128a2d +0x1af:  nop
08128a2e +0x1b0:  add    $0x40,%esp
08128a31 +0x1b3:  pop    %ebx
08128a32 +0x1b4:  pop    %esi
08128a33 +0x1b5:  pop    %ebp
08128a34 +0x1b6:  ret
```

## 反编译 C

```c
// DB_LogBuyItem::makeRequest @ 0x812887e

/* DB_LogBuyItem::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int,
   ENUM_DBLOG_ITEM_TYPE) */

void DB_LogBuyItem::makeRequest(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_24 [8];
  cMyTrace local_1c [16];
  
  if (param_2 != 0) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",
                                 0x59b);
    CStreamGuard::CStreamGuard(local_24,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081288da to 08128a02 has its CatchHandler @ 08128a05 */
    CStreamGuard::operator<<(pCVar2,0x251);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_3);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_4);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_5);
    uVar3 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_1c,
                       "static void DB_LogBuyItem::makeRequest(memberIdentificationNumber_t, unsigned int, unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)"
                       ,0x5af,0);
    cMyTrace::operator()
              (local_1c,
               "DB_LogBuyItem::makeRequest m_id=%s nCharacNo=%d nItemID=%u nCount=%u nType=%d",uVar3
               ,param_2,param_3,param_4,param_5);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}
```

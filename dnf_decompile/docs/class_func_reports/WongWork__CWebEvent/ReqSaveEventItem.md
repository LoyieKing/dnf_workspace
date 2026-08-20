# ReqSaveEventItem

`_ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb`

`WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c1910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1910  _ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb
#           WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool)
# range [0x086c1910, 0x086c1a2d]
086c1910 +0x000:  push   %ebp
086c1911 +0x001:  mov    %esp,%ebp
086c1913 +0x003:  push   %esi
086c1914 +0x004:  push   %ebx
086c1915 +0x005:  sub    $0x30,%esp
086c1918 +0x008:  mov    0x20(%ebp),%eax
086c191b +0x00b:  mov    %al,-0x1c(%ebp)
086c191e +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086c1923 +0x013:  movl   $0xa0,0x8(%esp)
086c192b +0x01b:  movl   $"WebEvent.cpp",0x4(%esp)
086c1933 +0x023:  mov    %eax,(%esp)
086c1936 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086c193b +0x02b:  movl   $0x1,0x8(%esp)
086c1943 +0x033:  mov    %eax,0x4(%esp)
086c1947 +0x037:  lea    -0x14(%ebp),%eax
086c194a +0x03a:  mov    %eax,(%esp)
086c194d +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086c1952 +0x042:  lea    -0x14(%ebp),%eax
086c1955 +0x045:  mov    %eax,(%esp)
086c1958 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086c195d +0x04d:  movl   $0x4c,0x4(%esp)
086c1965 +0x055:  mov    %eax,(%esp)
086c1968 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086c196d +0x05d:  lea    -0x14(%ebp),%eax
086c1970 +0x060:  mov    %eax,(%esp)
086c1973 +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086c1978 +0x068:  movl   $0xffffffff,0x4(%esp)
086c1980 +0x070:  mov    %eax,(%esp)
086c1983 +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086c1988 +0x078:  lea    -0x14(%ebp),%eax
086c198b +0x07b:  mov    %eax,(%esp)
086c198e +0x07e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086c1993 +0x083:  mov    %eax,(%esp)
086c1996 +0x086:  call   086c1c7e <_GLOBAL__I__ZN8WongWork9CWebEvent14m_strEventNameE+0x1d>  ; global constructors keyed to WongWork::CWebEvent::m_strEventName+0x1d
086c199b +0x08b:  mov    %eax,-0xc(%ebp)
086c199e +0x08e:  mov    -0xc(%ebp),%eax
086c19a1 +0x091:  mov    0x8(%ebp),%edx
086c19a4 +0x094:  mov    %edx,(%eax)
086c19a6 +0x096:  mov    -0xc(%ebp),%eax
086c19a9 +0x099:  mov    0xc(%ebp),%edx
086c19ac +0x09c:  mov    %edx,0x4(%eax)
086c19af +0x09f:  mov    -0xc(%ebp),%eax
086c19b2 +0x0a2:  mov    0x10(%ebp),%edx
086c19b5 +0x0a5:  mov    %edx,0xc(%eax)
086c19b8 +0x0a8:  mov    -0xc(%ebp),%eax
086c19bb +0x0ab:  mov    0x14(%ebp),%edx
086c19be +0x0ae:  mov    %edx,0x10(%eax)
086c19c1 +0x0b1:  mov    -0xc(%ebp),%eax
086c19c4 +0x0b4:  mov    0x18(%ebp),%edx
086c19c7 +0x0b7:  mov    %edx,0x8(%eax)
086c19ca +0x0ba:  mov    -0xc(%ebp),%eax
086c19cd +0x0bd:  mov    0x1c(%ebp),%edx
086c19d0 +0x0c0:  mov    %edx,0x14(%eax)
086c19d3 +0x0c3:  mov    -0xc(%ebp),%eax
086c19d6 +0x0c6:  movzbl -0x1c(%ebp),%edx
086c19da +0x0ca:  mov    %dl,0x18(%eax)
086c19dd +0x0cd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086c19e2 +0x0d2:  lea    -0x14(%ebp),%edx
086c19e5 +0x0d5:  mov    %edx,0x8(%esp)
086c19e9 +0x0d9:  movl   $0x2,0x4(%esp)
086c19f1 +0x0e1:  mov    %eax,(%esp)
086c19f4 +0x0e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086c19f9 +0x0e9:  mov    $0x1,%ebx
086c19fe +0x0ee:  lea    -0x14(%ebp),%eax
086c1a01 +0x0f1:  mov    %eax,(%esp)
086c1a04 +0x0f4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086c1a09 +0x0f9:  mov    %ebx,%eax
086c1a0b +0x0fb:  add    $0x30,%esp
086c1a0e +0x0fe:  pop    %ebx
086c1a0f +0x0ff:  pop    %esi
086c1a10 +0x100:  pop    %ebp
086c1a11 +0x101:  ret
086c1a12 +0x102:  mov    %edx,%ebx
086c1a14 +0x104:  mov    %eax,%esi
086c1a16 +0x106:  lea    -0x14(%ebp),%eax
086c1a19 +0x109:  mov    %eax,(%esp)
086c1a1c +0x10c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086c1a21 +0x111:  mov    %esi,%eax
086c1a23 +0x113:  mov    %ebx,%edx
086c1a25 +0x115:  mov    %eax,(%esp)
086c1a28 +0x118:  call   08ae3750 <_Unwind_Resume>
086c1a2d +0x11d:  nop
```

## 反编译 C

```c
// WongWork::CWebEvent::ReqSaveEventItem @ 0x86c1910

/* WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bool) */

undefined4
WongWork::CWebEvent::ReqSaveEventItem
          (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          bool param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_EVENTITEM *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"WebEvent.cpp",0xa0);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086c1968 to 086c19f8 has its CatchHandler @ 086c1a12 */
  CStreamGuard::operator<<(pCVar2,0x4c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_EVENTITEM>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 0xc) = param_3;
  *(uint *)(local_10 + 0x10) = param_4;
  *(uint *)(local_10 + 8) = param_5;
  *(uint *)(local_10 + 0x14) = param_6;
  local_10[0x18] = (SIG_SAVE_EVENTITEM)param_7;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```

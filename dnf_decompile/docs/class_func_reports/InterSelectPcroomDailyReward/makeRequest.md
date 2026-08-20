# makeRequest

`_ZN28InterSelectPcroomDailyReward11makeRequestEijc`

`InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `InterSelectPcroomDailyReward` | `0x0816179c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816179c  _ZN28InterSelectPcroomDailyReward11makeRequestEijc
#           InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char)
# range [0x0816179c, 0x081618a5]
0816179c +0x000:  push   %ebp
0816179d +0x001:  mov    %esp,%ebp
0816179f +0x003:  push   %esi
081617a0 +0x004:  push   %ebx
081617a1 +0x005:  sub    $0x40,%esp
081617a4 +0x008:  mov    0x10(%ebp),%eax
081617a7 +0x00b:  mov    %al,-0x1c(%ebp)
081617aa +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081617af +0x013:  movl   $0x1a8,0x8(%esp)
081617b7 +0x01b:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
081617bf +0x023:  mov    %eax,(%esp)
081617c2 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081617c7 +0x02b:  movl   $0x1,0x8(%esp)
081617cf +0x033:  mov    %eax,0x4(%esp)
081617d3 +0x037:  lea    -0x14(%ebp),%eax
081617d6 +0x03a:  mov    %eax,(%esp)
081617d9 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081617de +0x042:  mov    0x8(%ebp),%eax
081617e1 +0x045:  mov    %eax,0x8(%esp)
081617e5 +0x049:  movl   $0xd,0x4(%esp)
081617ed +0x051:  lea    -0x14(%ebp),%eax
081617f0 +0x054:  mov    %eax,(%esp)
081617f3 +0x057:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
081617f8 +0x05c:  lea    -0x14(%ebp),%eax
081617fb +0x05f:  mov    %eax,(%esp)
081617fe +0x062:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08161803 +0x067:  mov    %eax,(%esp)
08161806 +0x06a:  call   08162818 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa86>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa86
0816180b +0x06f:  mov    %eax,-0xc(%ebp)
0816180e +0x072:  cmpl   $0x0,-0xc(%ebp)
08161812 +0x076:  jne    08161849 <+0xad>
08161814 +0x078:  mov    0xc(%ebp),%eax
08161817 +0x07b:  mov    %eax,0x14(%esp)
0816181b +0x07f:  movl   $"[Taiwan, pcroom] m_id:%d",0x10(%esp)
08161823 +0x087:  movl   $0x1ad,0xc(%esp)
0816182b +0x08f:  movl   $&_ZZN28InterSelectPcroomDailyReward11makeRequestEijcE19__PRETTY_FUNCTION__,0x8(%esp)
08161833 +0x097:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
0816183b +0x09f:  movl   $0x1,(%esp)
08161842 +0x0a6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08161847 +0x0ab:  jmp    08161894 <+0xf8>
08161849 +0x0ad:  mov    -0xc(%ebp),%eax
0816184c +0x0b0:  mov    0xc(%ebp),%edx
0816184f +0x0b3:  mov    %edx,(%eax)
08161851 +0x0b5:  mov    -0xc(%ebp),%eax
08161854 +0x0b8:  movzbl -0x1c(%ebp),%edx
08161858 +0x0bc:  mov    %dl,0x4(%eax)
0816185b +0x0bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08161860 +0x0c4:  lea    -0x14(%ebp),%edx
08161863 +0x0c7:  mov    %edx,0x8(%esp)
08161867 +0x0cb:  movl   $0x1,0x4(%esp)
0816186f +0x0d3:  mov    %eax,(%esp)
08161872 +0x0d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08161877 +0x0db:  jmp    08161894 <+0xf8>
08161879 +0x0dd:  mov    %edx,%ebx
0816187b +0x0df:  mov    %eax,%esi
0816187d +0x0e1:  lea    -0x14(%ebp),%eax
08161880 +0x0e4:  mov    %eax,(%esp)
08161883 +0x0e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08161888 +0x0ec:  mov    %esi,%eax
0816188a +0x0ee:  mov    %ebx,%edx
0816188c +0x0f0:  mov    %eax,(%esp)
0816188f +0x0f3:  call   08ae3750 <_Unwind_Resume>
08161894 +0x0f8:  lea    -0x14(%ebp),%eax
08161897 +0x0fb:  mov    %eax,(%esp)
0816189a +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816189f +0x103:  add    $0x40,%esp
081618a2 +0x106:  pop    %ebx
081618a3 +0x107:  pop    %esi
081618a4 +0x108:  pop    %ebp
081618a5 +0x109:  ret
```

## 反编译 C

```c
// InterSelectPcroomDailyReward::makeRequest @ 0x816179c

/* InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char) */

void InterSelectPcroomDailyReward::makeRequest(int param_1,uint param_2,char param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x1a8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 081617f3 to 08161876 has its CatchHandler @ 08161879 */
  Taiwan::internal_stream(local_18,0xd,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectPcroomDailyReward::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectPcroomDailyReward::makeRequest(int, memberIdentificationNumber_t, char)"
               ,0x1ad,"[Taiwan, pcroom] m_id:%d",param_2);
  }
  else {
    *(uint *)local_10 = param_2;
    local_10[4] = (Msg)param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

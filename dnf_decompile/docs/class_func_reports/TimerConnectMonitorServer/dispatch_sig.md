# dispatch_sig

`_ZN25TimerConnectMonitorServer12dispatch_sigEiij`

`TimerConnectMonitorServer::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerConnectMonitorServer` | `0x086380bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086380bc  _ZN25TimerConnectMonitorServer12dispatch_sigEiij
#           TimerConnectMonitorServer::dispatch_sig(int, int, unsigned int)
# range [0x086380bc, 0x0863819f]
086380bc +0x00:  push   %ebp
086380bd +0x01:  mov    %esp,%ebp
086380bf +0x03:  push   %esi
086380c0 +0x04:  push   %ebx
086380c1 +0x05:  sub    $0x20,%esp
086380c4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086380c9 +0x0d:  movl   $0xeaa,0x8(%esp)
086380d1 +0x15:  movl   $"TimerDispatcher.cpp",0x4(%esp)
086380d9 +0x1d:  mov    %eax,(%esp)
086380dc +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086380e1 +0x25:  movl   $0x1,0x8(%esp)
086380e9 +0x2d:  mov    %eax,0x4(%esp)
086380ed +0x31:  lea    -0x14(%ebp),%eax
086380f0 +0x34:  mov    %eax,(%esp)
086380f3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086380f8 +0x3c:  lea    -0x14(%ebp),%eax
086380fb +0x3f:  mov    %eax,(%esp)
086380fe +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08638103 +0x47:  movl   $0x121,0x4(%esp)
0863810b +0x4f:  mov    %eax,(%esp)
0863810e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08638113 +0x57:  lea    -0x14(%ebp),%eax
08638116 +0x5a:  mov    %eax,(%esp)
08638119 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0863811e +0x62:  movl   $0xffffffff,0x4(%esp)
08638126 +0x6a:  mov    %eax,(%esp)
08638129 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0863812e +0x72:  lea    -0x14(%ebp),%eax
08638131 +0x75:  mov    %eax,(%esp)
08638134 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08638139 +0x7d:  mov    %eax,(%esp)
0863813c +0x80:  call   0863d2ee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ff
08638141 +0x85:  mov    %eax,-0xc(%ebp)
08638144 +0x88:  mov    0x10(%ebp),%eax
08638147 +0x8b:  mov    %eax,%edx
08638149 +0x8d:  mov    -0xc(%ebp),%eax
0863814c +0x90:  mov    %dl,0xa(%eax)
0863814f +0x93:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08638154 +0x98:  lea    -0x14(%ebp),%edx
08638157 +0x9b:  mov    %edx,0x8(%esp)
0863815b +0x9f:  movl   $0x1,0x4(%esp)
08638163 +0xa7:  mov    %eax,(%esp)
08638166 +0xaa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0863816b +0xaf:  mov    $0x1,%ebx
08638170 +0xb4:  lea    -0x14(%ebp),%eax
08638173 +0xb7:  mov    %eax,(%esp)
08638176 +0xba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0863817b +0xbf:  mov    %ebx,%eax
0863817d +0xc1:  add    $0x20,%esp
08638180 +0xc4:  pop    %ebx
08638181 +0xc5:  pop    %esi
08638182 +0xc6:  pop    %ebp
08638183 +0xc7:  ret
08638184 +0xc8:  mov    %edx,%ebx
08638186 +0xca:  mov    %eax,%esi
08638188 +0xcc:  lea    -0x14(%ebp),%eax
0863818b +0xcf:  mov    %eax,(%esp)
0863818e +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08638193 +0xd7:  mov    %esi,%eax
08638195 +0xd9:  mov    %ebx,%edx
08638197 +0xdb:  mov    %eax,(%esp)
0863819a +0xde:  call   08ae3750 <_Unwind_Resume>
0863819f +0xe3:  nop
```

## 反编译 C

```c
// TimerConnectMonitorServer::dispatch_sig @ 0x86380bc

/* TimerConnectMonitorServer::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectMonitorServer::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  Packet_Tcp_Server_Connect *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xeaa);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0863810e to 0863816a has its CatchHandler @ 08638184 */
  CStreamGuard::operator<<(pCVar2,0x121);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Packet_Tcp_Server_Connect>(pCVar2);
  local_10[10] = SUB41(param_3,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```

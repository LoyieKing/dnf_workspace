# dispatch_sig

`_ZN25TimerDungeonDataStatistic12dispatch_sigEiij`

`TimerDungeonDataStatistic::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDungeonDataStatistic` | `0x0863672a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863672a  _ZN25TimerDungeonDataStatistic12dispatch_sigEiij
#           TimerDungeonDataStatistic::dispatch_sig(int, int, unsigned int)
# range [0x0863672a, 0x08636855]
0863672a +0x000:  push   %ebp
0863672b +0x001:  mov    %esp,%ebp
0863672d +0x003:  push   %esi
0863672e +0x004:  push   %ebx
0863672f +0x005:  sub    $0x20,%esp
08636732 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08636737 +0x00d:  movl   $0xb1a,0x8(%esp)
0863673f +0x015:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08636747 +0x01d:  mov    %eax,(%esp)
0863674a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0863674f +0x025:  movl   $0x1,0x8(%esp)
08636757 +0x02d:  mov    %eax,0x4(%esp)
0863675b +0x031:  lea    -0x18(%ebp),%eax
0863675e +0x034:  mov    %eax,(%esp)
08636761 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08636766 +0x03c:  lea    -0x18(%ebp),%eax
08636769 +0x03f:  mov    %eax,(%esp)
0863676c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08636771 +0x047:  movl   $0xaf,0x4(%esp)
08636779 +0x04f:  mov    %eax,(%esp)
0863677c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08636781 +0x057:  lea    -0x18(%ebp),%eax
08636784 +0x05a:  mov    %eax,(%esp)
08636787 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0863678c +0x062:  movl   $0xffffffff,0x4(%esp)
08636794 +0x06a:  mov    %eax,(%esp)
08636797 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0863679c +0x072:  lea    -0x18(%ebp),%eax
0863679f +0x075:  mov    %eax,(%esp)
086367a2 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086367a7 +0x07d:  mov    %eax,(%esp)
086367aa +0x080:  call   0863d27c <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x178d>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x178d
086367af +0x085:  mov    %eax,-0x10(%ebp)
086367b2 +0x088:  movl   $0x80,0x8(%esp)
086367ba +0x090:  movl   $0x0,0x4(%esp)
086367c2 +0x098:  mov    -0x10(%ebp),%eax
086367c5 +0x09b:  mov    %eax,(%esp)
086367c8 +0x09e:  call   0807dcc0 <_init+0x5b8>
086367cd +0x0a3:  mov    -0x10(%ebp),%eax
086367d0 +0x0a6:  movl   $0x3,(%eax)
086367d6 +0x0ac:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086367db +0x0b1:  lea    -0x18(%ebp),%edx
086367de +0x0b4:  mov    %edx,0x8(%esp)
086367e2 +0x0b8:  movl   $0x4,0x4(%esp)
086367ea +0x0c0:  mov    %eax,(%esp)
086367ed +0x0c3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086367f2 +0x0c8:  call   0860f8ad <_Z34GetInstanceVendingMachineStatisticv>  ; GetInstanceVendingMachineStatistic()
086367f7 +0x0cd:  mov    %eax,(%esp)
086367fa +0x0d0:  call   0860f6de <_ZN24CVendingMachineStatistic16updateDataIntoDBEv>  ; CVendingMachineStatistic::updateDataIntoDB()
086367ff +0x0d5:  mov    0x8(%ebp),%eax
08636802 +0x0d8:  mov    %eax,(%esp)
08636805 +0x0db:  call   08636856 <_ZN25TimerDungeonDataStatistic15RegistNextTimerEv>  ; TimerDungeonDataStatistic::RegistNextTimer()
0863680a +0x0e0:  mov    %al,-0x9(%ebp)
0863680d +0x0e3:  movzbl -0x9(%ebp),%eax
08636811 +0x0e7:  xor    $0x1,%eax
08636814 +0x0ea:  test   %al,%al
08636816 +0x0ec:  je     0863681f <+0xf5>
08636818 +0x0ee:  mov    $0x0,%ebx
0863681d +0x0f3:  jmp    08636841 <+0x117>
0863681f +0x0f5:  mov    $0x1,%ebx
08636824 +0x0fa:  jmp    08636841 <+0x117>
08636826 +0x0fc:  mov    %edx,%ebx
08636828 +0x0fe:  mov    %eax,%esi
0863682a +0x100:  lea    -0x18(%ebp),%eax
0863682d +0x103:  mov    %eax,(%esp)
08636830 +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08636835 +0x10b:  mov    %esi,%eax
08636837 +0x10d:  mov    %ebx,%edx
08636839 +0x10f:  mov    %eax,(%esp)
0863683c +0x112:  call   08ae3750 <_Unwind_Resume>
08636841 +0x117:  lea    -0x18(%ebp),%eax
08636844 +0x11a:  mov    %eax,(%esp)
08636847 +0x11d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0863684c +0x122:  mov    %ebx,%eax
0863684e +0x124:  add    $0x20,%esp
08636851 +0x127:  pop    %ebx
08636852 +0x128:  pop    %esi
08636853 +0x129:  pop    %ebp
08636854 +0x12a:  ret
08636855 +0x12b:  nop
```

## 反编译 C

```c
// TimerDungeonDataStatistic::dispatch_sig @ 0x863672a

/* TimerDungeonDataStatistic::dispatch_sig(int, int, unsigned int) */

bool TimerDungeonDataStatistic::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CVendingMachineStatistic *this;
  bool bVar3;
  CStreamGuard local_1c [8];
  SIG_DUNGEON_DATA_STATISTIC *local_14;
  char local_d;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xb1a);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0863677c to 08636809 has its CatchHandler @ 08636826 */
  CStreamGuard::operator<<(pCVar2,0xaf);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_DUNGEON_DATA_STATISTIC>(pCVar2);
  memset(local_14,0,0x80);
  *(undefined4 *)local_14 = 3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
  this = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
  CVendingMachineStatistic::updateDataIntoDB(this);
  local_d = RegistNextTimer();
  bVar3 = local_d == '\x01';
  CStreamGuard::~CStreamGuard(local_1c);
  return bVar3;
}
```

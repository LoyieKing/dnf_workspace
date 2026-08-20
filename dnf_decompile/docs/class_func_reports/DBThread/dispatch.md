# dispatch

`_ZN8DBThread8dispatchEPv`

`DBThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff786  _ZN8DBThread8dispatchEPv
#           DBThread::dispatch(void*)
# range [0x083ff786, 0x083ff967]
083ff786 +0x000:  push   %ebp
083ff787 +0x001:  mov    %esp,%ebp
083ff789 +0x003:  push   %edi
083ff78a +0x004:  push   %esi
083ff78b +0x005:  push   %ebx
083ff78c +0x006:  sub    $0x6c,%esp
083ff78f +0x009:  movl   $0xd54,(%esp)
083ff796 +0x010:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff79b +0x015:  mov    %eax,%ebx
083ff79d +0x017:  mov    %ebx,%eax
083ff79f +0x019:  mov    %eax,(%esp)
083ff7a2 +0x01c:  call   083fbfc6 <_ZN6DBTaskC1Ev>  ; DBTask::DBTask()
083ff7a7 +0x021:  jmp    083ff7c1 <+0x3b>
083ff7a9 +0x023:  mov    %edx,%esi
083ff7ab +0x025:  mov    %eax,%edi
083ff7ad +0x027:  mov    %ebx,(%esp)
083ff7b0 +0x02a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ff7b5 +0x02f:  mov    %edi,%eax
083ff7b7 +0x031:  mov    %esi,%edx
083ff7b9 +0x033:  mov    %eax,(%esp)
083ff7bc +0x036:  call   08ae3750 <_Unwind_Resume>
083ff7c1 +0x03b:  mov    %ebx,-0x2c(%ebp)
083ff7c4 +0x03e:  cmpl   $0x0,-0x2c(%ebp)
083ff7c8 +0x042:  jne    083ff7fa <+0x74>
083ff7ca +0x044:  movl   $"[DBThread::dispatch] Memory allocation fail!",0x4(%esp)
083ff7d2 +0x04c:  movl   $&_ZSt4cerr,(%esp)
083ff7d9 +0x053:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
083ff7de +0x058:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
083ff7e6 +0x060:  mov    %eax,(%esp)
083ff7e9 +0x063:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
083ff7ee +0x068:  movl   $0x0,(%esp)
083ff7f5 +0x06f:  call   0858c53a <_ZN6OS_API4ExitEi>  ; OS_API::Exit(int)
083ff7fa +0x074:  movl   $0x2,-0x28(%ebp)
083ff801 +0x07b:  mov    0x8(%ebp),%eax
083ff804 +0x07e:  mov    %eax,(%esp)
083ff807 +0x081:  call   083ff77a <_ZN8DBThread7isLogDBEv>  ; DBThread::isLogDB()
083ff80c +0x086:  test   %al,%al
083ff80e +0x088:  je     083ff819 <+0x93>
083ff810 +0x08a:  movl   $0x4,-0x28(%ebp)
083ff817 +0x091:  jmp    083ff820 <+0x9a>
083ff819 +0x093:  movl   $0x2,-0x28(%ebp)
083ff820 +0x09a:  movl   $0x4e20,0x4(%esp)
083ff828 +0x0a2:  lea    -0x48(%ebp),%eax
083ff82b +0x0a5:  mov    %eax,(%esp)
083ff82e +0x0a8:  call   0844de36 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa4c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa4c
083ff833 +0x0ad:  movl   $0x0,-0x24(%ebp)
083ff83a +0x0b4:  movl   $0x0,-0x20(%ebp)
083ff841 +0x0bb:  call   0856f974 <_ZN15message_counter13CTimeInterval6CreateEv>  ; message_counter::CTimeInterval::Create()
083ff846 +0x0c0:  mov    %eax,-0x1c(%ebp)
083ff849 +0x0c3:  movl   $0x0,-0x4c(%ebp)
083ff850 +0x0ca:  jmp    083ff901 <+0x17b>
083ff855 +0x0cf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
083ff85c +0x0d6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
083ff861 +0x0db:  mov    %eax,-0x24(%ebp)
083ff864 +0x0de:  mov    -0x1c(%ebp),%eax
083ff867 +0x0e1:  mov    (%eax),%eax
083ff869 +0x0e3:  mov    (%eax),%edx
083ff86b +0x0e5:  mov    -0x1c(%ebp),%eax
083ff86e +0x0e8:  mov    %eax,(%esp)
083ff871 +0x0eb:  call   *%edx
083ff873 +0x0ed:  movl   $0x0,-0x4c(%ebp)
083ff87a +0x0f4:  lea    -0x4c(%ebp),%eax
083ff87d +0x0f7:  mov    %eax,0x8(%esp)
083ff881 +0x0fb:  mov    -0x28(%ebp),%eax
083ff884 +0x0fe:  mov    %eax,0x4(%esp)
083ff888 +0x102:  mov    -0x2c(%ebp),%eax
083ff88b +0x105:  mov    %eax,(%esp)
083ff88e +0x108:  call   083ff1c8 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi>  ; DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)
083ff893 +0x10d:  xor    $0x1,%eax
083ff896 +0x110:  test   %al,%al
083ff898 +0x112:  jne    083ff915 <+0x18f>
083ff89a +0x114:  mov    -0x4c(%ebp),%eax
083ff89d +0x117:  test   %eax,%eax
083ff89f +0x119:  je     083ff901 <+0x17b>
083ff8a1 +0x11b:  mov    -0x1c(%ebp),%eax
083ff8a4 +0x11e:  mov    (%eax),%eax
083ff8a6 +0x120:  add    $0x4,%eax
083ff8a9 +0x123:  mov    (%eax),%edx
083ff8ab +0x125:  mov    -0x1c(%ebp),%eax
083ff8ae +0x128:  mov    %eax,(%esp)
083ff8b1 +0x12b:  call   *%edx
083ff8b3 +0x12d:  mov    -0x4c(%ebp),%ecx
083ff8b6 +0x130:  mov    %eax,0x10(%esp)
083ff8ba +0x134:  mov    %edx,0x14(%esp)
083ff8be +0x138:  movl   $0x0,0xc(%esp)
083ff8c6 +0x140:  movl   $0x0,0x8(%esp)
083ff8ce +0x148:  mov    %ecx,0x4(%esp)
083ff8d2 +0x14c:  lea    -0x48(%ebp),%eax
083ff8d5 +0x14f:  mov    %eax,(%esp)
083ff8d8 +0x152:  call   0856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>  ; message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short, long long)
083ff8dd +0x157:  mov    -0x20(%ebp),%eax
083ff8e0 +0x15a:  mov    -0x24(%ebp),%edx
083ff8e3 +0x15d:  mov    %edx,%ecx
083ff8e5 +0x15f:  sub    %eax,%ecx
083ff8e7 +0x161:  mov    %ecx,%eax
083ff8e9 +0x163:  cmp    $0x258,%eax
083ff8ee +0x168:  jle    083ff901 <+0x17b>
083ff8f0 +0x16a:  mov    -0x24(%ebp),%eax
083ff8f3 +0x16d:  mov    %eax,-0x20(%ebp)
083ff8f6 +0x170:  lea    -0x48(%ebp),%eax
083ff8f9 +0x173:  mov    %eax,(%esp)
083ff8fc +0x176:  call   0856fbb0 <_ZN15message_counter15CMessageCounter8WriteLogEv>  ; message_counter::CMessageCounter::WriteLog()
083ff901 +0x17b:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
083ff908 +0x182:  xor    $0x1,%eax
083ff90b +0x185:  test   %al,%al
083ff90d +0x187:  jne    083ff855 <+0xcf>
083ff913 +0x18d:  jmp    083ff916 <+0x190>
083ff915 +0x18f:  nop
083ff916 +0x190:  mov    -0x1c(%ebp),%eax
083ff919 +0x193:  mov    %eax,(%esp)
083ff91c +0x196:  call   0856f9b0 <_ZN15message_counter13CTimeInterval7DestoryEPS0_>  ; message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*)
083ff921 +0x19b:  mov    -0x2c(%ebp),%ebx
083ff924 +0x19e:  test   %ebx,%ebx
083ff926 +0x1a0:  je     083ff955 <+0x1cf>
083ff928 +0x1a2:  mov    %ebx,(%esp)
083ff92b +0x1a5:  call   083fbfda <_ZN6DBTaskD1Ev>  ; DBTask::~DBTask()
083ff930 +0x1aa:  mov    %ebx,(%esp)
083ff933 +0x1ad:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ff938 +0x1b2:  jmp    083ff955 <+0x1cf>
083ff93a +0x1b4:  mov    %edx,%ebx
083ff93c +0x1b6:  mov    %eax,%esi
083ff93e +0x1b8:  lea    -0x48(%ebp),%eax
083ff941 +0x1bb:  mov    %eax,(%esp)
083ff944 +0x1be:  call   0845000e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2c24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2c24
083ff949 +0x1c3:  mov    %esi,%eax
083ff94b +0x1c5:  mov    %ebx,%edx
083ff94d +0x1c7:  mov    %eax,(%esp)
083ff950 +0x1ca:  call   08ae3750 <_Unwind_Resume>
083ff955 +0x1cf:  lea    -0x48(%ebp),%eax
083ff958 +0x1d2:  mov    %eax,(%esp)
083ff95b +0x1d5:  call   0845000e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2c24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2c24
083ff960 +0x1da:  add    $0x6c,%esp
083ff963 +0x1dd:  pop    %ebx
083ff964 +0x1de:  pop    %esi
083ff965 +0x1df:  pop    %edi
083ff966 +0x1e0:  pop    %ebp
083ff967 +0x1e1:  ret
```

## 反编译 C

```c
// DBThread::dispatch @ 0x83ff786

/* DBThread::dispatch(void*) */

void DBThread::dispatch(void *param_1)

{
  char cVar1;
  DBTask *pDVar2;
  ostream *this;
  uint uVar3;
  int local_50;
  CMessageCounter local_4c [28];
  DBTask *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  CTimeInterval *local_20;
  
  pDVar2 = operator_new(0xd54);
                    /* try { // try from 083ff7a2 to 083ff7a6 has its CatchHandler @ 083ff7a9 */
  DBTask::DBTask(pDVar2);
  local_30 = pDVar2;
  if (pDVar2 == (DBTask *)0x0) {
    this = std::operator<<((ostream *)&std::cerr,"[DBThread::dispatch] Memory allocation fail!");
    std::ostream::operator<<(this,std::endl<char,std::char_traits<char>>);
    OS_API::Exit(0);
  }
  local_2c = 2;
  cVar1 = isLogDB(param_1);
  if (cVar1 == '\0') {
    local_2c = 2;
  }
  else {
    local_2c = 4;
  }
  message_counter::CMessageCounter::CMessageCounter(local_4c,20000);
  local_28 = 0;
  local_24 = 0;
                    /* try { // try from 083ff841 to 083ff92f has its CatchHandler @ 083ff93a */
  local_20 = (CTimeInterval *)message_counter::CTimeInterval::Create();
  local_50 = 0;
  while (GlobalData::s_server_stop != '\x01') {
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    (*(code *)**(undefined4 **)local_20)(local_20);
    local_50 = 0;
    cVar1 = DBTask::HandleEvents(local_30,local_2c,&local_50);
    if (cVar1 != '\x01') break;
    if (local_50 != 0) {
      uVar3 = (**(code **)(*(int *)local_20 + 4))(local_20);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_4c,(uchar)local_50,0,(ulonglong)uVar3 << 0x20);
      if (600 < local_28 - local_24) {
        local_24 = local_28;
        message_counter::CMessageCounter::WriteLog(local_4c);
      }
    }
  }
  message_counter::CTimeInterval::Destory(local_20);
  pDVar2 = local_30;
  if (local_30 != (DBTask *)0x0) {
    DBTask::~DBTask(local_30);
    operator_delete(pDVar2);
  }
  message_counter::CMessageCounter::~CMessageCounter(local_4c);
  return;
}
```

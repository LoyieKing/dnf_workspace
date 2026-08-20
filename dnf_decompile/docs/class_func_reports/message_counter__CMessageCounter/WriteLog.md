# WriteLog

`_ZN15message_counter15CMessageCounter8WriteLogEv`

`message_counter::CMessageCounter::WriteLog()`

| 类 | 地址 |
|---|---|
| `message_counter::CMessageCounter` | `0x0856fbb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856fbb0  _ZN15message_counter15CMessageCounter8WriteLogEv
#           message_counter::CMessageCounter::WriteLog()
# range [0x0856fbb0, 0x0856ff23]
0856fbb0 +0x000:  push   %ebp
0856fbb1 +0x001:  mov    %esp,%ebp
0856fbb3 +0x003:  push   %esi
0856fbb4 +0x004:  push   %ebx
0856fbb5 +0x005:  sub    $0x40,%esp
0856fbb8 +0x008:  mov    0x8(%ebp),%eax
0856fbbb +0x00b:  mov    %eax,(%esp)
0856fbbe +0x00e:  call   08570422 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x2c3>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x2c3
0856fbc3 +0x013:  test   %al,%al
0856fbc5 +0x015:  jne    0856ff19 <+0x369>
0856fbcb +0x01b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0856fbd0 +0x020:  movl   $0x63,0x8(%esp)
0856fbd8 +0x028:  movl   $"MessageCounter.cpp",0x4(%esp)
0856fbe0 +0x030:  mov    %eax,(%esp)
0856fbe3 +0x033:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0856fbe8 +0x038:  movl   $0x0,0x8(%esp)
0856fbf0 +0x040:  mov    %eax,0x4(%esp)
0856fbf4 +0x044:  lea    -0x20(%ebp),%eax
0856fbf7 +0x047:  mov    %eax,(%esp)
0856fbfa +0x04a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0856fbff +0x04f:  lea    -0x20(%ebp),%eax
0856fc02 +0x052:  mov    %eax,(%esp)
0856fc05 +0x055:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0856fc0a +0x05a:  movl   $0x26c,0x4(%esp)
0856fc12 +0x062:  mov    %eax,(%esp)
0856fc15 +0x065:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0856fc1a +0x06a:  lea    -0x20(%ebp),%eax
0856fc1d +0x06d:  mov    %eax,(%esp)
0856fc20 +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0856fc25 +0x075:  movl   $0xffffffff,0x4(%esp)
0856fc2d +0x07d:  mov    %eax,(%esp)
0856fc30 +0x080:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0856fc35 +0x085:  lea    -0x20(%ebp),%eax
0856fc38 +0x088:  mov    %eax,(%esp)
0856fc3b +0x08b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0856fc40 +0x090:  mov    %eax,(%esp)
0856fc43 +0x093:  call   08570436 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x2d7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x2d7
0856fc48 +0x098:  mov    %eax,-0x14(%ebp)
0856fc4b +0x09b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0856fc52 +0x0a2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0856fc57 +0x0a7:  mov    %eax,-0x10(%ebp)
0856fc5a +0x0aa:  mov    -0x10(%ebp),%ecx
0856fc5d +0x0ad:  mov    $0x1b4e81b5,%edx
0856fc62 +0x0b2:  mov    %ecx,%eax
0856fc64 +0x0b4:  imul   %edx
0856fc66 +0x0b6:  sar    $0x6,%edx
0856fc69 +0x0b9:  mov    %ecx,%eax
0856fc6b +0x0bb:  sar    $0x1f,%eax
0856fc6e +0x0be:  mov    %edx,%ebx
0856fc70 +0x0c0:  sub    %eax,%ebx
0856fc72 +0x0c2:  mov    %ebx,%eax
0856fc74 +0x0c4:  imul   $0x258,%eax,%eax
0856fc7a +0x0ca:  mov    %ecx,%edx
0856fc7c +0x0cc:  sub    %eax,%edx
0856fc7e +0x0ce:  mov    %edx,%eax
0856fc80 +0x0d0:  mov    %eax,-0xc(%ebp)
0856fc83 +0x0d3:  mov    -0xc(%ebp),%eax
0856fc86 +0x0d6:  sub    %eax,-0x10(%ebp)
0856fc89 +0x0d9:  mov    -0x14(%ebp),%eax
0856fc8c +0x0dc:  mov    -0x10(%ebp),%edx
0856fc8f +0x0df:  mov    %edx,(%eax)
0856fc91 +0x0e1:  mov    -0x14(%ebp),%eax
0856fc94 +0x0e4:  movl   $0x0,0x4(%eax)
0856fc9b +0x0eb:  mov    0x8(%ebp),%edx
0856fc9e +0x0ee:  lea    -0x24(%ebp),%eax
0856fca1 +0x0f1:  mov    %edx,0x4(%esp)
0856fca5 +0x0f5:  mov    %eax,(%esp)
0856fca8 +0x0f8:  call   0857044c <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x2ed>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x2ed
0856fcad +0x0fd:  sub    $0x4,%esp
0856fcb0 +0x100:  jmp    0856fe79 <+0x2c9>
0856fcb5 +0x105:  mov    -0x14(%ebp),%eax
0856fcb8 +0x108:  mov    0x4(%eax),%ebx
0856fcbb +0x10b:  lea    -0x24(%ebp),%eax
0856fcbe +0x10e:  mov    %eax,(%esp)
0856fcc1 +0x111:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fcc6 +0x116:  movzwl 0x6(%eax),%eax
0856fcca +0x11a:  movzwl %ax,%esi
0856fccd +0x11d:  lea    -0x24(%ebp),%eax
0856fcd0 +0x120:  mov    %eax,(%esp)
0856fcd3 +0x123:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fcd8 +0x128:  mov    (%eax),%eax
0856fcda +0x12a:  test   %eax,%eax
0856fcdc +0x12c:  je     0856fcf6 <+0x146>
0856fcde +0x12e:  lea    -0x24(%ebp),%eax
0856fce1 +0x131:  mov    %eax,(%esp)
0856fce4 +0x134:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fce9 +0x139:  mov    (%eax),%edx
0856fceb +0x13b:  mov    0x8(%ebp),%eax
0856fcee +0x13e:  mov    0x18(%eax),%eax
0856fcf1 +0x141:  lea    (%edx,%eax,1),%eax
0856fcf4 +0x144:  jmp    0856fcfb <+0x14b>
0856fcf6 +0x146:  mov    $0x0,%eax
0856fcfb +0x14b:  lea    (%esi,%eax,1),%edx
0856fcfe +0x14e:  mov    -0x14(%ebp),%ecx
0856fd01 +0x151:  mov    %ebx,%eax
0856fd03 +0x153:  shl    $0x2,%eax
0856fd06 +0x156:  add    %ebx,%eax
0856fd08 +0x158:  shl    $0x2,%eax
0856fd0b +0x15b:  lea    (%ecx,%eax,1),%eax
0856fd0e +0x15e:  add    $0x8,%eax
0856fd11 +0x161:  mov    %edx,(%eax)
0856fd13 +0x163:  mov    -0x14(%ebp),%eax
0856fd16 +0x166:  mov    0x4(%eax),%ebx
0856fd19 +0x169:  lea    -0x24(%ebp),%eax
0856fd1c +0x16c:  mov    %eax,(%esp)
0856fd1f +0x16f:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fd24 +0x174:  mov    0x8(%eax),%edx
0856fd27 +0x177:  mov    -0x14(%ebp),%ecx
0856fd2a +0x17a:  mov    %ebx,%eax
0856fd2c +0x17c:  shl    $0x2,%eax
0856fd2f +0x17f:  add    %ebx,%eax
0856fd31 +0x181:  shl    $0x2,%eax
0856fd34 +0x184:  lea    (%ecx,%eax,1),%eax
0856fd37 +0x187:  add    $0xc,%eax
0856fd3a +0x18a:  mov    %edx,(%eax)
0856fd3c +0x18c:  mov    -0x14(%ebp),%eax
0856fd3f +0x18f:  mov    0x4(%eax),%ebx
0856fd42 +0x192:  lea    -0x24(%ebp),%eax
0856fd45 +0x195:  mov    %eax,(%esp)
0856fd48 +0x198:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fd4d +0x19d:  mov    0x10(%eax),%edx
0856fd50 +0x1a0:  mov    0xc(%eax),%eax
0856fd53 +0x1a3:  mov    -0x14(%ebp),%esi
0856fd56 +0x1a6:  mov    %ebx,%ecx
0856fd58 +0x1a8:  shl    $0x2,%ecx
0856fd5b +0x1ab:  add    %ebx,%ecx
0856fd5d +0x1ad:  shl    $0x2,%ecx
0856fd60 +0x1b0:  mov    %eax,0x10(%ecx,%esi,1)
0856fd64 +0x1b4:  mov    %edx,0x14(%ecx,%esi,1)
0856fd68 +0x1b8:  mov    -0x14(%ebp),%eax
0856fd6b +0x1bb:  mov    0x4(%eax),%ebx
0856fd6e +0x1be:  lea    -0x24(%ebp),%eax
0856fd71 +0x1c1:  mov    %eax,(%esp)
0856fd74 +0x1c4:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fd79 +0x1c9:  fldl   0x14(%eax)
0856fd7c +0x1cc:  fnstcw -0x2a(%ebp)
0856fd7f +0x1cf:  movzwl -0x2a(%ebp),%eax
0856fd83 +0x1d3:  mov    $0xc,%ah
0856fd85 +0x1d5:  mov    %ax,-0x2c(%ebp)
0856fd89 +0x1d9:  fldcw  -0x2c(%ebp)
0856fd8c +0x1dc:  fistpl -0x30(%ebp)
0856fd8f +0x1df:  fldcw  -0x2a(%ebp)
0856fd92 +0x1e2:  mov    -0x30(%ebp),%edx
0856fd95 +0x1e5:  mov    -0x14(%ebp),%ecx
0856fd98 +0x1e8:  mov    %ebx,%eax
0856fd9a +0x1ea:  shl    $0x2,%eax
0856fd9d +0x1ed:  add    %ebx,%eax
0856fd9f +0x1ef:  shl    $0x2,%eax
0856fda2 +0x1f2:  lea    (%ecx,%eax,1),%eax
0856fda5 +0x1f5:  add    $0x18,%eax
0856fda8 +0x1f8:  mov    %edx,(%eax)
0856fdaa +0x1fa:  mov    -0x14(%ebp),%eax
0856fdad +0x1fd:  mov    0x4(%eax),%eax
0856fdb0 +0x200:  lea    0x1(%eax),%edx
0856fdb3 +0x203:  mov    -0x14(%ebp),%eax
0856fdb6 +0x206:  mov    %edx,0x4(%eax)
0856fdb9 +0x209:  mov    -0x14(%ebp),%eax
0856fdbc +0x20c:  mov    0x4(%eax),%eax
0856fdbf +0x20f:  cmp    $0x64,%eax
0856fdc2 +0x212:  jne    0856fe6e <+0x2be>
0856fdc8 +0x218:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0856fdcd +0x21d:  lea    -0x20(%ebp),%edx
0856fdd0 +0x220:  mov    %edx,0x8(%esp)
0856fdd4 +0x224:  movl   $0x4,0x4(%esp)
0856fddc +0x22c:  mov    %eax,(%esp)
0856fddf +0x22f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0856fde4 +0x234:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0856fde9 +0x239:  movl   $0x7b,0x8(%esp)
0856fdf1 +0x241:  movl   $"MessageCounter.cpp",0x4(%esp)
0856fdf9 +0x249:  mov    %eax,(%esp)
0856fdfc +0x24c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0856fe01 +0x251:  mov    %eax,0x4(%esp)
0856fe05 +0x255:  lea    -0x20(%ebp),%eax
0856fe08 +0x258:  mov    %eax,(%esp)
0856fe0b +0x25b:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0856fe10 +0x260:  lea    -0x20(%ebp),%eax
0856fe13 +0x263:  mov    %eax,(%esp)
0856fe16 +0x266:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0856fe1b +0x26b:  movl   $0x26c,0x4(%esp)
0856fe23 +0x273:  mov    %eax,(%esp)
0856fe26 +0x276:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0856fe2b +0x27b:  lea    -0x20(%ebp),%eax
0856fe2e +0x27e:  mov    %eax,(%esp)
0856fe31 +0x281:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0856fe36 +0x286:  movl   $0xffffffff,0x4(%esp)
0856fe3e +0x28e:  mov    %eax,(%esp)
0856fe41 +0x291:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0856fe46 +0x296:  lea    -0x20(%ebp),%eax
0856fe49 +0x299:  mov    %eax,(%esp)
0856fe4c +0x29c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0856fe51 +0x2a1:  mov    %eax,(%esp)
0856fe54 +0x2a4:  call   08570436 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x2d7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x2d7
0856fe59 +0x2a9:  mov    %eax,-0x14(%ebp)
0856fe5c +0x2ac:  mov    -0x14(%ebp),%eax
0856fe5f +0x2af:  mov    -0x10(%ebp),%edx
0856fe62 +0x2b2:  mov    %edx,(%eax)
0856fe64 +0x2b4:  mov    -0x14(%ebp),%eax
0856fe67 +0x2b7:  movl   $0x0,0x4(%eax)
0856fe6e +0x2be:  lea    -0x24(%ebp),%eax
0856fe71 +0x2c1:  mov    %eax,(%esp)
0856fe74 +0x2c4:  call   08570472 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x313>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x313
0856fe79 +0x2c9:  mov    0x8(%ebp),%edx
0856fe7c +0x2cc:  lea    -0x18(%ebp),%eax
0856fe7f +0x2cf:  mov    %edx,0x4(%esp)
0856fe83 +0x2d3:  mov    %eax,(%esp)
0856fe86 +0x2d6:  call   0857031c <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1bd>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1bd
0856fe8b +0x2db:  sub    $0x4,%esp
0856fe8e +0x2de:  lea    -0x18(%ebp),%eax
0856fe91 +0x2e1:  mov    %eax,0x4(%esp)
0856fe95 +0x2e5:  lea    -0x24(%ebp),%eax
0856fe98 +0x2e8:  mov    %eax,(%esp)
0856fe9b +0x2eb:  call   08570342 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1e3>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1e3
0856fea0 +0x2f0:  test   %al,%al
0856fea2 +0x2f2:  jne    0856fcb5 <+0x105>
0856fea8 +0x2f8:  mov    -0x14(%ebp),%eax
0856feab +0x2fb:  mov    0x4(%eax),%eax
0856feae +0x2fe:  test   %eax,%eax
0856feb0 +0x300:  je     0856fed0 <+0x320>
0856feb2 +0x302:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0856feb7 +0x307:  lea    -0x20(%ebp),%edx
0856feba +0x30a:  mov    %edx,0x8(%esp)
0856febe +0x30e:  movl   $0x4,0x4(%esp)
0856fec6 +0x316:  mov    %eax,(%esp)
0856fec9 +0x319:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0856fece +0x31e:  jmp    0856fee4 <+0x334>
0856fed0 +0x320:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0856fed5 +0x325:  lea    -0x20(%ebp),%edx
0856fed8 +0x328:  mov    %edx,0x4(%esp)
0856fedc +0x32c:  mov    %eax,(%esp)
0856fedf +0x32f:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0856fee4 +0x334:  mov    0x8(%ebp),%eax
0856fee7 +0x337:  mov    %eax,(%esp)
0856feea +0x33a:  call   08570490 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x331>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x331
0856feef +0x33f:  jmp    0856ff0c <+0x35c>
0856fef1 +0x341:  mov    %edx,%ebx
0856fef3 +0x343:  mov    %eax,%esi
0856fef5 +0x345:  lea    -0x20(%ebp),%eax
0856fef8 +0x348:  mov    %eax,(%esp)
0856fefb +0x34b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0856ff00 +0x350:  mov    %esi,%eax
0856ff02 +0x352:  mov    %ebx,%edx
0856ff04 +0x354:  mov    %eax,(%esp)
0856ff07 +0x357:  call   08ae3750 <_Unwind_Resume>
0856ff0c +0x35c:  lea    -0x20(%ebp),%eax
0856ff0f +0x35f:  mov    %eax,(%esp)
0856ff12 +0x362:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0856ff17 +0x367:  jmp    0856ff1a <+0x36a>
0856ff19 +0x369:  nop
0856ff1a +0x36a:  lea    -0x8(%ebp),%esp
0856ff1d +0x36d:  add    $0x0,%esp
0856ff20 +0x370:  pop    %ebx
0856ff21 +0x371:  pop    %esi
0856ff22 +0x372:  pop    %ebp
0856ff23 +0x373:  ret
```

## 反编译 C

```c
// message_counter::CMessageCounter::WriteLog @ 0x856fbb0

/* message_counter::CMessageCounter::WriteLog() */

void __thiscall message_counter::CMessageCounter::WriteLog(CMessageCounter *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  int iVar7;
  int *piVar8;
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_28 [4];
  CStreamGuard local_24 [8];
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_1c [4];
  SIG_INSERT_RESPONSE_TIME *local_18;
  int local_14;
  int local_10;
  
  cVar4 = std::
          map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
          ::empty((map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
                   *)this);
  if (cVar4 == '\0') {
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MessageCounter.cpp",99);
    CStreamGuard::CStreamGuard(local_24,pSVar5,false);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0856fc15 to 0856feee has its CatchHandler @ 0856fef1 */
    CStreamGuard::operator<<(pCVar6,0x26c);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar6,-1);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_18 = CStreamGuard::GetInBuffer<SIG_INSERT_RESPONSE_TIME>(pCVar6);
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_14 % 600;
    local_14 = local_14 - local_10;
    *(int *)local_18 = local_14;
    *(int *)(local_18 + 4) = 0;
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
      ::end(local_1c);
      cVar4 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator!=((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28,(_Rb_tree_iterator *)local_1c);
      if (cVar4 == '\0') break;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      uVar1 = *(ushort *)(iVar7 + 6);
      piVar8 = (int *)std::
                      _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                      ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                                    *)local_28);
      if (*piVar8 == 0) {
        iVar7 = 0;
      }
      else {
        piVar8 = (int *)std::
                        _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                        ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                                      *)local_28);
        iVar7 = *piVar8 + *(int *)(this + 0x18);
      }
      *(uint *)(local_18 + iVar2 * 0x14 + 8) = (uint)uVar1 + iVar7;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0xc) = *(undefined4 *)(iVar7 + 8);
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      uVar3 = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0x10) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)(local_18 + iVar2 * 0x14 + 0x14) = uVar3;
      iVar2 = *(int *)(local_18 + 4);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
              ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                            *)local_28);
      *(int *)(local_18 + iVar2 * 0x14 + 0x18) = (int)ROUND(*(double *)(iVar7 + 0x14));
      *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + 1;
      if (*(int *)(local_18 + 4) == 100) {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
        pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MessageCounter.cpp",0x7b);
        CStreamGuard::Set(local_24,pSVar5);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,0x26c);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_18 = CStreamGuard::GetInBuffer<SIG_INSERT_RESPONSE_TIME>(pCVar6);
        *(int *)local_18 = local_14;
        *(undefined4 *)(local_18 + 4) = 0;
      }
      std::
      _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
      ::operator++((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                    *)local_28);
    }
    if (*(int *)(local_18 + 4) == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,local_24);
    }
    else {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
    }
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::clear((map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}
```

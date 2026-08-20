# DeleteChannel

`_ZN9GameWorld13DeleteChannelEi17ENUM_SERVER_GROUP`

`GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cbaba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cbaba  _ZN9GameWorld13DeleteChannelEi17ENUM_SERVER_GROUP
#           GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP)
# range [0x086cbaba, 0x086cbbf5]
086cbaba +0x000:  push   %ebp
086cbabb +0x001:  mov    %esp,%ebp
086cbabd +0x003:  push   %esi
086cbabe +0x004:  push   %ebx
086cbabf +0x005:  sub    $0x40,%esp
086cbac2 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cbac7 +0x00d:  movl   $0x11bc,0x8(%esp)
086cbacf +0x015:  movl   $"world.cpp",0x4(%esp)
086cbad7 +0x01d:  mov    %eax,(%esp)
086cbada +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cbadf +0x025:  movl   $0x1,0x8(%esp)
086cbae7 +0x02d:  mov    %eax,0x4(%esp)
086cbaeb +0x031:  lea    -0x20(%ebp),%eax
086cbaee +0x034:  mov    %eax,(%esp)
086cbaf1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cbaf6 +0x03c:  lea    -0x20(%ebp),%eax
086cbaf9 +0x03f:  mov    %eax,(%esp)
086cbafc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cbb01 +0x047:  movl   $0x2f,0x4(%esp)
086cbb09 +0x04f:  mov    %eax,(%esp)
086cbb0c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cbb11 +0x057:  lea    -0x20(%ebp),%eax
086cbb14 +0x05a:  mov    %eax,(%esp)
086cbb17 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cbb1c +0x062:  movl   $0xffffffff,0x4(%esp)
086cbb24 +0x06a:  mov    %eax,(%esp)
086cbb27 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cbb2c +0x072:  movl   $0xc,0x8(%esp)
086cbb34 +0x07a:  movl   $0x0,0x4(%esp)
086cbb3c +0x082:  lea    -0x2c(%ebp),%eax
086cbb3f +0x085:  mov    %eax,(%esp)
086cbb42 +0x088:  call   0807dcc0 <_init+0x5b8>
086cbb47 +0x08d:  mov    0xc(%ebp),%eax
086cbb4a +0x090:  mov    %eax,-0x2c(%ebp)
086cbb4d +0x093:  mov    0x10(%ebp),%eax
086cbb50 +0x096:  mov    %eax,-0x28(%ebp)
086cbb53 +0x099:  lea    -0x20(%ebp),%eax
086cbb56 +0x09c:  mov    %eax,(%esp)
086cbb59 +0x09f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cbb5e +0x0a4:  movl   $0xc,0x8(%esp)
086cbb66 +0x0ac:  lea    -0x2c(%ebp),%edx
086cbb69 +0x0af:  mov    %edx,0x4(%esp)
086cbb6d +0x0b3:  mov    %eax,(%esp)
086cbb70 +0x0b6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
086cbb75 +0x0bb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cbb7a +0x0c0:  lea    -0x20(%ebp),%edx
086cbb7d +0x0c3:  mov    %edx,0x8(%esp)
086cbb81 +0x0c7:  movl   $0x2,0x4(%esp)
086cbb89 +0x0cf:  mov    %eax,(%esp)
086cbb8c +0x0d2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cbb91 +0x0d7:  movl   $0x0,0xc(%esp)
086cbb99 +0x0df:  movl   $0x11c7,0x8(%esp)
086cbba1 +0x0e7:  movl   $&_ZZN9GameWorld13DeleteChannelEi17ENUM_SERVER_GROUPE19__PRETTY_FUNCTION__,0x4(%esp)
086cbba9 +0x0ef:  lea    -0x18(%ebp),%eax
086cbbac +0x0f2:  mov    %eax,(%esp)
086cbbaf +0x0f5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cbbb4 +0x0fa:  movl   $"put db message to db thread DeleteChannel()",0x4(%esp)
086cbbbc +0x102:  lea    -0x18(%ebp),%eax
086cbbbf +0x105:  mov    %eax,(%esp)
086cbbc2 +0x108:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cbbc7 +0x10d:  jmp    086cbbe4 <+0x12a>
086cbbc9 +0x10f:  mov    %edx,%ebx
086cbbcb +0x111:  mov    %eax,%esi
086cbbcd +0x113:  lea    -0x20(%ebp),%eax
086cbbd0 +0x116:  mov    %eax,(%esp)
086cbbd3 +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cbbd8 +0x11e:  mov    %esi,%eax
086cbbda +0x120:  mov    %ebx,%edx
086cbbdc +0x122:  mov    %eax,(%esp)
086cbbdf +0x125:  call   08ae3750 <_Unwind_Resume>
086cbbe4 +0x12a:  lea    -0x20(%ebp),%eax
086cbbe7 +0x12d:  mov    %eax,(%esp)
086cbbea +0x130:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cbbef +0x135:  add    $0x40,%esp
086cbbf2 +0x138:  pop    %ebx
086cbbf3 +0x139:  pop    %esi
086cbbf4 +0x13a:  pop    %ebp
086cbbf5 +0x13b:  ret
```

## 反编译 C

```c
// GameWorld::DeleteChannel @ 0x86cbaba

/* GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP) */

void __thiscall GameWorld::DeleteChannel(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 local_30;
  undefined4 local_2c;
  CStreamGuard local_24 [8];
  cMyTrace local_1c [16];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x11bc);
  CStreamGuard::CStreamGuard(local_24,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 086cbb0c to 086cbbc6 has its CatchHandler @ 086cbbc9 */
  CStreamGuard::operator<<(pCVar2,0x2f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar2,-1);
  memset(&local_30,0,0xc);
  local_30 = param_1;
  local_2c = param_3;
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  CStreamGuard::put_binary(pCVar2,&local_30,0xc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
  cMyTrace::cMyTrace(local_1c,"void GameWorld::DeleteChannel(int, ENUM_SERVER_GROUP)",0x11c7,0);
  cMyTrace::operator()(local_1c,"put db message to db thread DeleteChannel()");
  CStreamGuard::~CStreamGuard(local_24);
  return;
}
```

# deleteState

`_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD`

`ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a93d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a93d4  _ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD
#           ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)
# range [0x081a93d4, 0x081a94ff]
081a93d4 +0x000:  push   %ebp
081a93d5 +0x001:  mov    %esp,%ebp
081a93d7 +0x003:  push   %esi
081a93d8 +0x004:  push   %ebx
081a93d9 +0x005:  sub    $0x40,%esp
081a93dc +0x008:  mov    0x8(%ebp),%eax
081a93df +0x00b:  add    $0x4,%eax
081a93e2 +0x00e:  mov    %eax,0x4(%esp)
081a93e6 +0x012:  lea    -0x1c(%ebp),%eax
081a93e9 +0x015:  mov    %eax,(%esp)
081a93ec +0x018:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081a93f1 +0x01d:  lea    -0x28(%ebp),%eax
081a93f4 +0x020:  mov    %eax,(%esp)
081a93f7 +0x023:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
081a93fc +0x028:  mov    0xc(%ebp),%eax
081a93ff +0x02b:  lea    -0x28(%ebp),%edx
081a9402 +0x02e:  mov    %edx,0x8(%esp)
081a9406 +0x032:  mov    %eax,0x4(%esp)
081a940a +0x036:  mov    0x8(%ebp),%eax
081a940d +0x039:  mov    %eax,(%esp)
081a9410 +0x03c:  call   081a9c2a <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&)
081a9415 +0x041:  test   %al,%al
081a9417 +0x043:  je     081a94ed <+0x119>
081a941d +0x049:  movw   $0x0,-0x28(%ebp)
081a9423 +0x04f:  mov    0xc(%ebp),%eax
081a9426 +0x052:  movl   $0x0,0xc(%esp)
081a942e +0x05a:  lea    -0x28(%ebp),%edx
081a9431 +0x05d:  mov    %edx,0x8(%esp)
081a9435 +0x061:  mov    %eax,0x4(%esp)
081a9439 +0x065:  mov    0x8(%ebp),%eax
081a943c +0x068:  mov    %eax,(%esp)
081a943f +0x06b:  call   081a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>  ; ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, CUser*)
081a9444 +0x070:  mov    0xc(%ebp),%eax
081a9447 +0x073:  movl   $0x0,0x10(%esp)
081a944f +0x07b:  lea    -0x28(%ebp),%edx
081a9452 +0x07e:  mov    %edx,0xc(%esp)
081a9456 +0x082:  mov    %eax,0x8(%esp)
081a945a +0x086:  movl   $0x1,0x4(%esp)
081a9462 +0x08e:  mov    0x8(%ebp),%eax
081a9465 +0x091:  mov    %eax,(%esp)
081a9468 +0x094:  call   081a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>  ; ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY, ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool)
081a946d +0x099:  mov    -0x26(%ebp),%esi
081a9470 +0x09c:  mov    0xc(%ebp),%eax
081a9473 +0x09f:  mov    %eax,%ebx
081a9475 +0x0a1:  movl   $0x0,0xc(%esp)
081a947d +0x0a9:  movl   $0x38,0x8(%esp)
081a9485 +0x0b1:  movl   $&_ZZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARADE19__PRETTY_FUNCTION__,0x4(%esp)
081a948d +0x0b9:  lea    -0x18(%ebp),%eax
081a9490 +0x0bc:  mov    %eax,(%esp)
081a9493 +0x0bf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081a9498 +0x0c4:  mov    %esi,0x10(%esp)
081a949c +0x0c8:  mov    %ebx,0xc(%esp)
081a94a0 +0x0cc:  movl   $0x1,0x8(%esp)
081a94a8 +0x0d4:  movl   $"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",0x4(%esp)
081a94b0 +0x0dc:  lea    -0x18(%ebp),%eax
081a94b3 +0x0df:  mov    %eax,(%esp)
081a94b6 +0x0e2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a94bb +0x0e7:  mov    0x8(%ebp),%eax
081a94be +0x0ea:  lea    0x1c(%eax),%edx
081a94c1 +0x0ed:  lea    0xc(%ebp),%eax
081a94c4 +0x0f0:  mov    %eax,0x4(%esp)
081a94c8 +0x0f4:  mov    %edx,(%esp)
081a94cb +0x0f7:  call   081a9e80 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x17b>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x17b
081a94d0 +0x0fc:  jmp    081a94ed <+0x119>
081a94d2 +0x0fe:  mov    %edx,%ebx
081a94d4 +0x100:  mov    %eax,%esi
081a94d6 +0x102:  lea    -0x1c(%ebp),%eax
081a94d9 +0x105:  mov    %eax,(%esp)
081a94dc +0x108:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a94e1 +0x10d:  mov    %esi,%eax
081a94e3 +0x10f:  mov    %ebx,%edx
081a94e5 +0x111:  mov    %eax,(%esp)
081a94e8 +0x114:  call   08ae3750 <_Unwind_Resume>
081a94ed +0x119:  lea    -0x1c(%ebp),%eax
081a94f0 +0x11c:  mov    %eax,(%esp)
081a94f3 +0x11f:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a94f8 +0x124:  add    $0x40,%esp
081a94fb +0x127:  pop    %ebx
081a94fc +0x128:  pop    %esi
081a94fd +0x129:  pop    %ebp
081a94fe +0x12a:  ret
081a94ff +0x12b:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::deleteState @ 0x81a93d4

/* ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD) */

void __thiscall
ARAD::Arad_ServerStateManager::deleteState(Arad_ServerStateManager *this,undefined4 param_2)

{
  char cVar1;
  undefined2 local_2c;
  undefined4 local_2a;
  Guard<Mutex> local_20 [4];
  cMyTrace local_1c [16];
  
  Guard<Mutex>::Guard(local_20,(Mutex *)(this + 4));
  AradServerStateMessage::AradServerStateMessage((AradServerStateMessage *)&local_2c);
                    /* try { // try from 081a9410 to 081a94cf has its CatchHandler @ 081a94d2 */
  cVar1 = findState(this,param_2,&local_2c);
  if (cVar1 != '\0') {
    local_2c = 0;
    sendEffectPacket(this,param_2,&local_2c,0);
    saveServerState(this,1,param_2,&local_2c,0);
    cMyTrace::cMyTrace(local_1c,
                       "void ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)",
                       0x38,0);
    cMyTrace::operator()
              (local_1c,"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",1,param_2
               ,local_2a);
    std::
    map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
    ::erase(this + 0x1c);
  }
  Guard<Mutex>::~Guard(local_20);
  return;
}
```

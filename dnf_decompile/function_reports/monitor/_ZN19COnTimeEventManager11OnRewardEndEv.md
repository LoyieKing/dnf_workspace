# _ZN19COnTimeEventManager11OnRewardEndEv

`COnTimeEventManager::OnRewardEnd()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a49b6` | `0x112` | `0x809a27c` | `0x111` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0xae,0x8(%esp)
 movl   $&_ZZN19COnTimeEventManager11OnRewardEndEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"On Time Event : On Reward End Trigger On(%d)\n",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE>
 test   %al,%al
-je     <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x82>
+je     <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x85>
 movl   $"On Time Event : Event Off Trigger",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager5ClearEv>
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
+jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10f>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10b>
+je     <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10f>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE>
-lea    -0x22(%ebp),%eax
+lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_MTG_OntimeEvent_RewardEndC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x22(%ebp),%edx
+lea    -0x1e(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 movl   $0xd9,0x8(%esp)
 movl   $&_ZZN19COnTimeEventManager11OnRewardEndEvE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"On Time Event : On Reward End Trigger Process Success",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
-nop
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::OnRewardEnd() */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager11OnRewardEndEv(COnTimeEventManager *this)

{
  char cVar1;
  time_t tVar2;
  CServerHandler *this_00;
  Packet_MTG_OntimeEvent_RewardEnd local_26 [10];
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [12];
  
  tVar2 = time((time_t *)0x0);
  CMyFileLog::CMyFileLog(local_1c,"OnRewardEnd",0xae);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/OnTimeEvent","On Time Event : On Reward End Trigger On(%d)\n",tVar2);
  cVar1 = _ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE(this,2);
  if (cVar1 == '\0') {
    cVar1 = _ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE(this,1);
    if (cVar1 == '\0') {
      _ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE(this,1);
      Packet_MTG_OntimeEvent_RewardEnd::Packet_MTG_OntimeEvent_RewardEnd(local_26);
      this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
      CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                (this_00,(PacketHeader *)local_26);
      CMyFileLog::CMyFileLog(local_14,"OnRewardEnd",0xd9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/OnTimeEvent",
                 "On Time Event : On Reward End Trigger Process Success");
    }
  }
  else {
    puts("On Time Event : Event Off Trigger");
    Clear(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 238 行）：

```cpp
void COnTimeEventManager::OnRewardEnd()
{
    time_t now = time(0);
    CMyFileLog log(__FUNCTION__, 0xae);
    log("./log/OnTimeEvent", "On Time Event : On Reward End Trigger On(%d)\n", now);
    if (IsCurState(ONTIME_EVENT_STATE_REWARD))
    {
        puts("On Time Event : Event Off Trigger");
        Clear();
    }
    else if (!IsCurState(ONTIME_EVENT_STATE_START))
    {
        ChangeState(ONTIME_EVENT_STATE_START);
        Packet_MTG_OntimeEvent_RewardEnd pkt;
        m_app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
        CMyFileLog log2(__FUNCTION__, 0xd9);
        log2("./log/OnTimeEvent", "On Time Event : On Reward End Trigger Process Success");
    }
}
```

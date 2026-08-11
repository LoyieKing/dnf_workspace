# _ZN12momiji_event11EventAction11onEndActionEv

`momiji_event::EventAction::onEndAction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805bf94` | `0x61` | `0x804b53a` | `0x6c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event11EventAction9isRunningEv>
 test   %al,%al
-je     <T> <_ZN12momiji_event11EventAction11onEndActionEv+0x5f>
+setne  %al
+test   %al,%al
+je     <T> <_ZN12momiji_event11EventAction11onEndActionEv+0x6a>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x8(%eax)
 call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager8EndEventEv>
 movl   $0x26,0x8(%esp)
 movl   $"onEndAction",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[Momiji] end event.",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventAction::onEndAction() */

void __thiscall
momiji_event::EventAction::_ZN12momiji_event11EventAction11onEndActionEv(EventAction *this)

{
  char cVar1;
  EventManager *this_00;
  CMyFileLog local_14 [16];
  
  cVar1 = isRunning(this);
  if (cVar1 != '\0') {
    this[8] = (EventAction)0x0;
    this_00 = (EventManager *)EventManager::Get();
    EventManager::EndEvent(this_00);
    CMyFileLog::CMyFileLog(local_14,"onEndAction",0x26);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/AradOnly","[Momiji] end event.");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 205 行）：

```cpp
void EventAction::onEndAction()
{
    if (isRunning() != 0)
    {
        m_running = 0;
        EventManager* em = EventManager::Get();
        em->EndEvent();
        DNF_LOG_SCOPE_AT("onEndAction", 0x26, "./log/AradOnly", "[Momiji] end event.");
    }
}
```

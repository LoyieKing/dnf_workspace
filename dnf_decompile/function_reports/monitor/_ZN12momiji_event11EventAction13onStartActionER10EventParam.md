# _ZN12momiji_event11EventAction13onStartActionER10EventParam

`momiji_event::EventAction::onStartAction(EventParam&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805bed0` | `0xc3` | `0x804b482` | `0xc9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event11EventAction9isRunningEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12momiji_event11EventAction13onStartActionER10EventParam+0xbb>
+je     <T> <_ZN12momiji_event11EventAction13onStartActionER10EventParam+0xc1>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x8(%eax)
 mov    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
 movzbl %al,%edi
 mov    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
 movzbl %al,%esi
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x17,0x8(%esp)
-movl   $&_ZZN12momiji_event11EventAction13onStartActionER10EventParamE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+movl   $"onStartAction",0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[Momiji] onStartAction(%d,%d,%d)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+call   <T> <_ZN12momiji_event12EventManager3GetEv>
+mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-movzbl %al,%edi
+movzbl %al,%ecx
 mov    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
-movzbl %al,%esi
+movzbl %al,%edx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
-movzbl %al,%ebx
-call   <T> <_ZN12momiji_event12EventManager3GetEv>
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+movzbl %al,%eax
+mov    %ecx,0xc(%esp)
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager10StartEventEhhh>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventAction::onStartAction(EventParam&) */

void __thiscall
momiji_event::EventAction::_ZN12momiji_event11EventAction13onStartActionER10EventParam
          (EventAction *this,EventParam *param_1)

{
  EventParam EVar1;
  EventParam EVar2;
  EventParam EVar3;
  char cVar4;
  EventManager *this_00;
  CMyFileLog local_24 [20];
  
  cVar4 = isRunning(this);
  if (cVar4 != '\x01') {
    this[8] = (EventAction)0x1;
    EVar1 = param_1[2];
    EVar2 = param_1[1];
    EVar3 = *param_1;
    CMyFileLog::CMyFileLog(local_24,"onStartAction",0x17);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/AradOnly","[Momiji] onStartAction(%d,%d,%d)",(uint)(byte)EVar3,
               (uint)(byte)EVar2,(uint)(byte)EVar1);
    EVar1 = param_1[2];
    EVar2 = param_1[1];
    EVar3 = *param_1;
    this_00 = (EventManager *)EventManager::Get();
    EventManager::StartEvent(this_00,(uchar)EVar3,(uchar)EVar2,(uchar)EVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 196 行）：

```cpp
void EventAction::onStartAction(EventParam& param)
{
    if (isRunning() != 1)
    {
        m_running = 1;
        DNF_LOG_SCOPE_AT("onStartAction", 0x17,"./log/AradOnly", "[Momiji] onStartAction(%d,%d,%d)",
            (unsigned int)(unsigned char)((RA_S8<0>*)&param)->v,
            (unsigned int)(unsigned char)((RA_S8<1>*)&param)->v,
            (unsigned int)(unsigned char)((RA_S8<2>*)&param)->v);
        EventManager* em = EventManager::Get();
        em->StartEvent(((RA_U8<0>*)&param)->v,
                       ((RA_U8<1>*)&param)->v,
                       ((RA_U8<2>*)&param)->v);
    }
}
```

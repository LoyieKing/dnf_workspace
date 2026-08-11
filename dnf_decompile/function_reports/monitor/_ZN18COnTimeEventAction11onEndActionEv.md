# _ZN18COnTimeEventAction11onEndActionEv

`COnTimeEventAction::onEndAction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4204` | `0x62` | `0x8092db2` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0xc2,0x8(%esp)
 movl   $&_ZZN18COnTimeEventAction11onEndActionEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Test Event Action : On End On Time Event Action",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 call   <T> <_Z20CApplicationInstancev>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21GetOnTimeEventManagerEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18COnTimeEventAction11onEndActionEv+0x5f>
+je     <T> <_ZN18COnTimeEventAction11onEndActionEv+0x63>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager8EndEventEv>
-jmp    <T> <_ZN18COnTimeEventAction11onEndActionEv+0x60>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventAction::onEndAction() */

void COnTimeEventAction::_ZN18COnTimeEventAction11onEndActionEv(void)

{
  CApplication *this;
  CMyFileLog local_18 [8];
  COnTimeEventManager *local_10;
  
  CMyFileLog::CMyFileLog(local_18,"onEndAction",0xc2);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_18,"./log/OnTimeEvent","Test Event Action : On End On Time Event Action");
  this = (CApplication *)CApplicationInstance();
  local_10 = (COnTimeEventManager *)CApplication::_ZN12CApplication21GetOnTimeEventManagerEv(this);
  if (local_10 != (COnTimeEventManager *)0x0) {
    COnTimeEventManager::EndEvent(local_10);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 99 行）：

```cpp
void COnTimeEventAction::onEndAction()
{
    DNF_LOG_SCOPE_LINE(0xc2, "./log/OnTimeEvent", "Test Event Action : On End On Time Event Action");
    CApplication* app = (CApplication*)CApplicationInstance();
    COnTimeEventManager* mgr = app->GetOnTimeEventManager();
    if (mgr != 0)
    {
        mgr->EndEvent();
    }
}
```

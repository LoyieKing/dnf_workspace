# _ZN18COnTimeEventAction13onStartActionER10EventParam

`COnTimeEventAction::onStartAction(EventParam&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4164` | `0x9f` | `0x8092d2a` | `0xa2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0xa7,0x8(%esp)
 movl   $&_ZZN18COnTimeEventAction13onStartActionER10EventParamE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Test Event Action : On Start On Time Event Action %d,%d",0x8(%esp)
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
-je     <T> <_ZN18COnTimeEventAction13onStartActionER10EventParam+0x97>
+je     <T> <_ZN18COnTimeEventAction13onStartActionER10EventParam+0x9b>
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager21GetCurEventItemByDBMWEjj>
-jmp    <T> <_ZN18COnTimeEventAction13onStartActionER10EventParam+0x98>
-nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventAction::onStartAction(EventParam&) */

void __thiscall
COnTimeEventAction::_ZN18COnTimeEventAction13onStartActionER10EventParam
          (COnTimeEventAction *this,EventParam *param_1)

{
  ushort uVar1;
  ushort uVar2;
  CApplication *this_00;
  CMyFileLog local_18 [8];
  COnTimeEventManager *local_10;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar2 = *(ushort *)param_1;
  CMyFileLog::CMyFileLog(local_18,"onStartAction",0xa7);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_18,"./log/OnTimeEvent","Test Event Action : On Start On Time Event Action %d,%d",
             (uint)uVar2,(uint)uVar1);
  this_00 = (CApplication *)CApplicationInstance();
  local_10 = (COnTimeEventManager *)
             CApplication::_ZN12CApplication21GetOnTimeEventManagerEv(this_00);
  if (local_10 != (COnTimeEventManager *)0x0) {
    COnTimeEventManager::GetCurEventItemByDBMW
              (local_10,(uint)*(ushort *)param_1,(uint)*(ushort *)(param_1 + 2));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 87 行）：

```cpp
void COnTimeEventAction::onStartAction(EventParam& param)
{
    DNF_LOG_SCOPE_LINE(0xa7,"./log/OnTimeEvent", "Test Event Action : On Start On Time Event Action %d,%d",
        (unsigned int)param.m_a, (unsigned int)param.m_b);
    CApplication* app = (CApplication*)CApplicationInstance();
    COnTimeEventManager* mgr = app->GetOnTimeEventManager();
    if (mgr != 0)
    {
        mgr->GetCurEventItemByDBMW((unsigned int)param.m_a, (unsigned int)param.m_b);
    }
}
```

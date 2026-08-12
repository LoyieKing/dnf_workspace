# _ZN19COnTimeEventManager9AttachAppEP12CApplication

`COnTimeEventManager::AttachApp(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4638` | `0x88` | `0x8099b4e` | `0xa4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x38(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x3c(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x20(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,%edx
+mov    -0x20(%ebp),%eax
+lea    0xa(%eax),%ecx
 mov    %ebx,%eax
-mov    0x8(%ebp),%ecx
-mov    %ecx,0xc(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventIdxLoadC1EjjP19COnTimeEventManager>
-mov    %ebx,%eax
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
+jmp    <T> <_ZN19COnTimeEventManager9AttachAppEP12CApplication+0x7f>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
+mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
-add    $0x24,%esp
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::AttachApp(CApplication*) */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager9AttachAppEP12CApplication
          (COnTimeEventManager *this,CApplication *param_1)

{
  time_t tVar1;
  COnTimeEventIdxLoad *this_00;
  CTaskScheduler *this_01;
  
  *(CApplication **)this = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  tVar1 = time((time_t *)0x0);
  this_00 = operator_new(0x14);
  COnTimeEventIdxLoad::_ZN19COnTimeEventIdxLoadC2EjjP19COnTimeEventManager
            (this_00,tVar1 + 10,0,this);
  this_01 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(this_01,(CTask *)this_00);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 45 行）：

```cpp
void COnTimeEventManager::AttachApp(CApplication* app)
{
    m_app = app;
    m_field38 = 0;
    m_field3c = 0;
    unsigned int t = (unsigned int)time(0);
    COnTimeEventIdxLoad* task = new COnTimeEventIdxLoad(t + 10, 0, this);
    app->GetTaskScheduler()->AddTask(task);
}
```

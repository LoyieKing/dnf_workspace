# _ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb

`init_accusation::CInitAccusationListMgr::setSchedule(bool const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9bac` | `0xb3` | `0x8050454` | `0xf7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x4c,%esp
 call   <T> <_Z10GetNowTimev>
-mov    %eax,-0x14(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 movl   $0x6,0x8(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movl   $0x0,(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0x5d>
-mov    -0xc(%ebp),%eax
-add    $0x15180,%eax
-mov    %eax,-0xc(%ebp)
+je     <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0x5b>
+addl   $0x15180,-0x24(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%esi
+mov    %esi,0x4(%esp)
+movl   $0x14,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%edx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0xc9>
+mov    -0x24(%ebp),%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15init_accusation19CInitAccusationListC1EjjPNS_22CInitAccusationListMgrE>
+jmp    <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0xc5>
+mov    %edx,%edi
+mov    %eax,-0x3c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x3c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0xcb>
+mov    %ebx,%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 mov    $0x1,%eax
-add    $0x24,%esp
+add    $0x4c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* init_accusation::CInitAccusationListMgr::setSchedule(bool const&) */

undefined4 __thiscall
init_accusation::CInitAccusationListMgr::
_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb
          (CInitAccusationListMgr *this,bool *param_1)

{
  CInitAccusationList *this_00;
  CTaskScheduler *this_01;
  time_t local_18;
  tm *local_14;
  uint local_10;
  
  local_18 = GetNowTime();
  local_14 = localtime(&local_18);
  local_14->tm_hour = 6;
  local_14->tm_min = 0;
  local_14->tm_sec = 0;
  local_10 = mktime(local_14);
  if (*param_1 != false) {
    local_10 = local_10 + 0x15180;
  }
  this_00 = operator_new(0x14);
  CInitAccusationList::_ZN15init_accusation19CInitAccusationListC2EjjPNS_22CInitAccusationListMgrE
            (this_00,local_10,0,this);
  this_01 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
  CTaskScheduler::AddTask(this_01,(CTask *)this_00);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 181 行）：

```cpp
bool CInitAccusationListMgr::setSchedule(bool const& flag)
{
    time_t t = GetNowTime();
    struct tm* lt = localtime(&t);
    lt->tm_hour = 6;
    lt->tm_min = 0;
    lt->tm_sec = 0;
    time_t next = mktime(lt);
    if (flag)
    {
        next += 0x15180;
    }
    // ORIG：无 EH 清理（placement new 形态），GetTaskScheduler 直接读 *this
    void* mem = operator new(0x14);
    CInitAccusationList* list = new (mem) CInitAccusationList(next, 0, this);
    (*(CApplication**)this)->GetTaskScheduler()->AddTask(list);
    return true;
}
```

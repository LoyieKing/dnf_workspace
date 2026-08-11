# _ZN12momiji_event12EventManager10StartEventEhhh

`momiji_event::EventManager::StartEvent(unsigned char, unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c070` | `0x237` | `0x804b16c` | `0x229` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,151 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0xc(%ebp),%ecx
 mov    0x10(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %cl,-0x4c(%ebp)
 mov    %dl,-0x50(%ebp)
 mov    %al,-0x54(%ebp)
 movzbl -0x54(%ebp),%eax
 cmp    -0x50(%ebp),%al
-jb     <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x6f>
-movzbl -0x50(%ebp),%esi
-movzbl -0x54(%ebp),%ebx
-movl   $0x4b,0x8(%esp)
-movl   $&_ZZN12momiji_event12EventManager10StartEventEhhhE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[Momiji] (durationTime(%d) >= intervalTime(%d))",0x8(%esp)
-movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x22f>
+jae    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x1db>
 cmpb   $0x17,-0x4c(%ebp)
-jbe    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0xb8>
-movzbl -0x4c(%ebp),%ebx
-movl   $0x51,0x8(%esp)
-movl   $&_ZZN12momiji_event12EventManager10StartEventEhhhE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"[Momiji] (startTime(%d) >= 24)",0x8(%esp)
-movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x22f>
+ja     <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x19b>
 movzbl -0x50(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,%edx
+sub    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 movzbl -0x54(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,%edx
+sub    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    0x8(%ebp),%eax
 movzbl -0x4c(%ebp),%edx
 mov    %dl,(%eax)
-movzbl -0x4c(%ebp),%eax
-mov    %al,-0x25(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x44(%ebp)
-lea    -0x44(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x24(%ebp)
 movzbl -0x4c(%ebp),%edx
 mov    -0x24(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    -0x24(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    -0x24(%ebp),%eax
 movl   $0x0,(%eax)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x48(%ebp)
-jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x15d>
+mov    %eax,-0x44(%ebp)
+jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0xc4>
 movzbl -0x50(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 sub    %eax,%edx
-mov    -0x48(%ebp),%eax
+mov    -0x44(%ebp),%eax
 lea    (%edx,%eax,1),%eax
-mov    %eax,-0x48(%ebp)
-mov    -0x48(%ebp),%edx
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x44(%ebp),%edx
+mov    -0x40(%ebp),%eax
 cmp    %eax,%edx
 setle  %al
 test   %al,%al
-jne    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x146>
+jne    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0xad>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0x48(%ebp),%eax
+mov    -0x44(%ebp),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event15StartEffectTaskC1Ejj>
-jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x1af>
+jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x116>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,-0x20(%ebp)
 mov    -0x20(%ebp),%ebx
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%edi
 mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%ebx
 movl   $0x6e,0x8(%esp)
 movl   $&_ZZN12momiji_event12EventManager10StartEventEhhhE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[Momiji] start event. first time %02dh:%02dm:%02ds",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x221>
+movzbl -0x4c(%ebp),%ebx
+movl   $0x51,0x8(%esp)
+movl   $&_ZZN12momiji_event12EventManager10StartEventEhhhE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"[Momiji] (startTime(%d) >= 24)",0x8(%esp)
+movl   $"./log/AradOnly",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12momiji_event12EventManager10StartEventEhhh+0x221>
+movzbl -0x50(%ebp),%esi
+movzbl -0x54(%ebp),%ebx
+movl   $0x4b,0x8(%esp)
+movl   $&_ZZN12momiji_event12EventManager10StartEventEhhhE12__FUNCTION__,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"[Momiji] (durationTime(%d) >= intervalTime(%d))",0x8(%esp)
+movl   $"./log/AradOnly",0x4(%esp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::StartEvent(unsigned char, unsigned char, unsigned char) */

void __thiscall
momiji_event::EventManager::_ZN12momiji_event12EventManager10StartEventEhhh
          (EventManager *this,uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  StartEffectTask *this_00;
  CApplication *this_01;
  CTaskScheduler *this_02;
  uint local_4c;
  time_t local_48;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [11];
  uchar local_29;
  tm *local_28;
  StartEffectTask *local_24;
  tm *local_20;
  
  local_29 = param_1;
  if (param_3 < param_2) {
    if (param_1 < 0x18) {
      *(uint *)(this + 4) = (uint)param_2 * 0x3c;
      *(uint *)(this + 8) = (uint)param_3 * 0x3c;
      *this = (EventManager)param_1;
      local_48 = time((time_t *)0x0);
      local_28 = localtime(&local_48);
      local_28->tm_hour = (uint)param_1;
      local_28->tm_min = 0;
      local_28->tm_sec = 0;
      for (local_4c = mktime(local_28); (int)local_4c <= local_48;
          local_4c = (uint)param_2 * 0x3c + local_4c) {
      }
      this_00 = operator_new(0x14);
                    /* try { // try from 0805c200 to 0805c204 has its CatchHandler @ 0805c207 */
      StartEffectTask::StartEffectTask(this_00,local_4c,0);
      local_24 = this_00;
      this_01 = (CApplication *)CApplicationInstance();
      this_02 = (CTaskScheduler *)CApplication::GetTaskScheduler(this_01);
      CTaskScheduler::AddTask(this_02,(CTask *)this_00);
      local_20 = localtime((time_t *)&local_4c);
      iVar1 = local_20->tm_sec;
      iVar2 = local_20->tm_min;
      iVar3 = local_20->tm_hour;
      CMyFileLog::CMyFileLog(local_34,"StartEvent",0x6e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/AradOnly","[Momiji] start event. first time %02dh:%02dm:%02ds",
                 iVar3,iVar2,iVar1);
    }
    else {
      CMyFileLog::CMyFileLog(local_3c,"StartEvent",0x51);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/AradOnly","[Momiji] (startTime(%d) >= 24)",(uint)param_1);
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_44,"StartEvent",0x4b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/AradOnly","[Momiji] (durationTime(%d) >= intervalTime(%d))",
               (uint)param_3,(uint)param_2);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp, source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h 等 299 个文件*

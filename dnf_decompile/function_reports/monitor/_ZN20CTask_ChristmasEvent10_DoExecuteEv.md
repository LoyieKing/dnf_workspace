# _ZN20CTask_ChristmasEvent10_DoExecuteEv

`CTask_ChristmasEvent::_DoExecute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809c33e` | `0x125` | `0x80a08ea` | `0x14b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x44,%esp
-lea    -0x32(%ebp),%eax
+sub    $0x4c,%esp
+lea    -0x3a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_ServerEvent_StartC1Ev>
-movl   $0x1,-0x28(%ebp)
-movw   $0x14,-0x24(%ebp)
-movw   $0xe10,-0x22(%ebp)
+lea    -0x3a(%ebp),%eax
+movl   $0x1,0xa(%eax)
+lea    -0x3a(%ebp),%eax
+movw   $0x14,0xe(%eax)
+lea    -0x3a(%ebp),%eax
+movw   $0xe10,0x12(%eax)
+lea    -0x3a(%ebp),%ebx
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x10(%ebp)
-lea    -0x32(%ebp),%eax
 movl   $0x12,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 movl   $0x1,(%esp)
 call   <T> <_ZN20CTask_ChristmasEvent18MakeEventStartTickEi>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x20(%ebp)
 call   <T> <_ZN20CTask_ChristmasEvent15getEventEndTimeEv>
-cmp    -0xc(%ebp),%eax
-setl   %al
+cmp    -0x20(%ebp),%eax
+setb   %al
 test   %al,%al
-je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xa5>
+je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xad>
 movl   $0xc3,0x8(%esp)
 movl   $&_ZZN20CTask_ChristmasEvent10_DoExecuteEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"End X_Mas Event!",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x11f>
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x143>
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%edx
 mov    %ebx,%eax
 movl   $0x0,0x8(%esp)
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CTask_ChristmasEventC1Ejj>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xee>
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
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 movl   $0xc8,0x8(%esp)
 movl   $&_ZZN20CTask_ChristmasEvent10_DoExecuteEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Start X_Mas Event!",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x44,%esp
+add    $0x4c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTask_ChristmasEvent::_DoExecute() */

void CTask_ChristmasEvent::_ZN20CTask_ChristmasEvent10_DoExecuteEv(void)

{
  CApplication *pCVar1;
  int iVar2;
  CTask_ChristmasEvent *this;
  CTaskScheduler *this_00;
  Packet_Monitor_ServerEvent_Start local_36 [10];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  CServerHandler *local_14;
  uint local_10;
  
  Packet_Monitor_ServerEvent_Start::Packet_Monitor_ServerEvent_Start(local_36);
  local_2c = 1;
  local_28 = 0x14;
  local_26 = 0xe10;
  pCVar1 = (CApplication *)CApplicationInstance();
  local_14 = (CServerHandler *)CApplication::Get_ServerHandler(pCVar1);
  CServerHandler::SendAllToGameServer(local_14,(char *)local_36,0x12);
  local_10 = MakeEventStartTick(1);
  iVar2 = getEventEndTime();
  if (iVar2 < (int)local_10) {
    CMyFileLog::CMyFileLog(local_24,"_DoExecute",0xc3);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_24,"./log/GameServer","End X_Mas Event!");
  }
  else {
    this = operator_new(0x10);
    CTask_ChristmasEvent(this,local_10,0);
    pCVar1 = (CApplication *)CApplicationInstance();
    this_00 = (CTaskScheduler *)CApplication::GetTaskScheduler(pCVar1);
    CTaskScheduler::AddTask(this_00,(CTask *)this);
    CMyFileLog::CMyFileLog(local_1c,"_DoExecute",200);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_1c,"./log/GameServer","Start X_Mas Event!");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskImpl.cpp](source/DNFServer/GameServer/Monitor/TaskImpl.cpp)（约第 127 行）：

```cpp
void CTask_ChristmasEvent::_DoExecute()
{
    Packet_Monitor_ServerEvent_Start pkt;
    ((RA_INT<10>*)&pkt)->v = 1;
    ((RA_U16<14>*)&pkt)->v = 0x14;
    ((RA_U16<18>*)&pkt)->v = 0xe10;
    ((CApplication*)CApplicationInstance())->Get_ServerHandler()->SendAllToGameServer(
        (char*)&pkt, 0x12);
    unsigned int t = MakeEventStartTick(1);
    if (getEventEndTime() < (long long)t)
    {
        DNF_LOG_SCOPE_LINE(0xc3, "./log/GameServer", "End X_Mas Event!");
    }
    else
    {
        CTask_ChristmasEvent* task = new CTask_ChristmasEvent(t, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        DNF_LOG_SCOPE_LINE(200, "./log/GameServer", "Start X_Mas Event!");
    }
}
```

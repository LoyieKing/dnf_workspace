# _ZN9CPowerWar21LoadPowerWarTableFileEPc

`CPowerWar::LoadPowerWarTableFile(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6f50` | `0x144` | `0x809cb40` | `0x180` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,120 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x40,%esp
 movl   $0x9e,0x8(%esp)
 movl   $&_ZZN9CPowerWar21LoadPowerWarTableFileEPcE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"LoadPowerWarTableFile filename(%s)\n",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0x15(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x15(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-lea    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0x9f>
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0xa4>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0xac>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0xb1>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0xc7>
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0xcc>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x15(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x15(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CScheduler5ClearEv>
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15CPowerWarConfig7GetInfoEv>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EEC1ERKS2_>
+lea    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EEC1ERKS2_>
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CScheduler21SetSpecialWeekDayHourESt6vectorI22STPowerWarScheduleTimeSaIS1_EE>
-jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0x132>
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0x146>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0x153>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EED1Ev>
+jmp    <T> <_ZN9CPowerWar21LoadPowerWarTableFileEPc+0x16e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x14(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EED1Ev>
-add    $0x30,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::LoadPowerWarTableFile(char*) */

void __thiscall CPowerWar::_ZN9CPowerWar21LoadPowerWarTableFileEPc(CPowerWar *this,char *param_1)

{
  code *pcVar1;
  int iVar2;
  CMyFileLog local_28 [8];
  string local_20 [7];
  allocator local_19;
  vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> local_18 [12];
  
  CMyFileLog::CMyFileLog(local_28,"LoadPowerWarTableFile",0x9e);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_28,"./log/Power","LoadPowerWarTableFile filename(%s)\n",param_1);
  pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 080a6fc1 to 080a6fc5 has its CatchHandler @ 080a6ffc */
  std::string::string(local_20,param_1,&local_19);
                    /* try { // try from 080a6fd6 to 080a6fd7 has its CatchHandler @ 080a6fda */
  (*pcVar1)(*(undefined4 *)(this + 0x10),local_20);
                    /* try { // try from 080a6ff5 to 080a6ff9 has its CatchHandler @ 080a6ffc */
  std::string::~string(local_20);
  std::allocator<char>::~allocator((allocator<char> *)&local_19);
  CScheduler::_ZN10CScheduler5ClearEv((CScheduler *)(this + 0x14));
  iVar2 = CPowerWarConfig::GetInfo(*(CPowerWarConfig **)(this + 0x10));
  std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::vector
            (local_18,(vector *)(iVar2 + 8));
                    /* try { // try from 080a7060 to 080a7064 has its CatchHandler @ 080a7067 */
  CScheduler::SetSpecialWeekDayHour(this + 0x14,local_18);
  std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::~vector(local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 191 行）：

```cpp
void CPowerWar::LoadPowerWarTableFile(char* path)
{
    DNF_LOG_SCOPE_LINE(0x9e, "./log/Power", "LoadPowerWarTableFile filename(%s)\n", path);
    CPowerWarConfig* config = *(CPowerWarConfig**)((char*)this + 0x10);
    config->Load_Table(std::string(path));
    ((CScheduler*)((char*)this + 0x14))->Clear();
    ST_PowerWarEventStartTimeConfig* info = config->GetInfo();
    std::vector<STPowerWarScheduleTime> schedule = *(std::vector<STPowerWarScheduleTime>*)((char*)info + 8);
    ((CScheduler*)((char*)this + 0x14))->SetSpecialWeekDayHour(schedule);
}
```

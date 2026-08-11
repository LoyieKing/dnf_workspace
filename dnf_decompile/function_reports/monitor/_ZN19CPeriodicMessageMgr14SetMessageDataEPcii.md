# _ZN19CPeriodicMessageMgr14SetMessageDataEPcii

`CPeriodicMessageMgr::SetMessageData(char*, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093754` | `0x120` | `0x8050158` | `0x120` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 cmpl   $0x0,0x10(%ebp)
 js     <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x1e>
 cmpl   $0x0,0x14(%ebp)
 js     <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x1e>
 cmpl   $0x17,0x10(%ebp)
 jg     <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x1e>
 cmpl   $0x17,0x14(%ebp)
 jle    <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x59>
 movl   $0x18,0x8(%esp)
 movl   $"SetMessageData",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SetData() Error : Invalid input time",0x8(%esp)
 movl   $"./log/PeriodicMessage",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x11e>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0xb6>
-mov    0x8(%ebp),%eax
 movl   $0x200,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x24,0x8(%esp)
 movl   $"SetMessageData",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SetData() Error : No string",0x8(%esp)
 movl   $"./log/PeriodicMessage",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii+0x11e>
 mov    0x8(%ebp),%eax
 movl   $0x1ff,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x200(%eax)
 mov    0x8(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x204(%eax)
 movl   $0x32,0x8(%esp)
 movl   $"SetMessageData",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TEST Periodic Message : Arrive Load Result",0x8(%esp)
 movl   $"./log/PeriodicMessage",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeriodicMessageMgr::SetMessageData(char*, int, int) */

void __thiscall
CPeriodicMessageMgr::_ZN19CPeriodicMessageMgr14SetMessageDataEPcii
          (CPeriodicMessageMgr *this,char *param_1,int param_2,int param_3)

{
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [16];
  
  if ((((param_2 < 0) || (param_3 < 0)) || (0x17 < param_2)) || (0x17 < param_3)) {
    CMyFileLog::CMyFileLog(local_24,"SetMessageData",0x18);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/PeriodicMessage","SetData() Error : Invalid input time");
  }
  else if (*param_1 == '\0') {
    memset(this,0,0x200);
    CMyFileLog::CMyFileLog(local_1c,"SetMessageData",0x24);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_1c,"./log/PeriodicMessage","SetData() Error : No string");
  }
  else {
    strncpy((char *)this,param_1,0x1ff);
    *(int *)(this + 0x200) = param_2;
    *(int *)(this + 0x204) = param_3;
    CMyFileLog::CMyFileLog(local_14,"SetMessageData",0x32);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/PeriodicMessage","TEST Periodic Message : Arrive Load Result");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 101 行）：

```cpp
void CPeriodicMessageMgr::SetMessageData(char* msg, int startHour, int endHour)
{
    if (startHour < 0 || endHour < 0 || 0x17 < startHour || 0x17 < endHour)
    {
        DNF_LOG_SCOPE_LINE(0x18, "./log/PeriodicMessage", "SetData() Error : Invalid input time");
    }
    else if (*msg == 0)
    {
        memset(this, 0, 0x200);
        DNF_LOG_SCOPE_LINE(0x24, "./log/PeriodicMessage", "SetData() Error : No string");
    }
    else
    {
        strncpy(m_msg, msg, 0x1ff);
        m_startHour = startHour;
        m_endHour = endHour;
        DNF_LOG_SCOPE_LINE(0x32, "./log/PeriodicMessage", "TEST Periodic Message : Arrive Load Result");
    }
}
```

# _ZN13CPowerManager14PrintDebugInfoEv

`CPowerManager::PrintDebugInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a4dba` | `0xa2` | `0x809b0d0` | `0xa2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x3c9,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"----- POWER A",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo14PrintDebugInfoEv>
 movl   $0x3cf,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"----- POWER B",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo14PrintDebugInfoEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::PrintDebugInfo() */

void __thiscall CPowerManager::_ZN13CPowerManager14PrintDebugInfoEv(CPowerManager *this)

{
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [16];
  
  CMyFileLog::CMyFileLog(local_1c,"PrintDebugInfo",0x3c9);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_1c,"./log/PowerResult","----- POWER A");
  CPower::GetPowerWarGuildInfo((CPower *)(this + 0x74));
  CPowerWarGuildInfo::PrintDebugInfo();
  CMyFileLog::CMyFileLog(local_14,"PrintDebugInfo",0x3cf);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/PowerResult","----- POWER B");
  CPower::GetPowerWarGuildInfo((CPower *)(this + 0xe0));
  CPowerWarGuildInfo::PrintDebugInfo();
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 532 行）：

```cpp
void CPowerManager::PrintDebugInfo()
{
    CMyFileLog logA("PrintDebugInfo", 0x3c9);
    logA("./log/PowerResult", "----- POWER A");
    ((CPower*)((char*)this + 0x74))->GetPowerWarGuildInfo()->PrintDebugInfo();
    CMyFileLog logB("PrintDebugInfo", 0x3cf);
    logB("./log/PowerResult", "----- POWER B");
    ((CPower*)((char*)this + 0xe0))->GetPowerWarGuildInfo()->PrintDebugInfo();
}
```

# _ZN13CPowerManager19SendPowerWarEndInfoEv

`CPowerManager::SendPowerWarEndInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a50ae` | `0x9a` | `0x809af7e` | `0x9a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x419,0x8(%esp)
 movl   $&_ZZN13CPowerManager19SendPowerWarEndInfoEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SEND POWER WAR END INFO START",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc>
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc>
 movl   $0x41f,0x8(%esp)
 movl   $&_ZZN13CPowerManager19SendPowerWarEndInfoEvE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SEND POWER WAR END INFO END",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarEndInfo() */

void __thiscall CPowerManager::_ZN13CPowerManager19SendPowerWarEndInfoEv(CPowerManager *this)

{
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [16];
  
  CMyFileLog::CMyFileLog(local_1c,"SendPowerWarEndInfo",0x419);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/PowerResult","SEND POWER WAR END INFO START");
  SendPowerWarEndInfoInSpecificPower(this,'\x01');
  SendPowerWarEndInfoInSpecificPower(this,'\x02');
  CMyFileLog::CMyFileLog(local_14,"SendPowerWarEndInfo",0x41f);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/PowerResult","SEND POWER WAR END INFO END");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 598 行）：

```cpp
void CPowerManager::SendPowerWarEndInfo(int time)
{
}
```

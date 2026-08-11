# _ZN14CMonitorServerC2Ev

`CMonitorServer::CMonitorServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8067a34` | `0x44` | `0x8054494` | `0x7f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %esi
+push   %ebx
+sub    $0x10,%esp
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
+movl   $&data#57b48d6f(.rodata),0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSsC1Ev>
+call   <T> <_ZNSsaSEPKc>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x14,0xb(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
-leave
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
+mov    %edx,%ebx
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CMonitorServer::CMonitorServer() */

void __thiscall CMonitorServer::_ZN14CMonitorServerC2Ev(CMonitorServer *this)

{
  *this = (CMonitorServer)0xff;
  std::string::string((string *)(this + 4));
  *(undefined2 *)(this + 8) = 0;
  this[10] = (CMonitorServer)0x0;
  this[0xb] = (CMonitorServer)0x14;
  this[0xc] = (CMonitorServer)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMonitorServer.cpp](source/DNFServer/GameServer/DBMW/DNFMonitorServer.cpp)（约第 28 行）：

```cpp
CMonitorServer::CMonitorServer() : m_type(0xff) { m_port = 0; m_padA = 0; m_flag = 0; m_udpHandler = 0; } 
```

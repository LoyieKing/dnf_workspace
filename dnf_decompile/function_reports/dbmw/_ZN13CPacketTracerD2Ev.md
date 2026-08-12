# _ZN13CPacketTracerD2Ev

`CPacketTracer::~CPacketTracer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8092642` | `0x59` | `0x80ce652` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,(%esp)
+mov    0x8(%eax),%ebx
+test   %ebx,%ebx
+je     <T> <_ZN13CPacketTracerD1Ev+0x22>
+mov    %ebx,(%esp)
+call   <T> <_ZN10CUnixTimerD1Ev>
+mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEED1Ev>
-jmp    <T> <_ZN13CPacketTracerD1Ev+0x44>
+jmp    <T> <_ZN13CPacketTracerD1Ev+0x50>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp)（约第 32 行）：

```cpp
CPacketTracer::~CPacketTracer()
{
    ::operator delete(m_timer);
}
```

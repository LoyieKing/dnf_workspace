# _ZN13CPacketTracerC2Ev

`CPacketTracer::CPacketTracer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807dcb6` | `0x1f` | `0x8068d12` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %esi
+push   %ebx
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
+lea    -0x9(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
 mov    0x8(%ebp),%eax
-add    $0x4,%eax
+lea    0x4(%eax),%edx
+lea    -0x9(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $&data#9bb47ad1(.rodata),0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+jmp    <T> <_ZN13CPacketTracerC1Ev+0x56>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSsC1Ev>
-leave
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x9(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+add    $0x20,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::CPacketTracer() */

void __thiscall CPacketTracer::_ZN13CPacketTracerC2Ev(CPacketTracer *this)

{
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp](source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp)（约第 14 行）：

```cpp
CPacketTracer::CPacketTracer()
    : m_count(0)
{
}
```

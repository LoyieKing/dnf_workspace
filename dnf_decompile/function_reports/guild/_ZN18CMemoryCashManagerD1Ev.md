# _ZN18CMemoryCashManagerD1Ev

`CMemoryCashManager::~CMemoryCashManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1bfe` | `0x13` | `0x8096494` | `0xb4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %esi
+push   %ebx
+sub    $0x20,%esp
+mov    0x8(%ebp),%edx
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN18CMemoryCashManagerD1Ev+0x4c>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
+mov    0x4(%eax),%ebx
+test   %ebx,%ebx
+je     <T> <_ZN18CMemoryCashManagerD1Ev+0x41>
+mov    %ebx,(%esp)
+call   <T> <_ZN11CCashObjectD1Ev>
+mov    %ebx,(%esp)
+call   <T> <_ZN11CCashObjectdlEPv>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEppEv>
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
+test   %al,%al
+jne    <T> <_ZN18CMemoryCashManagerD1Ev+0x1f>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
+jmp    <T> <_ZN18CMemoryCashManagerD1Ev+0x9f>
+mov    %edx,%ebx
+mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-leave
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEED1Ev>
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::~CMemoryCashManager() */

void __thiscall CMemoryCashManager::_ZN18CMemoryCashManagerD1Ev(CMemoryCashManager *this)

{
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::~map((map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
          *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 86 行）：

```cpp
CMemoryCashManager::~CMemoryCashManager()
{
}
```

# _ZN18CMemoryCashManagerC1Ev

`CMemoryCashManager::CMemoryCashManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a0a1c` | `0x4d` | `0x809715e` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSsSt4lessIjESaISt4pairIKjSsEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x30(%eax)
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+jmp    <T> <_ZN18CMemoryCashManagerC1Ev+0x3e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSsSt4lessIjESaISt4pairIKjSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::CMemoryCashManager() */

void __thiscall CMemoryCashManager::_ZN18CMemoryCashManagerC1Ev(CMemoryCashManager *this)

{
  std::
  map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
  ::map((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
         *)this);
                    /* try { // try from 080a0a38 to 080a0a3c has its CatchHandler @ 080a0a4e */
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::map((map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
         *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 81 行）：

```cpp
CMemoryCashManager::CMemoryCashManager()
{
    m_app = 0;
}
```

# _ZN19CPowerWarCharacInfoD1Ev

`CPowerWarCharacInfo::~CPowerWarCharacInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a76b8` | `0x90` | `0x809dbb4` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV19CPowerWarCharacInfo+0x8,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x28,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listI11STUserPointSaIS0_EED1Ev>
-jmp    <T> <_ZN19CPowerWarCharacInfoD1Ev+0x39>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
+add    $0x4,%eax
+add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN19CPowerWarCharacInfoD1Ev+0x49>
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EED1Ev>
-jmp    <T> <_ZN19CPowerWarCharacInfoD1Ev+0x67>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP20STPowerWarCharacInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP20STPowerWarCharacInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN19CPowerWarCharacInfoD1Ev+0x89>
+je     <T> <_ZN19CPowerWarCharacInfoD1Ev+0x42>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080a7736) */
/* CPowerWarCharacInfo::~CPowerWarCharacInfo() */

void __thiscall CPowerWarCharacInfo::_ZN19CPowerWarCharacInfoD1Ev(CPowerWarCharacInfo *this)

{
  *(undefined ***)this = &PTR__ZN19CPowerWarCharacInfoD1Ev_08137df0;
                    /* try { // try from 080a76d2 to 080a76d6 has its CatchHandler @ 080a76d9 */
  std::list<STUserPoint,std::allocator<STUserPoint>>::~list
            ((list<STUserPoint,std::allocator<STUserPoint>> *)(this + 0x28));
                    /* try { // try from 080a76fa to 080a76fe has its CatchHandler @ 080a7701 */
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::~vector
            ((vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>> *)(this + 0x1c));
  std::
  map<unsigned_int,STPowerWarCharacInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>>
  ::~map((map<unsigned_int,STPowerWarCharacInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>>
          *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 109 行）：

```cpp
CPowerWarCharacInfo::~CPowerWarCharacInfo()
{
    ((std::vector<STPowerWarCharacInfo*>*)(m_data + 0x18))->~vector();
    ((std::map<unsigned int, STPowerWarCharacInfo*>*)(m_data + 0))->~map();
}
```

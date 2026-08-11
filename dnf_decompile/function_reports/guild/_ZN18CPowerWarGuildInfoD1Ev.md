# _ZN18CPowerWarGuildInfoD1Ev

`CPowerWarGuildInfo::~CPowerWarGuildInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9cc4` | `0x90` | `0x809fede` | `0x55` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV18CPowerWarGuildInfo+0x8,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x28,%eax
+add    $0x4,%eax
+add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EED1Ev>
-jmp    <T> <_ZN18CPowerWarGuildInfoD1Ev+0x39>
-mov    %edx,%ebx
-mov    %eax,%esi
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
+add    $0x4,%eax
+add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN18CPowerWarGuildInfoD1Ev+0x49>
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EED1Ev>
-jmp    <T> <_ZN18CPowerWarGuildInfoD1Ev+0x67>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN18CPowerWarGuildInfoD1Ev+0x89>
+je     <T> <_ZN18CPowerWarGuildInfoD1Ev+0x53>
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

/* WARNING: Removing unreachable block (ram,0x080a9d42) */
/* CPowerWarGuildInfo::~CPowerWarGuildInfo() */

void __thiscall CPowerWarGuildInfo::_ZN18CPowerWarGuildInfoD1Ev(CPowerWarGuildInfo *this)

{
  *(undefined ***)this = &PTR__ZN18CPowerWarGuildInfoD1Ev_08138990;
                    /* try { // try from 080a9cde to 080a9ce2 has its CatchHandler @ 080a9ce5 */
  std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::~vector
            ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)(this + 0x28))
  ;
                    /* try { // try from 080a9d06 to 080a9d0a has its CatchHandler @ 080a9d0d */
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::~vector
            ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)(this + 0x1c));
  std::
  map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
  ::~map((map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
          *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 100 行）：

```cpp
CPowerWarGuildInfo::~CPowerWarGuildInfo()
{
    ((std::vector<STDBSavePowerWarPoint*>*)(m_data + 0x24))->~vector();
    ((std::vector<STPowerWarGuildInfo*>*)(m_data + 0x18))->~vector();
    ((std::map<unsigned int, STPowerWarGuildInfo*>*)(m_data + 0))->~map();
}
```

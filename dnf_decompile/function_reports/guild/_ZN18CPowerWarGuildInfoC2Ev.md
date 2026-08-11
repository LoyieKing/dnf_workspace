# _ZN18CPowerWarGuildInfoC2Ev

`CPowerWarGuildInfo::CPowerWarGuildInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9c4a` | `0x7a` | `0x809fdec` | `0xf2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV18CPowerWarGuildInfo+0x8,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x4,%eax
+lea    0x4(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN18CPowerWarGuildInfoC1Ev+0x5a>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
+jmp    <T> <_ZN18CPowerWarGuildInfoC1Ev+0x5a>
+mov    %edx,%edi
+mov    %eax,-0x24(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x24(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
+lea    0x1c(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0xc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN18CPowerWarGuildInfoC1Ev+0xa2>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EEC1Ev>
+jmp    <T> <_ZN18CPowerWarGuildInfoC1Ev+0xa2>
+mov    %edx,%edi
+mov    %eax,-0x20(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x20(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-add    $0x28,%eax
+lea    0x28(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0xc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN18CPowerWarGuildInfoC1Ev+0xea>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EEC1Ev>
-jmp    <T> <_ZN18CPowerWarGuildInfoC1Ev+0x73>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN18CPowerWarGuildInfoC1Ev+0x55>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
+jmp    <T> <_ZN18CPowerWarGuildInfoC1Ev+0xea>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x10,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::CPowerWarGuildInfo() */

void __thiscall CPowerWarGuildInfo::_ZN18CPowerWarGuildInfoC2Ev(CPowerWarGuildInfo *this)

{
  *(undefined ***)this = &PTR__CPowerWarGuildInfo_08138990;
  std::
  map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
  ::map((map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
         *)(this + 4));
                    /* try { // try from 080a9c72 to 080a9c76 has its CatchHandler @ 080a9c9f */
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::vector
            ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)(this + 0x1c));
                    /* try { // try from 080a9c80 to 080a9c84 has its CatchHandler @ 080a9c87 */
  std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::vector
            ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)(this + 0x28))
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 93 行）：

```cpp
CPowerWarGuildInfo::CPowerWarGuildInfo()
{
    new (m_data + 0) std::map<unsigned int, STPowerWarGuildInfo*>();        // class +4
    new (m_data + 0x18) std::vector<STPowerWarGuildInfo*>();                // class +0x1c
    new (m_data + 0x24) std::vector<STDBSavePowerWarPoint*>();             // class +0x28
}
```

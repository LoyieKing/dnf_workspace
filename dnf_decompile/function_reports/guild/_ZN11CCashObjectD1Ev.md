# _ZN11CCashObjectD1Ev

`CCashObject::~CCashObject()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1678` | `0x5e` | `0x804b0d4` | `0x16` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
-jmp    <T> <_ZN11CCashObjectD1Ev+0x49>
-mov    %edx,%ebx
-mov    %eax,%esi
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::~CCashObject() */

void __thiscall CCashObject::_ZN11CCashObjectD1Ev(CCashObject *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 080a169c to 080a16a0 has its CatchHandler @ 080a16a3 */
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::clear((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
           *)(this + 8));
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::~map((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/CashObject.cpp](source/DNFServer/GameServer/Guild/CashObject.cpp)（约第 87 行）：

```cpp
CCashObject::~CCashObject()
{
}
```

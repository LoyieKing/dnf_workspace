# _ZN5CUser14ResetBlackListEv

`CUser::ResetBlackList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806718c` | `0x2b` | `0x808965a` | `0x2c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN5CUser14ResetBlackListEv+0x28>
+jne    <T> <_ZN5CUser14ResetBlackListEv+0x29>
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
-jmp    <T> <_ZN5CUser14ResetBlackListEv+0x29>
+nop
+jmp    <T> <_ZN5CUser14ResetBlackListEv+0x2a>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetBlackList() */

void __thiscall CUser::_ZN5CUser14ResetBlackListEv(CUser *this)

{
  char cVar1;
  
  cVar1 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(this + 100));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::clear((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
             *)(this + 100));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 404 行）：

```cpp
void CUser::ResetBlackList()
{
    if (m_blackList.empty())
    {
        return;
    }
    m_blackList.clear();
}
```

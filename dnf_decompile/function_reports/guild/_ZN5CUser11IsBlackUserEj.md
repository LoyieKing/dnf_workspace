# _ZN5CUser11IsBlackUserEj

`CUser::IsBlackUser(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067494` | `0x7a` | `0x8089b12` | `0x7a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN5CUser11IsBlackUserEj+0x1f>
 mov    $0x0,%eax
 jmp    <T> <_ZN5CUser11IsBlackUserEj+0x78>
 mov    0x8(%ebp),%eax
+lea    0x64(%eax),%edx
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+mov    0x8(%ebp),%eax
 lea    0x64(%eax),%ecx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x64(%eax),%edx
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
 je     <T> <_ZN5CUser11IsBlackUserEj+0x73>
 mov    $0x1,%eax
 jmp    <T> <_ZN5CUser11IsBlackUserEj+0x78>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::IsBlackUser(unsigned int) */

undefined4 CUser::_ZN5CUser11IsBlackUserEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> local_14 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_10 [12];
  
  cVar1 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(param_1 + 100));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::find((uint *)local_14);
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 422 行）：

```cpp
int CUser::IsBlackUser(unsigned int charNo)
{
    if (m_blackList.empty())
    {
        return 0;
    }
    return m_blackList.find(charNo) != m_blackList.end() ? 1 : 0;
}
```

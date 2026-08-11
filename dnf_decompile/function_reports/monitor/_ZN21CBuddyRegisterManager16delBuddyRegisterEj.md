# _ZN21CBuddyRegisterManager16delBuddyRegisterEj

`CBuddyRegisterManager::delBuddyRegister(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809d474` | `0x87` | `0x804b98e` | `0x87` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
+mov    0x8(%ebp),%edx
+lea    -0x10(%ebp),%eax
+lea    0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
+sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
+call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11upper_boundERS3_>
 sub    $0x4,%esp
-jmp    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEj+0x53>
+jmp    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEj+0x6f>
 lea    -0xc(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x14(%ebp),%edx
+lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjjEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
-mov    0x8(%ebp),%edx
+lea    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-lea    0xc(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11upper_boundERS3_>
-sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 test   %al,%al
-jne    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEj+0x24>
+jne    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEj+0x40>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyRegisterManager::delBuddyRegister(unsigned int) */

void CBuddyRegisterManager::_ZN21CBuddyRegisterManager16delBuddyRegisterEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_18 [4];
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_14 [4];
  undefined4 local_10 [3];
  
  std::
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::lower_bound(local_18,(uint *)param_1);
  while( true ) {
    std::
    multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::upper_bound(local_14,(uint *)param_1);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    uVar2 = 0;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_10,
               (int)local_18);
    std::
    multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::erase((multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             *)param_1,local_10[0],uVar2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp](source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp)（约第 60 行）：

```cpp
void CBuddyRegisterManager::delBuddyRegister(unsigned int key)
{
    std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
    std::multimap<unsigned int, unsigned int>::iterator end = m_map.upper_bound(key);
    while (it != end)
    {
        m_map.erase(it++);
    }
}
```

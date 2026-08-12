# _ZN15CRewardUserList7isExistEj

`CRewardUserList::isExist(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4536` | `0x7f` | `0x8099d8a` | `0x4b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
+sub    $0x4,%esp
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
-mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
-sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjiEEeqERKS3_>
-test   %al,%al
-je     <T> <_ZN15CRewardUserList7isExistEj+0x78>
-mov    $0x0,%eax
-jmp    <T> <_ZN15CRewardUserList7isExistEj+0x7d>
-mov    $0x1,%eax
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CRewardUserList::isExist(unsigned int) */

bool CRewardUserList::_ZN15CRewardUserList7isExistEj(uint param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,int>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,int>> local_14 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_10 [12];
  
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_const_iterator
            (local_1c,local_18);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_const_iterator
            (local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,int>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  return cVar1 == '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 114 行）：

```cpp
char CRewardUserList::isExist(unsigned int key)
{
    return (char)(m_map.find(key) != m_map.end());
}
```

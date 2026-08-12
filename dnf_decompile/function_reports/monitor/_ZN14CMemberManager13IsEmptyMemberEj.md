# _ZN14CMemberManager13IsEmptyMemberEj

`CMemberManager::IsEmptyMember(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099c74` | `0xb6` | `0x80623a8` | `0xb0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEC1Ev>
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0x2d>
+je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0x22>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xb4>
+jmp    <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xae>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xaf>
+je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0x88>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
-setne  %al
+je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0x88>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CMemberManager13IsEmptyMemberEj+0x8d>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xaf>
+je     <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xa9>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember7IsEmptyEv>
-jmp    <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xb4>
+jmp    <T> <_ZN14CMemberManager13IsEmptyMemberEj+0xae>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::IsEmptyMember(unsigned int) */

undefined4 CMemberManager::_ZN14CMemberManager13IsEmptyMemberEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20 [3];
  uint local_14;
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_14);
  cVar1 = std::
          map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
          ::empty((map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
                   *)(param_1 + 8));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
    ::find(local_20);
    local_14 = local_20[0];
    std::
    map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)local_10,
                       (_Rb_tree_iterator *)&local_14);
    if ((cVar1 != '\0') &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_14),
       *(int *)(iVar3 + 4) != 0)) {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_14);
      uVar2 = CMember::IsEmpty(*(CMember **)(iVar3 + 4));
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 287 行）：

```cpp
char CMemberManager::IsEmptyMember(unsigned int key)
{
    if (m_members.empty())
    {
        return 1;
    }
    std::map<unsigned int, CMember*>::iterator it = m_members.find(key);
    if (it != m_members.end() && it->second != 0)
    {
        return it->second->IsEmpty();
    }
    return 0;
}
```

# _ZN5CUser17DeleteToBlackListEj

`CUser::DeleteToBlackList(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d85c` | `0xa8` | `0x8089adc` | `0xa1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN5CUser17DeleteToBlackListEj+0x22>
-mov    $0x0,%eax
-jmp    <T> <_ZN5CUser17DeleteToBlackListEj+0xa6>
+je     <T> <_ZN5CUser17DeleteToBlackListEj+0x9a>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN5CUser17DeleteToBlackListEj+0xa1>
+je     <T> <_ZN5CUser17DeleteToBlackListEj+0x9a>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUserdlEPv>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser17DeleteToBlackListEj+0xa6>
+jmp    <T> <_ZN5CUser17DeleteToBlackListEj+0x9f>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::DeleteToBlackList(unsigned int) */

undefined4 CUser::_ZN5CUser17DeleteToBlackListEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  uint local_14;
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_10 [12];
  
  cVar1 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::find(&local_14);
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::end(local_10);
    p_Var4 = (_Rb_tree_iterator *)local_10;
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)&local_14,
                       p_Var4);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)&local_14);
      CBlackUser::operator_delete(*(CBlackUser **)(iVar3 + 4),p_Var4);
      std::
      map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
      ::erase((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
               *)(param_1 + 0x50),local_14);
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

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 527 行）：

```cpp
int CUser::DeleteToBlackList(unsigned int charNo)
{
    if (!m_blackList.empty())
    {
        std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.find(charNo);
        if (it != m_blackList.end())
        {
            delete it->second;
            m_blackList.erase(it);
            return 1;
        }
    }
    return 0;
}
```

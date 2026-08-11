# _ZN10CAppConfig18clearServerInfoMapEv

`CAppConfig::clearServerInfoMap()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805ef5e` | `0xbe` | `0x804c416` | `0x7f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN10CAppConfig18clearServerInfoMapEv+0x7c>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEptEv>
-mov    0x4(%eax),%eax
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN10CAppConfig18clearServerInfoMapEv+0x4d>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig18clearServerInfoMapEv+0x41>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEptEv>
-movl   $0x0,0x4(%eax)
-lea    -0xc(%ebp),%eax
-movl   $0x0,0x8(%esp)
-lea    -0x14(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEppEi>
-sub    $0x4,%esp
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP12stServerInfoEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN10CAppConfig18clearServerInfoMapEv+0x20>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::clearServerInfoMap() */

void __thiscall CAppConfig::_ZN10CAppConfig18clearServerInfoMapEv(CAppConfig *this)

{
  char cVar1;
  int iVar2;
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  local_18 [4];
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>> local_10 [12];
  
  std::
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  ::begin(local_18);
  while( true ) {
    std::
    multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>> *)local_18);
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>> *)local_18)
      ;
      ::operator_delete(*(void **)(iVar2 + 4));
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>> *)local_18);
    *(undefined4 *)(iVar2 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,stServerInfo*>>::operator++
              (local_10,(int)local_18);
  }
  std::
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  ::clear((multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
           *)(this + 0x14));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFAppConfig.cpp](source/DNFServer/GameServer/Guild/DNFAppConfig.cpp)（约第 170 行）：

```cpp
void CAppConfig::clearServerInfoMap()
{
    for (std::multimap<unsigned int, stServerInfo*>::iterator it = m_serverInfo.begin();
         it != m_serverInfo.end(); ++it)
    {
        delete it->second;
    }
    m_serverInfo.clear();
}
```

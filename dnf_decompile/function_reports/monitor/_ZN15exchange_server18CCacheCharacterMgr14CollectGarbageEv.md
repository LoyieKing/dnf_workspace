# _ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv

`exchange_server::CCacheCharacterMgr::CollectGarbage()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80938a0` | `0x107` | `0x805d93e` | `0x113` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,81 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 movb   $0x0,-0xd(%ebp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server19CCacheCharacterTimeC1Ev>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueIN15exchange_server19CCacheCharacterTimeESt6vectorIS1_SaIS1_EESt4lessIS1_EE5emptyEv>
 test   %al,%al
 je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x3f>
 movzbl -0xd(%ebp),%eax
-jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x105>
+jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x111>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueIN15exchange_server19CCacheCharacterTimeESt6vectorIS1_SaIS1_EESt4lessIS1_EE3topEv>
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    %edx,-0x18(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1d,%eax
-jle    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x101>
+jle    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x10c>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 lea    -0x1c(%ebp),%ecx
 add    $0x4,%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN15exchange_server20CACHE_CHARACTER_TYPEEEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xee>
+je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xda>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN15exchange_server20CACHE_CHARACTER_TYPEEEEptEv>
 mov    0xc(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x1d,%eax
-setg   %al
+jle    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xda>
+mov    $0x1,%eax
+jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xdf>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xee>
+je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0xf9>
 mov    0x8(%ebp),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 movb   $0x1,-0xd(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueIN15exchange_server19CCacheCharacterTimeESt6vectorIS1_SaIS1_EESt4lessIS1_EE3popEv>
 jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv+0x24>
+nop
 movzbl -0xd(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* exchange_server::CCacheCharacterMgr::CollectGarbage() */

undefined1 __thiscall
exchange_server::CCacheCharacterMgr::_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv
          (CCacheCharacterMgr *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
  local_18 [7];
  undefined1 local_11;
  time_t local_10;
  
  local_11 = 0;
  CCacheCharacterTime::CCacheCharacterTime((CCacheCharacterTime *)&local_20);
  local_10 = time((time_t *)0x0);
  while( true ) {
    cVar1 = std::
            priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
            ::empty();
    if (cVar1 != '\0') {
      return local_11;
    }
    piVar2 = (int *)std::
                    priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
                    ::top();
    local_1c = piVar2[1];
    local_20 = *piVar2;
    if (local_10 - local_20 < 0x1e) break;
    piVar2 = &local_1c;
    std::
    map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
    ::find(&local_24);
    std::
    map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>
                        *)&local_24,(_Rb_tree_iterator *)local_18);
    if ((cVar1 != '\0') &&
       (iVar3 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>
                ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>
                              *)&local_24), 0x1d < local_10 - *(int *)(iVar3 + 0xc))) {
      std::
      map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
      ::erase((map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
               *)this,local_24,piVar2);
      local_11 = 1;
    }
    std::
    priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
    ::pop((priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
           *)(this + 0x18));
  }
  return local_11;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 332 行）：

```cpp
bool CCacheCharacterMgr::CollectGarbage()
{
    bool result = 0;
    CCacheCharacterTime top;
    time_t now = time(0);
    while (1)
    {
        if (m_timeQueue.empty())
        {
            return result;
        }
        top = m_timeQueue.top();
        if (now - top.m_time < 0x1e)
        {
            break;
        }
        std::map<unsigned int, CACHE_CHARACTER_TYPE>::iterator it =
            m_cache.find(top.m_charNo);
        if (it != m_cache.end() && now - it->second.m_time > 0x1d)
        {
            m_cache.erase(it);
            result = 1;
        }
        m_timeQueue.pop();
    }
    return result;
}
```

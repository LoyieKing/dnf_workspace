# _ZN14CServerHandler20getfirstLinkedServerEv

`CServerHandler::getfirstLinkedServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x807a904` | `0x40` | `0x80807b6` | `0x40` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler20getfirstLinkedServerEv+0x1c>
-mov    $0xa,%eax
+mov    $0x0,%eax
 jmp    <T> <_ZN14CServerHandler20getfirstLinkedServerEv+0x3e>
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    (%eax),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::getfirstLinkedServer() */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler20getfirstLinkedServerEv(CServerHandler *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_10 [12];
  
  cVar1 = std::
          map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
          ::empty((map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
                   *)this);
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::begin(local_10);
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                       ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_10);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 10;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 259 行）：

```cpp
unsigned int CServerHandler::getfirstLinkedServer()
{
    if (m_gameServers.empty())
    {
        return 0;
    }
    return m_gameServers.begin()->first;
}
```

# _ZN14CServerHandler13GetGameServerEj

`CServerHandler::GetGameServer(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a7e0` | `0x64` | `0x8080430` | `0x64` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEeqERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler13GetGameServerEj+0x54>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CServerHandler13GetGameServerEj+0x62>
+je     <T> <_ZN14CServerHandler13GetGameServerEj+0x5d>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
+jmp    <T> <_ZN14CServerHandler13GetGameServerEj+0x62>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetGameServer(unsigned int) */

undefined4 CServerHandler::_ZN14CServerHandler13GetGameServerEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_14 [4];
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->(local_14)
    ;
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 207 行）：

```cpp
CGameServer* CServerHandler::GetGameServer(unsigned int id)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(id);
    if (it != m_gameServers.end())
    {
        return it->second;
    }
    return 0;
}
```

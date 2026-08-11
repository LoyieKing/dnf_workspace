# _ZN14CServerHandler20SendAllUdpGameServerEPci

`CServerHandler::SendAllUdpGameServer(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d5cc` | `0xa9` | `0x8081998` | `0x8e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci+0x78>
+jmp    <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci+0x61>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13IsValidServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci+0x5b>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
-mov    0x4(%eax),%eax
+je     <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci+0x56>
+mov    -0xc(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-lea    -0xc(%ebp),%eax
-movl   $0x0,0x8(%esp)
-lea    -0x14(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEppEi>
-sub    $0x4,%esp
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci+0x1d>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendAllUdpGameServer(char*, int) */

void __thiscall
CServerHandler::_ZN14CServerHandler20SendAllUdpGameServerEPci
          (CServerHandler *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_18 [4];
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_10 [12];
  
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_18);
    cVar1 = CServerInterface::IsValidServer(*(CServerInterface **)(iVar2 + 4));
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)local_18);
      CServerInterface::SendToServer(*(CServerInterface **)(iVar2 + 4),param_1,param_2);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator++
              (local_10,(int)local_18);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 306 行）：

```cpp
void CServerHandler::SendAllUdpGameServer(char* buf, int len)
{
    for (std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.begin();
         it != m_gameServers.end(); ++it)
    {
        CGameServer* gs = it->second;
        if (gs->IsValidServer())
        {
            gs->SendToServer(buf, len);
        }
    }
}
```

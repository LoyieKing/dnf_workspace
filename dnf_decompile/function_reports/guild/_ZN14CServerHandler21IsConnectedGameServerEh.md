# _ZN14CServerHandler21IsConnectedGameServerEh

`CServerHandler::IsConnectedGameServer(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d36a` | `0xbb` | `0x8081922` | `0xb7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x44,%esp
+sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 movzbl -0x2c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%ecx
+lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler21IsConnectedGameServerEh+0x73>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN14CServerHandler21IsConnectedGameServerEh+0x72>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
-jmp    <T> <_ZN14CServerHandler21IsConnectedGameServerEh+0xb6>
-movzbl -0x2c(%ebp),%ebx
+jmp    <T> <_ZN14CServerHandler21IsConnectedGameServerEh+0xb5>
 movl   $0x1a1,0x8(%esp)
 movl   $"IsConnectedGameServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzbl -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CServerHandler::IsConnectedGameServer\tGame Server Index Over Index : %d!\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::IsConnectedGameServer(unsigned char) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler21IsConnectedGameServerEh(CServerHandler *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_20 [4];
  uint local_1c;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  local_1c = (uint)param_1;
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::find((uint *)local_20);
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    CMyFileLog::CMyFileLog(local_14,"IsConnectedGameServer",0x1a1);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer",
               "CServerHandler::IsConnectedGameServer\tGame Server Index Over Index : %d!\n",
               (uint)param_1);
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->(local_20)
    ;
    uVar3 = CServerInterface::IsConnected(*(CServerInterface **)(iVar2 + 4));
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 236 行）：

```cpp
bool CServerHandler::IsConnectedGameServer(unsigned char group)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(group);
    if (it != m_gameServers.end())
    {
        return it->second->IsConnected();
    }
    DNF_LOG_SCOPE_LINE(0x1a1,"./log/GameServer",
        "CServerHandler::IsConnectedGameServer\tGame Server Index Over Index : %d!\n",
        (unsigned int)group);
    return 0;
}
```

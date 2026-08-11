# _ZN14CServerHandler18UnregistGameServerEj

`CServerHandler::UnregistGameServer(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806dcaa` | `0xd0` | `0x8082086` | `0xd3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x24,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler18UnregistGameServerEj+0x55>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CServerHandler18UnregistGameServerEj+0xcb>
-lea    -0x18(%ebp),%eax
+jne    <T> <_ZN14CServerHandler18UnregistGameServerEj+0xcd>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CServerHandler18UnregistGameServerEj+0x7c>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler18UnregistGameServerEj+0x77>
+je     <T> <_ZN14CServerHandler18UnregistGameServerEj+0x7c>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CGameServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
-mov    -0x18(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    0xc(%ebp),%ebx
 movl   $0x387,0x8(%esp)
 movl   $&_ZZN14CServerHandler18UnregistGameServerEjE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Game server unregist. Channel: %d",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler18UnregistGameServerEj+0xce>
+nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::UnregistGameServer(unsigned int) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler18UnregistGameServerEj(CServerHandler *this,uint param_1)

{
  CGameServer *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_1c;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::find(&local_1c);
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)&local_1c,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> *)&local_1c);
    this_00 = *(CGameServer **)(iVar3 + 4);
    if (this_00 != (CGameServer *)0x0) {
      CGameServer::_ZN11CGameServerD2Ev(this_00);
      ::operator_delete(this_00);
    }
    std::
    map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
    ::erase((map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
             *)this,local_1c);
    CMyFileLog::CMyFileLog(local_14,"UnregistGameServer",0x387);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer","Game server unregist. Channel: %d",param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 444 行）：

```cpp
void CServerHandler::UnregistGameServer(unsigned int group)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(group);
    if (it == m_gameServers.end())
    {
        return;
    }
    CGameServer* gs = it->second;
    if (gs != 0)
    {
        delete gs;
    }
    m_gameServers.erase(it);
    DNF_LOG_SCOPE_LINE(0x387, "./log/GameServer", "Game server unregist. Channel: %d", group);
}
```

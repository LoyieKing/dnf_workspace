# _ZN14CServerHandler14ResetHeartBeatEh

`CServerHandler::ResetHeartBeat(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8079b24` | `0xe1` | `0x8080dc2` | `0xae` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x44,%esp
+sub    $0x38,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x2c(%ebp)
-movzbl -0x2c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %al,-0x1c(%ebp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%ecx
+lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x9e>
-lea    -0x20(%ebp),%eax
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x8d>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpb   $0xff,-0x2c(%ebp)
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x88>
-mov    -0xc(%ebp),%eax
+test   %eax,%eax
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x8d>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13IsValidServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x88>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x8d>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x8d>
+jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x92>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x9e>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0xac>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface14ResetHeartBeatEv>
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0xdc>
-movzbl -0x2c(%ebp),%ebx
-movl   $0x162,0x8(%esp)
-movl   $&_ZZN14CServerHandler14ResetHeartBeatEhE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CServerHandler::ResetHeartBeat\tGame Server Index Over Index : %d!\n",0x8(%esp)
-movl   $"./log/GameServer",0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::ResetHeartBeat(unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler14ResetHeartBeatEh(CServerHandler *this,uchar param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>> local_24 [4];
  uint local_20;
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  local_1c [4];
  CMyFileLog local_18 [8];
  CServerInterface *local_10;
  
  local_20 = (uint)param_1;
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::find((uint *)local_24);
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::end(local_1c);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->(local_24)
    ;
    local_10 = *(CServerInterface **)(iVar3 + 4);
    if ((param_1 == 0xff) || (cVar2 = CServerInterface::IsValidServer(local_10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CServerInterface::ResetHeartBeat(local_10);
      return;
    }
  }
  CMyFileLog::CMyFileLog(local_18,"ResetHeartBeat",0x162);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_18,"./log/GameServer",
             "CServerHandler::ResetHeartBeat\tGame Server Index Over Index : %d!\n",(uint)param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 456 行）：

```cpp
void CServerHandler::ResetHeartBeat(unsigned char channel)
{
    std::map<unsigned int, CGameServer*>::iterator it =
        m_gameServers.find((unsigned int)channel);
    if (it != m_gameServers.end() && it->second != 0 &&
        ((CServerInterface*)it->second)->IsValidServer() != 0)
    {
        ((CServerInterface*)it->second)->ResetHeartBeat();
    }
}
```

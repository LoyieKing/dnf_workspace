# _ZN14CServerHandler14SetConnectFlagEhb

`CServerHandler::SetConnectFlag(unsigned char, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d4aa` | `0xc4` | `0x8081a66` | `0xc4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x2c(%ebp)
 mov    %al,-0x30(%ebp)
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
 je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x81>
 movzbl -0x30(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CGameServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11SetConnFlagEb>
 jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0xbf>
-movzbl -0x2c(%ebp),%ebx
 movl   $0x1fa,0x8(%esp)
 movl   $"SetConnectFlag",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzbl -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CServerHandler::SetConnectFlag\tGame Server Index Over Index : %d!\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SetConnectFlag(unsigned char, bool) */

void __thiscall
CServerHandler::_ZN14CServerHandler14SetConnectFlagEhb
          (CServerHandler *this,uchar param_1,bool param_2)

{
  char cVar1;
  int iVar2;
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
    CMyFileLog::CMyFileLog(local_14,"SetConnectFlag",0x1fa);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer",
               "CServerHandler::SetConnectFlag\tGame Server Index Over Index : %d!\n",(uint)param_1)
    ;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGameServer*>>::operator->(local_20)
    ;
    CServerInterface::SetConnFlag(*(CServerInterface **)(iVar2 + 4),param_2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 192 行）：

```cpp
void CServerHandler::SetConnectFlag(unsigned char idx, bool flag) {}
```

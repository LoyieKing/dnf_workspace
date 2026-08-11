# _ZN14CServerHandler15DeleteTcpServerEh

`CServerHandler::DeleteTcpServer(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808fc10` | `0xf0` | `0x808c3f0` | `0xfc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x44,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x1c(%ebp)
+mov    %al,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%ecx
-lea    -0x18(%ebp),%eax
-lea    -0x1c(%ebp),%edx
+lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xe6>
-lea    -0x18(%ebp),%eax
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xf2>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x92>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x86>
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x92>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CTcpServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-movzbl -0x1c(%ebp),%eax
-movzbl %al,%ebx
 movl   $0x130,0x8(%esp)
 movl   $"DeleteTcpServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzbl -0x2c(%ebp),%eax
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
 movl   $"TcpServer(%d) Deleted",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xeb>
+jmp    <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xf7>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::DeleteTcpServer(unsigned char) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler15DeleteTcpServerEh(CServerHandler *this,uchar param_1)

{
  CTcpServer *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::find((uchar *)&local_1c);
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)&local_1c,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)&local_1c);
    this_00 = *(CTcpServer **)(iVar2 + 4);
    if (this_00 != (CTcpServer *)0x0) {
      CTcpServer::~CTcpServer(this_00);
      operator_delete(this_00);
    }
    std::
    map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
    ::erase((map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
             *)(this + 0x1000),local_1c);
    CMyFileLog::CMyFileLog(local_14,"DeleteTcpServer",0x130);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/TcpServer","TcpServer(%d) Deleted",(uint)param_1);
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 120 行）：

```cpp
char CServerHandler::DeleteTcpServer(unsigned char idx)
{
    std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
    {
        CTcpServer* server = it->second;
        if (server)
            delete server;
        m_tcpServers.erase(it);
        CMyFileLog log("DeleteTcpServer", 0x130);
        log("./log/TcpServer", "TcpServer(%d) Deleted", idx);
        return 1;
    }
    return 0;
}
```

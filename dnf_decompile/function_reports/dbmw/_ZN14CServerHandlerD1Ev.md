# _ZN14CServerHandlerD1Ev

`CServerHandler::~CServerHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808f1bc` | `0x1d6` | `0x80df218` | `0x1c7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,151 +1,147 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x7c>
-lea    -0x20(%ebp),%eax
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x71>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEptEv>
 mov    0x4(%eax),%eax
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN14CServerHandlerD1Ev+0x71>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEptEv>
-mov    0x4(%eax),%ebx
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN14CServerHandlerD1Ev+0x66>
+mov    -0x1c(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandlerD1Ev+0x5f>
+je     <T> <_ZN14CServerHandlerD1Ev+0x54>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CTcpServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEptEv>
 movl   $0x0,0x4(%eax)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CServerHandlerD1Ev+0x26>
 mov    0x8(%ebp),%eax
 add    $0x1000,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE5clearEv>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0xdd>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0xce>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1030,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerD1Ev+0xef>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0xe0>
 mov    0x8(%ebp),%eax
 add    $0x1030,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x109>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0xfa>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1018,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x11b>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x10c>
 mov    0x8(%ebp),%eax
 add    $0x1018,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x135>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x126>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1000,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x147>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x138>
 mov    0x8(%ebp),%eax
 add    $0x1000,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEED1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x161>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x152>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xff0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x173>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x164>
 mov    0x8(%ebp),%eax
 add    $0xff0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x1a7>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x198>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandlerD1Ev+0x19b>
+je     <T> <_ZN14CServerHandlerD1Ev+0x18c>
 mov    0x8(%ebp),%eax
 lea    0xff0(%eax),%ebx
 mov    0x8(%ebp),%eax
 cmp    %eax,%ebx
-je     <T> <_ZN14CServerHandlerD1Ev+0x19b>
+je     <T> <_ZN14CServerHandlerD1Ev+0x18c>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN11CGameServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x187>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x178>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandlerD1Ev+0x1cb>
+je     <T> <_ZN14CServerHandlerD1Ev+0x1bc>
 mov    0x8(%ebp),%eax
 lea    0xff0(%eax),%ebx
 mov    0x8(%ebp),%eax
 cmp    %eax,%ebx
-je     <T> <_ZN14CServerHandlerD1Ev+0x1cb>
+je     <T> <_ZN14CServerHandlerD1Ev+0x1bc>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN11CGameServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerD1Ev+0x1b7>
+jmp    <T> <_ZN14CServerHandlerD1Ev+0x1a8>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::~CServerHandler() */

void __thiscall CServerHandler::_ZN14CServerHandlerD1Ev(CServerHandler *this)

{
  CTcpServer *this_00;
  char cVar1;
  int iVar2;
  CGameServer *this_01;
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  local_24 [4];
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  local_20 [16];
  
                    /* try { // try from 0808f1d8 to 0808f27c has its CatchHandler @ 0808f27f */
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
    ::end(local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_24);
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_24);
      this_00 = *(CTcpServer **)(iVar2 + 4);
      if (this_00 != (CTcpServer *)0x0) {
        CTcpServer::~CTcpServer(this_00);
        operator_delete(this_00);
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_24);
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_24);
  }
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::clear((map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
           *)(this + 0x1000));
                    /* try { // try from 0808f2a4 to 0808f2a8 has its CatchHandler @ 0808f2ab */
  CStatisticsServer::~CStatisticsServer((CStatisticsServer *)(this + 0x1030));
                    /* try { // try from 0808f2d0 to 0808f2d4 has its CatchHandler @ 0808f2d7 */
  CGuildServer::~CGuildServer((CGuildServer *)(this + 0x1018));
                    /* try { // try from 0808f2fc to 0808f300 has its CatchHandler @ 0808f303 */
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::~map((map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
          *)(this + 0x1000));
                    /* try { // try from 0808f328 to 0808f32c has its CatchHandler @ 0808f32f */
  CMonitorServer::~CMonitorServer((CMonitorServer *)(this + 0xff0));
  if (this != (CServerHandler *)0x0) {
    this_01 = (CGameServer *)(this + 0xff0);
    while (this_01 != (CGameServer *)this) {
      this_01 = this_01 + -0x10;
      CGameServer::~CGameServer(this_01);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 31 行）：

```cpp
CServerHandler::~CServerHandler()
{
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server)
        {
            delete server;
            it->second = 0;
        }
    }
    m_tcpServers.clear();
}
```

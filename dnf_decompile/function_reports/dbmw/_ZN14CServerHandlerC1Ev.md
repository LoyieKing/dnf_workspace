# _ZN14CServerHandlerC1Ev

`CServerHandler::CServerHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808f070` | `0x14c` | `0x80df000` | `0x147` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 mov    %ebx,%edi
 mov    $0xfe,%esi
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x23>
 mov    %edi,(%esp)
 call   <T> <_ZN11CGameServerC1Ev>
 add    $0x10,%edi
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandlerC1Ev+0x15>
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x63>
 mov    %edx,%edi
 mov    %eax,-0x1c(%ebp)
 test   %ebx,%ebx
 je     <T> <_ZN14CServerHandlerC1Ev+0x56>
 mov    $0xfe,%eax
 sub    %esi,%eax
 shl    $0x4,%eax
 lea    (%ebx,%eax,1),%esi
 cmp    %ebx,%esi
 je     <T> <_ZN14CServerHandlerC1Ev+0x56>
 sub    $0x10,%esi
 mov    %esi,(%esp)
 call   <T> <_ZN11CGameServerD1Ev>
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x45>
 mov    -0x1c(%ebp),%eax
 mov    %edi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0xff0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServerC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1000,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1018,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServerC1Ev>
 mov    0x8(%ebp),%eax
+add    $0x1030,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CStatisticsServerC1Ev>
+mov    0x8(%ebp),%eax
 movl   $0x0,0x1028(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x102c(%eax)
-mov    0x8(%ebp),%eax
-add    $0x1030,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CStatisticsServerC1Ev>
-jmp    <T> <_ZN14CServerHandlerC1Ev+0x144>
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1018,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerC1Ev+0xdc>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0xdf>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1000,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerC1Ev+0xf6>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0xf9>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xff0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerC1Ev+0x110>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0x113>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandlerC1Ev+0x138>
+je     <T> <_ZN14CServerHandlerC1Ev+0x13b>
 mov    0x8(%ebp),%eax
 lea    0xff0(%eax),%ebx
 mov    0x8(%ebp),%eax
 cmp    %eax,%ebx
-je     <T> <_ZN14CServerHandlerC1Ev+0x138>
+je     <T> <_ZN14CServerHandlerC1Ev+0x13b>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN11CGameServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerC1Ev+0x124>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0x127>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x2c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::CServerHandler() */

void __thiscall CServerHandler::_ZN14CServerHandlerC1Ev(CServerHandler *this)

{
  int iVar1;
  CServerHandler *this_00;
  
  this_00 = this;
  for (iVar1 = 0xfe; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0808f088 to 0808f08c has its CatchHandler @ 0808f09f */
    CGameServer::CGameServer((CGameServer *)this_00);
    this_00 = this_00 + 0x10;
  }
                    /* try { // try from 0808f0de to 0808f0e2 has its CatchHandler @ 0808f180 */
  CMonitorServer::CMonitorServer((CMonitorServer *)(this + 0xff0));
                    /* try { // try from 0808f0ee to 0808f0f2 has its CatchHandler @ 0808f166 */
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::map((map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
         *)(this + 0x1000));
                    /* try { // try from 0808f0fe to 0808f102 has its CatchHandler @ 0808f14c */
  CGuildServer::CGuildServer((CGuildServer *)(this + 0x1018));
  *(undefined4 *)(this + 0x1028) = 0;
  *(undefined4 *)(this + 0x102c) = 0;
                    /* try { // try from 0808f128 to 0808f12c has its CatchHandler @ 0808f132 */
  CStatisticsServer::CStatisticsServer((CStatisticsServer *)(this + 0x1030));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 26 行）：

```cpp
CServerHandler::CServerHandler()
{
    m_app = 0;
    m_tickCount = 0;
}
```

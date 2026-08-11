# _Z17initAuctionStringPKc

`initAuctionString(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8063210` | `0x6f9` | `0x805f0ee` | `0x7ae` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,475 +1,524 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 cmpl   $0x0,0x8(%ebp)
 jne    <T> <_Z17initAuctionStringPKc+0x24>
 movl   $"Invalid file is null",(%esp)
 call   <T> <puts>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x39(%ebp),%eax
+mov    $0x0,%ebx
+jmp    <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&g_ServerString_,(%esp)
 call   <T> <_ZN13np_server_xml10CServerXml10StrLoadingESs>
 jmp    <T> <_Z17initAuctionStringPKc+0x72>
 mov    %edx,%ebx
 mov    %eax,%esi
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_Z17initAuctionStringPKc+0x7f>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_Z17initAuctionStringPKc+0x9a>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x9(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x9(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movb   $0x0,-0x11(%ebp)
+lea    -0x18(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x0,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x109>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x12b>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x12b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x1c(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x1,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0xff,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x19e>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x1c0>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x1c0>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x20(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x2,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x1fe,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x233>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x255>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x255>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x24(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x3,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x2fd,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x2c8>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x2ea>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x2ea>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x28(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x4,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x3fc,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x35d>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x37f>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x37f>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x2c(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x5,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x4fb,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x3f2>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x414>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x414>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x30(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x6,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x5fa,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x487>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x4a9>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x4a9>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x34(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x7,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x6f9,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x51c>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x53e>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x53e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x38(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x8,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    $&LETTER_TEXT+0x7f8,%edx
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x5b1>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x5d3>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x5d3>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x3c(%ebp),%eax
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x64,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+movl   $0xff,0x8(%esp)
+mov    %eax,0x4(%esp)
+movl   $&SENDER_NAME,(%esp)
+call   <T> <strncpy>
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x645>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x667>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x667>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
 lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_Z17initAuctionStringPKc+0x7f>
+lea    -0x11(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x65,0x8(%esp)
+movl   $&g_ServerString_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
+sub    $0x4,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_Z17initAuctionStringPKc+0x9a>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movb   $0x0,-0x41(%ebp)
-lea    -0x38(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x0,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x125>
-jmp    <T> <_Z17initAuctionStringPKc+0x12f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x34(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x1,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0xff,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x1ab>
-jmp    <T> <_Z17initAuctionStringPKc+0x1b5>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x30(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x2,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x1fe,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x231>
-jmp    <T> <_Z17initAuctionStringPKc+0x23b>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x2c(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x3,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x2fd,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x2b7>
-jmp    <T> <_Z17initAuctionStringPKc+0x2c1>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x28(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x4,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x3fc,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x33d>
-jmp    <T> <_Z17initAuctionStringPKc+0x347>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x24(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x5,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x4fb,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x3c3>
-jmp    <T> <_Z17initAuctionStringPKc+0x3cd>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x20(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x6,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x5fa,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x449>
-jmp    <T> <_Z17initAuctionStringPKc+0x453>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x1c(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x7,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x6f9,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x4cf>
-jmp    <T> <_Z17initAuctionStringPKc+0x4d9>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x18(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x8,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    $&LETTER_TEXT+0x7f8,%edx
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x555>
-jmp    <T> <_Z17initAuctionStringPKc+0x55f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x14(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x64,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-movl   $0xff,0x8(%esp)
-mov    %eax,0x4(%esp)
-movl   $&SENDER_NAME,(%esp)
-call   <T> <strncpy>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x5da>
-jmp    <T> <_Z17initAuctionStringPKc+0x5e4>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0x10(%ebp),%eax
-lea    -0x41(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x65,0x8(%esp)
-movl   $&g_ServerString_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
-sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 movl   $0xff,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $&SENDER_NPC_NAME,(%esp)
 call   <T> <strncpy>
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x65f>
-jmp    <T> <_Z17initAuctionStringPKc+0x669>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-lea    -0xc(%ebp),%eax
-lea    -0x41(%ebp),%edx
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x6d9>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x6fb>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x6fb>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+lea    -0x44(%ebp),%eax
+lea    -0x11(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x66,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 movl   $0xff,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $&SENDER_NAME_GOLD,(%esp)
 call   <T> <strncpy>
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_Z17initAuctionStringPKc+0x6e4>
-jmp    <T> <_Z17initAuctionStringPKc+0x6eb>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x0,%eax
-jmp    <T> <_Z17initAuctionStringPKc+0x6ef>
-movzbl -0x41(%ebp),%eax
+movzbl -0x11(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_Z17initAuctionStringPKc+0x76d>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x78f>
+mov    $0x1,%esi
+jmp    <T> <_Z17initAuctionStringPKc+0x78f>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_Z17initAuctionStringPKc+0x7a2>
+movzbl -0x11(%ebp),%ebx
+mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x08063852) */
/* WARNING: Removing unreachable block (ram,0x080638f4) */
/* WARNING: Removing unreachable block (ram,0x08063748) */
/* WARNING: Removing unreachable block (ram,0x080637ea) */
/* WARNING: Removing unreachable block (ram,0x0806363c) */
/* WARNING: Removing unreachable block (ram,0x080636df) */
/* WARNING: Removing unreachable block (ram,0x08063530) */
/* WARNING: Removing unreachable block (ram,0x080635d3) */
/* WARNING: Removing unreachable block (ram,0x08063424) */
/* WARNING: Removing unreachable block (ram,0x080634c7) */
/* WARNING: Removing unreachable block (ram,0x08063318) */
/* WARNING: Removing unreachable block (ram,0x080633bb) */
/* WARNING: Removing unreachable block (ram,0x0806339e) */
/* WARNING: Removing unreachable block (ram,0x08063441) */
/* WARNING: Removing unreachable block (ram,0x080634aa) */
/* WARNING: Removing unreachable block (ram,0x0806354d) */
/* WARNING: Removing unreachable block (ram,0x080635b6) */
/* WARNING: Removing unreachable block (ram,0x08063659) */
/* WARNING: Removing unreachable block (ram,0x080636c2) */
/* WARNING: Removing unreachable block (ram,0x08063765) */
/* WARNING: Removing unreachable block (ram,0x080637cd) */
/* WARNING: Removing unreachable block (ram,0x0806386f) */
/* WARNING: Removing unreachable block (ram,0x080638d7) */

bool initAuctionString(char *file)

{
  char *__src;
  string local_44 [7];
  allocator<char> local_3d;
  string local_3c [48];
  
                    /* Unresolved local var: bool result@[???] */
  if (file == (char *)0x0) {
    puts("Invalid file is null");
  }
  else {
    std::allocator<char>::allocator();
                    /* try { // try from 08063253 to 08063257 has its CatchHandler @ 0806328f */
    std::string::string(local_44,file,(allocator *)&local_3d);
                    /* try { // try from 08063266 to 0806326a has its CatchHandler @ 0806326d */
    np_server_xml::CServerXml::StrLoading(&g_ServerString_,(string)local_44);
                    /* try { // try from 08063288 to 0806328c has its CatchHandler @ 0806328f */
    std::string::~string(local_44);
    std::allocator<char>::~allocator(&local_3d);
    np_server_xml::CServerXml::getAuctionString((CServerXml *)local_3c,0x82cacc0,(bool *)0x0);
                    /* try { // try from 080632e4 to 080632e8 has its CatchHandler @ 0806331a */
    __src = (char *)std::string::c_str();
    strncpy(LETTER_TEXT[0],__src,0xff);
    std::string::~string(local_3c);
  }
  return false;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp)（约第 17 行）：

```cpp
bool initAuctionString(const char* file)
{
    if (file == NULL)
    {
        puts("Invalid file is null");
        return false;
    }
    g_ServerString_.StrLoading(std::string(file));
    bool result = false;
    {
        std::string s = g_ServerString_.getAuctionString(0, result);
        strncpy(LETTER_TEXT[0], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(1, result);
        strncpy(LETTER_TEXT[1], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(2, result);
        strncpy(LETTER_TEXT[2], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(3, result);
        strncpy(LETTER_TEXT[3], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(4, result);
        strncpy(LETTER_TEXT[4], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(5, result);
        strncpy(LETTER_TEXT[5], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(6, result);
        strncpy(LETTER_TEXT[6], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(7, result);
        strncpy(LETTER_TEXT[7], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(8, result);
        strncpy(LETTER_TEXT[8], s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(100, result);
        strncpy(SENDER_NAME, s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(101, result);
        strncpy(SENDER_NPC_NAME, s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    {
        std::string s = g_ServerString_.getAuctionString(102, result);
        strncpy(SENDER_NAME_GOLD, s.c_str(), 0xff);
        if (!result)
        {
            return false;
        }
    }
    return result;
}
```

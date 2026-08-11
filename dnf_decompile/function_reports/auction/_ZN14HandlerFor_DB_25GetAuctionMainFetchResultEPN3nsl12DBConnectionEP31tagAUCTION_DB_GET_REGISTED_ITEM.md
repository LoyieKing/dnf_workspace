# _ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM

`HandlerFor_DB_::GetAuctionMainFetchResult(nsl::DBConnection*, tagAUCTION_DB_GET_REGISTED_ITEM*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x806ea18` | `0x654` | `0x806d1ae` | `0x657` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,457 +1,458 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0xc(%ebp)
 mov    0x10(%ebp),%eax
 lea    0x15(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_int64EiRy>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x45>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 addl   $0x1,-0xc(%ebp)
 mov    0x10(%ebp),%eax
 lea    0x1d(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection8get_longEiRl>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x81>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x21(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0xb9>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x25(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0xc,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_strEiPci>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0xf9>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 movb   $0x0,0x32(%eax)
 mov    0x10(%ebp),%eax
 lea    0x32(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x138>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x36(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0xc,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_strEiPci>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x178>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 movb   $0x0,0x43(%eax)
 mov    0x10(%ebp),%eax
 lea    0x43(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x1b7>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x47(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x1ef>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x4b(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection8get_boolEiRb>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x227>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x4c(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ulongEiRm>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x25f>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x51(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x297>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 lea    -0xe(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x2cc>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x5b(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x304>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x5c(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_ushortEiRt>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x33c>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 lea    -0xf(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x371>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x55(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_ushortEiRt>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x3a9>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x57(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ulongEiRm>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x3e1>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x80(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x41c>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x81(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection8get_uintEiRj>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x457>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x85(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x492>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x5e(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0xa,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_binaryEiPvi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x4d2>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x68(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0xe,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection10get_binaryEiPvi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x512>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 movzbl -0xe(%ebp),%eax
 mov    %eax,%edx
 and    $0x1f,%edx
 mov    0x10(%ebp),%eax
-mov    %edx,%ecx
-and    $0x1f,%ecx
-movzbl 0x50(%eax),%edx
-and    $0xffffffe0,%edx
-or     %ecx,%edx
+movzbl 0x50(%eax),%eax
+and    $0xffffffe0,%eax
+or     %edx,%eax
+mov    %eax,%edx
+mov    0x10(%ebp),%eax
 mov    %dl,0x50(%eax)
 movzbl -0xf(%ebp),%eax
+movzbl %al,%eax
+shl    $0x5,%eax
 mov    %eax,%edx
-and    $0x7,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,%ecx
-shl    $0x5,%ecx
-movzbl 0x50(%eax),%edx
-and    $0x1f,%edx
-or     %ecx,%edx
+mov    0x10(%ebp),%eax
+movzbl 0x50(%eax),%eax
+and    $0x1f,%eax
+or     %edx,%eax
+mov    %eax,%edx
+mov    0x10(%ebp),%eax
 mov    %dl,0x50(%eax)
 mov    0x10(%ebp),%eax
 lea    0x89(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection12get_longlongEiRx>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x587>
-mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x58a>
+mov    $0x0,%eax
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x91(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_intEiRi>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x5c2>
-mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x5c5>
+mov    $0x0,%eax
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    0x10(%ebp),%eax
 lea    0x95(%eax),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x20,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection7get_strEiPci>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x602>
-mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x605>
+mov    $0x0,%eax
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 lea    -0xe(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection9get_ubyteEiRh>
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x634>
-mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x652>
+je     <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x637>
+mov    $0x0,%eax
+jmp    <T> <_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM+0x655>
 movzbl -0xe(%ebp),%eax
 movzbl %al,%eax
 mov    0x10(%ebp),%edx
 add    $0x76,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool GetAuctionMainFetchResult(HandlerFor_DB_ * this, DBConnection *
   db, LPDBTR_AUCTION_DB_GET_REGISTED_ITEM pContext) */

bool __thiscall
HandlerFor_DB_::
_ZN14HandlerFor_DB_25GetAuctionMainFetchResultEPN3nsl12DBConnectionEP31tagAUCTION_DB_GET_REGISTED_ITEM
          (HandlerFor_DB_ *this,DBConnection *db,LPDBTR_AUCTION_DB_GET_REGISTED_ITEM pContext)

{
  int iVar1;
  bool bVar2;
  uchar local_13;
  byte local_12;
  undefined1 local_11;
  int local_10;
  
                    /* Unresolved local var: bool bRet@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uchar upgrade@[???]
                       Unresolved local var: uchar seal_cnt@[???] */
  local_10 = 1;
  local_11 = nsl::DBConnection::get_int64(db,0,&pContext->auction_id);
  if ((bool)local_11) {
    iVar1 = local_10 + 1;
    local_10 = local_10 + 2;
    local_11 = nsl::DBConnection::get_long(db,iVar1,&pContext->expire_time);
    iVar1 = local_10;
    if ((bool)local_11) {
      local_10 = local_10 + 1;
      local_11 = nsl::DBConnection::get_int(db,iVar1,&pContext->owner_id);
      iVar1 = local_10;
      if ((bool)local_11) {
        local_10 = local_10 + 1;
        local_11 = nsl::DBConnection::get_str(db,iVar1,pContext->owner_name,0xc);
        iVar1 = local_10;
        if ((bool)local_11) {
          *(undefined1 *)&pContext->buyer_id = 0;
          local_10 = local_10 + 1;
          local_11 = nsl::DBConnection::get_int(db,iVar1,&pContext->buyer_id);
          iVar1 = local_10;
          if ((bool)local_11) {
            local_10 = local_10 + 1;
            local_11 = nsl::DBConnection::get_str(db,iVar1,pContext->buyer_name,0xc);
            iVar1 = local_10;
            if ((bool)local_11) {
              *(undefined1 *)&pContext->price = 0;
              local_10 = local_10 + 1;
              local_11 = nsl::DBConnection::get_int(db,iVar1,&pContext->price);
              iVar1 = local_10;
              if ((bool)local_11) {
                local_10 = local_10 + 1;
                local_11 = nsl::DBConnection::get_int(db,iVar1,&pContext->instant_price);
                iVar1 = local_10;
                if ((bool)local_11) {
                  local_10 = local_10 + 1;
                  local_11 = nsl::DBConnection::get_bool(db,iVar1,&(pContext->item_info).seal);
                  iVar1 = local_10;
                  if ((bool)local_11) {
                    local_10 = local_10 + 1;
                    local_11 = nsl::DBConnection::get_ulong(db,iVar1,&(pContext->item_info).item_id)
                    ;
                    iVar1 = local_10;
                    if ((bool)local_11) {
                      local_10 = local_10 + 1;
                      local_11 = nsl::DBConnection::get_int
                                           (db,iVar1,&(pContext->item_info).add_info);
                      iVar1 = local_10;
                      if ((bool)local_11) {
                        local_10 = local_10 + 1;
                        local_11 = nsl::DBConnection::get_ubyte(db,iVar1,&local_12);
                        iVar1 = local_10;
                        if ((bool)local_11) {
                          local_10 = local_10 + 1;
                          local_11 = nsl::DBConnection::get_ubyte
                                               (db,iVar1,&(pContext->item_info).abilityType_);
                          iVar1 = local_10;
                          if ((bool)local_11) {
                            local_10 = local_10 + 1;
                            local_11 = nsl::DBConnection::get_ushort
                                                 (db,iVar1,&(pContext->item_info).abilityValue_);
                            iVar1 = local_10;
                            if ((bool)local_11) {
                              local_10 = local_10 + 1;
                              local_11 = nsl::DBConnection::get_ubyte(db,iVar1,&local_13);
                              iVar1 = local_10;
                              if ((bool)local_11) {
                                local_10 = local_10 + 1;
                                local_11 = nsl::DBConnection::get_ushort
                                                     (db,iVar1,&(pContext->item_info).endurance);
                                iVar1 = local_10;
                                if ((bool)local_11) {
                                  local_10 = local_10 + 1;
                                  local_11 = nsl::DBConnection::get_ulong
                                                       (db,iVar1,&(pContext->item_info).extendInfo);
                                  iVar1 = local_10;
                                  if ((bool)local_11) {
                                    local_10 = local_10 + 1;
                                    local_11 = nsl::DBConnection::get_ubyte
                                                         (db,iVar1,&pContext->owner_type);
                                    iVar1 = local_10;
                                    if ((bool)local_11) {
                                      local_10 = local_10 + 1;
                                      local_11 = nsl::DBConnection::get_uint
                                                           (db,iVar1,&pContext->black_point);
                                      iVar1 = local_10;
                                      if ((bool)local_11) {
                                        local_10 = local_10 + 1;
                                        local_11 = nsl::DBConnection::get_int
                                                             (db,iVar1,&pContext->unit_price);
                                        iVar1 = local_10;
                                        if ((bool)local_11) {
                                          local_10 = local_10 + 1;
                                          local_11 = nsl::DBConnection::get_binary
                                                               (db,iVar1,&(pContext->item_info).
                                                                          guid_,10);
                                          iVar1 = local_10;
                                          if ((bool)local_11) {
                                            local_10 = local_10 + 1;
                                            local_11 = nsl::DBConnection::get_binary
                                                                 (db,iVar1,&(pContext->item_info).
                                                                            random_option_,0xe);
                                            iVar1 = local_10;
                                            if ((bool)local_11) {
                                              (pContext->item_info).field_2.uniItemAttr =
                                                   (pContext->item_info).field_2.uniItemAttr & 0xe0
                                                   | local_12 & 0x1f;
                                              (pContext->item_info).field_2.uniItemAttr =
                                                   (pContext->item_info).field_2.uniItemAttr & 0x1f
                                                   | local_13 << 5;
                                              local_10 = local_10 + 1;
                                              local_11 = nsl::DBConnection::get_longlong
                                                                   (db,iVar1,(longlong *)
                                                                             &pContext->
                                                                              _reg_roi_category_key)
                                              ;
                                              iVar1 = local_10;
                                              if ((bool)local_11) {
                                                local_10 = local_10 + 1;
                                                local_11 = nsl::DBConnection::get_int
                                                                     (db,iVar1,&(pContext->
                                                                                                                                                                
                                                  _reg_roi_category_key).field_1._low_category_key);
                                                iVar1 = local_10;
                                                if ((bool)local_11) {
                                                  local_10 = local_10 + 1;
                                                  local_11 = nsl::DBConnection::get_str
                                                                       (db,iVar1,pContext->
                                                                                 owner_nexon_id,0x20
                                                                       );
                                                  iVar1 = local_10;
                                                  if ((bool)local_11) {
                                                    local_10 = local_10 + 1;
                                                    local_11 = nsl::DBConnection::get_ubyte
                                                                         (db,iVar1,&local_12);
                                                    if ((bool)local_11) {
                                                      UpgradeSeparateInfo::SetUpgradeSeparate
                                                                (&(pContext->item_info).
                                                                  separate_info,local_12);
                                                      bVar2 = true;
                                                    }
                                                    else {
                                                      bVar2 = false;
                                                    }
                                                  }
                                                  else {
                                                    bVar2 = false;
                                                  }
                                                }
                                                else {
                                                  bVar2 = false;
                                                }
                                              }
                                              else {
                                                bVar2 = false;
                                              }
                                            }
                                            else {
                                              bVar2 = false;
                                            }
                                          }
                                          else {
                                            bVar2 = false;
                                          }
                                        }
                                        else {
                                          bVar2 = false;
                                        }
                                      }
                                      else {
                                        bVar2 = false;
                                      }
                                    }
                                    else {
                                      bVar2 = false;
                                    }
                                  }
                                  else {
                                    bVar2 = false;
                                  }
                                }
                                else {
                                  bVar2 = false;
                                }
                              }
                              else {
                                bVar2 = false;
                              }
                            }
                            else {
                              bVar2 = false;
                            }
                          }
                          else {
                            bVar2 = false;
                          }
                        }
                        else {
                          bVar2 = false;
                        }
                      }
                      else {
                        bVar2 = false;
                      }
                    }
                    else {
                      bVar2 = false;
                    }
                  }
                  else {
                    bVar2 = false;
                  }
                }
                else {
                  bVar2 = false;
                }
              }
              else {
                bVar2 = false;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/TeaInitialize.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h 等 602 个文件*

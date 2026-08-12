# _ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member

`CDBManager::QueryTodayGuildMember(unsigned int, Packet_Reply_Today_Guild_Member&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808504a` | `0x38a` | `0x805df72` | `0x3bc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,272 +1,284 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x14(%ebp)
-lea    -0x1c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0xa(%eax)
-lea    -0x28(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
+movl   $0x0,-0x10(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EEC1Ev>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EE5clearEv>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no,charac_name,grade,job,grow_type,sex,lev from guild_member where guild_id = %d and member_flag = 1 and grade != 0",0x8(%esp)
 movl   $0x4f05,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x8e>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x8d>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x3a8>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f05,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0xb9>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x291>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2de>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x3a8>
 movl   $0x27,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x4f(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x103>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0xff>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x135>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x136>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 movl   $0x1d,0xc(%esp)
-lea    -0x4f(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x172>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x178>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%edx
+lea    -0x4c(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x1a7>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x1b2>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%edx
+lea    -0x4c(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x1dc>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x1ec>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%edx
+lea    -0x4c(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x211>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x226>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%edx
+lea    -0x4c(%ebp),%eax
 add    $0x25,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x246>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x25d>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%edx
+lea    -0x4c(%ebp),%eax
 add    $0x26,%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x27b>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
-lea    -0x4f(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x294>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EE9push_backERKS0_>
-addl   $0x1,-0xc(%ebp)
-mov    -0x18(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    $0x1,%esi
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2c9>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STTodayGuildMemberD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x38d>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STTodayGuildMemberD1Ev>
+test   %esi,%esi
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x3a8>
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2df>
+nop
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-cmp    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+cmp    -0x10(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0xc5>
-lea    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0xbc>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI18STTodayGuildMemberSaIS0_EE4sizeEv>
 cmp    $0x13,%eax
 setbe  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x2d0>
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x31e>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x3a8>
 call   <T> <rand>
 mov    %eax,%ebx
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI18STTodayGuildMemberSaIS0_EE4sizeEv>
 mov    %eax,-0x5c(%ebp)
 mov    %ebx,%eax
 mov    $0x0,%edx
 divl   -0x5c(%ebp)
 mov    %edx,%ecx
 mov    %ecx,%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EEixEj>
-mov    0x10(%ebp),%edx
-mov    (%eax),%ecx
-mov    %ecx,0xe(%edx)
-mov    0x4(%eax),%ecx
-mov    %ecx,0x12(%edx)
-mov    0x8(%eax),%ecx
-mov    %ecx,0x16(%edx)
-mov    0xc(%eax),%ecx
-mov    %ecx,0x1a(%edx)
-mov    0x10(%eax),%ecx
-mov    %ecx,0x1e(%edx)
-mov    0x14(%eax),%ecx
-mov    %ecx,0x22(%edx)
-mov    0x18(%eax),%ecx
-mov    %ecx,0x26(%edx)
-mov    0x1c(%eax),%ecx
-mov    %ecx,0x2a(%edx)
-mov    0x20(%eax),%ecx
-mov    %ecx,0x2e(%edx)
-movzwl 0x24(%eax),%ecx
-mov    %cx,0x32(%edx)
-movzbl 0x26(%eax),%eax
-mov    %al,0x34(%edx)
-lea    -0x28(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    0x10(%ebp),%eax
+add    $0xe,%eax
+cmp    -0xc(%ebp),%eax
+je     <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x37b>
+mov    0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+movl   $0x27,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EE5clearEv>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x376>
+jmp    <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member+0x3a8>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18STTodayGuildMemberSaIS0_EED1Ev>
 mov    %ebx,%eax
 add    $0x70,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryTodayGuildMember(unsigned int, Packet_Reply_Today_Guild_Member&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member
          (CDBManager *this,uint param_1,Packet_Reply_Today_Guild_Member *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  STTodayGuildMember local_53 [4];
  undefined1 auStack_4f [30];
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  vector<STTodayGuildMember,std::allocator<STTodayGuildMember>> local_2c [12];
  time_t local_20;
  int *local_1c;
  undefined4 local_18;
  tm *local_14;
  uint local_10;
  
  local_1c = *(int **)(this + 0x20);
  local_20 = time((time_t *)0x0);
  local_18 = 0;
  local_14 = localtime(&local_20);
  *(uint *)(param_2 + 10) = param_1;
  std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::vector(local_2c);
                    /* try { // try from 08085099 to 0808539d has its CatchHandler @ 080853a5 */
  std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::clear(local_2c);
  cVar1 = (**(code **)(*local_1c + 0x1c))
                    (local_1c,0x4f05,
                     "seLect charac_no,charac_name,grade,job,grow_type,sex,lev from guild_member where guild_id = %d and member_flag = 1 and grade != 0"
                     ,param_1);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*local_1c + 0x20))(local_1c,0x4f05);
    if (cVar1 == '\x01') {
      local_10 = 0;
      while( true ) {
        uVar2 = (**(code **)(*local_1c + 0x6c))(local_1c);
        if (uVar2 <= local_10) break;
        memset(local_53,0,0x27);
        cVar1 = (**(code **)(*local_1c + 0x24))(local_1c);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x38))(local_1c,0,local_53);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x2c))(local_1c,1,auStack_4f,0x1d);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x50))(local_1c,2,&uStack_31);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x50))(local_1c,3,&uStack_30);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x50))(local_1c,4,&uStack_2f);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x50))(local_1c,5,&uStack_2e);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        cVar1 = (**(code **)(*local_1c + 0x50))(local_1c,6,&uStack_2d);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_080853c0;
        }
        std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::push_back
                  (local_2c,local_53);
        local_10 = local_10 + 1;
      }
      uVar2 = std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::size(local_2c);
      if (uVar2 < 0x14) {
        uVar5 = 1;
      }
      else {
        uVar2 = rand();
        uVar3 = std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::size(local_2c);
        puVar4 = (undefined4 *)
                 std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::operator[]
                           (local_2c,uVar2 % uVar3);
        *(undefined4 *)(param_2 + 0xe) = *puVar4;
        *(undefined4 *)(param_2 + 0x12) = puVar4[1];
        *(undefined4 *)(param_2 + 0x16) = puVar4[2];
        *(undefined4 *)(param_2 + 0x1a) = puVar4[3];
        *(undefined4 *)(param_2 + 0x1e) = puVar4[4];
        *(undefined4 *)(param_2 + 0x22) = puVar4[5];
        *(undefined4 *)(param_2 + 0x26) = puVar4[6];
        *(undefined4 *)(param_2 + 0x2a) = puVar4[7];
        *(undefined4 *)(param_2 + 0x2e) = puVar4[8];
        *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(puVar4 + 9);
        param_2[0x34] = *(Packet_Reply_Today_Guild_Member *)((int)puVar4 + 0x26);
        std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::clear(local_2c);
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_080853c0:
  std::vector<STTodayGuildMember,std::allocator<STTodayGuildMember>>::~vector(local_2c);
  return uVar5;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

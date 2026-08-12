# _ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader

`CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8086b34` | `0x3de` | `0x80726a0` | `0x40b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,277 +1,286 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x70,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
+sub    $0xa0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x70(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x2d0,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x68(%ebp)
+cmpl   $0x0,-0x68(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x401>
+mov    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser9GetMemberEv>
+mov    %eax,-0x64(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x60(%ebp)
+cmpl   $0x0,-0x64(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x401>
+cmpl   $0x0,-0x60(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x401>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d0>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnUpperMemberExpEj>
+mov    %eax,-0x4c(%ebp)
+cmpl   $0x0,-0x4c(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d0>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,-0x48(%ebp)
+mov    -0x48(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x14b>
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser9GetMemberEv>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x14b>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnLowerMemberExpEjj>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
 mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d3>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x3c(%ebp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager13SaveMemberExpEP14CServerHandlerjjj>
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager18IsMemberExpLevelUpEj>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d0>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
 mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d6>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
+movl   $0x0,-0x5c(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember19GetLowerMemberCountEv>
+mov    %eax,-0x58(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember20GetLowerMember_ProxyEv>
+mov    %eax,-0x54(%ebp)
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x317>
+subl   $0x1,-0x58(%ebp)
+mov    -0x54(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x30f>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21IncConnUpperMemberExpEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x30f>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
 mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    -0x54(%ebp),%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    -0x5c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnLowerMemberExpEijj>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
 mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x147>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x14(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser9GetMemberEv>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x147>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
+mov    %eax,0xc(%esp)
 mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnLowerMemberExpEjj>
-mov    -0x1c(%ebp),%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager13SaveMemberExpEP14CServerHandlerjjj>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager18IsMemberExpLevelUpEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x1c(%ebp),%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x30f>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
-movl   $0x0,-0x28(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember19GetLowerMemberCountEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember20GetLowerMember_ProxyEv>
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2e3>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnUpperMemberExpEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    -0x20(%ebp),%edx
-mov    (%edx),%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnLowerMemberExpEijj>
-mov    -0x10(%ebp),%esi
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager13SaveMemberExpEP14CServerHandlerjjj>
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager18IsMemberExpLevelUpEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x10(%ebp),%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
-addl   $0x1,-0x28(%ebp)
-addl   $0x27,-0x20(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-subl   $0x1,-0x24(%ebp)
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1df>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+addl   $0x1,-0x5c(%ebp)
+addl   $0x27,-0x54(%ebp)
+cmpl   $0x0,-0x58(%ebp)
+setne  %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x401>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x377>
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3a7>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xf29,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x370>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3a0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x401>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xf2e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3cc>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3fc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-add    $0x70,%esp
+add    $0xa0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *pCVar1;
  char cVar2;
  uint uVar3;
  CMemberManager *this;
  CUser *pCVar4;
  CMember *this_00;
  int iVar5;
  CMemberExpTbl *pCVar6;
  uint uVar7;
  CMember *pCVar8;
  uint uVar9;
  bool bVar10;
  int local_2c;
  int local_28;
  uint *local_24;
  
  uVar3 = m_pclApp + 0x10;
  this = (CMemberManager *)(m_pclApp + 0x2d0);
                    /* try { // try from 08086b6a to 08086e0e has its CatchHandler @ 08086e2f */
  pCVar4 = (CUser *)CUserManager::FindUser_CharNo(uVar3);
  if (((pCVar4 != (CUser *)0x0) &&
      (this_00 = (CMember *)CUser::GetMember(pCVar4), this_00 != (CMember *)0x0)) &&
     (pCVar1 = *(CServerHandler **)(m_pclApp + 0xa0), pCVar1 != (CServerHandler *)0x0)) {
    CMember::GetUpperMember_CharId(this_00);
    iVar5 = CMemberManager::FindMemberUser((uint)this);
    if (iVar5 != 0) {
      pCVar6 = (CMemberExpTbl *)CMemberManager::GetMemberExpTable(this);
      uVar7 = CMemberExpTbl::_ZN13CMemberExpTbl15GetMaxMemberExpEv(pCVar6);
      uVar7 = CMember::IncConnUpperMemberExp(this_00,uVar7);
      if (uVar7 != 0) {
        CMember::GetUpperMember_CharId(this_00);
        pCVar4 = (CUser *)CUserManager::FindUser_CharNo(uVar3);
        if ((pCVar4 != (CUser *)0x0) &&
           (pCVar8 = (CMember *)CUser::GetMember(pCVar4), pCVar8 != (CMember *)0x0)) {
          pCVar6 = (CMemberExpTbl *)CMemberManager::GetMemberExpTable(this);
          uVar3 = CMemberExpTbl::_ZN13CMemberExpTbl15GetMaxMemberExpEv(pCVar6);
          uVar9 = CMember::GetMemberKey(this_00);
          CMember::IncConnLowerMemberExp(pCVar8,uVar9,uVar3);
        }
        uVar3 = CMember::GetUpperMember_CharId(this_00);
        uVar9 = CMember::GetMemberKey(this_00);
        CMemberManager::SaveMemberExp(this,pCVar1,uVar9,uVar3,uVar7);
        cVar2 = CMemberManager::IsMemberExpLevelUp(this,uVar7);
        if (cVar2 != '\0') {
          uVar3 = CMember::GetUpperMember_CharId(this_00);
          CMemberManager::_ZN14CMemberManager21NoticeLevelUpToLowersEjj(this,uVar3,uVar7);
        }
      }
    }
    local_2c = 0;
    local_28 = CMember::GetLowerMemberCount(this_00);
    local_24 = (uint *)CMember::GetLowerMember_Proxy(this_00);
    while (bVar10 = local_28 != 0, local_28 = local_28 + -1, bVar10) {
      pCVar8 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)this);
      if (pCVar8 != (CMember *)0x0) {
        pCVar6 = (CMemberExpTbl *)CMemberManager::GetMemberExpTable(this);
        uVar3 = CMemberExpTbl::_ZN13CMemberExpTbl15GetMaxMemberExpEv(pCVar6);
        uVar3 = CMember::IncConnUpperMemberExp(pCVar8,uVar3);
        if (uVar3 != 0) {
          pCVar6 = (CMemberExpTbl *)CMemberManager::GetMemberExpTable(this);
          uVar7 = CMemberExpTbl::_ZN13CMemberExpTbl15GetMaxMemberExpEv(pCVar6);
          CMember::IncConnLowerMemberExp(this_00,local_2c,*local_24,uVar7);
          uVar7 = CMember::GetUpperMember_CharId(pCVar8);
          uVar9 = CMember::GetMemberKey(pCVar8);
          CMemberManager::SaveMemberExp(this,pCVar1,uVar9,uVar7,uVar3);
          cVar2 = CMemberManager::IsMemberExpLevelUp(this,uVar3);
          if (cVar2 != '\0') {
            uVar7 = CMember::GetUpperMember_CharId(pCVar8);
            CMemberManager::_ZN14CMemberManager21NoticeLevelUpToLowersEjj(this,uVar7,uVar3);
          }
        }
      }
      local_2c = local_2c + 1;
      local_24 = (uint *)((int)local_24 + 0x27);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2594 行）：

```cpp
void CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        CUser* user = userMgr->FindUser_CharNo(((RA_UINT<10>*)pkt)->v);
        if (user != 0)
        {
            CMember* member = user->GetMember();
            CServerHandler* handler = m_pclApp->m_serverHandler2;
            if (member != 0 && handler != 0)
            {
                if (memberMgr->FindMemberUser(
                        (unsigned int)member->GetUpperMember_CharId()) != 0)
                {
                    unsigned int maxExp =
                        memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                    unsigned int newExp =
                        (unsigned int)member->IncConnUpperMemberExp(maxExp);
                    if (newExp != 0)
                    {
                        unsigned int upperCharId =
                            (unsigned int)member->GetUpperMember_CharId();
                        CUser* upperUser = userMgr->FindUser_CharNo(upperCharId);
                        if (upperUser != 0)
                        {
                            CMember* upperMember = upperUser->GetMember();
                            if (upperMember != 0)
                            {
                                unsigned int max2 =
                                    memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                                unsigned int memberKey =
                                    (unsigned int)member->GetMemberKey();
                                upperMember->IncConnLowerMemberExp(memberKey, max2);
                            }
                        }
                        unsigned int upperId =
                            (unsigned int)member->GetUpperMember_CharId();
                        unsigned int key = (unsigned int)member->GetMemberKey();
                        memberMgr->SaveMemberExp(handler, key, upperId, newExp);
                        if (memberMgr->IsMemberExpLevelUp(newExp))
                        {
                            unsigned int u = (unsigned int)member->GetUpperMember_CharId();
                            memberMgr->NoticeLevelUpToLowers(u, newExp);
                        }
                    }
                }
                int idx = 0;
                unsigned int lowerCount = member->GetLowerMemberCount();
                unsigned int* proxy = member->GetLowerMember_Proxy();
                while (lowerCount != 0)
                {
                    lowerCount--;
                    CMember* lowerMember = memberMgr->FindMember(*proxy);
                    if (lowerMember != 0)
                    {
                        unsigned int maxE =
                            memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                        unsigned int lowerNew =
                            (unsigned int)lowerMember->IncConnUpperMemberExp(maxE);
                        if (lowerNew != 0)
                        {
                            unsigned int maxE2 =
                                memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                            member->IncConnLowerMemberExp(idx, *proxy, maxE2);
                            unsigned int lowerUpperId =
                                (unsigned int)lowerMember->GetUpperMember_CharId();
                            unsigned int lowerKey =
                                (unsigned int)lowerMember->GetMemberKey();
                            memberMgr->SaveMemberExp(handler, lowerKey, lowerUpperId,
                                                     lowerNew);
                            if (memberMgr->IsMemberExpLevelUp(lowerNew))
                            {
                                unsigned int lu =
                                    (unsigned int)lowerMember->GetUpperMember_CharId();
                                memberMgr->NoticeLevelUpToLowers(lu, lowerNew);
                            }
                        }
                    }
                    idx++;
                    proxy = (unsigned int*)((char*)proxy + 0x27);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xf29,"./log/Except",
            "CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xf2e,"./log/Except",
            "CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break\n");
    }
}
```

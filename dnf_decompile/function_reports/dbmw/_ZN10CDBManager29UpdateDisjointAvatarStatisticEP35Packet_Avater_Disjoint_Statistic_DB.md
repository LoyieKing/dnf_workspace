# _ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB

`CDBManager::UpdateDisjointAvatarStatistic(Packet_Avater_Disjoint_Statistic_DB*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8082f12` | `0x45d` | `0x80618ce` | `0x42c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,288 +1,269 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x24(%ebp)
-movl   $0x0,-0x3c(%ebp)
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
+movl   $0x0,-0x1c(%ebp)
 movl   $0x0,-0x38(%ebp)
-movl   $0x0,-0x4c(%ebp)
-movl   $0x0,-0x48(%ebp)
-movl   $0x0,-0x44(%ebp)
-movl   $0x0,-0x40(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x4c>
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x59>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x455>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x441>
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x7b>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x425>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x411>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x88>
 movl   $0x7,0x8(%esp)
 movl   $"normal",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc3>
-cmpl   $0x1,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x9e>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc6>
+cmpl   $0x1,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xab>
 movl   $0x5,0x8(%esp)
 movl   $"high",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc3>
-cmpl   $0x2,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x43c>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc6>
 movl   $0x5,0x8(%esp)
 movl   $"rare",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x42b>
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xf5>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3fe>
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xf8>
 movl   $0x9,0x8(%esp)
 movl   $"headgear",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x1,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x11b>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x1,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x11e>
 movl   $0x5,0x8(%esp)
 movl   $"hair",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x2,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x141>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x2,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x144>
 movl   $0x5,0x8(%esp)
 movl   $"face",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x3,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x167>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x3,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x16a>
 movl   $0x7,0x8(%esp)
 movl   $"jacket",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x4,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x18d>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x4,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x190>
 movl   $0x6,0x8(%esp)
 movl   $"pants",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x5,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1b3>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x5,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1b6>
 movl   $0x6,0x8(%esp)
 movl   $"shoes",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x6,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1d6>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x6,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1d9>
 movl   $0x7,0x8(%esp)
 movl   $"breast",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x7,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1f9>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x7,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1fc>
 movl   $0x6,0x8(%esp)
 movl   $"waist",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x8,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x21c>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
+cmpl   $0x8,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x21f>
 movl   $0x5,0x8(%esp)
 movl   $"skin",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x9,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x426>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x23a>
 movl   $0x7,0x8(%esp)
 movl   $"aurora",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0x12(%ecx,%eax,4),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-mov    0xa(%ecx,%eax,8),%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x60(%ebp)
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    -0x60(%ebp),%eax
-add    %eax,%eax
-add    $0x1,%eax
-mov    0xa(%ebx,%eax,4),%eax
-lea    -0x4c(%ebp),%edx
-mov    %edx,0x1c(%esp)
-lea    -0x3c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    %esi,0x14(%esp)
+add    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+add    $0x34,%ecx
+shl    $0x2,%ecx
+add    $0x12,%ecx
+add    %ecx,%edx
+mov    (%edx),%ebx
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+add    $0x34,%ecx
+shl    $0x3,%ecx
+add    $0xa,%ecx
+add    %ecx,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%esi
+shl    $0x3,%esi
+add    $0xe,%esi
+add    %esi,%edx
+mov    (%edx),%edx
+lea    -0x38(%ebp),%esi
+mov    %esi,0x1c(%esp)
+lea    -0x28(%ebp),%esi
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
-mov    %eax,0xc(%esp)
+mov    %edx,0xc(%esp)
 movl   $"upDate log_avatar_grind set avatar_emblem_grind=avatar_emblem_grind+%d, avatar_bindcube_grind=avatar_bindcube_grind+%d, avatar_rechargestone_grind=avatar_rechargestone_grind+%d where cur_date=CURDATE() and grade='%s' and body_part='%s' ",0x8(%esp)
 movl   $0x4f47,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4f47,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x18(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x322>
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x313>
 movl   $0x1eb0,0x8(%esp)
 movl   $"UpdateDisjointAvatarStatistic",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::UpdateDisjointAvatarStatistic() upDate Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x18(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3fa>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0x12(%ecx,%eax,4),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-mov    0xa(%ecx,%eax,8),%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    -0x5c(%ebp),%eax
-add    %eax,%eax
-add    $0x1,%eax
-mov    0xa(%ebx,%eax,4),%eax
-mov    %esi,0x1c(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+add    $0x34,%ecx
+shl    $0x2,%ecx
+add    $0x12,%ecx
+add    %ecx,%edx
+mov    (%edx),%ebx
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+shl    $0x3,%ecx
+add    $0xa,%ecx
+add    %ecx,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%esi
+shl    $0x3,%esi
+add    $0xe,%esi
+add    %esi,%edx
+mov    (%edx),%edx
+mov    %ebx,0x1c(%esp)
 mov    %ecx,0x18(%esp)
-mov    %eax,0x14(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    %edx,0x14(%esp)
+lea    -0x38(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x28(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_avatar_grind(cur_date, grade, body_part, avatar_emblem_grind, avatar_bindcube_grind, avatar_rechargestone_grind) values(CURDATE(), '%s', '%s', %d, %d, %d)",0x8(%esp)
 movl   $0x4ee8,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ee8,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x18(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3fa>
 movl   $0x1ebe,0x8(%esp)
 movl   $"UpdateDisjointAvatarStatistic",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::UpdateDisjointAvatarStatistic(insert) upDate Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
-nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x9,-0x1c(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x9,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xcf>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x43d>
-nop
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x2,-0x20(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xd2>
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x2,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x58>
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x65>
 mov    $0x1,%eax
-add    $0x7c,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateDisjointAvatarStatistic(Packet_Avater_Disjoint_Statistic_DB*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB
          (CDBManager *this,Packet_Avater_Disjoint_Statistic_DB *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  int *local_28;
  int local_24;
  int local_20;
  
  local_28 = *(int **)(this + 0x10);
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  if (local_28 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      if (local_24 == 0) {
        memcpy(&local_40,"normal",7);
LAB_08082fd5:
        for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
          if (local_20 == 0) {
            memcpy(&local_50,"headgear",9);
LAB_08083153:
            (**(code **)(*local_28 + 0x1c))
                      (local_28,0x4f47,
                       "upDate log_avatar_grind set avatar_emblem_grind=avatar_emblem_grind+%d, avatar_bindcube_grind=avatar_bindcube_grind+%d, avatar_rechargestone_grind=avatar_rechargestone_grind+%d where cur_date=CURDATE() and grade=\'%s\' and body_part=\'%s\' "
                       ,*(undefined4 *)(param_1 + ((local_24 * 9 + local_20) * 2 + 1) * 4 + 10),
                       *(undefined4 *)(param_1 + (local_24 * 9 + local_20) * 8 + 10),
                       *(undefined4 *)(param_1 + (local_24 * 9 + local_20 + 0x34) * 4 + 0x12),
                       &local_40,&local_50);
            cVar1 = (**(code **)(*local_28 + 0x20))(local_28,0x4f47);
            if (cVar1 != '\x01') {
              CMyFileLog::CMyFileLog(local_38,"UpdateDisjointAvatarStatistic",0x1eb0);
              CMyFileLog::operator()
                        (local_38,"./log/DBQueryErr",
                         "CDBManager::UpdateDisjointAvatarStatistic() upDate Error");
            }
            lVar3 = (**(code **)(*local_28 + 0x74))(local_28);
            if (lVar3 == 0) {
              (**(code **)(*local_28 + 0x1c))
                        (local_28,0x4ee8,
                         "inSert into log_avatar_grind(cur_date, grade, body_part, avatar_emblem_grind, avatar_bindcube_grind, avatar_rechargestone_grind) values(CURDATE(), \'%s\', \'%s\', %d, %d, %d)"
                         ,&local_40,&local_50,
                         *(undefined4 *)(param_1 + ((local_24 * 9 + local_20) * 2 + 1) * 4 + 10),
                         *(undefined4 *)(param_1 + (local_24 * 9 + local_20) * 8 + 10),
                         *(undefined4 *)(param_1 + (local_24 * 9 + local_20 + 0x34) * 4 + 0x12));
              cVar1 = (**(code **)(*local_28 + 0x20))(local_28,0x4ee8);
              if (cVar1 != '\x01') {
                CMyFileLog::CMyFileLog(local_30,"UpdateDisjointAvatarStatistic",0x1ebe);
                CMyFileLog::operator()
                          (local_30,"./log/DBQueryErr",
                           "CDBManager::UpdateDisjointAvatarStatistic(insert) upDate Error");
              }
            }
          }
          else {
            if (local_20 == 1) {
              memcpy(&local_50,&DAT_081b5fe6,5);
              goto LAB_08083153;
            }
            if (local_20 == 2) {
              memcpy(&local_50,&DAT_081b5feb,5);
              goto LAB_08083153;
            }
            if (local_20 == 3) {
              memcpy(&local_50,"jacket",7);
              goto LAB_08083153;
            }
            if (local_20 == 4) {
              memcpy(&local_50,"pants",6);
              goto LAB_08083153;
            }
            if (local_20 == 5) {
              memcpy(&local_50,"shoes",6);
              goto LAB_08083153;
            }
            if (local_20 == 6) {
              memcpy(&local_50,"breast",7);
              goto LAB_08083153;
            }
            if (local_20 == 7) {
              memcpy(&local_50,"waist",6);
              goto LAB_08083153;
            }
            if (local_20 == 8) {
              memcpy(&local_50,&DAT_081b6010,5);
              goto LAB_08083153;
            }
            if (local_20 == 9) {
              memcpy(&local_50,"aurora",7);
              goto LAB_08083153;
            }
          }
        }
      }
      else {
        if (local_24 == 1) {
          memcpy(&local_40,&DAT_081b5fd3,5);
          goto LAB_08082fd5;
        }
        if (local_24 == 2) {
          memcpy(&local_40,&DAT_081b5fd8,5);
          goto LAB_08082fd5;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*

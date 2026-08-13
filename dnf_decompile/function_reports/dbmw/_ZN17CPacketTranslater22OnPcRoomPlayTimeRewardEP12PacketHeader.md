# _ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader

`CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a06c0` | `0x4af` | `0x80d7cf4` | `0x450` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,315 +1,279 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1bc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a3>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x444>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+mov    %al,-0x31(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x2c(%ebp)
 movl   $0x141b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x31(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Noti acc_id(%d), charac_no(%d), server_info(%d)",0x8(%esp)
 movl   $"./log/event",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x5c(%ebp)
-lea    -0x71(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x64(%ebp)
+lea    -0x79(%ebp),%eax
 mov    $0x15,%edx
 mov    $0x0,%ecx
 mov    %eax,%ebx
 and    $0x1,%ebx
 test   %ebx,%ebx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x9c>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xac>
 mov    %cl,(%eax)
 add    $0x1,%eax
 sub    $0x1,%edx
 mov    %eax,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xae>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xbe>
 mov    %cx,(%eax)
 add    $0x2,%eax
 sub    $0x2,%edx
 mov    %edx,%esi
 and    $0xfffffffc,%esi
 mov    $0x0,%ebx
 mov    %ecx,(%eax,%ebx,1)
 add    $0x4,%ebx
 cmp    %esi,%ebx
-jb     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xb8>
+jb     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xc8>
 add    %ebx,%eax
 mov    %edx,%ebx
 and    $0x2,%ebx
 test   %ebx,%ebx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xd3>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xe3>
 mov    %cx,(%eax)
 add    $0x2,%eax
 and    $0x1,%edx
 test   %edx,%edx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xdf>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xef>
 mov    %cl,(%eax)
 add    $0x1,%eax
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
+mov    -0x30(%ebp),%edx
+movzbl -0x31(%ebp),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 lea    0x50(%ecx),%ebx
 movl   $0x15,0x14(%esp)
-lea    -0x71(%ebp),%ecx
+lea    -0x79(%ebp),%ecx
 mov    %ecx,0x10(%esp)
-lea    -0x5c(%ebp),%ecx
+lea    -0x64(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x182>
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x17d>
+movzbl -0x31(%ebp),%ebx
 movl   $0x1423,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Error acc_id(%d), charac_no(%d), server_info(%d)",0x8(%esp)
 movl   $"./log/event",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x78(%ebp)
-lea    -0x78(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %edx,0x8(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movl   $0x0,(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x20(%ebp)
-lea    -0x18e(%ebp),%edx
-mov    $0x100,%ebx
+mov    %eax,-0x24(%ebp)
+lea    -0x1a0(%ebp),%ebx
 mov    $0x0,%eax
+mov    $0x40,%edx
+mov    %ebx,%edi
 mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1f1>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
 rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x20b>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x219>
-mov    %al,(%edx)
-add    $0x1,%edx
-lea    -0x71(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"여름방학 기간에 1시간동안 PC방에서 접속을 유지하신 PC방 유저 여러분께 특별한 선물을 드립니다.\n - 넥슨핀: %s ",0x4(%esp)
-lea    -0x18e(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-movb   $0x1e,-0x126(%ebp)
-movb   $0x1f,-0x111(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%eax
+movb   $0x1e,-0x138(%ebp)
+movb   $0x1f,-0x123(%ebp)
+movl   $0x0,-0x84(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0x18(%esp)
-lea    -0x7c(%ebp),%edx
+lea    -0x84(%ebp),%edx
 mov    %edx,0x14(%esp)
-lea    -0x18e(%ebp),%edx
+lea    -0x1a0(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $"던파PC방 썸머타임",0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x2fe>
-mov    -0x5c(%ebp),%eax
-mov    %eax,-0x1a4(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x2b7>
+mov    -0x64(%ebp),%esi
+movzbl -0x31(%ebp),%ebx
 movl   $0x143d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1a4(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Letter Error acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d)",0x8(%esp)
 movl   $"./log/event",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
-lea    -0x8e(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
+lea    -0x96(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_Notify_New_MailC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x84(%ebp)
-movzwl -0x8c(%ebp),%eax
-movzwl %ax,%esi
-lea    -0x8e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x20(%ebp)
+movzwl -0x94(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x96(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-mov    -0x7c(%ebp),%edi
-mov    %edi,-0x1a0(%ebp)
-mov    -0x5c(%ebp),%eax
-mov    %eax,-0x19c(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
 movl   $0x1447,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1a0(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x19c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x84(%ebp),%ecx
+mov    -0x64(%ebp),%edx
+movzbl -0x31(%ebp),%eax
+mov    %ecx,0x1c(%esp)
+mov    %edx,0x18(%esp)
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward reward acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d), letter_id(%d)",0x8(%esp)
 movl   $"./log/event",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x144c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x440>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1451,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x49c>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x43d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
 nop
 add    $0x1bc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080a08d4) */
/* CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader
               (PacketHeader *param_1)

{
  char *pcVar1;
  PacketHeader PVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  CMonitorServer *this;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_192 [104];
  undefined1 local_12a;
  undefined1 local_115;
  Packet_Monitor_Notify_New_Mail local_92 [2];
  ushort local_90;
  undefined4 local_88;
  int local_80;
  time_t local_7c;
  char local_75;
  char local_74 [20];
  uint local_60;
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  PacketHeader *local_2c;
  tm *local_28;
  time_t local_24;
  
  bVar10 = 0;
  if (m_pclApp != 0) {
    local_2c = param_1;
    PVar2 = param_1[10];
    uVar3 = *(undefined4 *)(param_1 + 0xf);
    uVar4 = *(undefined4 *)(param_1 + 0xb);
                    /* try { // try from 080a070b to 080a0a85 has its CatchHandler @ 080a0a8b */
    CMyFileLog::CMyFileLog(local_5c,"OnPcRoomPlayTimeReward",0x141b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/event",
               "CPacketTranslater::OnPcRoomPlayTimeReward Noti acc_id(%d), charac_no(%d), server_info(%d)"
               ,uVar4,uVar3,(uint)(byte)PVar2);
    local_60 = 0;
    pcVar6 = &local_75;
    uVar7 = 0x15;
    bVar9 = ((uint)pcVar6 & 1) != 0;
    if (bVar9) {
      local_75 = '\0';
      pcVar6 = local_74;
      uVar7 = 0x14;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    uVar8 = 0;
    do {
      pcVar1 = pcVar6 + uVar8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar8 = uVar8 + 4;
    } while (uVar8 < (uVar7 & 0xfffffffc));
    pcVar6 = pcVar6 + uVar8;
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar9) {
      *pcVar6 = '\0';
    }
    cVar5 = CDBManager::_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)local_2c[10],*(uint *)(local_2c + 0xb)
                       ,&local_60,&local_75,0x15);
    if (cVar5 == '\x01') {
      local_7c = time((time_t *)0x0);
      local_28 = localtime(&local_7c);
      local_28->tm_hour = local_28->tm_hour + 1;
      local_28->tm_min = 0;
      local_28->tm_sec = 0;
      local_24 = mktime(local_28);
      pcVar6 = local_192;
      uVar7 = 0x100;
      bVar9 = ((uint)pcVar6 & 2) != 0;
      if (bVar9) {
        local_192[0] = '\0';
        local_192[1] = '\0';
        pcVar6 = local_192 + 2;
        uVar7 = 0xfe;
      }
      for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
      }
      if (bVar9) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
      }
      sprintf(local_192,&DAT_081c2cf8,&local_75);
      local_12a = 0x1e;
      local_115 = 0x1f;
      cVar5 = CDBManager::_ZN10CDBManager12InsertLetterEjjPKcS1_Ril
                        ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_2c + 0xf),0,&DAT_081c2d65,
                         local_192,&local_80,local_24);
      uVar7 = local_60;
      if (cVar5 == '\x01') {
        Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_92);
        local_88 = *(undefined4 *)(local_2c + 0xf);
        this = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
        CMonitorServer::SendToServer(this,(char *)local_92,(uint)local_90);
        uVar7 = local_60;
        PVar2 = local_2c[10];
        uVar3 = *(undefined4 *)(local_2c + 0xf);
        uVar4 = *(undefined4 *)(local_2c + 0xb);
        CMyFileLog::CMyFileLog(local_44,"OnPcRoomPlayTimeReward",0x1447);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_44,"./log/event",
                   "CPacketTranslater::OnPcRoomPlayTimeReward reward acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d), letter_id(%d)"
                   ,uVar4,uVar3,(uint)(byte)PVar2,uVar7,local_80);
      }
      else {
        PVar2 = local_2c[10];
        uVar3 = *(undefined4 *)(local_2c + 0xf);
        uVar4 = *(undefined4 *)(local_2c + 0xb);
        CMyFileLog::CMyFileLog(local_4c,"OnPcRoomPlayTimeReward",0x143d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/event",
                   "CPacketTranslater::OnPcRoomPlayTimeReward Letter Error acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d)"
                   ,uVar4,uVar3,(uint)(byte)PVar2,uVar7);
      }
    }
    else {
      PVar2 = local_2c[10];
      uVar3 = *(undefined4 *)(local_2c + 0xf);
      uVar4 = *(undefined4 *)(local_2c + 0xb);
      CMyFileLog::CMyFileLog(local_54,"OnPcRoomPlayTimeReward",0x1423);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/event",
                 "CPacketTranslater::OnPcRoomPlayTimeReward Error acc_id(%d), charac_no(%d), server_info(%d)"
                 ,uVar4,uVar3,(uint)(byte)PVar2);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2008 行）：

```cpp
void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_PcRoom_PlayTime_Reward* pkt =
            (Packet_DBMW_PcRoom_PlayTime_Reward*)header;
        unsigned char serverInfo = pkt->m_serverInfo;
        int accId = pkt->m_accId;
        int characNo = pkt->m_characNo;
        CMyFileLog log1(__FUNCTION__, 0x141b);
        log1("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward Noti acc_id(%d), charac_no(%d), server_info(%d)",
             accId, characNo, serverInfo);
        unsigned int pinNo = 0;
        char pinBuf[0x15] = {0};
        if (!m_pclApp->m_dbManager.updateNexonPinPcRoomPlayTimeEvent(
                serverInfo, accId, pinNo, pinBuf, 0x15))
        {
            DNF_LOG_SCOPE_LINE(0x1423,
                "./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Error acc_id(%d), charac_no(%d), server_info(%d)", accId, characNo,
                serverInfo
            );

            return;
        }
        time_t now = time(0);
        tm* t = localtime(&now);
        t->tm_hour += 1;
        t->tm_min = 0;
        t->tm_sec = 0;
        time_t tomorrow = mktime(t);
        char str[0x100] = {0};
        sprintf(str,
                "\xbf\xa9\xb8\xa7\xb9\xe6\xc7\xd0\x20\xb1\xe2\xb0\xa3\xbf\xa1\x20\x31\xbd\xc3\xb0\xa3\xb5\xbf\xbe\xc8\x20\x50\x43\xb9\xe6\xbf\xa1\xbc\xad\x20\xc1\xa2\xbc\xd3\xc0\xbb\x20\xc0\xaf\xc1\xf6\xc7\xcf\xbd\xc5\x20\x50\x43\xb9\xe6\x20\xc0\xaf\xc0\xfa\x20\xbf\xa9\xb7\xaf\xba\xd0\xb2\xb2\x20\xc6\xaf\xba\xb0\xc7\xd1\x20\xbc\xb1\xb9\xb0\xc0\xbb\x20\xb5\xe5\xb8\xb3\xb4\xcf\xb4\xd9\x2e\x0a\x20\x2d\x20\xb3\xd8\xbd\xbc\xc7\xc9\x3a\x20\x25\x73\x20",
                pinBuf);
        str[0x68] = 0x1e;
        str[0x7d] = 0x1f;
        int letterNo = 0;
        if (!m_pclApp->m_dbManager.InsertLetter(
                characNo, 0,
                "\xb4\xf8\xc6\xc4\x50\x43\xb9\xe6\x20\xbd\xe6\xb8\xd3\xc5\xb8\xc0\xd3",
                str, letterNo, tomorrow))
        {
            DNF_LOG_SCOPE_LINE(0x143d,
                "./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Letter Error acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d)", accId, characNo,
                serverInfo,
                pinNo
            );

            return;
        }
        Packet_Monitor_Notify_New_Mail mail;
        mail.m_fieldA = characNo;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&mail, mail.packetSize);
        CMyFileLog log2(__FUNCTION__, 0x1447);
        log2("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward reward acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d), letter_id(%d)",
             accId, characNo, serverInfo, pinNo, letterNo);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break",
                  0x144c, 0x1451);
}
```

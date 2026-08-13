# _ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader

`CPacketTranslater::OnChangePowerWarPoint(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807fad0` | `0x4ba` | `0x807633a` | `0x4eb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,318 +1,342 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x34(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x56>
 movl   $0x11ba,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangePowerWarScore : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4e0>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
 mov    %eax,-0x30(%ebp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4ae>
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4e0>
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x21a>
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x21a>
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x14c>
-mov    -0x34(%ebp),%eax
-movzbl 0x2b(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x15b>
+mov    -0x34(%ebp),%eax
+add    $0x2b,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x90(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0x17(%eax),%eax
+add    $0x17,%eax
+mov    (%eax),%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0x13(%eax),%eax
+add    $0x13,%eax
+mov    (%eax),%eax
 mov    %eax,-0x88(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0xf(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xb(%eax),%esi
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xf,%eax
+mov    (%eax),%edi
+mov    -0x34(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%esi
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x11c9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x90(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x8c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x88(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
-mov    -0x34(%ebp),%eax
-movzbl 0x2b(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4e0>
+mov    -0x34(%ebp),%eax
+add    $0x2b,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x84(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0x17(%eax),%eax
+add    $0x17,%eax
+mov    (%eax),%eax
 mov    %eax,-0x80(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0x13(%eax),%eax
+add    $0x13,%eax
+mov    (%eax),%eax
 mov    %eax,-0x7c(%ebp)
 mov    -0x34(%ebp),%eax
-mov    0xf(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xb(%eax),%esi
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xf,%eax
+mov    (%eax),%edi
+mov    -0x34(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%esi
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x11ce,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x84(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x80(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x7c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+lea    0xa(%eax),%edx
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x3,%al
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f2>
-mov    -0x34(%ebp),%eax
-movb   $0x1,0xa(%eax)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
-mov    -0x34(%ebp),%eax
-movb   $0x2,0xa(%eax)
-mov    -0x34(%ebp),%eax
-movzbl 0x2b(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x213>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x218>
+mov    $0x2,%eax
+mov    %al,(%edx)
+mov    -0x34(%ebp),%eax
+add    $0x2b,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi>
-cwtl
 mov    %eax,-0x2c(%ebp)
-movl   $0x1,-0x28(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x23d>
-movl   $0x2,-0x28(%ebp)
-mov    -0x34(%ebp),%eax
-movzbl 0x2c(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x25c>
+mov    $0x2,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x261>
+mov    $0x1,%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
+add    $0x2c,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,0x8(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi>
-cwtl
 mov    %eax,-0x24(%ebp)
 mov    -0x34(%ebp),%eax
-movzbl 0x2c(%eax),%eax
+add    $0x2c,%eax
+movzbl (%eax),%eax
 movzbl %al,%edi
 mov    -0x34(%ebp),%eax
-movzbl 0x2b(%eax),%eax
+add    $0x2b,%eax
+movzbl (%eax),%eax
 movzbl %al,%esi
 mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x11e1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"win side(%d), win pp(%d, %d), lose pp(%d, %d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x34(%ebp),%eax
 lea    0xb(%eax),%ecx
 mov    -0x34(%ebp),%eax
-movzbl 0x2b(%eax),%eax
+add    $0x2b,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    -0x34(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj>
 mov    -0x34(%ebp),%eax
 lea    0x1b(%eax),%edx
 mov    -0x34(%ebp),%eax
-movzbl 0x2c(%eax),%eax
+add    $0x2c,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
 movl   $0x8,0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE7reserveEj>
-lea    -0x70(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x34(%ebp),%eax
+lea    -0x70(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Guild_Change_Power_War_Point11GetUserListERSt6vectorIjSaIjEE>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x39a>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3ce>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE2atEj>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj>
 addl   $0x1,-0x20(%ebp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIjSaIjEE4sizeEv>
 cmp    -0x20(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x373>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3c6>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3a7>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3fa>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3d6>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x40a>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4e0>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x452>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x486>
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
 movl   $0x1217,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangePowerWarScore Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x44b>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x47f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4e0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x121c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangePowerWarScore Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4a7>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4db>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
-nop
 add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangePowerWarPoint(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  PacketHeader PVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  short sVar9;
  uint *puVar10;
  uint uVar11;
  vector<unsigned_int,std::allocator<unsigned_int>> local_74 [12];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [24];
  PacketHeader *local_38;
  CPowerManager *local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  
  local_38 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807fb01 to 0807fe14 has its CatchHandler @ 0807fea6 */
    CMyFileLog::CMyFileLog(local_68,"OnChangePowerWarPoint",0x11ba);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_68,"./log/Power","CPacketTranslater::OnChangePowerWarScore : 0 == m_pclApp");
  }
  else {
    local_34 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    cVar8 = CPowerManager::IsPowerWarOn(local_34);
    if (cVar8 == '\x01') {
      if ((local_38[10] != (PacketHeader)0x1) && (local_38[10] != (PacketHeader)0x2)) {
        if (local_38[10] == (PacketHeader)0x0) {
          PVar1 = local_38[0x2b];
          uVar4 = *(undefined4 *)(local_38 + 0x17);
          uVar5 = *(undefined4 *)(local_38 + 0x13);
          uVar6 = *(undefined4 *)(local_38 + 0xf);
          uVar7 = *(undefined4 *)(local_38 + 0xb);
          PVar2 = local_38[10];
          CMyFileLog::CMyFileLog(local_60,"OnChangePowerWarPoint",0x11c9);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_60,"./log/Power",
                     "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)"
                     ,(uint)(byte)PVar2,uVar7,uVar6,uVar5,uVar4,(uint)(byte)PVar1);
          return;
        }
        PVar1 = local_38[0x2b];
        uVar4 = *(undefined4 *)(local_38 + 0x17);
        uVar5 = *(undefined4 *)(local_38 + 0x13);
        uVar6 = *(undefined4 *)(local_38 + 0xf);
        uVar7 = *(undefined4 *)(local_38 + 0xb);
        PVar2 = local_38[10];
        CMyFileLog::CMyFileLog(local_58,"OnChangePowerWarPoint",0x11ce);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_58,"./log/Power",
                   "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)"
                   ,(uint)(byte)PVar2,uVar7,uVar6,uVar5,uVar4,(uint)(byte)PVar1);
        if (local_38[10] == (PacketHeader)0x3) {
          local_38[10] = (PacketHeader)0x1;
        }
        else {
          local_38[10] = (PacketHeader)0x2;
        }
      }
      sVar9 = CPowerManager::_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi
                        (local_34,local_38[10],local_38[0x2b]);
      local_30 = (int)sVar9;
      local_2c = 1;
      if (local_38[10] == (PacketHeader)0x1) {
        local_2c = 2;
      }
      sVar9 = CPowerManager::_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi
                        (local_34,local_2c,local_38[0x2c]);
      local_28 = (int)sVar9;
      PVar1 = local_38[0x2c];
      PVar2 = local_38[0x2b];
      PVar3 = local_38[10];
      CMyFileLog::CMyFileLog(local_50,"OnChangePowerWarPoint",0x11e1);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/Power","win side(%d), win pp(%d, %d), lose pp(%d, %d)",
                 (uint)(byte)PVar3,(uint)(byte)PVar2,local_30,(uint)(byte)PVar1,local_28);
      CPowerManager::_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj
                (local_34,1,local_38[10],local_38[0x2b],local_38 + 0xb);
      CPowerManager::_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj
                (local_34,0,local_2c,local_38[0x2c],local_38 + 0x1b);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_74);
                    /* try { // try from 0807fe23 to 0807fe65 has its CatchHandler @ 0807fe81 */
      std::vector<unsigned_int,std::allocator<unsigned_int>>::reserve(local_74,8);
      Packet_Guild_Change_Power_War_Point::GetUserList
                ((Packet_Guild_Change_Power_War_Point *)local_38,local_74);
      local_24 = 0;
      while (uVar11 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_74),
            local_24 < uVar11) {
        puVar10 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::at
                                    (local_74,local_24);
        CPowerManager::_ZN13CPowerManager23SendPowerWarProcessInfoEj(local_34,*puVar10);
        local_24 = local_24 + 1;
      }
                    /* try { // try from 0807fe9c to 0807fea0 has its CatchHandler @ 0807fea6 */
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_74);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3561 行）：

```cpp
void CPacketTranslater::OnChangePowerWarPoint(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x11ba, "./log/Power", "CPacketTranslater::OnChangePowerWarScore : 0 == m_pclApp");
        return;
    }
    try
    {
        CPowerManager* pm = m_pclApp->GetPowerManager();
        if (pm->IsPowerWarOn() == 1)
        {
            if ((unsigned char)pb[10] != 1 && (unsigned char)pb[10] != 2)
            {
                if ((unsigned char)pb[10] == 0)
                {
                    DNF_LOG_SCOPE_LINE(0x11c9,"./log/Power",
                        "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",
                        (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb),
                        *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
                        *(unsigned int*)(pb + 0x17), (unsigned int)(unsigned char)pb[0x2b]);
                    return;
                }
                DNF_LOG_SCOPE_LINE(0x11ce,"./log/Power",
                    "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",
                    (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb),
                    *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
                    *(unsigned int*)(pb + 0x17), (unsigned int)(unsigned char)pb[0x2b]);
                pb[10] = (char)((unsigned char)pb[10] == 3 ? 1 : 2);
            }
            int winScore = pm->IncPowerScore((ENUM_POWER_SIDE_TYPE)(unsigned char)pb[10],
                                             (unsigned char)pb[0x2b]);
            ENUM_POWER_SIDE_TYPE loseSide =
                (unsigned char)pb[10] == 1 ? (ENUM_POWER_SIDE_TYPE)2 : (ENUM_POWER_SIDE_TYPE)1;
            int loseScore = pm->IncPowerScore(loseSide, (unsigned char)pb[0x2c]);
            {
                DNF_LOG_SCOPE_LINE(0x11e1,"./log/Power", "win side(%d), win pp(%d, %d), lose pp(%d, %d)",
                    (unsigned int)(unsigned char)pb[10], (unsigned int)(unsigned char)pb[0x2b],
                    winScore, (unsigned int)(unsigned char)pb[0x2c], loseScore);
            }
            pm->UpdatePowerWarInfo(1, (ENUM_POWER_SIDE_TYPE)(unsigned char)pb[10],
                                   (unsigned char)pb[0x2b], (unsigned int*)(pb + 0xb));
            pm->UpdatePowerWarInfo(0, loseSide, (unsigned char)pb[0x2c],
                                   (unsigned int*)(pb + 0x1b));
            std::vector<unsigned int> users;
            users.reserve(8);
            ((Packet_Guild_Change_Power_War_Point*)pb)->GetUserList(users);
            for (unsigned int i = 0; i < users.size(); i++)
            {
                pm->SendPowerWarProcessInfo(users.at(i));
            }
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnChangePowerWarScore Exception Break", 0x1217, 0x121c);
}
```

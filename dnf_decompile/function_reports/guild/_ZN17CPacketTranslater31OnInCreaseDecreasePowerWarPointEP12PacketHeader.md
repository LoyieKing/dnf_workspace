# _ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader

`CPacketTranslater::OnInCreaseDecreasePowerWarPoint(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8081faa` | `0x25b` | `0x80782a2` | `0x244` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,158 +1,148 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x4c>
 movl   $0x15d3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x23d>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x7e>
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0xb9>
+movl   $0x15db,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == pclGuild",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x254>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x23d>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x83>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    0x12(%eax),%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x8a>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x8f>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0xce>
-movl   $0x15db,0x8(%esp)
+jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x114>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%ebx
+movl   $0x15e2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == pclGuild",0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint : Invalid Power War Point Reached(characNo:%d, PowerWarPoint:%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x254>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x127>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x15e2,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x23d>
+cmpl   $0x0,-0x14(%ebp)
+jg     <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x13d>
+mov    -0x14(%ebp),%eax
+shr    $0x1f,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
+xor    -0x10(%ebp),%eax
+sub    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint : Invalid Power War Point Reached(characNo:%d, PowerWarPoint:%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x254>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
-test   %eax,%eax
-jle    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x148>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
+call   <T> <_ZN6CGuild16SubPowerWarPointEj>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x14f>
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16AddPowerWarPointEj>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x166>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,%edx
-sar    $0x1f,%edx
-xor    %edx,%eax
-sub    %edx,%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16SubPowerWarPointEj>
 movl   $0x0,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x254>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x23d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x1fa>
+jne    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x1e3>
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
 movl   $0x15f1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x1f3>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x1dc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x254>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x23d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x15f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInCreaseDecreasePowerWarPoint Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x24f>
+jmp    <T> <_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader+0x238>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInCreaseDecreasePowerWarPoint(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290),
       local_18 == (CGuild *)0x0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      CMyFileLog::CMyFileLog(local_38,"OnInCreaseDecreasePowerWarPoint",0x15db);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/Power",
                 "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == pclGuild");
    }
    else if (*(int *)(local_14 + 0x12) == 0) {
      uVar1 = *(undefined4 *)(local_14 + 0x12);
      uVar2 = *(undefined4 *)(local_14 + 0xe);
      CMyFileLog::CMyFileLog(local_30,"OnInCreaseDecreasePowerWarPoint",0x15e2);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Power",
                 "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : Invalid Power War Point Reached(characNo:%d, PowerWarPoint:%d)"
                 ,uVar2,uVar1);
    }
    else {
      if (*(int *)(local_14 + 0x12) < 1) {
        uVar4 = (int)*(uint *)(local_14 + 0x12) >> 0x1f;
        CGuild::SubPowerWarPoint(local_18,(*(uint *)(local_14 + 0x12) ^ uVar4) - uVar4);
      }
      else {
        CGuild::AddPowerWarPoint(local_18,*(uint *)(local_14 + 0x12));
      }
      CGuild::SendGuildInfoToMembers(local_18,false);
    }
    return;
  }
                    /* try { // try from 08081fd1 to 08082122 has its CatchHandler @ 08082128 */
  CMyFileLog::CMyFileLog(local_40,"OnInCreaseDecreasePowerWarPoint",0x15d3);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/Except",
             "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == m_pclApp");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4659 行）：

```cpp
void CPacketTranslater::OnInCreaseDecreasePowerWarPoint(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x15d3,"./log/Except",
                "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == m_pclApp");
            return;
        }
        unsigned int guildKey = ((PTL_PowerWarPointPkt*)pkt)->m_guildKey;
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x15db,"./log/Power",
                "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == pclGuild");
            return;
        }
        int point = ((PTL_PowerWarPointPkt*)pkt)->m_point;
        if (point == 0)
        {
            DNF_LOG_SCOPE_LINE(0x15e2,"./log/Power",
                "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : Invalid Power War Point Reached(characNo:%d, PowerWarPoint:%d)",
            ((PTL_PowerWarPointPkt*)pkt)->m_charNo, point);
            return;
        }
        if (point < 1)
        {
            unsigned int neg = ((unsigned int)point >> 0x1f);
            guild->SubPowerWarPoint(((unsigned int)point ^ neg) - neg);
        }
        else
        {
            guild->AddPowerWarPoint((unsigned int)point);
        }
        guild->SendGuildInfoToMembers(false);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnInCreaseDecreasePowerWarPoint Exception Break", 0x15f1, 0x15f6);
}
```

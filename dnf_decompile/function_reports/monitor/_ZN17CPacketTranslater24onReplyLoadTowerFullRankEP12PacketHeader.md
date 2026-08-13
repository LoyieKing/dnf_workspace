# _ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader

`CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088688` | `0x1f8` | `0x8073dde` | `0x1dd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,141 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x2f>
+sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12getTowerRankEv>
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xa(%eax),%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x2e>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank5resetEv>
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xf(%eax),%esi
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%ebx
 movl   $0x1172,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"%d/%d\n",0x8(%esp)
 movl   $"./log/DeathTower",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x101>
-mov    -0x20(%ebp),%eax
-imul   $0x65,%eax,%eax
-add    $0x10,%eax
-add    -0x24(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x9(%eax),%eax
-movzwl %ax,%edi
-mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x7(%eax),%eax
-movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0xeb>
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+imul   $0x65,%edx,%edx
+add    $0x1c,%edx
+lea    (%eax,%edx,1),%ebx
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+imul   $0x65,%edx,%edx
+add    $0x19,%edx
+add    %edx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+imul   $0x65,%edx,%edx
+add    $0x17,%edx
+add    %edx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%esi
+imul   $0x65,%esi,%esi
+add    $0x1b,%esi
+add    %esi,%eax
 movzbl (%eax),%eax
-movzbl %al,%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication12getTowerRankEv>
-mov    -0x4c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+movzbl %al,%eax
+mov    %ebx,0x10(%esp)
+mov    %ecx,0xc(%esp)
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t>
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x10(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x82>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x81>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1d6>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x196>
+jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x17c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x117e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onReplyLoadTowerFullRank Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x18f>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x175>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1d6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1183,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onReplyLoadTowerFullRank Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1eb>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1d1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CTowerRank *pCVar6;
  stDeathTowerRecordMemberInfo_t *psVar7;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  uint local_24;
  
  local_28 = param_1;
  if (param_1[10] != (PacketHeader)0x0) {
    pCVar6 = (CTowerRank *)CApplication::_ZN12CApplication12getTowerRankEv(m_pclApp);
                    /* try { // try from 080886b2 to 08088784 has its CatchHandler @ 080887a2 */
    CTowerRank::_ZN10CTowerRank5resetEv(pCVar6);
  }
  uVar4 = *(undefined4 *)(local_28 + 0xf);
  uVar5 = *(undefined4 *)(local_28 + 0xb);
  CMyFileLog::CMyFileLog(local_40,"onReplyLoadTowerFullRank",0x1172);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_40,"./log/DeathTower","%d/%d\n",uVar5,uVar4);
  for (local_24 = 0; local_24 < *(uint *)(local_28 + 0xb); local_24 = local_24 + 1) {
    psVar7 = (stDeathTowerRecordMemberInfo_t *)(local_28 + local_24 * 0x65 + 0x1c);
    uVar2 = *(ushort *)(local_28 + local_24 * 0x65 + 0x19);
    uVar3 = *(ushort *)(local_28 + local_24 * 0x65 + 0x17);
    PVar1 = local_28[local_24 * 0x65 + 0x1b];
    pCVar6 = (CTowerRank *)CApplication::_ZN12CApplication12getTowerRankEv(m_pclApp);
    CTowerRank::_ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t
              (pCVar6,(uint)(byte)PVar1,(uint)uVar3,(uint)uVar2,psVar7);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3103 行）：

```cpp
void CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader* pkt)
{
    try
    {
        CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
        if (((RA_S8<10>*)pkt)->v != 0)
        {
            tower->reset();
        }
        DNF_LOG_SCOPE_LINE(0x1172,"./log/DeathTower", "%d/%d\n", ((RA_UINT<11>*)pkt)->v,
            ((RA_UINT<15>*)pkt)->v);
        for (unsigned int i = 0; i < ((RA_UINT<11>*)pkt)->v; i++)
        {
            tower->registRank(
                (unsigned int)(unsigned char)*(char*)((char*)pkt + i * 0x65 + 0x1b),
                (unsigned int)*(unsigned short*)((char*)pkt + i * 0x65 + 0x17),
                (unsigned int)*(unsigned short*)((char*)pkt + i * 0x65 + 0x19),
                (const stDeathTowerRecordMemberInfo_t*)((char*)pkt + i * 0x65 + 0x1c));
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x117e,"./log/Except",
            "CPacketTranslater::onReplyLoadTowerFullRank Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1183, "./log/Except",
            "CPacketTranslater::onReplyLoadTowerFullRank Exception Break\n");
    }
}
```

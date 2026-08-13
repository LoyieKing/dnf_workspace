# _ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader

`CPacketTranslater::OnResultRegisterEventIdx(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808dfc0` | `0x1a8` | `0x807970c` | `0x1a8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,111 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x1a1>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x320(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager12GetEvent_IdxEv>
 mov    %eax,%ebx
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%esi
 movl   $0x1a85,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"OnResultRegisterEventIdx:event_idx(%d) , cur_idx(%d)",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x320(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager12GetEvent_IdxEv>
 mov    -0x10(%ebp),%edx
 mov    0xa(%edx),%edx
 cmp    %edx,%eax
 setb   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0xb3>
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x320(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager11SetEventIdxEj>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x320(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager20SendContinueTimeToGSEv>
 jmp    <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x1a1>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x147>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1a92,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x140>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x1a1>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a97,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader+0x19c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnResultRegisterEventIdx(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp != 0) {
    uVar2 = COnTimeEventManager::GetEvent_Idx(*(COnTimeEventManager **)(m_pclApp + 800));
    uVar1 = *(undefined4 *)(local_14 + 10);
                    /* try { // try from 0808e00c to 0808e085 has its CatchHandler @ 0808e08b */
    CMyFileLog::CMyFileLog(local_2c,"OnResultRegisterEventIdx",0x1a85);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/OnTimeEvent","OnResultRegisterEventIdx:event_idx(%d) , cur_idx(%d)",
               uVar1,uVar2);
    uVar3 = COnTimeEventManager::GetEvent_Idx(*(COnTimeEventManager **)(m_pclApp + 800));
    if (uVar3 < *(uint *)(local_14 + 10)) {
      COnTimeEventManager::SetEventIdx
                (*(COnTimeEventManager **)(m_pclApp + 800),*(uint *)(local_14 + 10));
    }
    COnTimeEventManager::SendContinueTimeToGS(*(COnTimeEventManager **)(m_pclApp + 800));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4604 行）：

```cpp
void CPacketTranslater::OnResultRegisterEventIdx(PacketHeader* pkt)
{
    try
    {
        PacketHeader* pkt2 = pkt;
        if (m_pclApp != 0)
        {
            DNF_LOG_SCOPE_LINE(0x1a85,"./log/OnTimeEvent",
                "OnResultRegisterEventIdx:event_idx(%d) , cur_idx(%d)",
                ((RA_UINT<10>*)pkt2)->v, m_pclApp->m_onTimeEventMgr->GetEvent_Idx());
            if (m_pclApp->m_onTimeEventMgr->GetEvent_Idx() < ((RA_UINT<10>*)pkt2)->v)
            {
                m_pclApp->m_onTimeEventMgr->SetEventIdx(((RA_UINT<10>*)pkt2)->v);
            }
            m_pclApp->m_onTimeEventMgr->SendContinueTimeToGS();
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a92,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a97, "./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
```

# _ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader

`CPacketTranslater::OnRegisterEventItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808dd98` | `0x227` | `0x807941c` | `0x266` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,141 +1,160 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzwl 0x12(%eax),%eax
-movzwl %ax,%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+movzwl %ax,%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x1a5a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"OnRegisterEventItem:idx = %u , cnt = %u, errortype = %d",0x8(%esp)
+movl   $"./log/OnTimeEvent",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+movzwl 0x12(%eax),%eax
+test   %ax,%ax
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x136>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x9c>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xec>
+movl   $0x1a66,0x8(%esp)
+movl   $"OnRegisterEventItem",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"wrong item data",0x8(%esp)
+movl   $"./log/OnTimeEvent",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25e>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x320(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19COnTimeEventManager12SetEventItemEjj>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19COnTimeEventManager10StartEventEv>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+movl   $0x1a60,0x8(%esp)
+movl   $"OnRegisterEventItem",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"OnRegisterEventItem:idx = %u , cnt = %u, errortype = %d",0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"db error not item",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
-movzwl 0x12(%eax),%eax
-test   %ax,%ax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xae>
-movl   $0x1a60,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"db error not item",0x8(%esp)
-movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xc2>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xfd>
-movl   $0x1a66,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"wrong item data",0x8(%esp)
-movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager12SetEventItemEjj>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager10StartEventEv>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1c5>
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x202>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1a73,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1be>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1fb>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a78,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21a>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x257>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x5c,%esp
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+nop
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterEventItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  local_24 = param_1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x12);
  uVar3 = *(undefined4 *)(param_1 + 0xe);
  uVar2 = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 0808ddd3 to 0808dedb has its CatchHandler @ 0808dee1 */
  CMyFileLog::CMyFileLog(local_4c,"OnRegisterEventItem",0x1a5a);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_4c,"./log/OnTimeEvent","OnRegisterEventItem:idx = %u , cnt = %u, errortype = %d",
             uVar2,uVar3,uVar1);
  if (*(short *)(local_24 + 0x12) == 0) {
    if ((*(int *)(local_24 + 10) == 0) || (*(int *)(local_24 + 0xe) == 0)) {
      CMyFileLog::CMyFileLog(local_3c,"OnRegisterEventItem",0x1a66);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/OnTimeEvent","wrong item data",uVar2,uVar3,uVar1);
    }
    else if (m_pclApp != 0) {
      COnTimeEventManager::SetEventItem
                (*(COnTimeEventManager **)(m_pclApp + 800),*(uint *)(local_24 + 10),
                 *(uint *)(local_24 + 0xe));
      COnTimeEventManager::StartEvent(*(COnTimeEventManager **)(m_pclApp + 800));
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_44,"OnRegisterEventItem",0x1a60);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/OnTimeEvent","db error not item",uVar2,uVar3,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4659 行）：

```cpp
void CPacketTranslater::OnRegisterEventItem(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        unsigned int errortype = (unsigned int)((RA_U16<18>*)pkt)->v;
        unsigned int cnt = ((RA_UINT<14>*)pkt)->v;
        unsigned int idx = ((RA_UINT<10>*)pkt)->v;
        DNF_LOG_SCOPE_LINE(0x1a5a,"./log/OnTimeEvent", "OnRegisterEventItem:idx = %u , cnt = %u, errortype = %d",
            idx, cnt, errortype);
        if (((RA_S16<18>*)pkt)->v == 0)
        {
            if (((RA_INT<10>*)pkt)->v == 0 || ((RA_INT<14>*)pkt)->v == 0)
            {
                CMyFileLog log2("OnRegisterEventItem", 0x1a66);
                log2("./log/OnTimeEvent", "wrong item data", idx, cnt, errortype);
            }
            else if (m_pclApp != 0)
            {
                COnTimeEventManager* mgr = m_pclApp->m_onTimeEventMgr;
                mgr->SetEventItem(((RA_UINT<10>*)pkt)->v,
                                  ((RA_UINT<14>*)pkt)->v);
                mgr->StartEvent();
            }
        }
        else
        {
            CMyFileLog log3("OnRegisterEventItem", 0x1a60);
            log3("./log/OnTimeEvent", "db error not item", idx, cnt, errortype);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a73,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a78,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
```

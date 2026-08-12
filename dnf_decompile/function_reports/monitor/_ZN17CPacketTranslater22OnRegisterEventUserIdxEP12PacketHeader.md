# _ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader

`CPacketTranslater::OnRegisterEventUserIdx(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808db52` | `0x246` | `0x8079210` | `0x246` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,154 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+movzwl 0x12(%eax),%eax
+movzwl %ax,%eax
 mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x91>
-mov    -0x24(%ebp),%eax
-movzwl 0x12(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x4c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x320(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager12GetEvent_IdxEv>
 mov    %eax,%ebx
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%edi
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%esi
 movl   $0x1a30,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x4c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"OnRegisterEventUserIdx:id = %u , rcv_idx = %u, cur_idx = %d, errortype = %d",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0xe9>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movzwl 0x12(%eax),%eax
 movzwl %ax,%edi
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x1a35,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"OnRegisterEventUserIdx:id = %u , idx = %u, errortype = %d",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movzwl 0x12(%eax),%eax
 test   %ax,%ax
 je     <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x106>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movzwl 0x12(%eax),%eax
 cmp    $0x3,%ax
 jne    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x23e>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 je     <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x23e>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12SetEvent_idxEj>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movzwl 0x12(%eax),%eax
 cmp    $0x3,%ax
 jne    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x23e>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22Event_idx_modify_stateEv>
 jmp    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x23e>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x1e4>
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
 movl   $0x1a4a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x1dd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x23e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a4f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader+0x239>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterEventUserIdx(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CUser *local_24;
  
  local_28 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
    uVar1 = *(ushort *)(param_1 + 0x12);
    uVar2 = *(undefined4 *)(param_1 + 0xe);
    uVar3 = *(undefined4 *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_40,"OnRegisterEventUserIdx",0x1a35);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/OnTimeEvent",
               "OnRegisterEventUserIdx:id = %u , idx = %u, errortype = %d",uVar3,uVar2,(uint)uVar1);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x12);
    uVar4 = COnTimeEventManager::GetEvent_Idx(*(COnTimeEventManager **)(m_pclApp + 800));
    uVar2 = *(undefined4 *)(local_28 + 0xe);
    uVar3 = *(undefined4 *)(local_28 + 10);
                    /* try { // try from 0808dbae to 0808dc76 has its CatchHandler @ 0808dcba */
    CMyFileLog::CMyFileLog(local_48,"OnRegisterEventUserIdx",0x1a30);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/OnTimeEvent",
               "OnRegisterEventUserIdx:id = %u , rcv_idx = %u, cur_idx = %d, errortype = %d",uVar3,
               uVar2,uVar4,(uint)uVar1);
  }
  if ((*(short *)(local_28 + 0x12) == 0) || (*(short *)(local_28 + 0x12) == 3)) {
    uVar5 = CApplication::Get_UserManager(m_pclApp);
    local_24 = (CUser *)CUserManager::FindUser(uVar5);
    if (local_24 != (CUser *)0x0) {
      CUser::SetEvent_idx(local_24,*(uint *)(local_28 + 0xe));
      if (*(short *)(local_28 + 0x12) == 3) {
        CUser::Event_idx_modify_state(local_24);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4481 行）：

```cpp
void CPacketTranslater::OnRegisterEventUserIdx(PacketHeader* pkt)
{
    try
    {
        PacketHeader* pkt2 = pkt;
        unsigned int errType = ((RA_U16<18>*)pkt2)->v;
        if (m_pclApp != 0)
        {
            DNF_LOG_SCOPE_LINE(0x1a30,"./log/OnTimeEvent",
                "OnRegisterEventUserIdx:id = %u , rcv_idx = %u, cur_idx = %d, errortype = %d",
                ((RA_UINT<10>*)pkt2)->v, ((RA_UINT<14>*)pkt2)->v,
                m_pclApp->m_onTimeEventMgr->GetEvent_Idx(), errType);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1a35,"./log/OnTimeEvent",
                "OnRegisterEventUserIdx:id = %u , idx = %u, errortype = %d",
                ((RA_UINT<10>*)pkt2)->v, ((RA_UINT<14>*)pkt2)->v,
                (unsigned int)((RA_U16<18>*)pkt2)->v);
        }
        if (((RA_S16<18>*)pkt2)->v == 0 || ((RA_S16<18>*)pkt2)->v == 3)
        {
            CUser* user = m_pclApp->Get_UserManager()->FindUser(
                ((RA_UINT<10>*)pkt2)->v);
            if (user != 0)
            {
                user->SetEvent_idx(((RA_UINT<14>*)pkt2)->v);
                if (((RA_S16<18>*)pkt2)->v == 3)
                {
                    user->Event_idx_modify_state();
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a4a,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a4f, "./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
```

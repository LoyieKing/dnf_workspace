# _ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader

`CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808d862` | `0x185` | `0x8078f70` | `0x185` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x20e(%eax),%esi
 mov    -0x20(%ebp),%eax
 mov    0x20a(%eax),%ebx
 mov    -0x20(%ebp),%eax
 lea    0xa(%eax),%edi
 movl   $0x19f7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"DB Load Message : Message(%s), start_hour(%d), end_hour(%d)",0x8(%esp)
 movl   $"./log/PeriodicMessage",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x20(%ebp),%eax
 mov    0x20e(%eax),%esi
 mov    -0x20(%ebp),%eax
 mov    0x20a(%eax),%ebx
 mov    -0x20(%ebp),%eax
 lea    0xa(%eax),%edi
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication25GetPeriodicMessageManagerEv>
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19CPeriodicMessageMgr14SetMessageDataEPcii>
 jmp    <T> <_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader+0x17d>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader+0x123>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1a02,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader+0x11c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader+0x17d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a07,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader+0x178>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CPeriodicMessageMgr *this;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  local_24 = param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x20e);
  uVar3 = *(undefined4 *)(param_1 + 0x20a);
                    /* try { // try from 0808d89f to 0808d903 has its CatchHandler @ 0808d909 */
  CMyFileLog::CMyFileLog(local_3c,"OnResultLoadPeriodicMessage",0x19f7);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/PeriodicMessage",
             "DB Load Message : Message(%s), start_hour(%d), end_hour(%d)",param_1 + 10,uVar3,uVar2)
  ;
  iVar4 = *(int *)(local_24 + 0x20e);
  iVar5 = *(int *)(local_24 + 0x20a);
  pPVar1 = local_24 + 10;
  this = (CPeriodicMessageMgr *)
         CApplication::_ZN12CApplication25GetPeriodicMessageManagerEv(m_pclApp);
  CPeriodicMessageMgr::SetMessageData(this,(char *)pPVar1,iVar5,iVar4);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4461 行）：

```cpp
void CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader* pkt)
{
    try
    {
        struct ResultPeriodicInfo
        {
            char pad[0xa];
            char msg[0x200];
            int start;
            int end;
        } __attribute__((packed));
        ResultPeriodicInfo* info = (ResultPeriodicInfo*)pkt;
        DNF_LOG_SCOPE_LINE(0x19f7,"./log/PeriodicMessage",
            "DB Load Message : Message(%s), start_hour(%d), end_hour(%d)", info->msg,
            info->start, info->end);
        ((CPeriodicMessageMgr*)m_pclApp->GetPeriodicMessageManager())
            ->SetMessageData(info->msg, info->start, info->end);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a02,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a07, "./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
```

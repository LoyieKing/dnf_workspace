# _ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader

`CPacketTranslater::OnCeraUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807fe66` | `0x210` | `0x806bf2c` | `0x20d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x208>
+je     <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x47f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnCeraUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Cera Payed User , DB ID : %s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0xc3>
 mov    -0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 movl   $0xe,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
 movl   $0x48a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnCeraUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCeraUpdate : pUser->GetGameServer() == 0",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x1a0>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCeraUpdate() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x490,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnCeraUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCeraUpdate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x199>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCeraUpdate() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x496,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnCeraUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCeraUpdate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x201>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
-nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCeraUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  undefined4 uVar2;
  int iVar3;
  CServerInterface *this;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CUser *local_14;
  
  local_18 = param_1;
                    /* try { // try from 0807fe8a to 0807ff5e has its CatchHandler @ 0807ff64 */
  local_14 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
  if (local_14 != (CUser *)0x0) {
    uVar2 = NumberToString(*(uint *)(local_18 + 10),0);
    CMyFileLog::CMyFileLog(local_38,"OnCeraUpdate",0x47f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/User","Cera Payed User , DB ID : %s\n",uVar2);
    iVar3 = CUser::GetGameServer(local_14);
    pPVar1 = local_18;
    if (iVar3 == 0) {
      CMyFileLog::CMyFileLog(local_30,"OnCeraUpdate",0x48a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Except",
                 "CPacketTranslater::OnCeraUpdate : pUser->GetGameServer() == 0",uVar2);
    }
    else {
      this = (CServerInterface *)CUser::GetGameServer(local_14);
      CServerInterface::_ZN16CServerInterface12SendToServerEPci(this,(char *)pPVar1,0xe);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 856 行）：

```cpp
void CPacketTranslater::OnCeraUpdate(PacketHeader* pkt)
{try
{

    PacketHeader* pkt2 = pkt;
    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
            ((RA_UINT<10>*)pkt2)->v);
    if (user != 0)
    {
        DNF_LOG_SCOPE_LINE(0x47f, "./log/User", "Cera Payed User , DB ID : %s\n",
            NumberToString(((RA_UINT<10>*)pkt2)->v, 0));
        if (user->GetGameServer() != 0)
        {
            ((CServerInterface*)user->GetGameServer())->SendToServer((char*)pkt2, 0xe);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x48a, "./log/Except",
                "CPacketTranslater::OnCeraUpdate : pUser->GetGameServer() == 0");
        }
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCeraUpdate() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x490, "./log/Except", "CPacketTranslater::OnCeraUpdate() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCeraUpdate() Exception Break");
        DNF_LOG_SCOPE_LINE(0x496, "./log/Except", "CPacketTranslater::OnCeraUpdate() Exception Break\n");
    }
}
```

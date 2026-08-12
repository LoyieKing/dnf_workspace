# _ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader

`CPacketTranslater::OnAddBuddy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808776e` | `0x210` | `0x8072b78` | `0x209` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,139 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x4c>
 movl   $0xfff,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddBuddy : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x209>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x202>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0xab>
+movl   $0x1012,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0xf8>
-mov    -0x18(%ebp),%eax
-lea    0x12(%eax),%ebx
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnAddBuddy\t pclUser is NULL",0x8(%esp)
+movl   $"./log/buddy",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x202>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x8(%esp)
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser10AddBuddyDBEP14CServerHandlerPc>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x209>
-lea    -0x77(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x202>
+lea    -0x73(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_Add_Buddy_ReplyC1Ev>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x6d(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x69(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x69(%ebp)
+mov    %eax,-0x65(%ebp)
 mov    -0x10(%ebp),%eax
-mov    %al,-0x3d(%ebp)
-movzwl -0x75(%ebp),%eax
+mov    %al,-0x39(%ebp)
+lea    -0x73(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x77(%ebp),%eax
+lea    -0x73(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x209>
-movl   $0x1012,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnAddBuddy\t pclUser is NULL",0x8(%esp)
-movl   $"./log/buddy",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x202>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x1af>
+jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x1a8>
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
 movl   $0x1018,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x1a8>
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x1a1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x202>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x101d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x204>
+jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x1fd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnAddBuddy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  CServerHandler *pCVar2;
  Packet_Monitor_Add_Buddy_Reply local_7b [2];
  ushort local_79;
  undefined4 local_71;
  undefined4 local_6d;
  undefined1 local_41;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  PacketHeader *local_1c;
  CApplication *local_18;
  int local_14;
  
  local_1c = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808779b to 0808789b has its CatchHandler @ 080878a1 */
    CMyFileLog::CMyFileLog(local_40,"OnAddBuddy",0xfff);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/buddy","CPacketTranslater::OnAddBuddy : 0 == m_pclApp");
  }
  else {
    local_18 = m_pclApp + 0x10;
    local_20 = (CUser *)CUserManager::FindUser_CharNo((uint)local_18);
    if (local_20 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_38,"OnAddBuddy",0x1012);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/buddy","CPacketTranslater::OnAddBuddy\t pclUser is NULL");
    }
    else {
      pPVar1 = local_1c + 0x12;
      pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      local_14 = CUser::AddBuddyDB(local_20,pCVar2,(char *)pPVar1);
      if (local_14 != 0) {
        Packet_Monitor_Add_Buddy_Reply::Packet_Monitor_Add_Buddy_Reply(local_7b);
        local_71 = *(undefined4 *)(local_1c + 10);
        local_6d = *(undefined4 *)(local_1c + 0xe);
        local_41 = (undefined1)local_14;
        CUser::SendToGameserver(local_20,(char *)local_7b,(uint)local_79);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2695 行）：

```cpp
void CPacketTranslater::OnAddBuddy(PacketHeader* pkt)
{
    CUser* user;
    PacketHeader* p = pkt;
    CUserManager* userMgr;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0xfff, "./log/buddy", "CPacketTranslater::OnAddBuddy : 0 == m_pclApp");
        }
        else
        {
            userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            if ((user = userMgr->FindUser_CharNo(((RA_UINT<10>*)p)->v)) != 0)
            {
                int r = user->AddBuddyDB(m_pclApp->Get_ServerHandler(), (char*)p + 0x12);
                if (r != 0)
                {
                    Packet_Monitor_Add_Buddy_Reply reply;
                    reply.m_charNo = ((RA_UINT<10>*)p)->v;
                    reply.m_idByChannel = ((RA_UINT<14>*)p)->v;
                    reply.m_result = (unsigned char)r;
                    user->SendToGameserver((char*)&reply, reply.packetSize);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x1012, "./log/buddy", "CPacketTranslater::OnAddBuddy\t pclUser is NULL");
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1018, "./log/Except",
            "CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x101d, "./log/Except",
            "CPacketTranslater::OnRegisterToBlackList Exception Break\n");
    }
}
```

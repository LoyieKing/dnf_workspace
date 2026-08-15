# _ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader

`CPacketTranslater::OnNotifyNewGroupMail(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8087fd0` | `0x181` | `0x807dec6` | `0x181` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,108 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
 mov    %eax,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
 lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_Notify_New_MailC1Ev>
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x8f>
 mov    -0x10(%ebp),%edx
 mov    -0x1c(%ebp),%eax
 mov    0xe(%eax,%edx,4),%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x8b>
 mov    -0x10(%ebp),%edx
 mov    -0x1c(%ebp),%eax
 mov    0xe(%eax,%edx,4),%eax
 mov    %eax,-0x34(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x30(%ebp)
 lea    -0x3e(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 addl   $0x1,-0x10(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x34>
 jmp    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x17a>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x120>
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
 movl   $0x1e9f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNotifyNewGroupMail() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x119>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x17a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1ea4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNotifyNewGroupMail() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader+0x175>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNotifyNewGroupMail(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Monitor_Notify_New_Mail local_42 [10];
  undefined4 local_38;
  undefined4 local_34;
  PacketHeader *local_20;
  uint local_1c;
  CUser *local_18;
  int local_14;
  
  local_20 = param_1;
  local_1c = m_pclApp + 0x10;
  local_18 = (CUser *)0x0;
  Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_42);
  for (local_14 = 0; local_14 < *(int *)(local_20 + 10); local_14 = local_14 + 1) {
                    /* try { // try from 08088018 to 0808805a has its CatchHandler @ 08088074 */
    local_18 = (CUser *)CUserManager::FindUser_CharNo(local_1c);
    if (local_18 != (CUser *)0x0) {
      local_38 = *(undefined4 *)(local_20 + local_14 * 4 + 0xe);
      local_34 = CUser::GetIdByChannel(local_18);
      CUser::SendToGameserver(local_18,(char *)local_42,0x12);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5432 行）：

```cpp
void CPacketTranslater::OnNotifyNewGroupMail(PacketHeader* pkt)
{
    Packet_Notify_New_Group_Mail* pb = (Packet_Notify_New_Group_Mail*)pkt;
    CUserManager* um = &m_pclApp->m_userManager;
    CUser* user = 0;
    Packet_Monitor_Notify_New_Mail mail;
    try
    {
        for (int i = 0; i < (int)pb->m_count; i++)
        {
            user = um->FindUser_CharNo(pb->m_characNos[i]);
            if (user != 0)
            {
                mail.ma = pb->m_characNos[i];
                mail.me = user->GetIdByChannel();
                user->SendToGameserver((char*)&mail, 0x12);
            }
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnNotifyNewGroupMail() Exception Break",
                  0x1e9f, 0x1ea4);
}
```

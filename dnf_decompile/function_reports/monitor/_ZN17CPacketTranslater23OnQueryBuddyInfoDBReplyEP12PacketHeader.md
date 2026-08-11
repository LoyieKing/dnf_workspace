# _ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader

`CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80880d0` | `0x258` | `0x8073372` | `0x25c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,163 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x4c>
 movl   $0x10f0,0x8(%esp)
 movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x255>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+cmp    $0x20,%al
+jbe    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x6d>
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movb   $0x20,(%eax)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-movzbl 0xe(%eax),%eax
-cmp    $0x20,%al
-jbe    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x6f>
-mov    -0x18(%ebp),%eax
-movb   $0x20,0xe(%eax)
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xc8>
+movl   $0x1112,0x8(%esp)
+movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
+movl   $"./log/buddy",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x255>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x134>
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0xf,%edx
+add    %edx,%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x140>
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xf7>
-mov    -0x10(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    -0x18(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x10(%ebp),%edx
-mov    -0x18(%ebp),%ecx
-imul   $0x27,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0x20,%edx
-mov    0x11(%edx),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    0x8(%ebp),%edx
+mov    -0x10(%ebp),%ecx
+imul   $0x27,%ecx,%ecx
+add    $0x31,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x300,%ecx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
 addl   $0x1,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
-movzbl 0xe(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x9f>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xd1>
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x169>
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
-movzbl 0xe(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x128>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser>
 movl   $0x4,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14SetBuddyDBFlagEt>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
-movl   $0x1112,0x8(%esp)
-movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
-movl   $"./log/buddy",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x255>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1fb>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x1118,0x8(%esp)
+movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1118,0x8(%esp)
-movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break : %s\n",0x8(%esp)
+movl   $"%s",0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x255>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x111d,0x8(%esp)
 movl   $"OnQueryBuddyInfoDBReply",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break",0x8(%esp)
+movl   $"%s",0x4(%esp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x250>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x50,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  PacketHeader *local_1c;
  CUserManager *local_18;
  int local_14;
  
  local_1c = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 080880fd to 08088245 has its CatchHandler @ 0808824b */
    CMyFileLog::CMyFileLog(local_40,"OnQueryBuddyInfoDBReply",0x10f0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/buddy","CPacketTranslater::OnQueryBuddyInfoDBReply : 0 == m_pclApp");
  }
  else {
    local_18 = (CUserManager *)(m_pclApp + 0x10);
    if (0x20 < (byte)param_1[0xe]) {
      param_1[0xe] = (PacketHeader)0x20;
    }
    local_20 = (CUser *)CUserManager::FindUser_CharNo((uint)local_18);
    if (local_20 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_38,"OnQueryBuddyInfoDBReply",0x1112);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/buddy",
                 "CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL");
    }
    else {
      for (local_14 = 0; local_14 < (int)(uint)(byte)local_1c[0xe]; local_14 = local_14 + 1) {
        CUser::AddBuddy(local_20,(STBuddyDBInfo *)(local_1c + local_14 * 0x27 + 0xf));
        CUser::GetUniqCharNo(local_20);
        CBuddyRegisterManager::addBuddyRegister
                  (m_pclApp + 0x300,*(uint *)(local_1c + local_14 * 0x27 + 0x31));
      }
      if (local_1c[0xe] != (PacketHeader)0x0) {
        CUserManager::_ZN12CUserManager23SendConnectedBuddysListEP5CUser(local_18,local_20);
      }
      CUser::SetBuddyDBFlag(local_20,4);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2891 行）：

```cpp
void CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x10f0, "./log/buddy", "CPacketTranslater::OnQueryBuddyInfoDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            if (0x20 < (unsigned char)*(char*)((char*)pkt + 0xe))
            {
                *(char*)((char*)pkt + 0xe) = 0x20;
            }
            CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1112,"./log/buddy",
                    "CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL");
            }
            else
            {
                for (int i = 0;
                     i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe); i++)
                {
                    user->AddBuddy(*(STBuddyDBInfo*)((char*)pkt + i * 0x27 + 0xf));
                    user->GetUniqCharNo();
                    ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                        ->addBuddyRegister(*(unsigned int*)((char*)pkt + i * 0x27 + 0x31),
                                           user->GetUniqCharNo());
                }
                if (*(char*)((char*)pkt + 0xe) != 0)
                {
                    userMgr->SendConnectedBuddysList(user);
                }
                user->SetBuddyDBFlag(4);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1118,"%s", "CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x111d, "%s", "CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break");
    }
}
```

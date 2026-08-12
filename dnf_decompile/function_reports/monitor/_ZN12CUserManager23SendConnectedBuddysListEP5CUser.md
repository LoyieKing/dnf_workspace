# _ZN12CUserManager23SendConnectedBuddysListEP5CUser

`CUserManager::SendConnectedBuddysList(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8071b74` | `0x216` | `0x808b928` | `0x217` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,143 +1,146 @@
 push   %ebp
 mov    %esp,%ebp
+push   %esi
 push   %ebx
-sub    $0x604,%esp
+sub    $0x600,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20c>
-lea    -0x5ef(%ebp),%eax
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
+lea    -0x5f3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Monitor_Reply_Buddy_ListC1Ev>
-movl   $0x0,-0x14(%ebp)
-lea    -0xa0(%ebp),%eax
+movl   $0x0,-0x1c(%ebp)
+lea    -0xa4(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser9GetBuddysEPP6CBuddy>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    %al,-0x5e1(%ebp)
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x142>
+mov    %eax,-0x18(%ebp)
+lea    -0x5f3(%ebp),%eax
+mov    -0x18(%ebp),%edx
+mov    %dl,0xe(%eax)
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x14a>
+subl   $0x1,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0xa4(%ebp,%eax,4),%eax
+mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
-mov    -0xa0(%ebp,%eax,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x116>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
-imul   $0x2a,%eax,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x5d6,%eax
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x116>
+lea    -0x5f3(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x2a,%edx,%edx
+add    $0x11,%edx
+add    %edx,%eax
 movb   $0x1,(%eax)
-mov    -0x14(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+lea    -0x5f3(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x2a,%edx,%edx
+add    $0xf,%edx
+lea    (%eax,%edx,1),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-imul   $0x2a,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x5d8,%edx
-mov    %al,(%edx)
+mov    %al,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
 test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
-imul   $0x2a,%eax,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x5d7,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x116>
+lea    -0x5f3(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x2a,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
 movb   $0x1,(%eax)
 mov    -0x14(%ebp),%eax
-mov    -0xa0(%ebp,%eax,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    -0x14(%ebp),%edx
-lea    -0x5ef(%ebp),%ecx
-imul   $0x2a,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0x12,%edx
+lea    -0x5f3(%ebp),%edx
+mov    -0x1c(%ebp),%ecx
+imul   $0x2a,%ecx,%ecx
+add    $0x12,%ecx
+add    %ecx,%edx
 movl   $0x27,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 setne  %al
-subl   $0x1,-0x10(%ebp)
 test   %al,%al
-jne    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x4f>
-cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x53>
+cmpl   $0x0,-0x1c(%ebp)
 je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x1d4>
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x1af>
+movl   $0x34b,0x8(%esp)
+movl   $&_ZZN12CUserManager23SendConnectedBuddysListEP5CUserE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnCheckBuddyList : pclCheckUser->GetGameServer() == 0",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
+lea    -0x5f3(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x5e5(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,0xa(%ebx)
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%ecx
+mov    -0x1c(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
 add    %eax,%eax
+lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
-mov    %ax,-0x5ed(%ebp)
-movzwl -0x5ed(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x5ef(%ebp),%ebx
+mov    %ax,-0xa(%ebp)
+movzwl -0xa(%ebp),%esi
+lea    -0x5f3(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
-mov    -0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
-movl   $0x34b,0x8(%esp)
-movl   $&_ZZN12CUserManager23SendConnectedBuddysListEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnCheckBuddyList : pclCheckUser->GetGameServer() == 0",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
-nop
-add    $0x604,%esp
+add    $0x600,%esp
 pop    %ebx
+pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::SendConnectedBuddysList(CUser*) */

void __thiscall
CUserManager::_ZN12CUserManager23SendConnectedBuddysListEP5CUser(CUserManager *this,CUser *param_1)

{
  undefined1 uVar1;
  char cVar2;
  void *__src;
  int iVar3;
  CServerInterface *pCVar4;
  bool bVar5;
  Packet_Monitor_Reply_Buddy_List local_5f3 [2];
  ushort local_5f1;
  undefined4 local_5e9;
  undefined1 local_5e5;
  undefined1 auStack_5e4 [1344];
  CBuddy *local_a4 [32];
  CMyFileLog local_24 [8];
  CUser *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    Packet_Monitor_Reply_Buddy_List::Packet_Monitor_Reply_Buddy_List(local_5f3);
    local_18 = 0;
    local_14 = CUser::GetBuddys(param_1,local_a4);
    local_5e5 = (undefined1)local_14;
    while (bVar5 = local_14 != 0, local_14 = local_14 + -1, bVar5) {
      CBuddy::getBuddyDBInfo(local_a4[local_18]);
      local_1c = (CUser *)FindUser_CharNo((uint)this);
      if (local_1c != (CUser *)0x0) {
        iVar3 = CUser::GetGameServer(local_1c);
        if (iVar3 != 0) {
          auStack_5e4[local_18 * 0x2a + 2] = 1;
          iVar3 = local_18;
          pCVar4 = (CServerInterface *)CUser::GetGameServer(local_1c);
          uVar1 = CServerInterface::GetChannelNo(pCVar4);
          auStack_5e4[iVar3 * 0x2a] = uVar1;
          CUser::GetUniqCharNo(param_1);
          cVar2 = CUser::IsBlackUser((uint)local_1c);
          if (cVar2 != '\0') {
            auStack_5e4[local_18 * 0x2a + 1] = 1;
          }
        }
      }
      __src = (void *)CBuddy::getBuddyDBInfo(local_a4[local_18]);
      memcpy(auStack_5e4 + local_18 * 0x2a + 3,__src,0x27);
      local_18 = local_18 + 1;
    }
    if (local_18 != 0) {
      iVar3 = CUser::GetGameServer(param_1);
      if (iVar3 == 0) {
        CMyFileLog::CMyFileLog(local_24,"SendConnectedBuddysList",0x34b);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_24,"./log/Except",
                   "CPacketTranslater::OnCheckBuddyList : pclCheckUser->GetGameServer() == 0");
      }
      else {
        local_5e9 = CUser::GetDBID(param_1);
        local_5f1 = (short)(local_18 << 2) * 8 + (short)local_18 * 10 + 0xf;
        local_10 = (uint)local_5f1;
        pCVar4 = (CServerInterface *)CUser::GetGameServer(param_1);
        CServerInterface::SendToServer(pCVar4,(char *)local_5f3,local_10);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 301 行）：

```cpp
void CUserManager::SendConnectedBuddysList(CUser* user)
{
    if (user != 0)
    {
        Packet_Monitor_Reply_Buddy_List pkt;
        int idx = 0;
        CBuddy* buddies[32];
        int count = user->GetBuddys(buddies);
        ((RA_S8<14>*)&pkt)->v = (char)count;
        while (count != 0)
        {
            count--;
            CBuddy* buddy = buddies[idx];
            CUser* buddyUser = FindUser_CharNo(
                *(unsigned int*)((char*)buddy->getBuddyDBInfo() + 0x22));
            if (buddyUser != 0)
            {
                if (buddyUser->GetGameServer() != 0)
                {
                    *(char*)((char*)&pkt + 0xf + idx * 0x2a + 2) = 1;
                    *(char*)((char*)&pkt + 0xf + idx * 0x2a) =
                        ((CServerInterface*)buddyUser->GetGameServer())->GetChannelNo();
                    if (buddyUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                    {
                        *(char*)((char*)&pkt + 0xf + idx * 0x2a + 1) = 1;
                    }
                }
            }
            memcpy((char*)&pkt + 0xf + idx * 0x2a + 3, buddy->getBuddyDBInfo(), 0x27);
            idx++;
        }
        if (idx != 0)
        {
            if (user->GetGameServer() == 0)
            {
                DNF_LOG_SCOPE_LINE(0x34b,"./log/Except",
                    "CPacketTranslater::OnCheckBuddyList : pclCheckUser->GetGameServer() == 0");
            }
            else
            {
                ((RA_UINT<10>*)&pkt)->v = user->GetDBID();
                unsigned short size =
                    (unsigned short)((idx << 2) * 8 + idx * 10 + 0xf);
                ((CServerInterface*)user->GetGameServer())
                    ->SendToServer((char*)&pkt, (unsigned int)size);
            }
        }
    }
}
```

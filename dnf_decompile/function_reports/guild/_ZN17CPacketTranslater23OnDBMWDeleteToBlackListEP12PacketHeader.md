# _ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader

`CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807e4a8` | `0x269` | `0x8074d38` | `0x281` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,164 +1,171 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x52>
 movl   $0xfa6,0x8(%esp)
 movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x27a>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0xb6>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0xb7>
 movl   $0xfad,0x8(%esp)
 movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x27a>
 lea    -0x65(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_Delete_To_BlackList_ResultC1Ev>
-mov    -0x14(%ebp),%eax
+lea    -0x65(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5b(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x14(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x65(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+mov    -0x14(%ebp),%eax
+add    $0x2c,%eax
+mov    (%eax),%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x12a>
+lea    -0x65(%ebp),%eax
+add    $0x30,%eax
+movb   $0x3,(%eax)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x120>
-movb   $0x3,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x27a>
+mov    -0x14(%ebp),%eax
+add    $0x2c,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x15d>
-movb   $0x2,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
+je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x16e>
 lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
+add    $0x30,%eax
+movb   $0x2,(%eax)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-movb   $0x1,-0x35(%ebp)
+lea    -0x65(%ebp),%eax
+add    $0x30,%eax
+movb   $0x1,(%eax)
+lea    -0x65(%ebp),%eax
+lea    0x2c(%eax),%edx
+mov    -0x14(%ebp),%eax
+add    $0x2c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-mov    %eax,-0x39(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x27a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x208>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x220>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0xfca,0x8(%esp)
+movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
+lea    -0x2c(%ebp),%eax
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
-movl   $0xfca,0x8(%esp)
-movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x201>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x219>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x27a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xfcf,0x8(%esp)
 movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x275>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x70,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_Delete_To_BlackList_Result local_69 [2];
  ushort local_67;
  undefined4 local_5f;
  undefined1 auStack_5b [30];
  undefined4 local_3d;
  undefined1 local_39;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0807e4d5 to 0807e62e has its CatchHandler @ 0807e634 */
    CMyFileLog::CMyFileLog(local_38,"OnDBMWDeleteToBlackList",0xfa6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/BlackList",
               "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
  }
  else {
    local_18 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnDBMWDeleteToBlackList",0xfad);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/BlackList",
                 "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
    }
    else {
      Packet_Delete_To_BlackList_Result::Packet_Delete_To_BlackList_Result(local_69);
      local_5f = CUser::GetIdByChannel(local_18);
      memcpy(auStack_5b,local_14 + 0xe,0x1d);
      if (*(int *)(local_14 + 0x2c) == -1) {
        local_39 = 3;
        CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
      }
      else {
        cVar1 = CUser::DeleteToBlackList((uint)local_18);
        if (cVar1 != '\x01') {
          local_39 = 2;
          CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
        }
        local_39 = 1;
        local_3d = *(undefined4 *)(local_14 + 0x2c);
        CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2854 行）：

```cpp
void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xfa6,"./log/BlackList",
            "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0xfad,"./log/BlackList",
            "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
        return;
    }
    Packet_Delete_To_BlackList_Result reply;
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    memcpy((char*)&reply + 0xe, pb + 0xe, 0x1d);
    if (*(int*)(pb + 0x2c) == -1)
    {
        *(unsigned char*)((char*)&reply + 0x30) = 3;
        user->SendToGameserver((char*)&reply, 0x31);
        return;
    }
    if (user->DeleteToBlackList(*(unsigned int*)(pb + 0x2c)) != 1)
    {
        *(unsigned char*)((char*)&reply + 0x30) = 2;
        user->SendToGameserver((char*)&reply, 0x31);
    }
    *(unsigned char*)((char*)&reply + 0x30) = 1;
    *(unsigned int*)((char*)&reply + 0x2c) = *(unsigned int*)(pb + 0x2c);
    user->SendToGameserver((char*)&reply, 0x31);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWDeleteToBlackList", 0xfca);
        log("./log/Except", "CPacketTranslater::OnDBMWDeleteToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWDeleteToBlackList", 0xfcf);
        log("./log/Except", "CPacketTranslater::OnDBMWDeleteToBlackList Exception Break\n");
    }
}
```

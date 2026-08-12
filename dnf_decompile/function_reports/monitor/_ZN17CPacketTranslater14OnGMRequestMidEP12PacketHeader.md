# _ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader

`CPacketTranslater::OnGMRequestMid(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80883f2` | `0x296` | `0x80738b4` | `0x264` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,171 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-add    $0xffffff80,%esp
+sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x4c>
 movl   $0x113c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnGMRequestMidEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGMRequestMid : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x25d>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28e>
-lea    -0x70(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x25d>
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_GM_Request_MidC1Ev>
-mov    -0x1c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x66(%ebp)
-mov    -0x1c(%ebp),%eax
+lea    -0x42(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0xa(%edx),%edx
+mov    %edx,0xa(%eax)
+mov    0x8(%ebp),%eax
+lea    0x16(%eax),%edx
+lea    -0x42(%ebp),%eax
 add    $0x16,%eax
 movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
-add    $0x16,%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x2d(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x1c(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x16(%eax),%edx
-lea    -0x2d(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %bl
-lea    -0x34(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x140>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x123>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x12b>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x10e>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x1b6>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x187>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x178>
-movl   $0xffffffff,-0x62(%ebp)
-movzwl -0x6e(%ebp),%eax
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x140>
+lea    -0x42(%ebp),%eax
+movl   $0xffffffff,0xe(%eax)
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x162>
+lea    -0x42(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x12(%ebx)
+lea    -0x42(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,0xe(%ebx)
+lea    -0x42(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x70(%ebp),%eax
+lea    -0x42(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x5e(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x62(%ebp)
-movzwl -0x6e(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x70(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x25d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x232>
+jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x203>
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
 movl   $0x1161,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnGMRequestMidEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x1fc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x25d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1166,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnGMRequestMidEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x287>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x258>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
-nop
-sub    $0xffffff80,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGMRequestMid(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  Packet_GM_Request_Mid local_74 [2];
  ushort local_72;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined1 auStack_5e [30];
  CMyFileLog local_40 [8];
  string local_38 [7];
  allocator local_31 [17];
  PacketHeader *local_20;
  CUser *local_1c;
  CUser *local_18;
  uint local_14;
  
  if (m_pclApp == 0) {
                    /* try { // try from 08088419 to 08088471 has its CatchHandler @ 080885a8 */
    CMyFileLog::CMyFileLog(local_40,"OnGMRequestMid",0x113c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Except","CPacketTranslater::OnGMRequestMid : 0 == m_pclApp");
  }
  else {
    local_20 = param_1;
    local_1c = (CUser *)0x0;
    local_18 = (CUser *)0x0;
    local_14 = m_pclApp + 0x10;
    local_1c = (CUser *)CUserManager::FindUser(local_14);
    if (local_1c != (CUser *)0x0) {
      Packet_GM_Request_Mid::Packet_GM_Request_Mid(local_74);
      local_6a = *(undefined4 *)(local_20 + 10);
      memcpy(auStack_5e,local_20 + 0x16,0x1d);
      std::allocator<char>::allocator();
                    /* try { // try from 080884da to 080884de has its CatchHandler @ 0808851d */
      std::string::string(local_38,(char *)(local_20 + 0x16),local_31);
                    /* try { // try from 080884ec to 080884f0 has its CatchHandler @ 08088508 */
      local_18 = (CUser *)CUserManager::FindUser_CharName(local_14,local_38);
      bVar1 = local_18 == (CUser *)0x0;
                    /* try { // try from 08088501 to 08088505 has its CatchHandler @ 0808851d */
      std::string::~string(local_38);
      std::allocator<char>::~allocator((allocator<char> *)local_31);
      if (bVar1) {
        local_66 = 0xffffffff;
                    /* try { // try from 08088560 to 080885a2 has its CatchHandler @ 080885a8 */
        CUser::SendToGameserver(local_1c,(char *)local_74,(uint)local_72);
      }
      else {
        local_62 = CUser::GetUniqCharNo(local_18);
        local_66 = CUser::GetDBID(local_18);
        CUser::SendToGameserver(local_1c,(char *)local_74,(uint)local_72);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3000 行）：

```cpp
void CPacketTranslater::OnGMRequestMid(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x113c, "./log/Except", "CPacketTranslater::OnGMRequestMid : 0 == m_pclApp");
    }
    else
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser(((RA_UINT<10>*)pkt)->v);
        if (user != 0)
        {
            Packet_GM_Request_Mid reply;
            ((RA_UINT<10>*)&reply)->v = ((RA_UINT<10>*)pkt)->v;
            memcpy((char*)&reply + 0x16, (char*)pkt + 0x16, 0x1d);
            CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x16);
            if (target == 0)
            {
                ((RA_UINT<14>*)&reply)->v = 0xffffffff;
            }
            else
            {
                ((RA_UINT<18>*)&reply)->v = target->GetUniqCharNo();
                ((RA_UINT<14>*)&reply)->v = target->GetDBID();
            }
            user->SendToGameserver((char*)&reply, ((RA_U16<2>*)&reply)->v);
        }
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1161, "./log/Except", "CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1166, "./log/Except", "CPacketTranslater::OnQueryBuddyInfoDBReply Exception Break\n");
    }
}
```

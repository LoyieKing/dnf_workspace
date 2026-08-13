# _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader

`CPacketTranslater::OnDeleteToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807dd42` | `0x297` | `0x8074618` | `0x28c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,180 +1,175 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-add    $0xffffff80,%esp
+sub    $0x60,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x52>
 movl   $0xeeb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-lea    -0x70(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
+lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_DMBW_Delete_To_BlackListC1Ev>
-mov    -0x10(%ebp),%eax
+lea    -0x3e(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x66(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x18(%ebp),%eax
+lea    0xe(%eax),%edx
+lea    -0x3e(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
-add    $0xe,%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 lea    0xe(%eax),%edx
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x10(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x108>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x106>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xf0>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xee>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1b7>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1b1>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-mov    -0x10(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
+mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x17f>
 movl   $0xefc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17DeleteToBlackListEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x28f>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x44(%ebp)
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x233>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0xf16,0x8(%esp)
+movl   $"OnDeleteToBlackList",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0xf16,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDeleteToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22c>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x224>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x285>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xf1b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x288>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-nop
-sub    $0xffffff80,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDeleteToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  bool bVar2;
  Packet_DMBW_Delete_To_BlackList local_74 [10];
  undefined4 local_6a;
  undefined1 auStack_66 [34];
  CMyFileLog local_44 [8];
  string local_3c [7];
  allocator local_35;
  CMyFileLog local_34 [24];
  CUser *local_1c;
  uint local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0807dd6f to 0807dd8e has its CatchHandler @ 0807def9 */
    CMyFileLog::CMyFileLog(local_44,"OnDeleteToBlackList",0xeeb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/BlackList","CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
  }
  else {
    Packet_DMBW_Delete_To_BlackList::Packet_DMBW_Delete_To_BlackList(local_74);
    local_6a = *(undefined4 *)(local_14 + 10);
    memcpy(auStack_66,local_14 + 0xe,0x1d);
    std::allocator<char>::allocator();
                    /* try { // try from 0807ddea to 0807ddee has its CatchHandler @ 0807de32 */
    std::string::string(local_3c,(char *)(local_14 + 0xe),&local_35);
                    /* try { // try from 0807de01 to 0807de05 has its CatchHandler @ 0807de1d */
    local_1c = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_3c);
    bVar2 = local_1c != (CUser *)0x0;
                    /* try { // try from 0807de16 to 0807de1a has its CatchHandler @ 0807de32 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)&local_35);
    if (bVar2) {
                    /* try { // try from 0807de73 to 0807deda has its CatchHandler @ 0807def9 */
      local_18 = CUserManager::FindUser(m_pclApp + 0x10);
      if (local_18 == 0) {
        CMyFileLog::CMyFileLog(local_34,"OnDeleteToBlackList",0xefc);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/BlackList",
                   "CPacketTranslater::OnDeleteToBlackList : 0 == pclUser");
      }
      else {
        CUser::GetUniqCharNo(local_1c);
        cVar1 = CUser::DeleteToBlackList(local_18);
        if (cVar1 == '\x01') {
          CUser::GetUniqCharNo(local_1c);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3055 行）：

```cpp
void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt)
{
    try
    {
    PTL_BlackListPkt* pb = (PTL_BlackListPkt*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xeeb, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    Packet_DMBW_Delete_To_BlackList dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = pb->m_dbid;
    memcpy((char*)&dbPkt + 0xe, pb->m_name, 0x1d);
    CUser* target = (&m_pclApp->m_userManager)->FindUser_CharName(pb->m_name);
    if (target != 0)
    {
        CUser* requester;
        if ((requester = (&m_pclApp->m_userManager)->FindUser(pb->m_dbid)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0xefc, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == pclUser");
        }
        else
        {
            if (requester->DeleteToBlackList(target->GetUniqCharNo()) == 1)
            {
                target->GetUniqCharNo();
            }
        }
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDeleteToBlackList", 0xf16);
        log("./log/Except", "CPacketTranslater::OnDeleteToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xf1b);
        log("./log/Except", "CPacketTranslater::OnDeleteToBlackList Exception Break\n");
    }
}
```

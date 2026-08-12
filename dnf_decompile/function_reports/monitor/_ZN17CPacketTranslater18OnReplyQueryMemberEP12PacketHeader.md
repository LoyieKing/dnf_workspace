# _ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader

`CPacketTranslater::OnReplyQueryMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808039e` | `0x225` | `0x806c452` | `0x21e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,142 +1,138 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0xc9>
+jne    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0xc5>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21c>
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x216>
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%ecx
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xf(%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x17(%eax),%edi
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 lea    0x2d0(%ebx),%esi
-mov    -0x20(%ebp),%ebx
+mov    -0x24(%ebp),%ebx
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %edi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21d>
-mov    -0x24(%ebp),%eax
+mov    %al,-0x1d(%ebp)
+cmpb   $0x1,-0x1d(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x216>
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%ebx
 movl   $0x4e5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CHECK MEMBER ID: CPacketTranslater::OnReplyQueryMember()\tm_clMemberManager.LoadMember()\tmember id(%d)",0x8(%esp)
 movl   $"./log/MemberMember",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21d>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x216>
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x4eb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[DB ERROR]CPacketTranslater::OnReplyQueryMember() packet->bSuccess : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21d>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x216>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x1b4>
+jne    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x1b0>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnReplyQueryMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x4f1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyQueryMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x1ad>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x1a9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21d>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x216>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnReplyQueryMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x4f7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyQueryMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x215>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x211>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader+0x21d>
-nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnReplyQueryMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CServerHandler *local_24;
  
  local_28 = param_1;
  if (param_1[10] == (PacketHeader)0x1) {
    local_24 = *(CServerHandler **)(m_pclApp + 0xa0);
    if (local_24 != (CServerHandler *)0x0) {
                    /* try { // try from 08080412 to 080804aa has its CatchHandler @ 080804b0 */
      cVar3 = CMemberManager::_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler
                        ((CMemberManager *)(m_pclApp + 0x2d0),*(uint *)(param_1 + 0xb),
                         (STMemberDBInfo *)(param_1 + 0x17),*(uint *)(param_1 + 0xf),
                         *(uint *)(param_1 + 0x13),local_24);
      if (cVar3 != '\x01') {
        uVar2 = *(undefined4 *)(local_28 + 0xb);
        CMyFileLog::CMyFileLog(local_48,"OnReplyQueryMember",0x4e5);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/MemberMember",
                   "CHECK MEMBER ID: CPacketTranslater::OnReplyQueryMember()\tm_clMemberManager.LoadMember()\tmember id(%d)"
                   ,uVar2);
      }
    }
  }
  else {
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_40,"OnReplyQueryMember",0x4eb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Except",
               "[DB ERROR]CPacketTranslater::OnReplyQueryMember() packet->bSuccess : %d\n",
               (uint)(byte)PVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 992 行）：

```cpp
void CPacketTranslater::OnReplyQueryMember(PacketHeader* pkt)
{try
{


    if (((RA_S8<10>*)pkt)->v == 1)
    {
        CServerHandler* handler = m_pclApp->m_serverHandler2;
        if (handler != 0)
        {
            char ok = ((CMemberManager*)((char*)m_pclApp + 0x2d0))
                          ->LoadMember(((RA_UINT<11>*)pkt)->v,
                                       *(STMemberDBInfo*)((char*)pkt + 0x17),
                                       ((RA_UINT<15>*)pkt)->v,
                                       ((RA_UINT<19>*)pkt)->v, handler);
            if (ok != 1)
            {
                DNF_LOG_SCOPE_LINE(0x4e5,"./log/MemberMember",
                    "CHECK MEMBER ID: CPacketTranslater::OnReplyQueryMember()\t"
                    "m_clMemberManager.LoadMember()\tmember id(%d)",
                    ((RA_UINT<11>*)pkt)->v);
            }
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x4eb,"./log/Except",
            "[DB ERROR]CPacketTranslater::OnReplyQueryMember() packet->bSuccess : %d\n",
            (unsigned int)(unsigned char)((RA_S8<10>*)pkt)->v);
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnReplyQueryMember() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x4f1, "./log/Except", "CPacketTranslater::OnReplyQueryMember() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnReplyQueryMember() Exception Break");
        DNF_LOG_SCOPE_LINE(0x4f7, "./log/Except", "CPacketTranslater::OnReplyQueryMember() Exception Break\n");
    }
}
```

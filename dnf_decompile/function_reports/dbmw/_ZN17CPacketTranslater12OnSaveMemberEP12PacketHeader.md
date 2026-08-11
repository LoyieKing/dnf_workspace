# _ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader

`CPacketTranslater::OnSaveMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80942d0` | `0x1b7` | `0x8081c14` | `0x1b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,122 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1af>
+je     <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ad>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    $0x1,%al
 jne    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x5e>
 mov    -0x10(%ebp),%eax
 movzbl 0x13(%eax),%eax
 movzbl %al,%ecx
 mov    -0x10(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager16SaveMemberInsertEjjh>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1b0>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ae>
 mov    -0x10(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1b0>
+jne    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ae>
 mov    -0x10(%ebp),%eax
 movzbl 0x13(%eax),%eax
 movzbl %al,%ecx
 mov    -0x10(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager16SaveMemberDeleteEjjh>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1b0>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ae>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x147>
+jne    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x145>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnSaveMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x148,0x8(%esp)
+movl   $"OnSaveMember",0x4(%esp)
+lea    -0x18(%ebp),%eax
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
-movl   $0x148,0x8(%esp)
-movl   $"OnSaveMember",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSaveMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x140>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x13e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1b0>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ae>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSaveMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x14e,0x8(%esp)
 movl   $"OnSaveMember",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSaveMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1a8>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1a6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1b0>
+jmp    <T> <_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader+0x1ae>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader(PacketHeader *param_1)

{
  if (m_pclApp != 0) {
    if (param_1[10] == (PacketHeader)0x1) {
                    /* try { // try from 08094324 to 0809436f has its CatchHandler @ 08094375 */
      CDBManager::_ZN10CDBManager16SaveMemberInsertEjjh
                ((CDBManager *)(m_pclApp + 0x50),*(uint *)(param_1 + 0xb),*(uint *)(param_1 + 0xf),
                 (uchar)param_1[0x13]);
    }
    else if (param_1[10] == (PacketHeader)0x2) {
      CDBManager::_ZN10CDBManager16SaveMemberDeleteEjjh
                ((CDBManager *)(m_pclApp + 0x50),*(uint *)(param_1 + 0xb),*(uint *)(param_1 + 0xf),
                 (uchar)param_1[0x13]);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1238 行）：

```cpp
void CPacketTranslater::OnSaveMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Save_Member* pkt = (Packet_DBMW_Save_Member*)header;
        if (pkt->m_type == 1)
        {
            m_pclApp->m_dbManager.SaveMemberInsert(
                pkt->m_fieldB, pkt->m_fieldF, pkt->m_field13);
        }
        else if (pkt->m_type == 2)
        {
            m_pclApp->m_dbManager.SaveMemberDelete(
                pkt->m_fieldB, pkt->m_fieldF, pkt->m_field13);
        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except.log",
                         "CPacketTranslater::OnSaveMember() Exception Break",
                         0x148, 0x14e);
}
```

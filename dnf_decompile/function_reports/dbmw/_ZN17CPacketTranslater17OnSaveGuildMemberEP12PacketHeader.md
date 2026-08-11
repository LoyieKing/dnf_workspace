# _ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader

`CPacketTranslater::OnSaveGuildMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80948de` | `0x17f` | `0x807f5b2` | `0x17d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,108 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x176>
+je     <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x174>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%ebx
 mov    -0x20(%ebp),%eax
 mov    0xf(%eax),%ecx
 mov    -0x20(%ebp),%eax
 lea    0x13(%eax),%edi
 mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%edx
 mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%esi
 add    $0x50,%esi
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh>
-jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x177>
+jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x175>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x10e>
+jne    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x10c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnSaveGuildMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x1c7,0x8(%esp)
+movl   $"OnSaveGuildMember",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1c7,0x8(%esp)
-movl   $"OnSaveGuildMember",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSaveGuildMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x107>
+jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x105>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x177>
+jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x175>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSaveGuildMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1cd,0x8(%esp)
 movl   $"OnSaveGuildMember",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSaveGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x16f>
+jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x16d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x177>
+jmp    <T> <_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader+0x175>
 nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveGuildMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  if (m_pclApp != 0) {
                    /* try { // try from 08094940 to 08094944 has its CatchHandler @ 0809494a */
    CDBManager::_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh
              ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(uint *)(param_1 + 0xb),
               (STGuildMemerDBInfo *)(param_1 + 0x13),*(uint *)(param_1 + 0xf),(uchar)param_1[0x2d])
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 776 行）：

```cpp
void CPacketTranslater::OnSaveGuildMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Save_Guild_Member* pkt =
            (Packet_DBMW_Save_Guild_Member*)header;
        m_pclApp->m_dbManager.SaveGuildMember(
            pkt->m_serverId, pkt->m_guildId, pkt->m_info, pkt->m_fieldF,
            pkt->m_field2D);
    }
    DNF_CATCH_LOG_PRINTF("./log/Except.log",
                         "CPacketTranslater::OnSaveGuildMember() Exception Break",
                         0x1c7, 0x1cd);
}
```

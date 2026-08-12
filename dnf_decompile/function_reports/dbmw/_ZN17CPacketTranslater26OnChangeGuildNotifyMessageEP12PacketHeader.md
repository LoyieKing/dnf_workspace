# _ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader

`CPacketTranslater::OnChangeGuildNotifyMessage(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80966b6` | `0x138` | `0x80cfe9e` | `0x133` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,89 +1,87 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x130>
+je     <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x12b>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 lea    0xf(%eax),%ebx
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    -0x10(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc>
-xor    $0x1,%eax
-test   %al,%al
-jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x131>
+jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x12c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0xd4>
+jne    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0xcf>
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
 movl   $0x4b9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeGuildNotifyMessage() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0xcd>
+jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0xc8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x131>
+jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x12c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x4be,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildNotifyMessage() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x129>
+jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x124>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x131>
+jmp    <T> <_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader+0x12c>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangeGuildNotifyMessage(PacketHeader*) */

uint CPacketTranslater::_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (m_pclApp != 0) {
                    /* try { // try from 080966ff to 08096703 has its CatchHandler @ 0809670e */
    uVar1 = CDBManager::_ZN10CDBManager24ChangeGuildNotifyMessageEijPc
                      ((CDBManager *)(m_pclApp + 0x50),(uint)(byte)param_1[0xe],
                       *(uint *)(param_1 + 10),(char *)(param_1 + 0xf));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 142 行）：

```cpp
void CPacketTranslater::OnChangeGuildNotifyMessage(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_Guild_Notify_Message* pkt =
            (Packet_DBMW_Request_Guild_Notify_Message*)header;
        if (!m_pclApp->m_dbManager.ChangeGuildNotifyMessage(
                pkt->m_guildId, pkt->m_id, pkt->m_msg))
            return;
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnChangeGuildNotifyMessage() Exception Break",
                  0x4b9, 0x4be);
}
```

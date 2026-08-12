# _ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader

`CPacketTranslater::OnSaveGuildWarInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8094ba2` | `0x17a` | `0x80d2e4a` | `0x170` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x172>
+je     <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x168>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-lea    0x33(%eax),%ecx
-mov    -0x14(%ebp),%eax
-add    $0xb,%eax
+mov    -0x10(%ebp),%eax
+lea    0x36(%eax),%ebx
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%ecx
+mov    -0x10(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
-mov    %ecx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0xc(%esp)
+mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x173>
+je     <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x169>
 movl   $0x201,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager.OnSaveGuildWarInfo Err : return false",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x169>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x116>
+jne    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x10c>
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
 movl   $0x207,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSaveGuildWarInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x10f>
+jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x105>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x169>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x20c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSaveGuildWarInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x16b>
+jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x161>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader+0x169>
 nop
-add    $0x40,%esp
+add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveGuildWarInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  uint local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    local_14 = (uint)(byte)param_1[10];
                    /* try { // try from 08094bf1 to 08094c36 has its CatchHandler @ 08094c3c */
    cVar1 = CDBManager::_ZN10CDBManager21SaveGuildWarPointListEiPjS0_
                      ((CDBManager *)(m_pclApp + 0x50),local_14,(uint *)(param_1 + 0xb),
                       (uint *)(param_1 + 0x33));
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_30,"OnSaveGuildWarInfo",0x201);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Guild","m_clDBManager.OnSaveGuildWarInfo Err : return false");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 839 行）：

```cpp
void CPacketTranslater::OnSaveGuildWarInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Save_Guild_War_Info* pkt =
            (Packet_DB_Save_Guild_War_Info*)header;
        if (!m_pclApp->m_dbManager.SaveGuildWarPointList(
                pkt->m_serverId, pkt->m_guildIds, pkt->m_points))
        {
            DNF_LOG_SCOPE_LINE(0x201,
                "./log/Guild",
                "m_clDBManager.OnSaveGuildWarInfo Err : return false"
            );

        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSaveGuildWarInfo() Exception Break",
                  0x207, 0x20c);
}
```

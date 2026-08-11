# _ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader

`CPacketTranslater::OnChangeCharacName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8098158` | `0x12e` | `0x80839e2` | `0x128` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x126>
+je     <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x120>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name>
-jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x127>
+jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x121>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0xca>
+jne    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0xc4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x6e5,0x8(%esp)
+movl   $"OnChangeCharacName",0x4(%esp)
+lea    -0x14(%ebp),%eax
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
-movl   $0x6e5,0x8(%esp)
-movl   $"OnChangeCharacName",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0xc3>
+jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0xbd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x127>
+jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x121>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x6ea,0x8(%esp)
 movl   $"OnChangeCharacName",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x11f>
+jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x119>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x127>
+jmp    <T> <_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader+0x121>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangeCharacName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader
               (PacketHeader *param_1)

{
  if (m_pclApp != 0) {
                    /* try { // try from 08098185 to 080981a0 has its CatchHandler @ 080981a6 */
    CDBManager::_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name
              ((CDBManager *)(m_pclApp + 0x50),(Packet_DBMW_Change_Char_Name *)param_1);
    CDBManager::_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name
              ((CDBManager *)(m_pclApp + 0x50),(Packet_DBMW_Change_Char_Name *)param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1652 行）：

```cpp
void CPacketTranslater::OnChangeCharacName(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.ChangeCharName(
            (Packet_DBMW_Change_Char_Name*)header);
        m_pclApp->m_dbManager.ChangePvPBuddyName(
            (Packet_DBMW_Change_Char_Name*)header);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestGuildCreate() Exception Break",
                  0x6e5, 0x6ea);
}
```

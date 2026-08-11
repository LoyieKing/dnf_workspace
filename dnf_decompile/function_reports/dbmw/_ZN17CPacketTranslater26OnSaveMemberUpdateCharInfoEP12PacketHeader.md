# _ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader

`CPacketTranslater::OnSaveMemberUpdateCharInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8094738` | `0x1a6` | `0x80d541a` | `0x1a8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,112 +1,113 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x19e>
+je     <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x1a0>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    -0x10(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x19f>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x1a1>
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x1a4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Member key Update Error %d\n",0x8(%esp)
 movl   $"./log/DBMemberErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x19f>
+jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x1a1>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x136>
+jne    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x138>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1a9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x12f>
+jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x131>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x19f>
+jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x1a1>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1af,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x197>
+jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x199>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x19f>
+jmp    <T> <_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader+0x1a1>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveMemberUpdateCharInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 08094777 to 080947c6 has its CatchHandler @ 080947cc */
    cVar2 = CDBManager::_ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[0xe],*(uint *)(param_1 + 10));
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(local_14 + 10);
      CMyFileLog::CMyFileLog(local_2c,"OnSaveMemberUpdateCharInfo",0x1a4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/DBMemberErr","Member key Update Error %d\n",uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1325 行）：

```cpp
void CPacketTranslater::OnSaveMemberUpdateCharInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Save_Member_Update_CharInfo* pkt =
            (Packet_DBMW_Save_Member_Update_CharInfo*)header;
        if (!m_pclApp->m_dbManager.UpdateMemberKeyInCharacInfo(
                pkt->m_serverId, pkt->m_characNo))
        {
            DNF_LOG_SCOPE_LINE(0x1a4,
                "./log/DBMemberErr",
                "Member key Update Error %d\n",
                pkt->m_characNo
            );

        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except.log",
                         "CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break",
                         0x1a9, 0x1af);
}
```

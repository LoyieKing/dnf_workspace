# _ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader

`CPacketTranslater::OnSaveMemberExp(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8094488` | `0x161` | `0x8082944` | `0x15f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x159>
+je     <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x157>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0x12(%eax),%ecx
 mov    -0x10(%ebp),%eax
 mov    0xe(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager13SaveMemberExpEjjj>
-jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x158>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0xf1>
+jne    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0xef>
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
+movl   $0x168,0x8(%esp)
+movl   $"OnSaveMemberExp",0x4(%esp)
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
-movl   $0x168,0x8(%esp)
-movl   $"OnSaveMemberExp",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0xea>
+jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0xe8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x158>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSaveMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x16e,0x8(%esp)
 movl   $"OnSaveMemberExp",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x152>
+jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x150>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader+0x158>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveMemberExp(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader
               (PacketHeader *param_1)

{
  if (m_pclApp != 0) {
                    /* try { // try from 080944cd to 080944d1 has its CatchHandler @ 080944d7 */
    CDBManager::_ZN10CDBManager13SaveMemberExpEjjj
              ((CDBManager *)(m_pclApp + 0x50),*(uint *)(param_1 + 10),*(uint *)(param_1 + 0xe),
               *(uint *)(param_1 + 0x12));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1425 行）：

```cpp
void CPacketTranslater::OnSaveMemberExp(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Save_Member_Exp* pkt =
            (Packet_DBMW_Save_Member_Exp*)header;
        m_pclApp->m_dbManager.SaveMemberExp(
            pkt->m_characNo, pkt->m_masterNo, pkt->m_exp);
    }
    DNF_CATCH_LOG_PRINTF("./log/Except.log",
                         "CPacketTranslater::OnSaveMember() Exception Break",
                         0x168, 0x16e);
}
```

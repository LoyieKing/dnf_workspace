# _ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader

`CPacketTranslater::OnUpdateChannelOccNum(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809fb6e` | `0x122` | `0x80dd7c0` | `0x124` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11a>
+je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11c>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11b>
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11b>
-mov    -0x10(%ebp),%eax
+mov    %al,-0xd(%ebp)
+cmpb   $0x1,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11d>
+cmpl   $0x0,0x8(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11d>
+mov    -0x14(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x1300,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUpdateChannelOccNum Error ch_no(%d), count(%d)",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11b>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11d>
 cmp    $0x1,%edx
-je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0xa3>
+je     <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0xa5>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
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
 movl   $0x1305,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUpdateChannelOccNum() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x113>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x115>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11b>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader+0x11d>
 nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUpdateChannelOccNum(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_24 [16];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 0809fb9b to 0809fbfe has its CatchHandler @ 0809fc04 */
    cVar3 = CDBManager::_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic
                      ((CDBManager *)(m_pclApp + 0x50),(Packet_User_Count_Statistic *)param_1);
    if ((cVar3 != '\x01') && (local_14 != (PacketHeader *)0x0)) {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar2 = *(undefined4 *)(local_14 + 10);
      CMyFileLog::CMyFileLog(local_24,"OnUpdateChannelOccNum",0x1300);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/statistic",
                 "CPacketTranslater::OnUpdateChannelOccNum Error ch_no(%d), count(%d)",uVar2,uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 3220 行）：

```cpp
void CPacketTranslater::OnUpdateChannelOccNum(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_User_Count_Statistic* pkt =
            (Packet_User_Count_Statistic*)header;
        char ok = m_pclApp->m_dbManager.QueryUpdateChannelOccNum(
            pkt);
        if (ok != 1 && header)
        {
            DNF_LOG_SCOPE_LINE(0x1300,
                "./log/statistic",
                "CPacketTranslater::OnUpdateChannelOccNum Error ch_no(%d), count(%d)",
                pkt->m_gcNo,
                pkt->m_userCount
            );

        }
    }
    DNF_CATCH_LOG_CDNF("./log/Except.log",
                       "CPacketTranslater::OnUpdateChannelOccNum() Exception Break",
                       0x1305);
}
```

# _ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader

`CPacketTranslater::OnRenew_GM_List(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d678` | `0xaa` | `0x8078c54` | `0xb7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13GetGMAccountsEv>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0xa8>
+mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0xa8>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0xb5>
+cmpl   $0x0,0x8(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0xb5>
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x42>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x40>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts11clearGmListEv>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x7a>
-mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%edx
-movzbl 0x5c(%edx,%eax,1),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x81>
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+add    $0x5c,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 movsbl %al,%edx
+mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%ecx
-mov    -0x14(%ebp),%eax
-mov    0xc(%eax,%ecx,4),%eax
+add    $0x3,%ecx
+shl    $0x2,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts12AppendGM_SysEjc>
 addl   $0x1,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xb(%eax),%eax
 movsbl %al,%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x4b>
-mov    -0x14(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x49>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRenew_GM_List(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader
               (PacketHeader *param_1)

{
  CGMAccounts *this;
  int local_10;
  
  this = (CGMAccounts *)CApplication::GetGMAccounts(m_pclApp);
  if ((this != (CGMAccounts *)0x0) && (param_1 != (PacketHeader *)0x0)) {
    if (param_1[10] == (PacketHeader)0x0) {
      WongWork::CGMAccounts::clearGmList(this);
    }
    for (local_10 = 0; local_10 < (char)param_1[0xb]; local_10 = local_10 + 1) {
      WongWork::CGMAccounts::AppendGM_Sys
                (this,*(uint *)(param_1 + local_10 * 4 + 0xc),(char)param_1[local_10 + 0x5c]);
    }
    CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4362 行）：

```cpp
void CPacketTranslater::OnRenew_GM_List(PacketHeader* pkt)
{
    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm != 0 && pkt != 0)
    {
        if (((RA_S8<10>*)pkt)->v == 0)
        {
            gm->clearGmList();
        }
        for (int i = 0; i < (int)(char)((RA_S8<11>*)pkt)->v; i++)
        {
            gm->AppendGM_Sys(*(unsigned int*)((char*)pkt + i * 4 + 0xc),
                             *(char*)((char*)pkt + i + 0x5c));
        }
        CServerHandler* handler = m_pclApp->m_serverHandler2;
        handler->SendToDB(pkt);
    }
}
```

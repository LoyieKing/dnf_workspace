# _ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader

`CPacketTranslater::OnRenew_GM_List(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809f952` | `0x8c` | `0x808a0b6` | `0x8c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,44 @@
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
-je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x8a>
+mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x8a>
-mov    -0x14(%ebp),%eax
+cmpl   $0x0,0x8(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x8a>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x3e>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts11clearGmListEv>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x76>
 mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x10(%ebp),%edx
 movzbl 0x5c(%edx,%eax,1),%eax
 movsbl %al,%edx
 mov    -0xc(%ebp),%ecx
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0xc(%eax,%ecx,4),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts12AppendGM_SysEjc>
 addl   $0x1,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 movzbl 0xb(%eax),%eax
 movsbl %al,%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader+0x47>
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
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 3015 行）：

```cpp
void CPacketTranslater::OnRenew_GM_List(PacketHeader* header)
{
    WongWork::CGMAccounts* gm =
        (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm && header)
    {
        Packet_GM_List* pkt = (Packet_GM_List*)header;
        if (pkt->m_flag == 0)
            gm->clearGmList();
        for (int i = 0; i < pkt->m_count; i++)
        {
            gm->AppendGM_Sys(pkt->m_ids[i], pkt->m_flags[i]);
        }
    }
}
```

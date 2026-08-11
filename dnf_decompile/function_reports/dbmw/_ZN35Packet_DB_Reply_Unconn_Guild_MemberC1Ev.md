# _ZN35Packet_DB_Reply_Unconn_Guild_MemberC1Ev

`Packet_DB_Reply_Unconn_Guild_Member::Packet_DB_Reply_Unconn_Guild_Member()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a19f6` | `0x45` | `0x8053a88` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x53,0x8(%esp)
 movl   $0x427,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STGuildMemberProxyC1Ev>
+mov    0x8(%ebp),%eax
 movl   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xe(%eax)
-mov    0x8(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18STGuildMemberProxyC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Reply_Unconn_Guild_Member::Packet_DB_Reply_Unconn_Guild_Member() */

void __thiscall
Packet_DB_Reply_Unconn_Guild_Member::_ZN35Packet_DB_Reply_Unconn_Guild_MemberC1Ev
          (Packet_DB_Reply_Unconn_Guild_Member *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x427,0x53);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  STGuildMemberProxy::STGuildMemberProxy((STGuildMemberProxy *)(this + 0x12));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2000 行）：

```cpp
Packet_DB_Reply_Unconn_Guild_Member::Packet_DB_Reply_Unconn_Guild_Member()
    : PacketHeader(0x427, 0x53)
{
    m_fieldA = 0;
    m_fieldE = 0;
}
```

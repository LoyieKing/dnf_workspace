# _ZN6CGuild21QueryTodayGuildMemberEP14CServerHandler

`CGuild::QueryTodayGuildMember(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80926d4` | `0x2e` | `0x8058412` | `0x33` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-lea    -0x16(%ebp),%eax
+sub    $0x38,%esp
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Query_Today_Guild_MemberC1Ev>
+lea    -0x1c(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x16(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::QueryTodayGuildMember(CServerHandler*) */

void __thiscall
CGuild::_ZN6CGuild21QueryTodayGuildMemberEP14CServerHandler(CGuild *this,CServerHandler *param_1)

{
  Packet_Query_Today_Guild_Member local_1a [10];
  undefined4 local_10;
  
  Packet_Query_Today_Guild_Member::_ZN31Packet_Query_Today_Guild_MemberC2Ev(local_1a);
  local_10 = *(undefined4 *)(this + 0x18);
  CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_1,(PacketHeader *)local_1a);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2192 行）：

```cpp
void CGuild::QueryTodayGuildMember(CServerHandler* handler)
{
    Packet_Query_Today_Guild_Member pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = m_guildKey;
    handler->SendToDB(&pkt);
}
```

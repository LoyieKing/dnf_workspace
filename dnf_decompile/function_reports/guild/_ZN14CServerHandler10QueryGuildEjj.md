# _ZN14CServerHandler10QueryGuildEjj

`CServerHandler::QueryGuild(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d87e` | `0x4a` | `0x8081a52` | `0x5a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 lea    -0x1b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DB_Query_GuildC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 mov    %al,-0x11(%ebp)
+lea    -0x1b(%ebp),%eax
+add    $0xa,%eax
+lea    0x1(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,(%edx)
+lea    -0x1b(%ebp),%eax
+add    $0xa,%eax
+lea    0x5(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,(%edx)
 lea    -0x1b(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 movl   $0x13,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::QueryGuild(unsigned int, unsigned int) */

void __thiscall
CServerHandler::_ZN14CServerHandler10QueryGuildEjj(CServerHandler *this,uint param_1,uint param_2)

{
  Packet_DB_Query_Guild local_1f [10];
  undefined1 local_15;
  uint local_14;
  uint local_10;
  
  Packet_DB_Query_Guild::Packet_DB_Query_Guild(local_1f);
  local_15 = GetServerGroupNo(this);
  local_14 = param_1;
  local_10 = param_2;
  CServerInterface::SendToServer(*(CServerInterface **)(this + 0x18),(char *)local_1f,0x13);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 394 行）：

```cpp
void CServerHandler::QueryGuild(unsigned int group, unsigned int guildId)
{
    Packet_DB_Query_Guild pkt;
    pkt.m_data = GetServerGroupNo();
    pkt.m_group = group;
    pkt.m_guildId = guildId;
    m_dbServer->SendToServer((char*)&pkt, 0x13);
}
```

# _ZN6CGuild25QueryGuildAllMembersProxyEP14CServerHandlerj

`CGuild::QueryGuildAllMembersProxy(CServerHandler*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808fc58` | `0x47` | `0x8055c48` | `0x51` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
-lea    -0x1a(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_DB_Call_Guild_All_MembersC1Ev>
+lea    -0x1c(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,(%edx)
+lea    -0x1c(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x1a(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 mov    %eax,%edx
 or     $0x8,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1c(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::QueryGuildAllMembersProxy(CServerHandler*, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild25QueryGuildAllMembersProxyEP14CServerHandlerj
          (CGuild *this,CServerHandler *param_1,uint param_2)

{
  Packet_DB_Call_Guild_All_Members local_1e [10];
  undefined4 local_14;
  uint local_10;
  
  Packet_DB_Call_Guild_All_Members::_ZN32Packet_DB_Call_Guild_All_MembersC2Ev(local_1e);
  local_14 = *(undefined4 *)(this + 0x18);
  local_10 = param_2;
  CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_1,(PacketHeader *)local_1e);
  *(ushort *)(this + 0x1c) = *(ushort *)(this + 0x1c) | 8;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1263 行）：

```cpp
void CGuild::QueryGuildAllMembersProxy(CServerHandler* handler, unsigned int charNo)
{
    Packet_DB_Call_Guild_All_Members pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = m_guildKey;
    *(unsigned int*)((char*)&pkt + 0xe) = charNo;
    handler->SendToDB(&pkt);
    m_field1c |= 8;
}
```

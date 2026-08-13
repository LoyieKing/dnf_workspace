# _ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri

`CGuildCargo::SendGuildCargoToDBMW(CServerHandler*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a0076` | `0x83` | `0x8093614` | `0x7d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,38 @@
-push   %ebp
-mov    %esp,%ebp
-sub    $0x28,%esp
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
-mov    %eax,-0x14(%ebp)
-movl   $0x18ea,0x8(%esp)
-movl   $0x710,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CTcpDBServer16makePacketHeaderEtt>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+movzwl %ax,%esi
 mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%eax
+movzbl 0x10(%eax),%eax
+movzbl %al,%edi
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xa(%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x5(%eax),%eax
+movzbl %al,%eax
 mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    0x10(%ebp),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0xe(%eax)
+and    $0x1f,%edx
+mov    %edx,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
-mov    -0xc(%ebp),%edx
-add    $0x12,%edx
-movl   $0x18d8,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
-leave
-ret
+movzbl 0x5(%eax),%eax
+movzbl %al,%eax
+sar    $0x5,%eax
+movzbl %al,%ecx
+mov    0x8(%ebp),%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    0x8(%ebp),%eax
+mov    0x1(%eax),%eax
+mov    %ebx,0x2c(%esp)
+mov    %esi,0x28(%esp)
+mov    %edi,0x24(%esp)
+mov    -0x28(%ebp),%ebx
+mov    %ebx,0x20(%esp)
+mov    -0x24(%ebp),%ebx
+mov    %ebx,0x1c(%esp)
+mov    -0x20(%ebp),%ebx
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SendGuildCargoToDBMW(CServerHandler*, int) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri
          (CGuildCargo *this,CServerHandler *param_1,int param_2)

{
  CTcpDBServer *this_00;
  char *pcVar1;
  
  this_00 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(param_1);
  pcVar1 = (char *)CTcpDBServer::makePacketHeader(this_00,0x710,0x18ea);
  *(undefined4 *)(pcVar1 + 10) = *(undefined4 *)(this + 0x18e0);
  *(int *)(pcVar1 + 0xe) = param_2;
  memcpy(pcVar1 + 0x12,this,0x18d8);
  CTcpDBServer::SendToServer(this_00,pcVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 419 行）：

```cpp
void CGuildCargo::SendGuildCargoToDBMW(CServerHandler* handler, int slot)
{
    CTcpDBServer* db = handler->GetTcpDBServer();
    struct GuildCargoToDBMWPkt {
        char hdr[0xa];
        unsigned int guildKey;
        int slot;
        char cargo[0x18d8];
    } __attribute__((packed));
    GuildCargoToDBMWPkt* p = (GuildCargoToDBMWPkt*)db->makePacketHeader(0x710, 0x18ea);
    p->guildKey = m_guildKey;
    p->slot = slot;
    memcpy(p->cargo, this, 0x18d8);
    db->SendToServer((char*)p);
}
```

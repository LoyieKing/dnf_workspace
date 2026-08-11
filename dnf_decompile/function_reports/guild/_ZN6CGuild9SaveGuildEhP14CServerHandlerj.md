# _ZN6CGuild9SaveGuildEhP14CServerHandlerj

`CGuild::SaveGuild(unsigned char, CServerHandler*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d3da` | `0x8a` | `0x80534aa` | `0x9f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0xf8,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xdc(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj+0x88>
+je     <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj+0x9c>
 lea    -0xd8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_Monitor_SAVE_GuildC1Ev>
-movzbl -0xdc(%ebp),%eax
-mov    %al,-0xce(%ebp)
+lea    -0xd8(%ebp),%eax
+lea    0xb(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0xcd(%ebp)
+mov    %eax,(%edx)
+lea    -0xd8(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x14(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,(%edx)
+lea    -0xd8(%ebp),%eax
+lea    0xa(%eax),%edx
+movzbl -0xdc(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xbd,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xd8(%ebp),%eax
 add    $0xf,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0xd8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj+0x9d>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SaveGuild(unsigned char, CServerHandler*, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild9SaveGuildEhP14CServerHandlerj
          (CGuild *this,uchar param_1,CServerHandler *param_2,uint param_3)

{
  Packet_Monitor_SAVE_Guild local_dc [10];
  uchar local_d2;
  undefined4 local_d1;
  undefined1 auStack_cd [189];
  uint local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_Monitor_SAVE_Guild::_ZN25Packet_Monitor_SAVE_GuildC2Ev(local_dc);
    local_d1 = *(undefined4 *)(this + 0x18);
    local_10 = param_3;
    local_d2 = param_1;
    memcpy(auStack_cd,this + 0x20,0xbd);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_2,(PacketHeader *)local_dc);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 538 行）：

```cpp
void CGuild::SaveGuild(unsigned char flag, CServerHandler* handler, unsigned int param)
{
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    Packet_Monitor_SAVE_Guild pkt;
    *(unsigned int*)((char*)&pkt + 0xb) = m_guildKey;
    *(unsigned int*)((char*)&pkt + 0x12) = param;
    *(unsigned char*)((char*)&pkt + 0xa) = flag;
    memcpy((char*)&pkt + 0xf, (char*)this + 0x20, 0xbd);
    handler->SendToDB(&pkt);
}
```

# _ZN14CServerHandler16SendToGameServerEhP12PacketHeader

`CServerHandler::SendToGameServer(unsigned char, PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8079e54` | `0x4a` | `0x8080de2` | `0x4c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 movzbl -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler13GetGameServerEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader+0x48>
+je     <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader+0x4a>
 mov    0x10(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%ecx
 mov    0x10(%ebp),%edx
 mov    -0xc(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendToGameServer(unsigned char, PacketHeader*) */

void __thiscall
CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
          (CServerHandler *this,uchar param_1,PacketHeader *param_2)

{
  CServerInterface *this_00;
  
  this_00 = (CServerInterface *)_ZN14CServerHandler13GetGameServerEj((uint)this);
  if (this_00 != (CServerInterface *)0x0) {
    CServerInterface::SendToServer(this_00,(char *)param_2,(uint)*(ushort *)(param_2 + 2));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 290 行）：

```cpp
void CServerHandler::SendToGameServer(unsigned char group, PacketHeader* pkt)
{
    CGameServer* gs = GetGameServer((unsigned int)group);
    if (gs != 0)
    {
        gs->SendToServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
    }
}
```

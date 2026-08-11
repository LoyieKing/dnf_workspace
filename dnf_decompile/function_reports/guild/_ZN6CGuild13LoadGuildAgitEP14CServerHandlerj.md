# _ZN6CGuild13LoadGuildAgitEP14CServerHandlerj

`CGuild::LoadGuildAgit(CServerHandler*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091cd2` | `0x3c` | `0x80579a4` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild13LoadGuildAgitEP14CServerHandlerj+0x3a>
-lea    -0x16(%ebp),%eax
+je     <T> <_ZN6CGuild13LoadGuildAgitEP14CServerHandlerj+0x41>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_DB_Load_Guild_AgitC1Ev>
+lea    -0x1c(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x16(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN6CGuild13LoadGuildAgitEP14CServerHandlerj+0x42>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::LoadGuildAgit(CServerHandler*, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild13LoadGuildAgitEP14CServerHandlerj
          (CGuild *this,CServerHandler *param_1,uint param_2)

{
  Packet_DB_Load_Guild_Agit local_1a [10];
  uint local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_DB_Load_Guild_Agit::_ZN25Packet_DB_Load_Guild_AgitC2Ev(local_1a);
    local_10 = param_2;
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_1,(PacketHeader *)local_1a);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1942 行）：

```cpp
void CGuild::LoadGuildAgit(CServerHandler* handler, unsigned int charNo)
{
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    Packet_DB_Load_Guild_Agit pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = charNo;
    handler->SendToDB(&pkt);
}
```

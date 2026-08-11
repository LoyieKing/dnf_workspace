# _ZN14CServerHandler16QueryGuildMemberEhj

`CServerHandler::QueryGuildMember(unsigned char, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d83a` | `0x43` | `0x8081dbe` | `0x4d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 lea    -0x17(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DB_Query_Guild_MemberC1Ev>
+lea    -0x17(%ebp),%eax
+lea    0xa(%eax),%edx
 movzbl -0x1c(%ebp),%eax
-mov    %al,-0xd(%ebp)
+mov    %al,(%edx)
+lea    -0x17(%ebp),%eax
+lea    0xb(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,(%edx)
 lea    -0x17(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 movl   $0xf,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::QueryGuildMember(unsigned char, unsigned int) */

void __thiscall
CServerHandler::_ZN14CServerHandler16QueryGuildMemberEhj
          (CServerHandler *this,uchar param_1,uint param_2)

{
  Packet_DB_Query_Guild_Member local_1b [10];
  uchar local_11;
  uint local_10;
  
  Packet_DB_Query_Guild_Member::Packet_DB_Query_Guild_Member(local_1b);
  local_10 = param_2;
  local_11 = param_1;
  CServerInterface::SendToServer(*(CServerInterface **)(this + 0x18),(char *)local_1b,0xf);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 343 行）：

```cpp
void CServerHandler::QueryGuildMember(unsigned char group, unsigned int characNo)
{
    Packet_DB_Query_Guild_Member pkt;
    *(unsigned char*)((char*)&pkt + 0xa) = group;
    *(unsigned int*)((char*)&pkt + 0xb) = characNo;
    m_dbServer->SendToServer((char*)&pkt, 0xf);
}
```

# _ZN14CServerHandler24SendDBMWRequestIPCounterEhh

`CServerHandler::SendDBMWRequestIPCounter(unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a570` | `0x3f` | `0x808062c` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Request_IPCounterListC1Ev>
-movzbl -0x1c(%ebp),%eax
-mov    %al,-0xa(%ebp)
-movzbl -0x20(%ebp),%eax
-mov    %al,-0x9(%ebp)
+lea    -0x14(%ebp),%eax
+movzbl -0x1c(%ebp),%edx
+mov    %dl,0xa(%eax)
+lea    -0x14(%ebp),%eax
+movzbl -0x20(%ebp),%edx
+mov    %dl,0xb(%eax)
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendDBMWRequestIPCounter(unsigned char, unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler24SendDBMWRequestIPCounterEhh
          (CServerHandler *this,uchar param_1,uchar param_2)

{
  Packet_Request_IPCounterList local_18 [10];
  uchar local_e;
  uchar local_d;
  
  Packet_Request_IPCounterList::Packet_Request_IPCounterList(local_18);
  local_e = param_1;
  local_d = param_2;
  SendToDB(this,(PacketHeader *)local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 262 行）：

```cpp
void CServerHandler::SendDBMWRequestIPCounter(unsigned char flag, unsigned char b)
{
    Packet_Request_IPCounterList pkt;
    ((RA_S8<10>*)&pkt)->v = (char)flag;
    ((RA_S8<11>*)&pkt)->v = (char)b;
    SendToDB(&pkt);
}
```

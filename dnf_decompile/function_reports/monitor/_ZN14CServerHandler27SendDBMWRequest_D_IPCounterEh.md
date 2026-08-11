# _ZN14CServerHandler27SendDBMWRequest_D_IPCounterEh

`CServerHandler::SendDBMWRequest_D_IPCounter(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a5e2` | `0x32` | `0x80811fc` | `0x39` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
-lea    -0x14(%ebp),%eax
+movzbl -0x1c(%ebp),%eax
+mov    %al,-0x9(%ebp)
+lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Request_IPCounterListC1Ev>
-movzbl -0x1c(%ebp),%eax
-mov    %al,-0xa(%ebp)
-lea    -0x14(%ebp),%eax
+movzbl -0x9(%ebp),%eax
+mov    %al,-0xb(%ebp)
+lea    -0x15(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendDBMWRequest_D_IPCounter(unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler27SendDBMWRequest_D_IPCounterEh
          (CServerHandler *this,uchar param_1)

{
  Packet_Request_IPCounterList local_18 [10];
  uchar local_e;
  
  Packet_Request_IPCounterList::Packet_Request_IPCounterList(local_18);
  local_e = param_1;
  SendToDB(this,(PacketHeader *)local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 517 行）：

```cpp
void CServerHandler::SendDBMWRequest_D_IPCounter(unsigned char flag)
{
    unsigned char x = flag;
    Packet_Request_IPCounterList pkt;
    pkt.m_fieldA = x;
    SendToDB(&pkt);
}
```

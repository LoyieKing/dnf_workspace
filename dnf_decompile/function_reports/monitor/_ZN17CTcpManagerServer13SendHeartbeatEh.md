# _ZN17CTcpManagerServer13SendHeartbeatEh

`CTcpManagerServer::SendHeartbeat(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8078d44` | `0x54` | `0x805d168` | `0x50` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 movl   $0xb,0x8(%esp)
 movl   $0x106d,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer16makePacketHeaderEtt>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CTcpManagerServer13SendHeartbeatEh+0x52>
+je     <T> <_ZN17CTcpManagerServer13SendHeartbeatEh+0x4e>
 mov    -0xc(%ebp),%eax
-movzbl -0x1c(%ebp),%edx
-mov    %dl,0xa(%eax)
+lea    0xa(%eax),%edx
+movzbl -0x1c(%ebp),%eax
+mov    %al,(%edx)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer12SendToServerEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpManagerServer::SendHeartbeat(unsigned char) */

void __thiscall
CTcpManagerServer::_ZN17CTcpManagerServer13SendHeartbeatEh(CTcpManagerServer *this,uchar param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)makePacketHeader(this,0x106d,0xb);
  if (pcVar1 != (char *)0x0) {
    pcVar1[10] = param_1;
    SendToServer(this,pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 179 行）：

```cpp
void CTcpManagerServer::SendHeartbeat(unsigned char group)
{
    char* buf = makePacketHeader(0x106d, 0xb);
    if (buf != 0)
    {
        buf[10] = (char)group;
        SendToServer(buf);
    }
}
```

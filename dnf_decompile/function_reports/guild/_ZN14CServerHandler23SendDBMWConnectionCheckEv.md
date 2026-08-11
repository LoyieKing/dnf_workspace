# _ZN14CServerHandler23SendDBMWConnectionCheckEv

`CServerHandler::SendDBMWConnectionCheck()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d936` | `0x37` | `0x8081eee` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 lea    -0x13(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DBMW_Connection_CheckC1Ev>
-movb   $0xcb,-0x9(%ebp)
-movzwl -0x11(%ebp),%eax
+lea    -0x13(%ebp),%eax
+add    $0xa,%eax
+movb   $0xcb,(%eax)
+lea    -0x13(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%ecx
 lea    -0x13(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendDBMWConnectionCheck() */

void __thiscall CServerHandler::_ZN14CServerHandler23SendDBMWConnectionCheckEv(CServerHandler *this)

{
  Packet_DBMW_Connection_Check local_17 [2];
  ushort local_15;
  undefined1 local_d;
  
  Packet_DBMW_Connection_Check::Packet_DBMW_Connection_Check(local_17);
  local_d = 0xcb;
  CServerInterface::SendToServer
            (*(CServerInterface **)(this + 0x18),(char *)local_17,(uint)local_15);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 375 行）：

```cpp
void CServerHandler::SendDBMWConnectionCheck()
{
    Packet_DBMW_Connection_Check pkt;
    *(unsigned char*)((char*)&pkt + 0xa) = 0xcb;
    m_dbServer->SendToServer((char*)&pkt, *(unsigned short*)((char*)&pkt + 2));
}
```

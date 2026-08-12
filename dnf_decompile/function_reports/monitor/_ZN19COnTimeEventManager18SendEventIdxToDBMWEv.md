# _ZN19COnTimeEventManager18SendEventIdxToDBMWEv

`COnTimeEventManager::SendEventIdxToDBMW()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4ca8` | `0x89` | `0x809a0fa` | `0x8f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN19COnTimeEventManager18SendEventIdxToDBMWEv+0x87>
+je     <T> <_ZN19COnTimeEventManager18SendEventIdxToDBMWEv+0x8d>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN19COnTimeEventManager18SendEventIdxToDBMWEv+0x87>
+je     <T> <_ZN19COnTimeEventManager18SendEventIdxToDBMWEv+0x8d>
 movl   $0x16,0x8(%esp)
 movl   $0x2347,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer16makePacketHeaderEtt>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x30(%eax),%edx
+mov    0x30(%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
-mov    %edx,0x12(%eax)
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x38(%eax),%edx
+mov    0x38(%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
-mov    %edx,0xa(%eax)
+lea    0xe(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x3c(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0xe(%eax)
+mov    0x3c(%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::SendEventIdxToDBMW() */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager18SendEventIdxToDBMWEv(COnTimeEventManager *this)

{
  CServerHandler *this_00;
  CTcpDBServer *this_01;
  char *pcVar1;
  
  if (*(int *)this != 0) {
    this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
    this_01 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(this_00);
    if (this_01 != (CTcpDBServer *)0x0) {
      pcVar1 = (char *)CTcpDBServer::_ZN12CTcpDBServer16makePacketHeaderEtt(this_01,0x2347,0x16);
      *(undefined4 *)(pcVar1 + 0x12) = *(undefined4 *)(this + 0x30);
      *(undefined4 *)(pcVar1 + 10) = *(undefined4 *)(this + 0x38);
      *(undefined4 *)(pcVar1 + 0xe) = *(undefined4 *)(this + 0x3c);
      CTcpDBServer::SendToServer(this_01,pcVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 185 行）：

```cpp
void COnTimeEventManager::SendEventIdxToDBMW()
{
    if (m_app != 0)
    {
        CTcpDBServer* db = m_app->Get_ServerHandler()->GetTcpDBServer();
        if (db != 0)
        {
            char* buf = db->makePacketHeader(0x2347, 0x16);
            char* buf2 = buf;
            *(unsigned int*)(buf2 + 0x12) = (unsigned int)m_field30;
            *(unsigned int*)(buf2 + 10) = m_field38;
            *(unsigned int*)(buf2 + 0xe) = m_field3c;
            db->SendToServer(buf2);
        }
    }
}
```

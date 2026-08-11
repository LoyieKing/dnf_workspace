# _ZN12CTcpDBServer9ConnectedEv

`CTcpDBServer::Connected()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c09a` | `0x7d` | `0x804fd78` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer9SendLoginEv>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CTcpDBServer9ConnectedEv+0x2a>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11CargoUnlockEv>
-mov    0x8(%ebp),%eax
-movzwl 0x4(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
 movl   $0x121,0x8(%esp)
 movl   $"Connected",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+movzwl 0x4(%eax),%eax
+movzwl %ax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"TCP DBMW(%s,%d) CONNECTED! GUILD CARGO ACTIVE!",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x30,%esp
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpDBServer::Connected() */

void __thiscall CTcpDBServer::_ZN12CTcpDBServer9ConnectedEv(CTcpDBServer *this)

{
  ushort uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  SendLogin(this);
  CGuildManager::CargoUnlock(*(CGuildManager **)(this + 0x10));
  uVar1 = *(ushort *)(this + 4);
  uVar2 = std::string::c_str((string *)this);
  CMyFileLog::CMyFileLog(local_14,"Connected",0x121);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/GuildCargo","TCP DBMW(%s,%d) CONNECTED! GUILD CARGO ACTIVE!",uVar2,
             (uint)uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFDBServer.cpp](source/DNFServer/GameServer/Guild/DNFDBServer.cpp)（约第 166 行）：

```cpp
void CTcpDBServer::Connected()
{
    SendLogin();
    if (m_guildMgr != 0)
    {
        m_guildMgr->CargoUnlock();
    }
    DNF_LOG_SCOPE_LINE(0x121, "./log/GuildCargo", "TCP DBMW(%s,%d) CONNECTED! GUILD CARGO ACTIVE!",
        m_ip.c_str(), (unsigned int)m_port);
}
```

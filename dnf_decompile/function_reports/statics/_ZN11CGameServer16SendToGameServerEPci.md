# _ZN11CGameServer16SendToGameServerEPci

`CGameServer::SendToGameServer(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8065318` | `0x5b` | `0x8051e2c` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN11CGameServer16SendToGameServerEPci+0x58>
+je     <T> <_ZN11CGameServer16SendToGameServerEPci+0x56>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN11CGameServer16SendToGameServerEPci+0x59>
+je     <T> <_ZN11CGameServer16SendToGameServerEPci+0x56>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    0x8(%ebp),%edx
 movzwl 0x8(%edx),%edx
 movzwl %dx,%ecx
 mov    0x8(%ebp),%edx
 mov    0x10(%edx),%edx
 mov    %eax,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc>
-jmp    <T> <_ZN11CGameServer16SendToGameServerEPci+0x59>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGameServer::SendToGameServer(char*, int) */

void __thiscall
CGameServer::_ZN11CGameServer16SendToGameServerEPci(CGameServer *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((*this != (CGameServer)0xff) && (*(int *)(this + 0x10) != 0)) {
    pcVar1 = (char *)std::string::c_str((string *)(this + 4));
    CUdpHandler::SendToServer
              (*(CUdpHandler **)(this + 0x10),param_1,param_2,*(ushort *)(this + 8),pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFGameServer.cpp](source/DNFServer/GameServer/COServer/DNFGameServer.cpp)（约第 58 行）：

```cpp
void CGameServer::SendToGameServer(char* buf, int len)
{
    if (m_group == 0xff)
    {
        return;
    }
    if (m_udp != 0)
    {
        m_udp->SendToServer(buf, len, m_port, m_name.c_str());
    }
}
```

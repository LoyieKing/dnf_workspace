# _ZN14CServerHandler13GetGameServerEi

`CServerHandler::GetGameServer(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808fa3e` | `0x85` | `0x808c21e` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0xfe,0xc(%ebp)
 jg     <T> <_ZN14CServerHandler13GetGameServerEi+0x2b>
 mov    0xc(%ebp),%eax
 shl    $0x4,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer17IsValidGameServerEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler13GetGameServerEi+0x2b>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CServerHandler13GetGameServerEi+0x30>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler13GetGameServerEi+0x41>
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-jmp    <T> <_ZN14CServerHandler13GetGameServerEi+0x83>
+je     <T> <_ZN14CServerHandler13GetGameServerEi+0x3f>
+mov    0xc(%ebp),%eax
+shl    $0x4,%eax
+add    0x8(%ebp),%eax
+jmp    <T> <_ZN14CServerHandler13GetGameServerEi+0x81>
 movl   $0xec,0x8(%esp)
 movl   $"GetGameServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Game Server Index Over Index : %d!\n",0x8(%esp)
 movl   $"./log/GameServer.log",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetGameServer(int) */

CServerHandler * __thiscall
CServerHandler::_ZN14CServerHandler13GetGameServerEi(CServerHandler *this,int param_1)

{
  bool bVar1;
  char cVar2;
  CServerHandler *pCVar3;
  CMyFileLog local_14 [16];
  
  if (param_1 < 0xff) {
    cVar2 = CGameServer::_ZN11CGameServer17IsValidGameServerEv
                      ((CGameServer *)(this + param_1 * 0x10));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0808fa6e;
    }
  }
  bVar1 = false;
LAB_0808fa6e:
  if (bVar1) {
    pCVar3 = this + param_1 * 0x10;
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"GetGameServer",0xec);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer.log","Game Server Index Over Index : %d!\n",param_1);
    pCVar3 = (CServerHandler *)0x0;
  }
  return pCVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 127 行）：

```cpp
CGameServer* CServerHandler::GetGameServer(int idx)
{
    if (idx < 0x649b && m_servers[idx].IsValidServer())
    {
        return &m_servers[idx];
    }
    DNF_LOG_SCOPE_LINE(0xdc,"./log/GameServer", "CServerHandler::GetGameServer\tGame Server Index Over Index : %d!\n",
        idx);
    return 0;
}
```

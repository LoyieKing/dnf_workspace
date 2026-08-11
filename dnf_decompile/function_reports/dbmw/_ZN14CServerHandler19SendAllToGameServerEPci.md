# _ZN14CServerHandler19SendAllToGameServerEPci

`CServerHandler::SendAllToGameServer(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808fac4` | `0x43` | `0x80df962` | `0x43` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0xff,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler19SendAllToGameServerEPci+0x32>
+jmp    <T> <_ZN14CServerHandler19SendAllToGameServerEPci+0x36>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer12SendToServerEPci>
+subl   $0x1,-0xc(%ebp)
 addl   $0x10,-0x10(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 setne  %al
-subl   $0x1,-0xc(%ebp)
 test   %al,%al
 jne    <T> <_ZN14CServerHandler19SendAllToGameServerEPci+0x15>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendAllToGameServer(char*, int) */

void __thiscall
CServerHandler::_ZN14CServerHandler19SendAllToGameServerEPci
          (CServerHandler *this,char *param_1,int param_2)

{
  bool bVar1;
  CServerHandler *local_14;
  int local_10;
  
  local_14 = this;
  local_10 = 0xff;
  while (bVar1 = local_10 != 0, local_10 = local_10 + -1, bVar1) {
    CGameServer::SendToServer((CGameServer *)local_14,param_1,param_2);
    local_14 = local_14 + 0x10;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 104 行）：

```cpp
void CServerHandler::SendAllToGameServer(char* buf, int len)
{
    CGameServer* p = m_gameServers;
    for (int i = 0xff; i != 0; i--, p++)
        p->SendToServer(buf, len);
}
```

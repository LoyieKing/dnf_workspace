# _ZN14CServerHandler22SendAllToMonitorServerEPci

`CServerHandler::SendAllToMonitorServer(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806842e` | `0x71` | `0x805e83a` | `0x71` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x65,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x60>
+jmp    <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x64>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x3a>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer11IsConnectedEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x3a>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x3f>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x5c>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 addl   $0x14,-0x10(%ebp)
+subl   $0x1,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 setne  %al
-subl   $0x1,-0xc(%ebp)
 test   %al,%al
 jne    <T> <_ZN14CServerHandler22SendAllToMonitorServerEPci+0x15>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendAllToMonitorServer(char*, int) */

void __thiscall
CServerHandler::_ZN14CServerHandler22SendAllToMonitorServerEPci
          (CServerHandler *this,char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  CServerHandler *local_14;
  int local_10;
  
  local_14 = this;
  local_10 = 0x65;
  do {
    bVar2 = local_10 == 0;
    local_10 = local_10 + -1;
    if (bVar2) {
      return;
    }
    cVar1 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)local_14);
    if (cVar1 == '\0') {
LAB_08068468:
      bVar2 = false;
    }
    else {
      cVar1 = CMonitorServer::IsConnected((CMonitorServer *)local_14);
      if (cVar1 == '\0') goto LAB_08068468;
      bVar2 = true;
    }
    if (bVar2) {
      CMonitorServer::SendToServer((CMonitorServer *)local_14,param_1,param_2);
    }
    local_14 = local_14 + 0x14;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 209 行）：

```cpp
void CServerHandler::SendAllToMonitorServer(char* buf, int len)
{
    m_monitorServer.SendToServer(buf, len);
}
```

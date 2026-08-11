# _ZN14CServerHandler13SendToManagerEP12PacketHeader

`CServerHandler::SendToManager(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a27a` | `0x3c` | `0x80805f0` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler13SendToManagerEP12PacketHeader+0x35>
+jne    <T> <_ZN14CServerHandler13SendToManagerEP12PacketHeader+0x17>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CServerHandler13SendToManagerEP12PacketHeader+0x3a>
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ecx
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN14CServerHandler13SendToManagerEP12PacketHeader+0x3a>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendToManager(PacketHeader*) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler13SendToManagerEP12PacketHeader
          (CServerHandler *this,PacketHeader *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x1c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CServerInterface::SendToServer
                      (*(CServerInterface **)(this + 0x1c),(char *)param_1,
                       (uint)*(ushort *)(param_1 + 2));
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 252 行）：

```cpp
int CServerHandler::SendToManager(PacketHeader* pkt)
{
    if (m_managerServer == 0)
    {
        return 0;
    }
    return m_managerServer->SendToServer((char*)pkt,
                                         (unsigned int)((RA_U16<2>*)pkt)->v);
}
```

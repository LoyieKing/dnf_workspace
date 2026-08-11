# _ZN16CServerInterface12SendToServerEPci

`CServerInterface::SendToServer(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806f6fe` | `0x55` | `0x8083d36` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16CServerInterface12SendToServerEPci+0x4e>
+je     <T> <_ZN16CServerInterface12SendToServerEPci+0x4c>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-add    $0x3,%eax
-mov    %eax,%ecx
+lea    0x3(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movzwl 0x14(%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc>
-jmp    <T> <_ZN16CServerInterface12SendToServerEPci+0x53>
+jmp    <T> <_ZN16CServerInterface12SendToServerEPci+0x51>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::SendToServer(char*, int) */

undefined4 __thiscall
CServerInterface::_ZN16CServerInterface12SendToServerEPci
          (CServerInterface *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUdpHandler::SendToServer
                      (*(CUdpHandler **)(this + 0xc),param_1,param_2,
                       *(ushort *)(*(int *)(this + 4) + 0x14),(char *)(*(int *)(this + 4) + 3));
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 111 行）：

```cpp
int CServerInterface::SendToServer(char* buf, int len)
{
    if (m_sock != 0)
    {
        return ((CUdpHandler*)m_sock)->SendToServer(buf, len, m_info->m_port, m_info->m_name);
    }
    return 0;
}
```

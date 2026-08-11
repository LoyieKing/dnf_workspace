# _ZN14CServerHandler19SendToMonitorServerEPcih

`CServerHandler::SendToMonitorServer(char*, int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80684a0` | `0x3b` | `0x805dc86` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x14(%ebp),%eax
-mov    %al,-0x1c(%ebp)
-movzbl -0x1c(%ebp),%edx
+mov    %al,-0xc(%ebp)
+mov    0x8(%ebp),%ecx
+movzbl -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+lea    (%ecx,%eax,1),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendToMonitorServer(char*, int, unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler19SendToMonitorServerEPcih
          (CServerHandler *this,char *param_1,int param_2,uchar param_3)

{
  CMonitorServer::SendToServer((CMonitorServer *)(this + (uint)param_3 * 0x14),param_1,param_2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 25 行）：

```cpp
void CServerHandler::SendToMonitorServer(char* buf, int len, unsigned char idx)
{
    ((CMonitorServer*)this + idx)->SendToServer(buf, len);
}
```

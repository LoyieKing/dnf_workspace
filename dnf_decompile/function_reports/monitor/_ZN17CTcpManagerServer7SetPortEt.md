# _ZN17CTcpManagerServer7SetPortEt

`CTcpManagerServer::SetPort(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066522` | `0x1a` | `0x805d0ae` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
-mov    0x8(%ebp),%eax
-movzwl -0x4(%ebp),%edx
-mov    %dx,0x4(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpManagerServer::SetPort(unsigned short) */

void __thiscall
CTcpManagerServer::_ZN17CTcpManagerServer7SetPortEt(CTcpManagerServer *this,ushort param_1)

{
  *(ushort *)(this + 4) = param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 158 行）：

```cpp
void CTcpManagerServer::SetPort(unsigned short port) {}
```

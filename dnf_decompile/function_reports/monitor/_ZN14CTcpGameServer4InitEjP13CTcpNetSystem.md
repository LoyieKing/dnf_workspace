# _ZN14CTcpGameServer4InitEjP13CTcpNetSystem

`CTcpGameServer::Init(unsigned int, CTcpNetSystem*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x807897e` | `0x16` | `0x805bc3e` | `0x16` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpGameServer::Init(unsigned int, CTcpNetSystem*) */

void __thiscall
CTcpGameServer::_ZN14CTcpGameServer4InitEjP13CTcpNetSystem
          (CTcpGameServer *this,uint param_1,CTcpNetSystem *param_2)

{
  *(uint *)this = param_1;
  *(CTcpNetSystem **)(this + 4) = param_2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGameServer.cpp](source/DNFServer/GameServer/Guild/DNFGameServer.cpp)（约第 118 行）：

```cpp
void CTcpGameServer::Init(unsigned int group, CTcpNetSystem* net)
{
    m_group = group;
    m_net = net;
}
```

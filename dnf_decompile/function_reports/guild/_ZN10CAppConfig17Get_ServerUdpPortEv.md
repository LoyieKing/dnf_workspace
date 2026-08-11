# _ZN10CAppConfig17Get_ServerUdpPortEv

`CAppConfig::Get_ServerUdpPort()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063f08` | `0xc` | `0x804c450` | `0xe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzwl 0x6(%eax),%eax
+add    $0x6,%eax
+movzwl (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::Get_ServerUdpPort() */

undefined2 __thiscall CAppConfig::_ZN10CAppConfig17Get_ServerUdpPortEv(CAppConfig *this)

{
  return *(undefined2 *)(this + 6);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppConfig.cpp](source/DNFServer/GameServer/COServer/DNFAppConfig.cpp)（约第 25 行）：

```cpp
unsigned int CAppConfig::Get_ServerUdpPort(unsigned char idx)
{
    if (idx < 0x65)
    {
        return m_udpPorts[idx];
    }
    return 0;
}
```

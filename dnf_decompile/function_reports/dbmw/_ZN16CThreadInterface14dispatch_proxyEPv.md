# _ZN16CThreadInterface14dispatch_proxyEPv

`CThreadInterface::dispatch_proxy(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80636b0` | `0x2c` | `0x80917f8` | `0x26` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x10,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CThreadInterface::dispatch_proxy(void*) */

undefined4 CThreadInterface::_ZN16CThreadInterface14dispatch_proxyEPv(void *param_1)

{
  (**(code **)(*(int *)param_1 + 0x10))(param_1,param_1);
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFThreadInterface.cpp](source/DNFServer/GameServer/COServer/DNFThreadInterface.cpp)（约第 38 行）：

```cpp
void* CThreadInterface::dispatch_proxy(void* temp)
{
    CThreadInterface* th = (CThreadInterface*)temp;
    th->dispatch(temp);
    return 0;
}
```

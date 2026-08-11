# _ZN11ServiceInfo15setRunAsServiceEb

`ServiceInfo::setRunAsService(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804d44e` | `0x1b` | `0x804f702` | `0x1b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x708(%eax)
+mov    0x8(%ebp),%edx
+movzbl -0x4(%ebp),%eax
+mov    %al,0x708(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ServiceInfo::setRunAsService(bool) */

void __thiscall ServiceInfo::_ZN11ServiceInfo15setRunAsServiceEb(ServiceInfo *this,bool param_1)

{
  this[0x708] = (ServiceInfo)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Service.h](source/DNFServer/GameServer/Relay/Service.h)（约第 11 行）：

```cpp
    void setRunAsService(bool b)
    {
        m_bRunAsService = b;
    }
```

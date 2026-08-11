# _ZN19STPowerWarGuildInfo7CompareEPKS_S1_

`STPowerWarGuildInfo::Compare(STPowerWarGuildInfo const*, STPowerWarGuildInfo const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa89a` | `0x21` | `0x80a0672` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0xc(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 cmp    %eax,%edx
-jbe    <T> <_ZN19STPowerWarGuildInfo7CompareEPKS_S1_+0x1a>
-mov    $0x1,%eax
-jmp    <T> <_ZN19STPowerWarGuildInfo7CompareEPKS_S1_+0x1f>
-mov    $0x0,%eax
+setb   %al
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STPowerWarGuildInfo::Compare(STPowerWarGuildInfo const*, STPowerWarGuildInfo const*) */

bool STPowerWarGuildInfo::_ZN19STPowerWarGuildInfo7CompareEPKS_S1_
               (STPowerWarGuildInfo *param_1,STPowerWarGuildInfo *param_2)

{
  return *(uint *)(param_2 + 4) < *(uint *)(param_1 + 4);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 353 行）：

```cpp
bool STPowerWarGuildInfo::Compare(const STPowerWarGuildInfo* a, const STPowerWarGuildInfo* b)
{
    return *(unsigned int*)(b->m_data + 4) < *(unsigned int*)(a->m_data + 4);
}
```

# _ZN19UpgradeSeparateInfo5resetEv

`UpgradeSeparateInfo::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1298` | `0x26` | `0x8052bf4` | `0x35` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+movzbl (%eax),%eax
+mov    %eax,%edx
 and    $0xffffffe0,%edx
+mov    0x8(%ebp),%eax
 mov    %dl,(%eax)
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+movzbl (%eax),%eax
+mov    %eax,%edx
 and    $0xffffffdf,%edx
+mov    0x8(%ebp),%eax
 mov    %dl,(%eax)
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+movzbl (%eax),%eax
+mov    %eax,%edx
 and    $0x3f,%edx
+mov    0x8(%ebp),%eax
 mov    %dl,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* UpgradeSeparateInfo::reset() */

void __thiscall UpgradeSeparateInfo::_ZN19UpgradeSeparateInfo5resetEv(UpgradeSeparateInfo *this)

{
  *this = (UpgradeSeparateInfo)((byte)*this & 0xe0);
  *this = (UpgradeSeparateInfo)((byte)*this & 0xdf);
  *this = (UpgradeSeparateInfo)((byte)*this & 0x3f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1682 行）：

```cpp
void UpgradeSeparateInfo::reset()
{
    m_data[0] &= ~0x1f;
    m_data[0] &= ~0x20;
    m_data[0] &= 0x3f;
}
```

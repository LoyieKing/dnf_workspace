# _ZN19UpgradeSeparateInfo5resetEv

`UpgradeSeparateInfo::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808968e` | `0x26` | `0x80527e6` | `0x2f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+mov    0x8(%ebp),%edx
+movzbl (%edx),%edx
 and    $0xffffffe0,%edx
 mov    %dl,(%eax)
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+mov    0x8(%ebp),%edx
+movzbl (%edx),%edx
 and    $0xffffffdf,%edx
 mov    %dl,(%eax)
 mov    0x8(%ebp),%eax
-movzbl (%eax),%edx
+mov    0x8(%ebp),%edx
+movzbl (%edx),%edx
 and    $0x3f,%edx
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 148 行）：

```cpp
void UpgradeSeparateInfo::reset()
{
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xe0);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xdf);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0x3f);
}
```

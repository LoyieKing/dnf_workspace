# _ZN13CMemberExpTbl15GetMaxMemberExpEv

`CMemberExpTbl::GetMaxMemberExp()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80933a0` | `0x19` | `0x8061416` | `0x1e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
-movzbl %al,%eax
-lea    -0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x8(%eax,%edx,4),%eax
+mov    0x8(%ebp),%edx
+add    $0x4,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::GetMaxMemberExp() */

undefined4 __thiscall CMemberExpTbl::_ZN13CMemberExpTbl15GetMaxMemberExpEv(CMemberExpTbl *this)

{
  return *(undefined4 *)(this + ((byte)this[4] - 1) * 4 + 8);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 140 行）：

```cpp
unsigned int CMemberExpTbl::GetMaxMemberExp()
{
    return *(unsigned int*)((char*)this +
                            ((unsigned int)(unsigned char)*(char*)((char*)this + 4) - 1) * 4 +
                            8);
}
```

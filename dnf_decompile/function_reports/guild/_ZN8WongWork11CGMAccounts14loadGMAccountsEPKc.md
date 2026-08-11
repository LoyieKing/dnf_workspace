# _ZN8WongWork11CGMAccounts14loadGMAccountsEPKc

`WongWork::CGMAccounts::loadGMAccounts(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a2bc8` | `0xa` | `0x808f084` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::loadGMAccounts(char const*) */

undefined4 WongWork::CGMAccounts::_ZN8WongWork11CGMAccounts14loadGMAccountsEPKc(char *param_1)

{
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GMAccounts.cpp](source/DNFServer/GameServer/DBMW/GMAccounts.cpp)（约第 34 行）：

```cpp
int WongWork::CGMAccounts::loadGMAccounts(char const* path) { return 1; }
```

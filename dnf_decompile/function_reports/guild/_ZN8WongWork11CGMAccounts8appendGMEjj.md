# _ZN8WongWork11CGMAccounts8appendGMEjj

`WongWork::CGMAccounts::appendGM(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a2c7a` | `0xd` | `0x808f114` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x10,%esp
-mov    $0x0,%eax
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::appendGM(unsigned int, unsigned int) */

undefined4 WongWork::CGMAccounts::_ZN8WongWork11CGMAccounts8appendGMEjj(uint param_1,uint param_2)

{
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GMAccounts.cpp](source/DNFServer/GameServer/DBMW/GMAccounts.cpp)（约第 64 行）：

```cpp
int WongWork::CGMAccounts::appendGM(unsigned int id, unsigned int flag)
{
    return 0;
}
```

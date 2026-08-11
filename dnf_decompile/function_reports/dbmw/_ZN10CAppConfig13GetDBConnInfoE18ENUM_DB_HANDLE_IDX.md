# _ZN10CAppConfig13GetDBConnInfoE18ENUM_DB_HANDLE_IDX

`CAppConfig::GetDBConnInfo(ENUM_DB_HANDLE_IDX)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806deea` | `0x14` | `0x806a284` | `0x16` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0xc(%ebp),%eax
-imul   $0x168,%eax,%eax
-add    $0x60,%eax
-add    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x168,%edx,%edx
+add    $0x60,%edx
+add    %edx,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::GetDBConnInfo(ENUM_DB_HANDLE_IDX) */

CAppConfig * __thiscall
CAppConfig::_ZN10CAppConfig13GetDBConnInfoE18ENUM_DB_HANDLE_IDX(CAppConfig *this,int param_2)

{
  return this + param_2 * 0x168 + 0x60;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp](source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp)（约第 58 行）：

```cpp
STDBConnInfo* CAppConfig::GetDBConnInfo(ENUM_DB_HANDLE_IDX idx)
{
    return (STDBConnInfo*)((char*)this + ((int)idx * 0x168 + 0x60));
}
```

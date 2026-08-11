# _ZN10CBlackUser14ChangeCharNameEPc

`CBlackUser::ChangeCharName(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806c8e2` | `0x3d` | `0x804b6f6` | `0x3d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0x8(%ebp),%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
+movl   $0x1d,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
-movl   $0x1d,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBlackUser::ChangeCharName(char*) */

void __thiscall CBlackUser::_ZN10CBlackUser14ChangeCharNameEPc(CBlackUser *this,char *param_1)

{
  memset(this,0,0x1e);
  memcpy(this,param_1,0x1d);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/BlackUser.cpp](source/DNFServer/GameServer/Monitor/BlackUser.cpp)（约第 39 行）：

```cpp
void CBlackUser::ChangeCharName(char* name)
{
    memset(this, 0, 0x1e);
    memcpy(this, name, 0x1d);
}
```

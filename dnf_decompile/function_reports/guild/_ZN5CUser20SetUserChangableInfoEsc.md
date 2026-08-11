# _ZN5CUser20SetUserChangableInfoEsc

`CUser::SetUserChangableInfo(short, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066f2c` | `0x2a` | `0x80895ae` | `0x2e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x8,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dx,-0x4(%ebp)
 mov    %al,-0x8(%ebp)
 mov    0x8(%ebp),%eax
-movzwl -0x4(%ebp),%edx
-mov    %dx,0x38(%eax)
+lea    0x38(%eax),%edx
+movzwl -0x4(%ebp),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
-movzbl -0x8(%ebp),%edx
-mov    %dl,0x37(%eax)
+lea    0x37(%eax),%edx
+movzbl -0x8(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetUserChangableInfo(short, char) */

void __thiscall CUser::_ZN5CUser20SetUserChangableInfoEsc(CUser *this,short param_1,char param_2)

{
  *(short *)(this + 0x38) = param_1;
  this[0x37] = (CUser)param_2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 327 行）：

```cpp
void CUser::SetUserChangableInfo(short type, char value)
{
    *(short*)((char*)this + 0x38) = type;
    *(char*)((char*)this + 0x37) = value;
}
```

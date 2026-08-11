# _ZN5CUser6SetSexEh

`CUser::SetSex(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80931de` | `0x18` | `0x80892b4` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x46(%eax)
+lea    0x46(%eax),%edx
+movzbl -0x4(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetSex(unsigned char) */

void __thiscall CUser::_ZN5CUser6SetSexEh(CUser *this,uchar param_1)

{
  this[0x46] = (CUser)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 599 行）：

```cpp
void CUser::SetSex(unsigned char sex)
{
    *(unsigned char*)((char*)this + 0x3a) = sex;
}
```

# _ZN5CUser12AttachMemberEP7CMember

`CUser::AttachMember(CMember*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d580` | `0xe` | `0x8088976` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x14(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::AttachMember(CMember*) */

void __thiscall CUser::_ZN5CUser12AttachMemberEP7CMember(CUser *this,CMember *param_1)

{
  *(CMember **)(this + 0x14) = param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 87 行）：

```cpp
void CUser::AttachMember(CMember* member) {}
```

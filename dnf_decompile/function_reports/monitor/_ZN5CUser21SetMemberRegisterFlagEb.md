# _ZN5CUser21SetMemberRegisterFlagEb

`CUser::SetMemberRegisterFlag(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806deac` | `0x2e` | `0x8089cc4` | `0x32` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser21SetMemberRegisterFlagEb+0x2c>
+je     <T> <_ZN5CUser21SetMemberRegisterFlagEb+0x30>
 movzbl -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21SetMemberRegisterFlagEb>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetMemberRegisterFlag(bool) */

void __thiscall CUser::_ZN5CUser21SetMemberRegisterFlagEb(CUser *this,bool param_1)

{
  if (*(int *)(this + 0x14) != 0) {
    CMember::SetMemberRegisterFlag(*(CMember **)(this + 0x14),param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 591 行）：

```cpp
void CUser::SetMemberRegisterFlag(bool flag)
{
    if (*(int*)((char*)this + 0x14) != 0)
    {
        ((CMember*)*(int*)((char*)this + 0x14))->SetMemberRegisterFlag(flag);
    }
}
```

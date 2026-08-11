# _ZN11CGuildCargo7IsEmptyEv

`CGuildCargo::IsEmpty()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a00fa` | `0x45` | `0x80923d6` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
+mov    0x8(%ebp),%eax
+add    $0x18d8,%eax
+mov    (%eax),%eax
+mov    %eax,-0x8(%ebp)
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x2b>
+jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x3b>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%eax
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN11CGuildCargo7IsEmptyEv+0x27>
+je     <T> <_ZN11CGuildCargo7IsEmptyEv+0x37>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x43>
+jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x4d>
 addl   $0x1,-0x4(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x18d8(%eax),%eax
-cmp    -0x4(%ebp),%eax
-setg   %al
+mov    -0x4(%ebp),%eax
+cmp    -0x8(%ebp),%eax
+setl   %al
 test   %al,%al
-jne    <T> <_ZN11CGuildCargo7IsEmptyEv+0xf>
+jne    <T> <_ZN11CGuildCargo7IsEmptyEv+0x1c>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::IsEmpty() */

undefined4 __thiscall CGuildCargo::_ZN11CGuildCargo7IsEmptyEv(CGuildCargo *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x18d8) <= local_8) {
      return 1;
    }
    if (*(int *)(this + local_8 * 0x35 + 1) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 391 行）：

```cpp
int CGuildCargo::IsEmpty()
{
    int cap = *(int*)((char*)this + 0x18d8);
    for (int i = 0; i < cap; i++)
    {
        if (*(int*)((char*)this + i * 0x35 + 1) != 0)
        {
            return 0;
        }
    }
    return 1;
}
```

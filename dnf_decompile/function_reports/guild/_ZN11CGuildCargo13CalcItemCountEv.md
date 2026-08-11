# _ZN11CGuildCargo13CalcItemCountEv

`CGuildCargo::CalcItemCount()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f486` | `0x5c` | `0x809141a` | `0x64` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x18dc(%eax)
+add    $0x18dc,%eax
+movl   $0x0,(%eax)
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN11CGuildCargo13CalcItemCountEv+0x46>
+jmp    <T> <_ZN11CGuildCargo13CalcItemCountEv+0x4d>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
+imul   $0x35,%edx,%edx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN11CGuildCargo13CalcItemCountEv+0x49>
 mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%eax
-test   %eax,%eax
-je     <T> <_ZN11CGuildCargo13CalcItemCountEv+0x42>
-mov    0x8(%ebp),%eax
-mov    0x18dc(%eax),%eax
-lea    0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x18dc(%eax)
+add    $0x18dc,%eax
+mov    0x8(%ebp),%edx
+add    $0x18dc,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x77,-0x4(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN11CGuildCargo13CalcItemCountEv+0x1c>
+jne    <T> <_ZN11CGuildCargo13CalcItemCountEv+0x1d>
 mov    0x8(%ebp),%eax
-mov    0x18dc(%eax),%eax
+add    $0x18dc,%eax
+mov    (%eax),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::CalcItemCount() */

undefined4 __thiscall CGuildCargo::_ZN11CGuildCargo13CalcItemCountEv(CGuildCargo *this)

{
  int local_8;
  
  *(undefined4 *)(this + 0x18dc) = 0;
  for (local_8 = 0; local_8 < 0x78; local_8 = local_8 + 1) {
    if (*(int *)(this + local_8 * 0x35 + 1) != 0) {
      *(int *)(this + 0x18dc) = *(int *)(this + 0x18dc) + 1;
    }
  }
  return *(undefined4 *)(this + 0x18dc);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 171 行）：

```cpp
int CGuildCargo::CalcItemCount()
{
    *(int*)((char*)this + 0x18dc) = 0;
    for (int i = 0; i < 0x78; i++)
    {
        if (*(int*)((char*)this + i * 0x35 + 1) != 0)
        {
            *(int*)((char*)this + 0x18dc) += 1;
        }
    }
    return *(int*)((char*)this + 0x18dc);
}
```

# _ZN7CMember21IncConnUpperMemberExpEj

`CMember::IncConnUpperMemberExp(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098ed0` | `0x3b` | `0x80604b2` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x29(%eax),%eax
-lea    0x1(%eax),%edx
+add    $0x29,%eax
+mov    0x8(%ebp),%edx
+add    $0x29,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0x29(%eax)
+add    $0x29,%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jbe    <T> <_ZN7CMember21IncConnUpperMemberExpEj+0x3d>
 mov    0x8(%ebp),%eax
-mov    0x29(%eax),%eax
-cmp    0xc(%ebp),%eax
-jbe    <T> <_ZN7CMember21IncConnUpperMemberExpEj+0x33>
+add    $0x29,%eax
+mov    0x8(%ebp),%edx
+add    $0x29,%edx
+mov    (%edx),%edx
+sub    $0x1,%edx
+mov    %edx,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN7CMember21IncConnUpperMemberExpEj+0x45>
 mov    0x8(%ebp),%eax
-mov    0x29(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x29(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN7CMember21IncConnUpperMemberExpEj+0x39>
-mov    0x8(%ebp),%eax
-mov    0x29(%eax),%eax
+add    $0x29,%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IncConnUpperMemberExp(unsigned int) */

undefined4 __thiscall CMember::_ZN7CMember21IncConnUpperMemberExpEj(CMember *this,uint param_1)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x29) = *(int *)(this + 0x29) + 1;
  if (param_1 < *(uint *)(this + 0x29)) {
    *(int *)(this + 0x29) = *(int *)(this + 0x29) + -1;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x29);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 336 行）：

```cpp
int CMember::IncConnUpperMemberExp(unsigned int maxExp)
{
    *(int*)((char*)this + 0x29) = *(int*)((char*)this + 0x29) + 1;
    if (maxExp < *(unsigned int*)((char*)this + 0x29))
    {
        *(int*)((char*)this + 0x29) = *(int*)((char*)this + 0x29) - 1;
        return 0;
    }
    return *(int*)((char*)this + 0x29);
}
```

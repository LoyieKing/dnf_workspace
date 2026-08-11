# _ZN7CMember7IsEmptyEv

`CMember::IsEmpty()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098184` | `0x41` | `0x805feb8` | `0x3e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember12IsThereUpperEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7CMember7IsEmptyEv+0x2a>
+test   %eax,%eax
+jne    <T> <_ZN7CMember7IsEmptyEv+0x27>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN7CMember7IsEmptyEv+0x2a>
+jne    <T> <_ZN7CMember7IsEmptyEv+0x27>
 mov    $0x1,%eax
-jmp    <T> <_ZN7CMember7IsEmptyEv+0x2f>
+jmp    <T> <_ZN7CMember7IsEmptyEv+0x2c>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN7CMember7IsEmptyEv+0x3a>
+je     <T> <_ZN7CMember7IsEmptyEv+0x37>
 mov    $0x1,%eax
-jmp    <T> <_ZN7CMember7IsEmptyEv+0x3f>
+jmp    <T> <_ZN7CMember7IsEmptyEv+0x3c>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IsEmpty() */

undefined1 __thiscall CMember::_ZN7CMember7IsEmptyEv(CMember *this)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = IsThereUpper(this);
  if ((cVar2 == '\x01') || (this[0x2d] != (CMember)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 188 行）：

```cpp
char CMember::IsEmpty()
{
    if (!IsThereUpper() && m_dbInfo.m_count27 == 0)
    {
        return 1;
    }
    return 0;
}
```

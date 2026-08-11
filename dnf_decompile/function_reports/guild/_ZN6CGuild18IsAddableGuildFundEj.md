# _ZN6CGuild18IsAddableGuildFundEj

`CGuild::IsAddableGuildFund(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809247e` | `0x67` | `0x8058268` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild18IsAddableGuildFundEj+0x60>
+je     <T> <_ZN6CGuild18IsAddableGuildFundEj+0x61>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzbl 0x3b(%eax),%eax
+add    $0x3b,%eax
+movzbl (%eax),%eax
 cmp    $0xf,%al
-jbe    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x43>
+ja     <T> <_ZN6CGuild18IsAddableGuildFundEj+0x48>
 mov    -0x4(%ebp),%eax
-mov    (%eax),%eax
-add    0xc(%ebp),%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+cmp    $0x1312d00,%eax
+jle    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x61>
+mov    $0x5f,%eax
+jmp    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x66>
+mov    -0x4(%ebp),%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
 cmp    $0x989680,%eax
-jbe    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x59>
+jle    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x61>
 mov    $0x5f,%eax
-jmp    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x65>
-mov    -0x4(%ebp),%eax
-mov    (%eax),%eax
-add    0xc(%ebp),%eax
-cmp    $0x1312d00,%eax
-jbe    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x59>
-mov    $0x5f,%eax
-jmp    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x65>
+jmp    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x66>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild18IsAddableGuildFundEj+0x65>
-mov    $0x5f,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IsAddableGuildFund(unsigned int) */

undefined4 __thiscall CGuild::_ZN6CGuild18IsAddableGuildFundEj(CGuild *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    uVar1 = 0x5f;
  }
  else {
    if ((byte)this[0x3b] < 0x10) {
      if (20000000 < *(int *)(this + 0xc0) + param_1) {
        return 0x5f;
      }
    }
    else if (10000000 < *(int *)(this + 0xc0) + param_1) {
      return 0x5f;
    }
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2191 行）：

```cpp
unsigned int CGuild::IsAddableGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) != 0)
    {
        int* p = (int*)((char*)this + 0xc0);
        if ((unsigned char)*(char*)((char*)this + 0x3b) < 0x10)
        {
            if (20000000 < *p + (int)fund)
            {
                return 0x5f;
            }
        }
        else if (10000000 < *p + (int)fund)
        {
            return 0x5f;
        }
    }
    return 0;
}
```

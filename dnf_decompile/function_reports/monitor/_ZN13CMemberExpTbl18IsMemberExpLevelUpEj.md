# _ZN13CMemberExpTbl18IsMemberExpLevelUpEj

`CMemberExpTbl::IsMemberExpLevelUp(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80621a2` | `0x90` | `0x80617b0` | `0x84` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,-0x8(%ebp)
-mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
 movzbl %al,%eax
+mov    %eax,-0x8(%ebp)
+cmpl   $0x1,0xc(%ebp)
+jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x20>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x82>
+mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jbe    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x7d>
+mov    0x8(%ebp),%eax
+add    $0xc,%eax
 mov    %eax,-0x4(%ebp)
-cmpl   $0x1,0xc(%ebp)
-jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x29>
-mov    $0x0,%eax
-jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x8e>
-mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
-movzbl %al,%eax
-lea    -0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x8(%eax,%edx,4),%eax
-cmp    0xc(%ebp),%eax
-ja     <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x49>
-mov    $0x1,%eax
-jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x8e>
-subl   $0x1,-0x4(%ebp)
-addl   $0x4,-0x8(%ebp)
-jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x77>
+jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x64>
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
-mov    -0x8(%ebp),%eax
+mov    -0x4(%ebp),%eax
 mov    (%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x69>
+jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x56>
 mov    $0x1,%eax
-jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x8e>
-mov    -0x8(%ebp),%eax
+jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x82>
+mov    -0x4(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-ja     <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x88>
-addl   $0x4,-0x8(%ebp)
-cmpl   $0x0,-0x4(%ebp)
+ja     <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x75>
+addl   $0x4,-0x4(%ebp)
+subl   $0x1,-0x8(%ebp)
+cmpl   $0x0,-0x8(%ebp)
 setne  %al
-subl   $0x1,-0x4(%ebp)
 test   %al,%al
-jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x53>
-jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x89>
+jne    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x40>
+jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x76>
 nop
 mov    $0x0,%eax
+jmp    <T> <_ZN13CMemberExpTbl18IsMemberExpLevelUpEj+0x82>
+mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::IsMemberExpLevelUp(unsigned int) */

undefined4 __thiscall
CMemberExpTbl::_ZN13CMemberExpTbl18IsMemberExpLevelUpEj(CMemberExpTbl *this,uint param_1)

{
  undefined4 uVar1;
  CMemberExpTbl *local_c;
  uint local_8;
  
  local_8 = (uint)(byte)this[4];
  if (param_1 == 1) {
    uVar1 = 0;
  }
  else if (param_1 < *(uint *)(this + ((byte)this[4] - 1) * 4 + 8)) {
    local_c = this + 0xc;
    while (local_8 = local_8 - 1, local_8 != 0) {
      if (param_1 - 1 == *(uint *)local_c) {
        return 1;
      }
      if (param_1 < *(uint *)local_c) break;
      local_c = local_c + 4;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 141 行）：

```cpp
unsigned char CMemberExpTbl::IsMemberExpLevelUp(unsigned int exp)
{
    unsigned int count = (unsigned int)(unsigned char)((RA_S8<4>*)this)->v;
    if (exp == 1)
    {
        return 0;
    }
    if (exp < *(unsigned int*)((char*)this + (count - 1) * 4 + 8))
    {
        char* p = (char*)this + 0xc;
        while (count = count - 1, count != 0)
        {
            if (exp - 1 == *(unsigned int*)p)
            {
                return 1;
            }
            if (exp < *(unsigned int*)p)
            {
                break;
            }
            p = p + 4;
        }
        return 0;
    }
    return 1;
}
```

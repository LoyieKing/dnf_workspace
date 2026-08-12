# _ZN13CMemberExpTbl17GetMemberExpLevelEj

`CMemberExpTbl::GetMemberExpLevel(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8062120` | `0x82` | `0x80616c4` | `0x99` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,46 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
 movzbl %al,%eax
 sub    $0x1,%eax
 mov    %eax,-0x8(%ebp)
 movl   $0x1,-0x4(%ebp)
 mov    -0x8(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax,%edx,4),%eax
 cmp    0xc(%ebp),%eax
-ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x41>
+ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x47>
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
+movzbl %al,%eax
 sub    $0x1,%eax
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+mov    %eax,-0x4(%ebp)
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x94>
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x6b>
-mov    -0x4(%ebp),%eax
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-cmp    0xc(%ebp),%eax
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x63>
-mov    -0xc(%ebp),%eax
-add    $0x4,%eax
-mov    (%eax),%eax
-cmp    0xc(%ebp),%eax
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7c>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x5e>
+movl   $0x1,-0x4(%ebp)
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x94>
 addl   $0x1,-0x4(%ebp)
 addl   $0x4,-0xc(%ebp)
 cmpl   $0x0,-0x8(%ebp)
 setne  %al
 subl   $0x1,-0x8(%ebp)
 test   %al,%al
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x4c>
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7d>
-nop
+je     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x8b>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x84>
+mov    -0xc(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x8b>
+mov    $0x1,%eax
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x90>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x56>
 mov    -0x4(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::GetMemberExpLevel(unsigned int) */

int __thiscall
CMemberExpTbl::_ZN13CMemberExpTbl17GetMemberExpLevelEj(CMemberExpTbl *this,uint param_1)

{
  bool bVar1;
  CMemberExpTbl *local_10;
  int local_c;
  int local_8;
  
  local_10 = this + 8;
  local_c = (byte)this[4] - 1;
  local_8 = 1;
  if (param_1 < *(uint *)(this + local_c * 4 + 8)) {
    if (param_1 == 0) {
      local_8 = 1;
    }
    else {
      for (; (bVar1 = local_c != 0, local_c = local_c + -1, bVar1 &&
             ((param_1 <= *(uint *)local_10 || (*(uint *)(local_10 + 4) < param_1))));
          local_10 = local_10 + 4) {
        local_8 = local_8 + 1;
      }
    }
  }
  else {
    local_8 = (byte)this[4] - 1;
  }
  return local_8;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 97 行）：

```cpp
int CMemberExpTbl::GetMemberExpLevel(unsigned int exp)
{
    char* p = (char*)this + 8;
    int local_c = (int)(unsigned char)((RA_S8<4>*)this)->v - 1;
    int local_8 = 1;
    if (exp >= (unsigned int)m_table[local_c])
    {
        local_8 = (int)(unsigned char)((RA_S8<4>*)this)->v - 1;
    }
    else
    {
        if (exp == 0)
        {
            local_8 = 1;
        }
        else
        {
            while (local_c-- != 0 &&
                   (exp <= *(unsigned int*)p || *(unsigned int*)(p + 4) < exp))
            {
                local_8 = local_8 + 1;
                p = p + 4;
            }
        }
    }
    return local_8;
}
```

# _ZN7CMember21IncConnLowerMemberExpEjj

`CMember::IncConnLowerMemberExp(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809901c` | `0x6a` | `0x806074c` | `0xa9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x8(%ebp)
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x5a>
-mov    -0x8(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    $0x20,%eax
-add    0x8(%ebp),%eax
-add    $0xe,%eax
+jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x93>
+mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x2e,%edx
+add    %edx,%eax
 mov    %eax,-0x4(%ebp)
 mov    -0x4(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x56>
-mov    -0x4(%ebp),%eax
-mov    0x23(%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0x4(%ebp),%eax
-mov    %edx,0x23(%eax)
-mov    -0x4(%ebp),%eax
-mov    0x23(%eax),%eax
+jne    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x8f>
+mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x51,%edx
+add    %edx,%eax
+mov    0x8(%ebp),%edx
+mov    -0x8(%ebp),%ecx
+imul   $0x27,%ecx,%ecx
+add    $0x51,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x51,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 cmp    0x10(%ebp),%eax
-jbe    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x67>
-mov    -0x4(%ebp),%eax
-mov    0x23(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    -0x4(%ebp),%eax
-mov    %edx,0x23(%eax)
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x68>
+jbe    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x88>
+mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
+imul   $0x27,%edx,%edx
+add    $0x51,%edx
+add    %edx,%eax
+mov    0x8(%ebp),%edx
+mov    -0x8(%ebp),%ecx
+imul   $0x27,%ecx,%ecx
+add    $0x51,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+sub    $0x1,%edx
+mov    %edx,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0xa7>
 addl   $0x1,-0x8(%ebp)
 cmpl   $0x9,-0x8(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0xf>
-jmp    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x68>
-nop
+jne    <T> <_ZN7CMember21IncConnLowerMemberExpEjj+0x12>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IncConnLowerMemberExp(unsigned int, unsigned int) */

void __thiscall
CMember::_ZN7CMember21IncConnLowerMemberExpEjj(CMember *this,uint param_1,uint param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return;
    }
    if (*(uint *)(this + local_c * 0x27 + 0x2e) == param_1) break;
    local_c = local_c + 1;
  }
  *(int *)(this + local_c * 0x27 + 0x51) = *(int *)(this + local_c * 0x27 + 0x51) + 1;
  if (*(uint *)(this + local_c * 0x27 + 0x51) <= param_2) {
    return;
  }
  *(int *)(this + local_c * 0x27 + 0x51) = *(int *)(this + local_c * 0x27 + 0x51) + -1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 353 行）：

```cpp
int CMember::IncConnLowerMemberExp(unsigned int uCharNo, unsigned int maxExp)
{
    for (int i = 0; i <= 9; i++)
    {
        unsigned int* proxy = (unsigned int*)((char*)this + i * 0x27 + 0x2e);
        if (*proxy == uCharNo)
        {
            *(int*)((char*)this + i * 0x27 + 0x51) =
                *(int*)((char*)this + i * 0x27 + 0x51) + 1;
            if (maxExp < *(unsigned int*)((char*)this + i * 0x27 + 0x51))
            {
                *(int*)((char*)this + i * 0x27 + 0x51) =
                    *(int*)((char*)this + i * 0x27 + 0x51) - 1;
            }
            return 0;
        }
    }
    return 0;
}
```

# _ZNK7CMember15FindLowerMemberEj

`CMember::FindLowerMember(unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098410` | `0x54` | `0x8060444` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x8(%ebp)
 cmpl   $0x0,-0x8(%ebp)
-jne    <T> <_ZNK7CMember15FindLowerMemberEj+0x20>
-mov    $0x0,%eax
-jmp    <T> <_ZNK7CMember15FindLowerMemberEj+0x52>
+je     <T> <_ZNK7CMember15FindLowerMemberEj+0x48>
 mov    0x8(%ebp),%eax
 add    $0x2e,%eax
 mov    %eax,-0x4(%ebp)
-jmp    <T> <_ZNK7CMember15FindLowerMemberEj+0x3e>
+jmp    <T> <_ZNK7CMember15FindLowerMemberEj+0x3d>
+subl   $0x1,-0x8(%ebp)
 mov    -0x4(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZNK7CMember15FindLowerMemberEj+0x3a>
-mov    -0x4(%ebp),%eax
-jmp    <T> <_ZNK7CMember15FindLowerMemberEj+0x52>
+jne    <T> <_ZNK7CMember15FindLowerMemberEj+0x39>
+mov    $0x1,%eax
+jmp    <T> <_ZNK7CMember15FindLowerMemberEj+0x4d>
 addl   $0x27,-0x4(%ebp)
 cmpl   $0x0,-0x8(%ebp)
 setne  %al
-subl   $0x1,-0x8(%ebp)
 test   %al,%al
-jne    <T> <_ZNK7CMember15FindLowerMemberEj+0x2b>
+jne    <T> <_ZNK7CMember15FindLowerMemberEj+0x24>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::FindLowerMember(unsigned int) const */

CMember * __thiscall CMember::_ZNK7CMember15FindLowerMemberEj(CMember *this,uint param_1)

{
  bool bVar1;
  uint local_c;
  CMember *local_8;
  
  local_c = (uint)(byte)this[0x2d];
  if (local_c != 0) {
    local_8 = this + 0x2e;
    while (bVar1 = local_c != 0, local_c = local_c - 1, bVar1) {
      if (*(uint *)local_8 == param_1) {
        return local_8;
      }
      local_8 = local_8 + 0x27;
    }
  }
  return (CMember *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 307 行）：

```cpp
int CMember::FindLowerMember(unsigned int charNo) const
{
    unsigned int count = (unsigned int)m_dbInfo.m_count27;
    if (count != 0)
    {
        const char* p = (const char*)this + 0x2e;
        while (count != 0)
        {
            count--;
            if (*(unsigned int*)p == charNo)
            {
                return 1;
            }
            p += 0x27;
        }
    }
    return 0;
}
```

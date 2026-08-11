# _ZNK16STPartyCharacKeyltERKS_

`STPartyCharacKey::operator<(STPartyCharacKey const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80760f4` | `0x173` | `0x8066892` | `0x165` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
 jae    <T> <_ZNK16STPartyCharacKeyltERKS_+0x1e>
 mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x4d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
 jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x7d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
-mov    0x8(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%edx
-mov    0xc(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0xb5>
-mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jae    <T> <_ZNK16STPartyCharacKeyltERKS_+0xaf>
+mov    $0x1,%eax
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edx
+movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0xed>
-mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+movzbl 0x9(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jae    <T> <_ZNK16STPartyCharacKeyltERKS_+0xe1>
+mov    $0x1,%eax
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,%edx
+movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xc(%eax),%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x118>
-mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+movzbl 0xa(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x10a>
+mov    $0x1,%eax
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xc(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x10(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x141>
+jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x133>
 mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x10(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jne    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    0x8(%ebp),%eax
 movzbl 0x11(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x11(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x16c>
+jge    <T> <_ZNK16STPartyCharacKeyltERKS_+0x15e>
 mov    $0x1,%eax
-jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x171>
+jmp    <T> <_ZNK16STPartyCharacKeyltERKS_+0x163>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STPartyCharacKey::TEMPNAMEPLACEHOLDERVALUE(STPartyCharacKey const&) const */

undefined4 __thiscall
STPartyCharacKey::_ZNK16STPartyCharacKeyltERKS_(STPartyCharacKey *this,STPartyCharacKey *param_1)

{
  if (*(ushort *)this < *(ushort *)param_1) {
    return 1;
  }
  if (*(short *)this == *(short *)param_1) {
    if (*(int *)(this + 4) < *(int *)(param_1 + 4)) {
      return 1;
    }
    if (*(int *)(this + 4) == *(int *)(param_1 + 4)) {
      if ((char)this[8] < (char)param_1[8]) {
        return 1;
      }
      if (this[8] == param_1[8]) {
        if ((byte)this[9] < (byte)param_1[9]) {
          return 1;
        }
        if (this[9] == param_1[9]) {
          if ((byte)this[10] < (byte)param_1[10]) {
            return 1;
          }
          if (this[10] == param_1[10]) {
            if (*(int *)(this + 0xc) < *(int *)(param_1 + 0xc)) {
              return 1;
            }
            if (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc)) {
              if ((char)this[0x10] < (char)param_1[0x10]) {
                return 1;
              }
              if ((this[0x10] == param_1[0x10]) && ((char)this[0x11] < (char)param_1[0x11])) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 690 行）：

```cpp
bool STPartyCharacKey::operator<(const STPartyCharacKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if (m_field8 < other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if ((int)(unsigned char)m_field9 < (int)(unsigned char)other.m_field9)
                    return true;
                if (m_field9 == other.m_field9)
                {
                    if ((int)(unsigned char)m_fielda < (int)(unsigned char)other.m_fielda)
                        return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if (m_fieldc < other.m_fieldc) return true;
                        if (m_fieldc == other.m_fieldc)
                        {
                            if (m_field10 < other.m_field10)
                                return true;
                            if (m_field10 == other.m_field10 &&
                                m_field11 < other.m_field11)
                                return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
```

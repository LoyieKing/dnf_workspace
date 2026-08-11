# _ZNK19STPartyStatisticKeyltERKS_

`STPartyStatisticKey::operator<(STPartyStatisticKey const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8075b18` | `0x181` | `0x806635e` | `0x169` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,119 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
 jae    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x1e>
 mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x4d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
 jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x7d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
-mov    0x8(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%edx
-mov    0xc(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0xb5>
-mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jae    <T> <_ZNK19STPartyStatisticKeyltERKS_+0xaf>
+mov    $0x1,%eax
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edx
+movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0xed>
-mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+movzbl 0x9(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jae    <T> <_ZNK19STPartyStatisticKeyltERKS_+0xe1>
+mov    $0x1,%eax
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movzbl %al,%edx
+movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x11e>
-mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+movzbl 0xa(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0xb(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jae    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x10c>
+mov    $0x1,%eax
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%edx
+movzbl 0xb(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x14f>
-mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+movzbl 0xb(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0xc(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xc(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jae    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x137>
+mov    $0x1,%eax
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
+mov    0x8(%ebp),%eax
+movzbl 0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xd(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17a>
+jge    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x162>
 mov    $0x1,%eax
-jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x17f>
+jmp    <T> <_ZNK19STPartyStatisticKeyltERKS_+0x167>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STPartyStatisticKey::TEMPNAMEPLACEHOLDERVALUE(STPartyStatisticKey const&) const */

undefined4 __thiscall
STPartyStatisticKey::_ZNK19STPartyStatisticKeyltERKS_
          (STPartyStatisticKey *this,STPartyStatisticKey *param_1)

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
            if ((byte)this[0xb] < (byte)param_1[0xb]) {
              return 1;
            }
            if (this[0xb] == param_1[0xb]) {
              if ((byte)this[0xc] < (byte)param_1[0xc]) {
                return 1;
              }
              if ((this[0xc] == param_1[0xc]) && ((char)this[0xd] < (char)param_1[0xd])) {
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

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 604 行）：

```cpp
bool STPartyStatisticKey::operator<(const STPartyStatisticKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if ((short)m_field0 == (short)other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if (m_field8 < other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if (m_field9 < other.m_field9) return true;
                if (m_field9 == other.m_field9)
                {
                    if (m_fielda < other.m_fielda) return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if (m_fieldb < other.m_fieldb) return true;
                        if (m_fieldb == other.m_fieldb)
                        {
                            if (m_fieldc < other.m_fieldc) return true;
                            if (m_fieldc == other.m_fieldc &&
                                m_fieldd < other.m_fieldd) return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
```

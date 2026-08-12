# _ZNK27STHellPartyStatisticItemKeyltERKS_

`STHellPartyStatisticItemKey::operator<(STHellPartyStatisticItemKey const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80768b8` | `0x109` | `0x8066c4c` | `0x10a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%edx
-mov    0xc(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x23>
-mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+jae    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x1d>
+mov    $0x1,%eax
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
+mov    0x8(%ebp),%eax
+movzbl (%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl (%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x103>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x51>
+jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x4b>
 mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x103>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x81>
+jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x7b>
 mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x103>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0xac>
+jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0xa6>
 mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x103>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0xd7>
+jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0xd1>
 mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+je     <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0xea>
+mov    $0x0,%eax
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x102>
+jge    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x103>
 mov    $0x1,%eax
-jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x107>
+jmp    <T> <_ZNK27STHellPartyStatisticItemKeyltERKS_+0x108>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STHellPartyStatisticItemKey::TEMPNAMEPLACEHOLDERVALUE(STHellPartyStatisticItemKey const&) const
    */

undefined4 __thiscall
STHellPartyStatisticItemKey::_ZNK27STHellPartyStatisticItemKeyltERKS_
          (STHellPartyStatisticItemKey *this,STHellPartyStatisticItemKey *param_1)

{
  if ((byte)*this < (byte)*param_1) {
    return 1;
  }
  if (*this == *param_1) {
    if (*(int *)(this + 4) < *(int *)(param_1 + 4)) {
      return 1;
    }
    if (*(int *)(this + 4) == *(int *)(param_1 + 4)) {
      if ((char)this[8] < (char)param_1[8]) {
        return 1;
      }
      if (this[8] == param_1[8]) {
        if ((char)this[9] < (char)param_1[9]) {
          return 1;
        }
        if (this[9] == param_1[9]) {
          if ((char)this[9] < (char)param_1[9]) {
            return 1;
          }
          if ((this[10] == param_1[10]) && ((char)this[10] < (char)param_1[10])) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 820 行）：

```cpp
bool STHellPartyStatisticItemKey::operator<(const STHellPartyStatisticItemKey& other) const
{
    // ORIG 0x80768b8 实测：嵌套 == 链；m_field0 / m_field4 / m_field8 / m_field9
    // / m_field9（重复）/ m_fielda 比较链（m_field9 在 ORIG 中被比较两次）。
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0)
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
                    if (m_field9 < other.m_field9) return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if (m_fielda < other.m_fielda) return true;
                    }
                }
            }
        }
    }
    return false;
}
```

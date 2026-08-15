# _ZNK22STPartyJobStatisticKeyltERKS_

`STPartyJobStatisticKey::operator<(STPartyJobStatisticKey const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8075eb8` | `0x1e3` | `0x80664fe` | `0x1cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,148 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
 jae    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x4d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
 jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x7d>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x8(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
-mov    0x8(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%edx
-mov    0xc(%ebp),%eax
-movzbl 0x9(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0xb5>
-mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x9(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0xaf>
+mov    $0x1,%eax
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edx
+movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0xed>
-mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+movzbl 0x9(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0xe1>
+mov    $0x1,%eax
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movzbl %al,%edx
+movzbl 0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x125>
-mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+movzbl 0xa(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0xb(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x113>
+mov    $0x1,%eax
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%edx
+movzbl 0xb(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%eax
-cmp    %eax,%edx
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x15d>
-mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+movzbl 0xb(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0xc(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xc(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x145>
+mov    $0x1,%eax
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
+mov    0x8(%ebp),%eax
+movzbl 0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xd(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x188>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x170>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xd(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    %eax,%edx
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1b3>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x19b>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jne    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x14(%eax),%eax
 cmp    %al,%dl
-jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1dc>
+jge    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c4>
 mov    $0x1,%eax
-jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1e1>
+jmp    <T> <_ZNK22STPartyJobStatisticKeyltERKS_+0x1c9>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STPartyJobStatisticKey::TEMPNAMEPLACEHOLDERVALUE(STPartyJobStatisticKey const&) const */

undefined4 __thiscall
STPartyJobStatisticKey::_ZNK22STPartyJobStatisticKeyltERKS_
          (STPartyJobStatisticKey *this,STPartyJobStatisticKey *param_1)

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
              if (this[0xc] == param_1[0xc]) {
                if ((char)this[0xd] < (char)param_1[0xd]) {
                  return 1;
                }
                if (this[0xd] == param_1[0xd]) {
                  if (*(int *)(this + 0x10) < *(int *)(param_1 + 0x10)) {
                    return 1;
                  }
                  if ((*(int *)(this + 0x10) == *(int *)(param_1 + 0x10)) &&
                     ((char)this[0x14] < (char)param_1[0x14])) {
                    return 1;
                  }
                }
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

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 653 行）：

```cpp
bool STPartyJobStatisticKey::operator<(const STPartyJobStatisticKey& other) const
{
    if (m_channelNo < other.m_channelNo) return true;
    if (m_channelNo == other.m_channelNo)
    {
        if (m_dungeonIndex < other.m_dungeonIndex) return true;
        if (m_dungeonIndex == other.m_dungeonIndex)
        {
            if (m_dungeonDiff < other.m_dungeonDiff) return true;
            if (m_dungeonDiff == other.m_dungeonDiff)
            {
                if (m_dungeonStandardLevel < other.m_dungeonStandardLevel) return true;
                if (m_dungeonStandardLevel == other.m_dungeonStandardLevel)
                {
                    if (m_abuseParty < other.m_abuseParty) return true;
                    if (m_abuseParty == other.m_abuseParty)
                    {
                        if (m_balkunParty < other.m_balkunParty) return true;
                        if (m_balkunParty == other.m_balkunParty)
                        {
                            if (m_success < other.m_success) return true;
                            if (m_success == other.m_success)
                            {
                            if (m_partyUserCount < other.m_partyUserCount)
                                return true;
                                if (m_partyUserCount == other.m_partyUserCount)
                                {
                                    if (m_characJob < other.m_characJob) return true;
                                    if (m_characJob == other.m_characJob &&
                                        m_characGrow < other.m_characGrow) return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}
```

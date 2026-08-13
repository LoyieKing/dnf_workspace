# _ZN7CMember21GetConnLowerMemberCntEv

`CMember::GetConnLowerMemberCnt()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809916a` | `0x82` | `0x8060cc8` | `0x7d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,41 @@
-push   %ebp
-mov    %esp,%ebp
-sub    $0x28,%esp
-mov    0x8(%ebp),%eax
-movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x80>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x7b>
 movl   $0x0,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x70>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
 mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x27,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x20,%eax
 mov    0xe(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
+je     <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x66>
 addl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6c>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x67>
 nop
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x30>
 mov    -0x10(%ebp),%eax
 leave
 ret
+nop
+push   %ebp
+mov    %esp,%ebp
+sub    $0x28,%esp
+mov    0x10(%ebp),%edx
+mov    0x18(%ebp),%eax
```
## 2. Ghidra 反编译 C

```c

/* CMember::GetConnLowerMemberCnt() */

int __thiscall CMember::_ZN7CMember21GetConnLowerMemberCntEv(CMember *this)

{
  CMember CVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  CVar1 = this[0x2d];
  if ((byte)CVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    for (local_10 = 0; local_10 < (int)(uint)(byte)CVar1; local_10 = local_10 + 1) {
      iVar2 = CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
      if (iVar2 != 0) {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 454 行）：

```cpp
int CMember::GetConnLowerMemberCnt()
{
    CUser* user;
    int count = (int)m_dbInfo.m_count27;
    if (count == 0)
    {
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < count; i++)
    {
        user = m_memberManager->FindMemberUser(m_dbInfo.m_lowers[i].m_field0);
        if (user == 0)
        {
            continue;
        }
        cnt++;
    }
    return cnt;
}
```

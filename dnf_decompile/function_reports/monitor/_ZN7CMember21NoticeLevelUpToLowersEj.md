# _ZN7CMember21NoticeLevelUpToLowersEj

`CMember::NoticeLevelUpToLowers(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099086` | `0xbf` | `0x8060b52` | `0xb0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbc>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xae>
 lea    -0x27(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Monitor_Notice_MemberExp_LevelUpC1Ev>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa9>
-mov    -0xc(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa1>
+mov    -0x10(%ebp),%eax
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
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa4>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0x9d>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x1d(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x19(%ebp)
 mov    0xc(%ebp),%eax
 mov    %al,-0x15(%ebp)
 lea    -0x27(%ebp),%eax
 movl   $0x13,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa5>
-nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0x31>
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbd>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::NoticeLevelUpToLowers(unsigned int) */

void __thiscall CMember::_ZN7CMember21NoticeLevelUpToLowersEj(CMember *this,uint param_1)

{
  Packet_Monitor_Notice_MemberExp_LevelUp local_2b [10];
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  CUser *local_18;
  uint local_14;
  int local_10;
  
  local_14 = (uint)(byte)this[0x2d];
  if (local_14 != 0) {
    Packet_Monitor_Notice_MemberExp_LevelUp::_ZN39Packet_Monitor_Notice_MemberExp_LevelUpC2Ev
              (local_2b);
    for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
      local_18 = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
      if (local_18 != (CUser *)0x0) {
        local_21 = CUser::_ZN5CUser14GetIdByChannelEv(local_18);
        local_1d = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
        local_19 = (undefined1)param_1;
        CUser::SendToGameserver(local_18,(char *)local_2b,0x13);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 401 行）：

```cpp
void CMember::NoticeLevelUpToLowers(unsigned int level)
{
    int count = (int)m_dbInfo.m_count27;
    if (count != 0)
    {
        Packet_Monitor_Notice_MemberExp_LevelUp pkt;
        for (int i = 0; i < count; i++)
        {
            CUser* user = m_memberManager->FindMemberUser(m_dbInfo.m_lowers[i].m_field0);
            if (user != 0)
            {
                pkt.m_idByChannel = user->GetIdByChannel();
                pkt.m_uniqCharNo = user->GetUniqCharNo();
                pkt.m_level = level;
                user->SendToGameserver((char*)&pkt, 0x13);
            }
        }
    }
}
```

# _ZN6CGuild12SubGuildFundEj

`CGuild::SubGuildFund(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809233e` | `0x140` | `0x805812e` | `0x13a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,89 +1,88 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild12SubGuildFundEj+0x5b>
-mov    0x8(%ebp),%eax
-movb   $0x1,0x4d96(%eax)
-mov    0x8(%ebp),%eax
-add    $0xc0,%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-cmp    0xc(%ebp),%eax
-ja     <T> <_ZN6CGuild12SubGuildFundEj+0x47>
-mov    -0x1c(%ebp),%eax
-movl   $0x0,(%eax)
-jmp    <T> <_ZN6CGuild12SubGuildFundEj+0xdd>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,%edx
-sub    0xc(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    %edx,(%eax)
-jmp    <T> <_ZN6CGuild12SubGuildFundEj+0xdd>
+jne    <T> <_ZN6CGuild12SubGuildFundEj+0xa2>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
-mov    %eax,%esi
+mov    %eax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x3c(%ebp)
+movzwl %ax,%edi
 mov    0x8(%ebp),%eax
-mov    0xc0(%eax),%edi
+add    $0xc0,%eax
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xb24,0x8(%esp)
 movl   $&_ZZN6CGuild12SubGuildFundEjE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x1c(%esp)
 mov    -0x3c(%ebp),%eax
-mov    %eax,0x18(%esp)
+mov    %eax,0x1c(%esp)
+mov    %edi,0x18(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
+mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::SubGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",0x8(%esp)
 movl   $"./log/GuildFund",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN6CGuild12SubGuildFundEj+0x138>
+jmp    <T> <_ZN6CGuild12SubGuildFundEj+0x132>
 mov    0x8(%ebp),%eax
-mov    0xc0(%eax),%esi
+movb   $0x1,0x4d96(%eax)
+mov    0x8(%ebp),%eax
+add    $0xc0,%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jbe    <T> <_ZN6CGuild12SubGuildFundEj+0xd2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sub    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+mov    %edx,(%eax)
+jmp    <T> <_ZN6CGuild12SubGuildFundEj+0xdb>
+mov    -0x1c(%ebp),%eax
+movl   $0x0,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xb28,0x8(%esp)
 movl   $&_ZZN6CGuild12SubGuildFundEjE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::SubGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",0x8(%esp)
 movl   $"./log/GuildFund",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SubGuildFund(unsigned int) */

void __thiscall CGuild::_ZN6CGuild12SubGuildFundEj(CGuild *this,uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CGuild *local_20;
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    uVar4 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::size((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                    *)this);
    uVar1 = *(ushort *)(this + 0x1c);
    uVar2 = *(undefined4 *)(this + 0xc0);
    uVar3 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_30,"SubGuildFund",0xb24);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/GuildFund",
               "CPacketTranslater::SubGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n"
               ,uVar3,uVar2,param_1,(uint)uVar1,uVar4);
  }
  else {
    this[0x4d96] = (CGuild)0x1;
    local_20 = this + 0xc0;
    if (param_1 < *(uint *)local_20) {
      *(uint *)local_20 = *(uint *)local_20 - param_1;
    }
    else {
      *(uint *)local_20 = 0;
    }
    uVar2 = *(undefined4 *)(this + 0xc0);
    uVar4 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_28,"SubGuildFund",0xb28);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_28,"./log/GuildFund",
               "CPacketTranslater::SubGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
               uVar4,uVar2,param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2164 行）：

```cpp
void CGuild::SubGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb24,"./log/GuildFund",
            "CPacketTranslater::SubGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",
            GetGuildKey(), *(unsigned int*)((char*)this + 0xc0), fund,
            (unsigned int)m_field1c, (int)m_members.size());
    }
    else
    {
        m_field4d96 = 1;
        unsigned int* fundPtr = (unsigned int*)((char*)this + 0xc0);
        if (fund < *fundPtr)
        {
            *fundPtr -= fund;
        }
        else
        {
            *fundPtr = 0;
        }
        DNF_LOG_SCOPE_LINE(0xb28,"./log/GuildFund",
            "CPacketTranslater::SubGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
            GetGuildKey(), *fundPtr, fund);
    }
}
```

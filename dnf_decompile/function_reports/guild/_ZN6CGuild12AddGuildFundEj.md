# _ZN6CGuild12AddGuildFundEj

`CGuild::AddGuildFund(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80921d4` | `0x169` | `0x8057da2` | `0x169` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,101 @@
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
 je     <T> <_ZN6CGuild12AddGuildFundEj+0xe1>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x3b,%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 add    0xc(%ebp),%edx
 mov    -0x20(%ebp),%eax
 mov    %edx,(%eax)
 mov    -0x1c(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xf,%al
 jbe    <T> <_ZN6CGuild12AddGuildFundEj+0x6c>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0x989680,%eax
 jbe    <T> <_ZN6CGuild12AddGuildFundEj+0x6c>
 mov    -0x20(%ebp),%eax
 movl   $0x989680,(%eax)
 jmp    <T> <_ZN6CGuild12AddGuildFundEj+0x81>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0x1312d00,%eax
 jbe    <T> <_ZN6CGuild12AddGuildFundEj+0x81>
 mov    -0x20(%ebp),%eax
 movl   $0x1312d00,(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc0(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xb0a,0x8(%esp)
 movl   $&_ZZN6CGuild12AddGuildFundEjE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::AddGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",0x8(%esp)
 movl   $"./log/GuildFund",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN6CGuild12AddGuildFundEj+0x161>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc0(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xb06,0x8(%esp)
 movl   $&_ZZN6CGuild12AddGuildFundEjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x1c(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::AddGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",0x8(%esp)
 movl   $"./log/GuildFund",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
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

/* CGuild::AddGuildFund(unsigned int) */

void __thiscall CGuild::_ZN6CGuild12AddGuildFundEj(CGuild *this,uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CGuild *local_24;
  CGuild *local_20;
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    uVar3 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::size((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                    *)this);
    uVar1 = *(ushort *)(this + 0x1c);
    uVar2 = *(undefined4 *)(this + 0xc0);
    uVar4 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_34,"AddGuildFund",0xb06);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/GuildFund",
               "CPacketTranslater::AddGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n"
               ,uVar4,uVar2,param_1,(uint)uVar1,uVar3);
  }
  else {
    this[0x4d96] = (CGuild)0x1;
    local_24 = this + 0xc0;
    local_20 = this + 0x3b;
    *(uint *)local_24 = *(uint *)local_24 + param_1;
    if (((byte)*local_20 < 0x10) || (*(uint *)local_24 < 0x989681)) {
      if (20000000 < *(uint *)local_24) {
        *(uint *)local_24 = 20000000;
      }
    }
    else {
      *(uint *)local_24 = 10000000;
    }
    uVar2 = *(undefined4 *)(this + 0xc0);
    uVar3 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_2c,"AddGuildFund",0xb0a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/GuildFund",
               "CPacketTranslater::AddGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
               uVar3,uVar2,param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2177 行）：

```cpp
void CGuild::AddGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        unsigned int* fundPtr = &m_dbInfo.m_info.m_guildFund;
        unsigned char* levelPtr = &m_dbInfo.m_info.m_guildLevel;
        *fundPtr += fund;
        if (*levelPtr > 0xf && *fundPtr > 0x989680)
        {
            *fundPtr = 0x989680;
        }
        else
        {
            if (*fundPtr > 0x1312d00)
            {
                *fundPtr = 0x1312d00;
            }
        }
        DNF_LOG_SCOPE_LINE(0xb0a,"./log/GuildFund",
            "CPacketTranslater::AddGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
            GetGuildKey(), m_dbInfo.m_info.m_guildFund, fund);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xb06,"./log/GuildFund",
            "CPacketTranslater::AddGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",
            GetGuildKey(), m_dbInfo.m_info.m_guildFund, fund,
            m_field1c, m_members.size());
    }
}
```

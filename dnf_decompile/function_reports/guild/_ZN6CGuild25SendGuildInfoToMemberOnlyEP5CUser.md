# _ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser

`CGuild::SendGuildInfoToMemberOnly(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e04a` | `0x105` | `0x805400a` | `0x151` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x158,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x16c,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x103>
-lea    -0x145(%ebp),%eax
+je     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x146>
+lea    -0x155(%ebp),%esi
+mov    %esi,0x4(%esp)
+movl   $0x139,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x6f>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev>
+jmp    <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x6f>
+mov    %edx,%edi
+mov    %eax,-0x15c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x15c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x133(%ebp)
+mov    %eax,-0x143(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xbd,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x145(%ebp),%eax
+lea    -0x155(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
+mov    %eax,-0x14b(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
+mov    %eax,-0x147(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0xbf>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x64,-0x1c(%ebp)
+jg     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x102>
+mov    -0x1c(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x4d0a,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x145(%ebp),%eax
+lea    -0x155(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0xe6>
+jmp    <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x129>
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 movl   $0x64,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x145(%ebp),%eax
+lea    -0x155(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x145(%ebp),%eax
 movl   $0x139,0x8(%esp)
+lea    -0x155(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-leave
+add    $0x16c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SendGuildInfoToMemberOnly(CUser*) */

void __thiscall CGuild::_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser(CGuild *this,CUser *param_1)

{
  Packet_Monitor_Notice_Guild_Info local_149 [10];
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined1 auStack_133 [190];
  undefined1 auStack_75 [101];
  size_t local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_Monitor_Notice_Guild_Info::_ZN32Packet_Monitor_Notice_Guild_InfoC2Ev(local_149);
    local_137 = *(undefined4 *)(this + 0x18);
    memcpy(auStack_133,this + 0x20,0xbd);
    local_13f = CUser::GetIdByChannel(param_1);
    local_13b = CUser::GetUniqCharNo(param_1);
    local_10 = strlen((char *)(this + 0x4d0a));
    if ((int)local_10 < 0x65) {
      memcpy(auStack_75,this + 0x4d0a,local_10);
    }
    else {
      memcpy(auStack_75,this + 0x4d0a,100);
    }
    CUser::SendToGameserver(param_1,(char *)local_149,0x139);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 904 行）：

```cpp
void CGuild::SendGuildInfoToMemberOnly(CUser* user)
{
    if ((m_field1c & 4) != 0)
    {
        GuildNoticeInfoFull pkt;
        new (&pkt) Packet_Monitor_Notice_Guild_Info();
        pkt.m_field12 = m_guildKey;
        memcpy(pkt.m_body, (char*)this + 0x20, 0xbd);
        pkt.m_fieldA = user->GetIdByChannel();
        pkt.m_fieldE = user->GetUniqCharNo();
        int len = strlen((char*)this + 0x4d0a);
        if (len <= 100)
        {
            memcpy(pkt.m_rest, (char*)this + 0x4d0a, len);
        }
        else
        {
            memcpy(pkt.m_rest, (char*)this + 0x4d0a, 100);
        }
        user->SendToGameserver((char*)&pkt, 0x139);
    }
}
```

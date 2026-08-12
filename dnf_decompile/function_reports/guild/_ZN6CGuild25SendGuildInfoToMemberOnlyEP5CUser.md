# _ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser

`CGuild::SendGuildInfoToMemberOnly(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e04a` | `0x105` | `0x8053fba` | `0xf9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x158,%esp
+push   %ebx
+sub    $0x154,%esp
 mov    0x8(%ebp),%eax
-movzwl 0x1c(%eax),%eax
+add    $0x1c,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0x103>
+je     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0xf0>
 lea    -0x145(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev>
+lea    -0x145(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x145(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x145(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x133(%ebp)
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xbd,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x145(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
+mov    $0x64,%eax
 cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0xbf>
-mov    -0xc(%ebp),%eax
+cmovbe -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x4d0a,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x145(%ebp),%eax
-add    $0xd4,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser+0xe6>
-mov    0x8(%ebp),%eax
-add    $0x4d0a,%eax
-movl   $0x64,0x8(%esp)
-mov    %eax,0x4(%esp)
 lea    -0x145(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x145(%ebp),%eax
 movl   $0x139,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-leave
+add    $0x154,%esp
+pop    %ebx
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 846 行）：

```cpp
void CGuild::SendGuildInfoToMemberOnly(CUser* user)
{
    if ((*(unsigned short*)((char*)this + 0x1c) & 4) != 0)
    {
        Packet_Monitor_Notice_Guild_Info pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = user->GetIdByChannel();
        *(unsigned int*)((char*)&pkt + 0xe) = user->GetUniqCharNo();
        *(unsigned int*)((char*)&pkt + 0x12) = m_guildKey;
        memcpy((char*)&pkt + 0x16, (char*)this + 0x20, 0xbd);
        size_t len = strlen((char*)this + 0x4d0a);
        memcpy((char*)&pkt + 0xd4, (char*)this + 0x4d0a, len < 0x65 ? len : 100);
        user->SendToGameserver((char*)&pkt, 0x139);
    }
}
```

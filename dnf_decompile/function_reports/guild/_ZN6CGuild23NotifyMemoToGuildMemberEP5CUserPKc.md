# _ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc

`CGuild::NotifyMemoToGuildMember(CUser*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091af6` | `0x120` | `0x805777e` | `0x10b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
+push   %ebx
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x11e>
+je     <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x27>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x11d>
+je     <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x2e>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x33>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x104>
 lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Guild_Notify_Guild_Member_MemoC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x1d,-0xc(%ebp)
-jg     <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x79>
+jbe    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x6f>
+movl   $0x1d,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x55(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x96>
-movl   $0x1d,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x55(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x14,-0xc(%ebp)
-jg     <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0xc8>
+jbe    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0xa6>
+movl   $0x14,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x55(%ebp),%eax
 add    $0x30,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0xe5>
-movl   $0x14,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
 lea    -0x55(%ebp),%eax
-add    $0x30,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x4b(%ebp)
+mov    %eax,(%ebx)
+lea    -0x55(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x47(%ebp)
+mov    %eax,(%ebx)
 lea    -0x55(%ebp),%eax
 movl   $0x45,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc+0x105>
 nop
-leave
+add    $0x64,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyMemoToGuildMember(CUser*, char const*) */

void __thiscall
CGuild::_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc(CGuild *this,CUser *param_1,char *param_2)

{
  char cVar1;
  Packet_Guild_Notify_Guild_Member_Memo local_59 [10];
  undefined4 local_4f;
  undefined4 local_4b;
  undefined1 auStack_47 [30];
  undefined1 auStack_29 [21];
  char *local_14;
  size_t local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    cVar1 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                     *)this);
    if (cVar1 == '\0') {
      Packet_Guild_Notify_Guild_Member_Memo::_ZN37Packet_Guild_Notify_Guild_Member_MemoC2Ev
                (local_59);
      local_14 = (char *)CUser::GetCharName(param_1);
      local_10 = strlen(local_14);
      if ((int)local_10 < 0x1e) {
        memcpy(auStack_47,local_14,local_10);
      }
      else {
        memcpy(auStack_47,local_14,0x1d);
      }
      local_10 = strlen(param_2);
      if ((int)local_10 < 0x15) {
        memcpy(auStack_29,param_2,local_10);
      }
      else {
        memcpy(auStack_29,param_2,0x14);
      }
      local_4f = CUser::GetIdByChannel(param_1);
      local_4b = CUser::GetUniqCharNo(param_1);
      CUser::SendToGameserver(param_1,(char *)local_59,0x45);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2084 行）：

```cpp
void CGuild::NotifyMemoToGuildMember(CUser* user, const char* memo)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Guild_Notify_Guild_Member_Memo pkt;
    char* name = user->GetCharName();
    size_t n = strlen(name);
    if (n > 0x1d)
    {
        n = 0x1d;
    }
    memcpy((char*)&pkt + 0x12, name, n);
    n = strlen(memo);
    if (n > 0x14)
    {
        n = 0x14;
    }
    memcpy((char*)&pkt + 0x30, memo, n);
    *(int*)((char*)&pkt + 0xa) = user->GetIdByChannel();
    *(unsigned int*)((char*)&pkt + 0xe) = user->GetUniqCharNo();
    user->SendToGameserver((char*)&pkt, 0x45);
}
```

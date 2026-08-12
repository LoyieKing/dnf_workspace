# _ZN6CGuild22NotifyTodayGuildMemberEP5CUser

`CGuild::NotifyTodayGuildMember(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092618` | `0xbb` | `0x80581fe` | `0x130` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notify_Today_Guild_MemberC1Ev>
+lea    -0x45(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x3b(%ebp)
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x16(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x66ec(%eax),%edx
-mov    %edx,-0x2f(%ebp)
-mov    0x66f0(%eax),%edx
-mov    %edx,-0x2b(%ebp)
-mov    0x66f4(%eax),%edx
-mov    %edx,-0x27(%ebp)
-mov    0x66f8(%eax),%edx
-mov    %edx,-0x23(%ebp)
-mov    0x66fc(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x6700(%eax),%edx
-mov    %edx,-0x1b(%ebp)
-mov    0x6704(%eax),%edx
-mov    %edx,-0x17(%ebp)
-mov    0x6708(%eax),%edx
-mov    %edx,-0x13(%ebp)
-mov    0x670c(%eax),%edx
-mov    %edx,-0xf(%ebp)
-movzwl 0x6710(%eax),%edx
-mov    %dx,-0xb(%ebp)
-movzbl 0x6712(%eax),%eax
-mov    %al,-0x9(%ebp)
+add    $0x66ec,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x1a(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x66f0,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x1e(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x66f4,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x22(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x66f8,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x26(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x66fc,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x2a(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x6700,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x2e(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x6704,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x32(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x6708,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x36(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x670c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x45(%ebp),%eax
+add    $0x3a,%eax
+mov    0x8(%ebp),%edx
+add    $0x6710,%edx
+movzwl (%edx),%edx
+mov    %dx,(%eax)
+lea    -0x45(%ebp),%eax
+lea    0x3c(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x6712,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x45(%ebp),%eax
+lea    0x12(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x33(%ebp)
+mov    %eax,(%ebx)
+lea    -0x45(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x37(%ebp)
+mov    %eax,(%ebx)
 lea    -0x45(%ebp),%eax
 movl   $0x3d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-leave
+add    $0x54,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyTodayGuildMember(CUser*) */

void __thiscall CGuild::_ZN6CGuild22NotifyTodayGuildMemberEP5CUser(CGuild *this,CUser *param_1)

{
  Packet_Notify_Today_Guild_Member local_49 [10];
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined2 local_f;
  CGuild local_d;
  
  Packet_Notify_Today_Guild_Member::_ZN32Packet_Notify_Today_Guild_MemberC2Ev(local_49);
  local_3f = *(undefined4 *)(this + 0x18);
  local_33 = *(undefined4 *)(this + 0x66ec);
  local_2f = *(undefined4 *)(this + 0x66f0);
  local_2b = *(undefined4 *)(this + 0x66f4);
  local_27 = *(undefined4 *)(this + 0x66f8);
  local_23 = *(undefined4 *)(this + 0x66fc);
  local_1f = *(undefined4 *)(this + 0x6700);
  local_1b = *(undefined4 *)(this + 0x6704);
  local_17 = *(undefined4 *)(this + 0x6708);
  local_13 = *(undefined4 *)(this + 0x670c);
  local_f = *(undefined2 *)(this + 0x6710);
  local_d = this[0x6712];
  local_37 = CUser::GetIdByChannel(param_1);
  local_3b = CUser::GetUniqCharNo(param_1);
  CUser::SendToGameserver(param_1,(char *)local_49,0x3d);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2317 行）：

```cpp
void CGuild::NotifyTodayGuildMember(CUser* user)
{
    Packet_Notify_Today_Guild_Member pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = m_guildKey;
    *(unsigned int*)((char*)&pkt + 0x16) = *(unsigned int*)((char*)this + 0x66ec);
    *(unsigned int*)((char*)&pkt + 0x1a) = *(unsigned int*)((char*)this + 0x66f0);
    *(unsigned int*)((char*)&pkt + 0x1e) = *(unsigned int*)((char*)this + 0x66f4);
    *(unsigned int*)((char*)&pkt + 0x22) = *(unsigned int*)((char*)this + 0x66f8);
    *(unsigned int*)((char*)&pkt + 0x26) = *(unsigned int*)((char*)this + 0x66fc);
    *(unsigned int*)((char*)&pkt + 0x2a) = *(unsigned int*)((char*)this + 0x6700);
    *(unsigned int*)((char*)&pkt + 0x2e) = *(unsigned int*)((char*)this + 0x6704);
    *(unsigned int*)((char*)&pkt + 0x32) = *(unsigned int*)((char*)this + 0x6708);
    *(unsigned int*)((char*)&pkt + 0x36) = *(unsigned int*)((char*)this + 0x670c);
    *(unsigned short*)((char*)&pkt + 0x3a) = *(unsigned short*)((char*)this + 0x6710);
    *(char*)((char*)&pkt + 0x3c) = *(char*)((char*)this + 0x6712);
    *(int*)((char*)&pkt + 0x12) = user->GetIdByChannel();
    *(unsigned int*)((char*)&pkt + 0xe) = user->GetUniqCharNo();
    user->SendToGameserver((char*)&pkt, 0x3d);
}
```

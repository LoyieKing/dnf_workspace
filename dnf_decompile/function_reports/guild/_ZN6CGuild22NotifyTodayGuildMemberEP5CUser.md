# _ZN6CGuild22NotifyTodayGuildMemberEP5CUser

`CGuild::NotifyTodayGuildMember(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092618` | `0xbb` | `0x8058082` | `0xd9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notify_Today_Guild_MemberC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x3b(%ebp)
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
+mov    0x66ec(%eax),%eax
+mov    %eax,-0x2f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f0(%eax),%eax
+mov    %eax,-0x2b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f4(%eax),%eax
+mov    %eax,-0x27(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f8(%eax),%eax
+mov    %eax,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66fc(%eax),%eax
+mov    %eax,-0x1f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6700(%eax),%eax
+mov    %eax,-0x1b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6704(%eax),%eax
+mov    %eax,-0x17(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6708(%eax),%eax
+mov    %eax,-0x13(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x670c(%eax),%eax
+mov    %eax,-0xf(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x6710(%eax),%eax
+mov    %ax,-0xb(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0x6712(%eax),%eax
 mov    %al,-0x9(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x33(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x37(%ebp)
 lea    -0x45(%ebp),%eax
 movl   $0x3d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 leave
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2404 行）：

```cpp
void CGuild::NotifyTodayGuildMember(CUser* user)
{
    Packet_Notify_Today_Guild_Member pkt;
    pkt.m_guildKey = m_guildKey;
    pkt.m_member0 = m_board.m_today.m_charNo;
    pkt.m_member1 = m_board.m_today.m_name0;
    pkt.m_member2 = m_board.m_today.m_name1;
    pkt.m_member3 = m_board.m_today.m_name2;
    pkt.m_member4 = m_board.m_today.m_name3;
    pkt.m_member5 = m_board.m_today.m_name4;
    pkt.m_member6 = m_board.m_today.m_name5;
    pkt.m_member7 = m_board.m_today.m_name6;
    pkt.m_member8 = m_board.m_today.m_name7;
    pkt.m_memberA = m_board.m_today.m_field24;
    pkt.m_memberC = (char)m_board.m_today.m_field26;
    pkt.m_channel = user->GetIdByChannel();
    pkt.m_charNo = user->GetUniqCharNo();
    user->SendToGameserver((char*)&pkt, 0x3d);
}
```

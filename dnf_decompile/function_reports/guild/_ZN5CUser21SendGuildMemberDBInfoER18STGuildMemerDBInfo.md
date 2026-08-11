# _ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo

`CUser::SendGuildMemberDBInfo(STGuildMemerDBInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066e76` | `0xb5` | `0x8089358` | `0xc9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo+0x52>
+je     <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo+0x53>
 movl   $0x193,0x8(%esp)
 movl   $&_ZZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfoE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SendGuildMemberDBInfo(), 0 == this->GetUniqCharNo() ERR",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo+0xb3>
+jmp    <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo+0xc3>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Monitor_Notice_Guild_Member_InfoC1Ev>
 movl   $0x1a,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x3c(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x32(%ebp)
+mov    %eax,(%ebx)
+lea    -0x3c(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2e(%ebp)
-movzwl -0x3a(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%edx
 lea    -0x3c(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
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

/* CUser::SendGuildMemberDBInfo(STGuildMemerDBInfo&) */

void __thiscall
CUser::_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo
          (CUser *this,STGuildMemerDBInfo *param_1)

{
  int iVar1;
  Packet_Monitor_Notice_Guild_Member_Info local_40 [2];
  ushort local_3e;
  undefined4 local_36;
  undefined4 local_32;
  undefined1 auStack_2e [26];
  CMyFileLog local_14 [16];
  
  iVar1 = GetUniqCharNo(this);
  if (iVar1 == 0) {
    CMyFileLog::CMyFileLog(local_14,"SendGuildMemberDBInfo",0x193);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GuildModify",
               "SendGuildMemberDBInfo(), 0 == this->GetUniqCharNo() ERR");
  }
  else {
    Packet_Monitor_Notice_Guild_Member_Info::_ZN39Packet_Monitor_Notice_Guild_Member_InfoC2Ev
              (local_40);
    memcpy(auStack_2e,param_1,0x1a);
    local_36 = GetIdByChannel(this);
    local_32 = GetUniqCharNo(this);
    SendToGameserver(this,(char *)local_40,(uint)local_3e);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 326 行）：

```cpp
void CUser::SendGuildMemberDBInfo(STGuildMemerDBInfo& info)
{
    if (GetUniqCharNo() == 0)
    {
        DNF_LOG_SCOPE_LINE(0x193, "./log/GuildModify", "SendGuildMemberDBInfo(), 0 == this->GetUniqCharNo() ERR");
    }
    else
    {
        Packet_Monitor_Notice_Guild_Member_Info pkt;
        memcpy((char*)&pkt + 0x12, &info, 0x1a);
        *(int*)((char*)&pkt + 0xa) = GetIdByChannel();
        *(unsigned int*)((char*)&pkt + 0xe) = GetUniqCharNo();
        SendToGameserver((char*)&pkt, *(unsigned short*)((char*)&pkt + 2));
    }
}
```

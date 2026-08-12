# _ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj

`CPacketTranslater::GuildJoin(CGuild*, STGuildJoinInfo*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80795e6` | `0x205` | `0x806fc8e` | `0x202` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,132 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xb0,%esp
 cmpl   $0x0,0x8(%ebp)
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x1fa>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x1f8>
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x43>
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x4a>
 mov    $0x1,%eax
 jmp    <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x4f>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x144>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x125>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildMemberProxyC1Ev>
 movl   $0x41,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movb   $0x0,-0x2a(%ebp)
+lea    -0x51(%ebp),%eax
+lea    0x10(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0x33(%eax),%eax
-mov    %al,-0x2e(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x32(%eax),%eax
-mov    %al,-0x2f(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x35(%eax),%eax
-mov    %al,-0x2b(%ebp)
+add    $0x10,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    0xc(%ebp),%eax
 add    $0x14,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x51(%ebp),%eax
-add    $0x4,%eax
+add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,-0x51(%ebp)
-movl   $0x0,-0x29(%ebp)
 lea    -0x51(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0xf3>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0xd4>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26IncTotalCnt_Of_GuildDBInfoEv>
 mov    0xc(%ebp),%eax
 lea    0x14(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%ebx
 movl   $0xa71,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfojE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"GUILD JOIN guild(%s) char(%s)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x97(%ebp),%eax
+lea    -0x92(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21ST_Notice_Guild_EnterC1Ev>
+movl   $0x41,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x92(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x92(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,-0x97(%ebp)
+mov    %eax,(%ebx)
+lea    -0x92(%ebp),%eax
+lea    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,-0x8f(%ebp)
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x92(%ebp),%eax
+lea    0x8(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x56(%ebp)
-movb   $0x0,-0x52(%ebp)
+mov    %eax,(%edx)
 mov    0xc(%ebp),%eax
 add    $0x14,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x97(%ebp),%eax
+lea    -0x92(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x97(%ebp),%eax
+lea    -0x92(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x93(%ebp)
-lea    -0x97(%ebp),%eax
+lea    -0x92(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj+0x1fb>
-nop
 add    $0xb0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::GuildJoin(CGuild*, STGuildJoinInfo*, unsigned int) */

void CPacketTranslater::_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj
               (CGuild *param_1,STGuildJoinInfo *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  void *__src;
  undefined4 local_9b;
  undefined4 local_97;
  undefined4 local_93;
  undefined1 auStack_8f [23];
  undefined1 auStack_78 [30];
  uint local_5a;
  undefined1 local_56;
  undefined4 local_55;
  undefined1 auStack_51 [30];
  STGuildJoinInfo local_33;
  STGuildJoinInfo local_32;
  STGuildJoinInfo local_2f;
  undefined1 local_2e;
  undefined4 local_2d;
  CMyFileLog local_14 [8];
  
  if (param_1 != (CGuild *)0x0) {
    cVar2 = CGuild::IsSetGuildDBFlag(param_1,4);
    if ((cVar2 == '\0') && (cVar2 = CGuild::IsSetGuildDBFlag(param_1,0x10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      STGuildMemberProxy::STGuildMemberProxy((STGuildMemberProxy *)&local_55);
      memset(&local_55,0,0x41);
      local_2e = 0;
      local_32 = param_2[0x33];
      local_33 = param_2[0x32];
      local_2f = param_2[0x35];
      memcpy(auStack_51,param_2 + 0x14,0x1d);
      local_55 = *(undefined4 *)(param_2 + 0x10);
      local_2d = 0;
      cVar2 = CGuild::LoadGuildOneMemberProxy(param_1,(STGuildMemberProxy *)&local_55);
      if (cVar2 != '\x01') {
        CGuild::IncTotalCnt_Of_GuildDBInfo(param_1);
      }
      uVar3 = CGuild::GetGuildName(param_1);
      CMyFileLog::CMyFileLog(local_14,"GuildJoin",0xa71);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/GuildModify","GUILD JOIN guild(%s) char(%s)",uVar3,param_2 + 0x14);
    }
    ST_Notice_Guild_Enter::ST_Notice_Guild_Enter((ST_Notice_Guild_Enter *)&local_9b);
    local_9b = CGuild::GetGuildKey(param_1);
    local_93 = *(undefined4 *)(param_2 + 0x10);
    local_5a = param_3;
    local_56 = 0;
    memcpy(auStack_78,param_2 + 0x14,0x1d);
    __src = (void *)CGuild::GetGuildName(param_1);
    memcpy(auStack_8f,__src,0x16);
    local_97 = *(undefined4 *)(param_2 + 8);
    CGuild::NoticeEnterToGuildMember(param_1,(char *)&local_9b);
    CGuild::SendGuildInfoToMembers(param_1,false);
    return;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1963 行）：

```cpp
void CPacketTranslater::GuildJoin(CGuild* guild, STGuildJoinInfo* joinInfo, unsigned int dbid)
{
    if (guild != 0)
    {
        if (guild->IsSetGuildDBFlag(4) != 0 || guild->IsSetGuildDBFlag(0x10) != 0)
        {
            STGuildMemberProxy proxy;
            memset(&proxy, 0, sizeof(proxy));
            *(unsigned int*)((char*)&proxy + 0x10) = *(unsigned int*)((char*)joinInfo + 0x10);
            memcpy((char*)&proxy + 0x14, (char*)joinInfo + 0x14, 0x1d);
            if (guild->LoadGuildOneMemberProxy(proxy) != 1)
            {
                guild->IncTotalCnt_Of_GuildDBInfo();
            }
            DNF_LOG_SCOPE_LINE(0xa71,"./log/GuildModify", "GUILD JOIN guild(%s) char(%s)",
                guild->GetGuildName(), (char*)joinInfo + 0x14);
        }
        ST_Notice_Guild_Enter info;
        memset(&info, 0, sizeof(info));
        *(unsigned int*)((char*)&info + 0) = guild->GetGuildKey();
        *(unsigned int*)((char*)&info + 4) = *(unsigned int*)((char*)joinInfo + 8);
        *(unsigned int*)((char*)&info + 8) = dbid;
        memcpy((char*)&info + 0x23, (char*)joinInfo + 0x14, 0x1d);
        memcpy((char*)&info + 0xc, guild->GetGuildName(), 0x16);
        guild->NoticeEnterToGuildMember((char*)&info);
        guild->SendGuildInfoToMembers(false);
    }
}
```

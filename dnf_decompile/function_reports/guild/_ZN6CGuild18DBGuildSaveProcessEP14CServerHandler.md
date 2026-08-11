# _ZN6CGuild18DBGuildSaveProcessEP14CServerHandler

`CGuild::DBGuildSaveProcess(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d464` | `0x24a` | `0x805354e` | `0x23a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,137 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x4d96(%eax),%eax
 test   %al,%al
-je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x23f>
+je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x234>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x240>
+je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x237>
 mov    0x8(%ebp),%eax
 movzwl 0x4d94(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x4d94(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x4d94(%eax),%eax
 cmp    $0x1,%ax
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x240>
+jbe    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x238>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0xd0>
+je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0xc7>
+movl   $0x171,0x8(%esp)
+movl   $"DBGuildSaveProcess",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%esi
-movl   $0x171,0x8(%esp)
-movl   $&_ZZN6CGuild18DBGuildSaveProcessEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    0x8(%ebp),%edx
+mov    0x18(%edx),%edx
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"[SAVE_INTERVAL]  Guild Key : %d\tGuild Name : %s\t\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x4d94(%eax)
-jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x240>
+jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x238>
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x143>
+jne    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x13a>
 movl   $0x17c,0x8(%esp)
 movl   $&_ZZN6CGuild18DBGuildSaveProcessEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[SAVE_INTERVAL]  pclUser is NULL!",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x4d94(%eax)
-jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x240>
+jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x238>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x227>
+je     <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x21c>
+movl   $0x183,0x8(%esp)
+movl   $"DBGuildSaveProcess",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildExpEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%esi
-movl   $0x183,0x8(%esp)
-movl   $&_ZZN6CGuild18DBGuildSaveProcessEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    0x8(%ebp),%edx
+mov    0x18(%edx),%edx
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"GUILD EXP   Guild Key : %d, Guild Exp : %d",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x0,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x2,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x4d94(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4d96(%eax)
-jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x240>
+jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x238>
 nop
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+jmp    <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler+0x238>
+nop
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBGuildSaveProcess(CServerHandler*) */

void __thiscall
CGuild::_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler(CGuild *this,CServerHandler *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  undefined4 uVar4;
  int iVar5;
  CServerInterface *pCVar6;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [4];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  CUser *local_10;
  
  if (((this[0x4d96] != (CGuild)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (*(short *)(this + 0x4d94) = *(short *)(this + 0x4d94) + 1, 1 < *(ushort *)(this + 0x4d94))) {
    cVar2 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                     *)this);
    if (cVar2 == '\0') {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::begin(local_2c);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_2c);
      local_10 = *(CUser **)(iVar5 + 4);
      if (local_10 == (CUser *)0x0) {
        CMyFileLog::CMyFileLog(local_20,"DBGuildSaveProcess",0x17c);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_20,"./log/Except","[SAVE_INTERVAL]  pclUser is NULL!");
        *(undefined2 *)(this + 0x4d94) = 0;
      }
      else {
        iVar5 = CUser::GetGameServer(local_10);
        if (iVar5 != 0) {
          uVar4 = GetGuildExp(this);
          uVar1 = *(undefined4 *)(this + 0x18);
          CMyFileLog::CMyFileLog(local_18,"DBGuildSaveProcess",0x183);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_18,"./log/Guild","GUILD EXP   Guild Key : %d, Guild Exp : %d",uVar1,uVar4
                    );
          pCVar6 = (CServerInterface *)CUser::GetGameServer(local_10);
          uVar3 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
          SaveGuild(this,uVar3,param_1,0);
          SendGuildInfoToMembers(this,false);
          pCVar6 = (CServerInterface *)CUser::GetGameServer(local_10);
          uVar3 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
          DBSaveGuildMembers(this,uVar3,param_1,'\x02');
        }
        *(undefined2 *)(this + 0x4d94) = 0;
        this[0x4d96] = (CGuild)0x0;
      }
    }
    else {
      uVar4 = GetGuildName(this);
      uVar1 = *(undefined4 *)(this + 0x18);
      CMyFileLog::CMyFileLog(local_28,"DBGuildSaveProcess",0x171);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/Except","[SAVE_INTERVAL]  Guild Key : %d\tGuild Name : %s\t\n",
                 uVar1,uVar4);
      *(undefined2 *)(this + 0x4d94) = 0;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 555 行）：

```cpp
void CGuild::DBGuildSaveProcess(CServerHandler* handler)
{
    if (m_field4d96 == 0 || (m_field1c & 4) == 0)
    {
        return;
    }
    m_field4d94++;
    if (m_field4d94 > 1)
    {
        if (m_members.empty())
        {
            CMyFileLog log("DBGuildSaveProcess", 0x171);
            log("./log/Except", "[SAVE_INTERVAL]  Guild Key : %d\tGuild Name : %s\t\n",
                m_guildKey, GetGuildName());
            m_field4d94 = 0;
        }
        else
        {
            CUser* user = m_members.begin()->second;
            if (user == 0)
            {
                CMyFileLog log(__FUNCTION__, 0x17c);
                log("./log/Except", "[SAVE_INTERVAL]  pclUser is NULL!");
                m_field4d94 = 0;
                return;
            }
            if (user->GetGameServer() != 0)
            {
                CMyFileLog log("DBGuildSaveProcess", 0x183);
                log("./log/Guild", "GUILD EXP   Guild Key : %d, Guild Exp : %d", m_guildKey,
                    GetGuildExp());
                SaveGuild((unsigned char)user->GetGameServer()->GetGroupNo(), handler, 0);
                SendGuildInfoToMembers(false);
                DBSaveGuildMembers((unsigned char)user->GetGameServer()->GetGroupNo(), handler, 2);
            }
            m_field4d94 = 0;
            m_field4d96 = 0;
        }
    }
}
```

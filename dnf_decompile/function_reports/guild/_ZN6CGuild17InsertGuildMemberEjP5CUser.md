# _ZN6CGuild17InsertGuildMemberEjP5CUser

`CGuild::InsertGuildMember(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808cec6` | `0x10f` | `0x8052f8e` | `0x106` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x4c,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xff>
+jne    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x1a>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xfb>
 mov    0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11AttachGuildEP6CGuild>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP5CUserEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
-lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%ecx
+lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x34(%ebp),%eax
+movzbl -0x2c(%ebp),%eax
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x82>
-mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
+je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xf6>
+movl   $0x7b,0x8(%esp)
+movl   $"InsertGuildMember",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
 mov    %eax,%edi
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%esi
-mov    0xc(%ebp),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,%ebx
+mov    0xc(%ebp),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
-movl   $0x7b,0x8(%esp)
-movl   $"InsertGuildMember",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"[INSERT_ERR]\tAlready Exist : Guild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
-mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xfb>
+mov    $0x1,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::InsertGuildMember(unsigned int, CUser*) */

undefined4 __thiscall
CGuild::_ZN6CGuild17InsertGuildMemberEjP5CUser(CGuild *this,uint param_1,CUser *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  pair local_3c [4];
  char local_38;
  pair<unsigned_int_const,CUser*> local_34 [8];
  uint local_2c [2];
  CMyFileLog local_24 [20];
  
  if (param_2 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    CUser::AttachGuild(param_2,this);
    std::make_pair<unsigned_int&,CUser*&>(local_2c,(CUser **)&param_1);
    std::pair<unsigned_int_const,CUser*>::pair<unsigned_int,CUser*>(local_34,(pair *)local_2c);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::insert(local_3c);
    if (local_38 == '\0') {
      uVar2 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::size((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                      *)this);
      uVar3 = CUser::GetCharName(param_2);
      uVar1 = param_1;
      uVar4 = GetGuildKey(this);
      CMyFileLog::CMyFileLog(local_24,"InsertGuildMember",0x7b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/GuildMember",
                 "[INSERT_ERR]\tAlready Exist : Guild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n"
                 ,uVar4,uVar1,uVar3,uVar2);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 382 行）：

```cpp
int CGuild::InsertGuildMember(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    user->AttachGuild(this);
    std::pair<std::map<unsigned int, CUser*>::iterator, bool> r =
        m_members.insert(std::make_pair(charNo, user));
    if (!r.second)
    {
        DNF_LOG_SCOPE_LINE(0x7b,"./log/GuildMember",
            "[INSERT_ERR]\tAlready Exist : Guild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",
            GetGuildKey(), charNo, user->GetCharName(), (int)m_members.size());
        return 0;
    }
    return 1;
}
```

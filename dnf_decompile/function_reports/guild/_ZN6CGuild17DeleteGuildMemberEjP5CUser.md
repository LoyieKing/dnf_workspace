# _ZN6CGuild17DeleteGuildMemberEjP5CUser

`CGuild::DeleteGuildMember(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808cfd6` | `0x151` | `0x8052f2e` | `0x14f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x146>
+jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x144>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x32>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x146>
+jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x144>
 mov    0x8(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseERS5_>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x84>
 movl   $0x2,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17IsSetGuildMemFlagEt>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x7a>
 movl   $0x8,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetGuildMemFlagEt>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x146>
+jmp    <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x144>
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEeqERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x141>
+je     <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser+0x13f>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
-mov    %eax,%edi
+mov    %eax,-0x2c(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%esi
-mov    0xc(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+mov    0xc(%ebp),%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xaf,0x8(%esp)
 movl   $&_ZZN6CGuild17DeleteGuildMemberEjP5CUserE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x18(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x10(%esp)
+mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CGuild::DeleteGuildMember\tException Break Possible! Or Check Using Function FindUser() or FindUser_CharNo()\tGuild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
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

/* CGuild::DeleteGuildMember(unsigned int, CUser*) */

undefined4 __thiscall
CGuild::_ZN6CGuild17DeleteGuildMemberEjP5CUser(CGuild *this,uint param_1,CUser *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> local_2c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_28 [4];
  CMyFileLog local_24 [20];
  
  if (param_2 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                     *)this);
    if (cVar1 == '\0') {
      iVar3 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::erase((uint *)this);
      if (iVar3 == 0) {
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::find((uint *)local_2c);
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::end(local_28);
        cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator==
                          (local_2c,(_Rb_tree_iterator *)local_28);
        if (cVar1 != '\0') {
          uVar2 = std::
                  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                  ::size((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                          *)this);
          uVar4 = CUser::GetCharName(param_2);
          uVar5 = GetGuildKey(this);
          CMyFileLog::CMyFileLog(local_24,"DeleteGuildMember",0xaf);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_24,"./log/Except",
                     "CGuild::DeleteGuildMember\tException Break Possible! Or Check Using Function FindUser() or FindUser_CharNo()\tGuild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n"
                     ,uVar5,param_1,uVar4,uVar2);
        }
        uVar2 = 0;
      }
      else {
        cVar1 = CUser::IsSetGuildMemFlag(param_2,2);
        if (cVar1 != '\x01') {
          CUser::_ZN5CUser15SetGuildMemFlagEt(param_2,8);
        }
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 496 行）：

```cpp
int CGuild::DeleteGuildMember(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    if (m_members.empty())
    {
        return 0;
    }
    if (m_members.erase(charNo) != 0)
    {
        if (user->IsSetGuildMemFlag(2) != 1)
        {
            user->SetGuildMemFlag(8);
        }
        return 1;
    }
    // ORIG：erase 失败时先 find，仅当成员仍存在才打日志
    std::map<unsigned int, CUser*>::iterator it = m_members.find(charNo);
    if (it != m_members.end())
    {
        DNF_LOG_SCOPE_LINE(0xaf,"./log/Except",
            "CGuild::DeleteGuildMember\tException Break Possible! Or Check Using Function FindUser() or FindUser_CharNo()\tGuild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",
            GetGuildKey(), charNo, user->GetCharName(), (int)m_members.size());
    }
    return 0;
}
```

# _ZN14CMemberManager15MemberMemLogoutEjP5CUserb

`CMemberManager::MemberMemLogout(unsigned int, CUser*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809aa62` | `0x23a` | `0x8061d36` | `0x245` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,158 +1,158 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x4c(%ebp)
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x22>
+je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x160>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xfe>
-lea    -0x35(%ebp),%eax
+je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x160>
+cmpl   $0x0,0xc(%ebp)
+jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x78>
+mov    0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0x23b,0x8(%esp)
+movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!",0x8(%esp)
+movl   $"./log/MemberMember",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x23d>
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xd5>
+movl   $0x241,0x8(%esp)
+movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x23d>
+movl   $0x0,0x8(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
+movzbl -0x4c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager12DeleteMemberEjb>
+mov    %al,-0x19(%ebp)
+cmpb   $0x1,-0x19(%ebp)
+je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x23c>
+movzbl -0x4c(%ebp),%ebx
+movl   $0x24b,0x8(%esp)
+movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"<Delete Member Error> CMemberManager::MemberMemLogout\tdeleteOrCash(%d), Member Key(%d)",0x8(%esp)
+movl   $"./log/MemberMember",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x23d>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CMemberManager::MemberMemLogout\t0 == pclUser || 0 == m_pclApp\n",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xa1>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1df>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x9b>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1d9>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xc0>
+jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1fe>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xc0>
-lea    -0x3c(%ebp),%eax
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1fe>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xdb>
+jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x219>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0xc0>
+jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1fe>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x150>
-mov    0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x23b,0x8(%esp)
-movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!",0x8(%esp)
-movl   $"./log/MemberMember",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x232>
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x1b2>
-movl   $0x241,0x8(%esp)
-movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x232>
-movl   $0x0,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
-movzbl -0x4c(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager12DeleteMemberEjb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb+0x232>
-movzbl -0x4c(%ebp),%ebx
-movl   $0x24b,0x8(%esp)
-movl   $&_ZZN14CMemberManager15MemberMemLogoutEjP5CUserbE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"<Delete Member Error> CMemberManager::MemberMemLogout\tdeleteOrCash(%d), Member Key(%d)",0x8(%esp)
-movl   $"./log/MemberMember",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+nop
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::MemberMemLogout(unsigned int, CUser*, bool) */

void __thiscall
CMemberManager::_ZN14CMemberManager15MemberMemLogoutEjP5CUserb
          (CMemberManager *this,uint param_1,CUser *param_2,bool param_3)

{
  char cVar1;
  CDNFException *this_00;
  undefined4 uVar2;
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMember *local_20;
  
  if ((param_2 != (CUser *)0x0) && (*(int *)this != 0)) {
    if (param_1 == 0) {
      uVar2 = CUser::GetUniqCharNo(param_2);
      CMyFileLog::CMyFileLog(local_38,"MemberMemLogout",0x23b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/MemberMember",
                 "CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!"
                 ,uVar2);
    }
    else {
      local_20 = (CMember *)_ZN14CMemberManager10FindMemberEj((uint)this);
      if (local_20 == (CMember *)0x0) {
        CMyFileLog::CMyFileLog(local_30,"MemberMemLogout",0x241);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_30,"./log/Except",
                   "CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)",param_1);
      }
      else {
        CMember::NoticeMemberLogin_Out(local_20,param_2,'\0');
        cVar1 = _ZN14CMemberManager12DeleteMemberEjb(this,param_1,param_3);
        if (cVar1 != '\x01') {
          CMyFileLog::CMyFileLog(local_28,"MemberMemLogout",0x24b);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_28,"./log/MemberMember",
                     "<Delete Member Error> CMemberManager::MemberMemLogout\tdeleteOrCash(%d), Member Key(%d)"
                     ,(uint)param_3,param_1);
        }
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0809aaa4 to 0809aaa8 has its CatchHandler @ 0809ab1e */
  std::string::string(local_40,"CMemberManager::MemberMemLogout\t0 == pclUser || 0 == m_pclApp\n",
                      &local_39);
  this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809aac3 to 0809aac7 has its CatchHandler @ 0809aaca */
  CDNFException::CDNFException(this_00,local_40);
                    /* try { // try from 0809ab09 to 0809ab0d has its CatchHandler @ 0809ab10 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 120 行）：

```cpp
void CMemberManager::MemberMemLogout(unsigned int key, CUser* user, bool cash)
{
    if (user != 0 && m_app != 0)
    {
        if (key == 0)
        {
            DNF_LOG_SCOPE_LINE(0x23b,"./log/MemberMember",
                "CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!",
                user->GetUniqCharNo());
        }
        else
        {
            CMember* member = FindMember(key);
            if (member == 0)
            {
                DNF_LOG_SCOPE_LINE(0x241,"./log/Except",
                    "CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)", key);
            }
            else
            {
                member->NoticeMemberLogin_Out(user, 0);
                char ok = (char)DeleteMember(key, cash);
                if (ok != 1)
                {
                    DNF_LOG_SCOPE_LINE(0x24b,"./log/MemberMember",
                        "<Delete Member Error> CMemberManager::MemberMemLogout\tdeleteOrCash(%d), Member Key(%d)",
                        (unsigned int)cash, key);
                }
            }
        }
        return;
    }
    throw CDNFException("CMemberManager::MemberMemLogout\t0 == pclUser || 0 == m_pclApp\n");
}
```

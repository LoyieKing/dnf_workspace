# _ZN5CUser19RegisterToBlackListEjPc

`CUser::RegisterToBlackList(unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d6ce` | `0xf9` | `0x8089916` | `0x116` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x54,%esp
+sub    $0x4c,%esp
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN5CUser19RegisterToBlackListEjPc+0x14>
+je     <T> <_ZN5CUser19RegisterToBlackListEjPc+0x16>
 mov    0xc(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN5CUser19RegisterToBlackListEjPc+0x62>
+jne    <T> <_ZN5CUser19RegisterToBlackListEjPc+0x64>
 mov    0xc(%ebp),%ebx
 movl   $0x16e,0x8(%esp)
 movl   $&_ZZN5CUser19RegisterToBlackListEjPcE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Register Err(%d)(%s)",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN5CUser19RegisterToBlackListEjPc+0xf4>
+jmp    <T> <_ZN5CUser19RegisterToBlackListEjPc+0x10b>
 movl   $0x28,(%esp)
 call   <T> <_ZN10CBlackUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUserC1Ev>
+jmp    <T> <_ZN5CUser19RegisterToBlackListEjPc+0x96>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZN10CBlackUserdlEPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,-0x2c(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%edx
 mov    -0x2c(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUser12SetBlackUserEPcj>
-lea    -0x10(%ebp),%eax
-lea    -0x2c(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRP10CBlackUserESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP10CBlackUserEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP10CBlackUserEC1IRjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%eax
-mov    -0x4(%ebp),%ebx
-leave
+movzbl -0x30(%ebp),%eax
+test   %al,%al
+je     <T> <_ZN5CUser19RegisterToBlackListEjPc+0x106>
+mov    $0x1,%eax
+jmp    <T> <_ZN5CUser19RegisterToBlackListEjPc+0x10b>
+mov    $0x0,%eax
+lea    -0xc(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::RegisterToBlackList(unsigned int, char*) */

undefined1 __thiscall
CUser::_ZN5CUser19RegisterToBlackListEjPc(CUser *this,uint param_1,char *param_2)

{
  CBlackUser *this_00;
  uint uVar1;
  uint in_stack_ffffffa8;
  CMyFileLog local_2c [8];
  pair local_24 [4];
  undefined1 local_20;
  pair<unsigned_int_const,CBlackUser*> local_1c [8];
  uint local_14 [3];
  
  uVar1 = param_1;
  if ((param_2 == (char *)0x0) || (param_1 == 0)) {
    CMyFileLog::CMyFileLog(local_2c,"RegisterToBlackList",0x16e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/BlackList","Register Err(%d)(%s)",uVar1,param_2);
    local_20 = 0;
  }
  else {
    this_00 = CBlackUser::operator_new((CBlackUser *)0x28,in_stack_ffffffa8);
    CBlackUser::CBlackUser(this_00);
    uVar1 = time((time_t *)0x0);
    CBlackUser::_ZN10CBlackUser12SetBlackUserEPcj(this_00,param_2,uVar1);
    std::make_pair<unsigned_int&,CBlackUser*&>(local_14,(CBlackUser **)&param_1);
    std::pair<unsigned_int_const,CBlackUser*>::pair<unsigned_int,CBlackUser*>
              (local_1c,(pair *)local_14);
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::insert(local_24);
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 504 行）：

```cpp
char CUser::RegisterToBlackList(unsigned int charNo, char* name)
{
    if (name == 0 || charNo == 0)
    {
        DNF_LOG_SCOPE_LINE(0x16e, "./log/BlackList", "Register Err(%d)(%s)", charNo, name);
        return 0;
    }
    CBlackUser* user = new CBlackUser;
    user->SetBlackUser(name, (unsigned int)time(0));
    std::pair<std::map<unsigned int, CBlackUser*>::iterator, bool> r =
        m_blackList.insert(std::pair<const unsigned int, CBlackUser*>(charNo, user));
    return r.second ? 1 : 0;
}
```

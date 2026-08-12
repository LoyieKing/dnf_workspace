# _ZN5CUser19RegisterToBlackListEjPcj

`CUser::RegisterToBlackList(unsigned int, char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d7c8` | `0x93` | `0x80899f0` | `0xb5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x34,%esp
+sub    $0x3c,%esp
 movl   $0x28,(%esp)
 call   <T> <_ZN10CBlackUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUserC1Ev>
+jmp    <T> <_ZN5CUser19RegisterToBlackListEjPcj+0x3b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZN10CBlackUserdlEPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUser12SetBlackUserEPcj>
-lea    -0x10(%ebp),%eax
-lea    -0x24(%ebp),%edx
+lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP10CBlackUserESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP10CBlackUserEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%eax
-mov    -0x4(%ebp),%ebx
-leave
+movzbl -0x30(%ebp),%eax
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

/* CUser::RegisterToBlackList(unsigned int, char*, unsigned int) */

undefined1 __thiscall
CUser::_ZN5CUser19RegisterToBlackListEjPcj(CUser *this,uint param_1,char *param_2,uint param_3)

{
  CBlackUser *this_00;
  uint in_stack_ffffffc8;
  pair local_24 [4];
  undefined1 local_20;
  pair<unsigned_int_const,CBlackUser*> local_1c [8];
  uint local_14 [3];
  
  this_00 = CBlackUser::operator_new((CBlackUser *)0x28,in_stack_ffffffc8);
  CBlackUser::CBlackUser(this_00);
  CBlackUser::_ZN10CBlackUser12SetBlackUserEPcj(this_00,param_2,param_3);
  std::make_pair<unsigned_int&,CBlackUser*&>(local_14,(CBlackUser **)&param_1);
  std::pair<unsigned_int_const,CBlackUser*>::pair<unsigned_int,CBlackUser*>
            (local_1c,(pair *)local_14);
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::insert(local_24);
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 517 行）：

```cpp
char CUser::RegisterToBlackList(unsigned int charNo, char* name, unsigned int time)
{
    CBlackUser* user = new CBlackUser;
    user->SetBlackUser(name, time);
    std::pair<std::map<unsigned int, CBlackUser*>::iterator, bool> r =
        m_blackList.insert(std::make_pair(charNo, user));
    return r.second;
}
```

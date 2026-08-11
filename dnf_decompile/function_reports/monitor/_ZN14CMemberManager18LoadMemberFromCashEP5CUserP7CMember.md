# _ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember

`CMemberManager::LoadMemberFromCash(CUser*, CMember*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809aef0` | `0x6d` | `0x8061a56` | `0x74` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x12>
+jne    <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x13>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x72>
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x19>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x6b>
+je     <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x6d>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember12GetMemberKeyEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager12InsertMemberEjP7CMember>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12AttachMemberEP7CMember>
 movl   $0x1,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
 mov    $0x1,%eax
+jmp    <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember+0x72>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::LoadMemberFromCash(CUser*, CMember*) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember
          (CMemberManager *this,CUser *param_1,CMember *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_2 == (CMember *)0x0) || (param_1 == (CUser *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = CMember::GetMemberKey(param_2);
    _ZN14CMemberManager12InsertMemberEjP7CMember(this,uVar2,param_2);
    CUser::AttachMember(param_1,param_2);
    CMember::NoticeMemberLogin_Out(param_2,param_1,'\x01');
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 82 行）：

```cpp
char CMemberManager::LoadMemberFromCash(CUser* user, CMember* member)
{
    if (member == 0)
    {
        return 0;
    }
    if (user != 0)
    {
        InsertMember(member->GetMemberKey(), member);
        user->AttachMember(member);
        member->NoticeMemberLogin_Out(user, 1);
        return 1;
    }
    return 0;
}
```

# _ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_

`CMemberManager::CheckMemberEnter(CUser*, CMember*, CUser*, CMember*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809b122` | `0xce` | `0x8062ae0` | `0xce` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0x13>
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0x1d>
 mov    $0x31,%eax
 jmp    <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0xc8>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 mov    %eax,%ebx
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 cmp    %ax,%bx
 setl   %al
 test   %al,%al
 je     <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0x70>
 movl   $0x2,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i>
 jmp    <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0xc8>
+mov    0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %eax,%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%ebx
-mov    0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
 cmp    %ax,%bx
-setg   %al
+setl   %al
 test   %al,%al
 je     <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0xc3>
 movl   $0x1,0x14(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i>
 jmp    <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_+0xc8>
 mov    $0x2c,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::CheckMemberEnter(CUser*, CMember*, CUser*, CMember*) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_
          (CMemberManager *this,CUser *param_1,CMember *param_2,CUser *param_3,CMember *param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  
  if ((param_1 == (CUser *)0x0) || (param_3 == (CUser *)0x0)) {
    uVar3 = 0x31;
  }
  else {
    sVar1 = CUser::GetLevel(param_1);
    sVar2 = CUser::GetLevel(param_3);
    if (sVar1 < sVar2) {
      uVar3 = IsPossableMemberEnter(this,param_3,param_4,param_1,param_2,2);
    }
    else {
      sVar1 = CUser::GetLevel(param_1);
      sVar2 = CUser::GetLevel(param_3);
      if (sVar2 < sVar1) {
        uVar3 = IsPossableMemberEnter(this,param_1,param_2,param_3,param_4,1);
      }
      else {
        uVar3 = 0x2c;
      }
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 475 行）：

```cpp
int CMemberManager::CheckMemberEnter(CUser* u1, CMember* m1, CUser* u2, CMember* m2)
{
    if (u1 == 0 || u2 == 0)
    {
        return 0x31;
    }
    if (u1->GetLevel() < u2->GetLevel())
    {
        return IsPossableMemberEnter(u2, m2, u1, m1, 2);
    }
    if (u2->GetLevel() < u1->GetLevel())
    {
        return IsPossableMemberEnter(u1, m1, u2, m2, 1);
    }
    return 0x2c;
}
```

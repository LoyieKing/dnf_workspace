# _ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb

`CMemberManager::RegisterMember(CMember*, short, CUser*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099f66` | `0x112` | `0x8062958` | `0x116` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,87 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x10(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dx,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x22>
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x2c>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 cmp    -0x1c(%ebp),%ax
 setg   %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x95>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x97>
 movzbl -0x20(%ebp),%edi
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ebx
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 movzbl %al,%esi
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17InsertUpperMemberEjhPKcb>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 cmp    -0x1c(%ebp),%ax
 setl   %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0xfe>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x102>
 movzbl -0x20(%ebp),%edi
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ebx
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 movzbl %al,%esi
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17InsertLowerMemberEjhPKcb>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
 mov    $0x1,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::RegisterMember(CMember*, short, CUser*, bool) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb
          (CMemberManager *this,CMember *param_1,short param_2,CUser *param_3,bool param_4)

{
  uchar uVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_1 == (CMember *)0x0) || (param_3 == (CUser *)0x0)) {
    return 0;
  }
  sVar3 = CUser::GetLevel(param_3);
  if (param_2 < sVar3) {
    pcVar4 = (char *)CUser::GetCharName(param_3);
    uVar1 = CUser::GetLevel(param_3);
    uVar5 = CUser::GetUniqCharNo(param_3);
    cVar2 = CMember::InsertUpperMember(param_1,uVar5,uVar1,pcVar4,param_4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    sVar3 = CUser::GetLevel(param_3);
    if (param_2 <= sVar3) {
      return 0;
    }
    pcVar4 = (char *)CUser::GetCharName(param_3);
    uVar1 = CUser::GetLevel(param_3);
    uVar5 = CUser::GetUniqCharNo(param_3);
    cVar2 = CMember::InsertLowerMember(param_1,uVar5,uVar1,pcVar4,param_4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 421 行）：

```cpp
int CMemberManager::RegisterMember(CMember* member, short level, CUser* user, bool flag)
{
    if (member == 0 || user == 0)
    {
        return 0;
    }
    if (level < user->GetLevel())
    {
        if (!member->InsertUpperMember(user->GetUniqCharNo(),
                                       (unsigned char)user->GetLevel(), user->GetCharName(),
                                       flag))
        {
            return 0;
        }
    }
    else if (user->GetLevel() < level)
    {
        if (!member->InsertLowerMember(user->GetUniqCharNo(),
                                       (unsigned char)user->GetLevel(), user->GetCharName(),
                                       flag))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}
```

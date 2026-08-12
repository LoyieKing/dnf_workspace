# _ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i

`CMemberManager::IsPossableMemberEnter(CUser*, CMember*, CUser*, CMember*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809afe4` | `0x13d` | `0x806202c` | `0x146` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x38,%esp
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12>
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1d>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1c>
 mov    $0x31,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 cmp    $0x11,%ax
 setle  %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3d>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3c>
 mov    $0x2e,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember12IsThereUpperEv>
 test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x6c>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x68>
 cmpl   $0x2,0x1c(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x62>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x5e>
 mov    $0x35,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x63>
 mov    $0x2b,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x8a>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x86>
 mov    $0x2d,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
-cmpl   $0xffffffff,-0xc(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
-cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
+cmpl   $0xffffffff,-0x1c(%ebp)
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
+cmpl   $0x0,-0x1c(%ebp)
+jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
 cmpl   $0x2,0x1c(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x9f>
 mov    $0x35,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa4>
 mov    $0x2b,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember15FindLowerMemberEj>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xed>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xf0>
 cmpl   $0x2,0x1c(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe9>
 mov    $0x33,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xee>
 mov    $0x32,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember19GetLowerMemberCountEv>
-mov    %eax,%ebx
+mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
+mov    %ax,-0xe(%ebp)
+movswl -0xe(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj>
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+ja     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
 cmpl   $0x2,0x1c(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12b>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x138>
 mov    $0x2a,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13d>
 mov    $0x34,%eax
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
 mov    $0x0,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::IsPossableMemberEnter(CUser*, CMember*, CUser*, CMember*, int) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i
          (CMemberManager *this,CUser *param_1,CMember *param_2,CUser *param_3,CMember *param_4,
          int param_5)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_3 == (CUser *)0x0) || (param_1 == (CUser *)0x0)) {
    uVar3 = 0x31;
  }
  else {
    sVar2 = CUser::GetLevel(param_1);
    if (sVar2 < 0x12) {
      uVar3 = 0x2e;
    }
    else {
      if (param_4 != (CMember *)0x0) {
        cVar1 = CMember::IsThereUpper(param_4);
        if (cVar1 != '\0') {
          if (param_5 == 2) {
            return 0x35;
          }
          return 0x2b;
        }
        iVar4 = CMember::GetUpperMember_CharId(param_4);
        if (iVar4 == 0) {
          return 0x2d;
        }
        if ((iVar4 != -1) && (0 < iVar4)) {
          if (param_5 == 2) {
            return 0x35;
          }
          return 0x2b;
        }
      }
      if (param_2 != (CMember *)0x0) {
        uVar5 = CUser::GetUniqCharNo(param_3);
        iVar4 = CMember::FindLowerMember(param_2,uVar5);
        if (iVar4 != 0) {
          if (param_5 == 2) {
            return 0x33;
          }
          return 0x32;
        }
        uVar5 = CMember::GetLowerMemberCount(param_2);
        sVar2 = CUser::GetLevel(param_1);
        uVar6 = GetLowerMemberEnterLimit(this,(int)sVar2);
        if (uVar6 <= uVar5) {
          if (param_5 == 2) {
            return 0x2a;
          }
          return 0x34;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h 等 299 个文件*

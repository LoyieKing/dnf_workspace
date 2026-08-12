# _ZN10CDBManager21SaveGuildWarPointListEiPjS0_

`CDBManager::SaveGuildWarPointList(int, unsigned int*, unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80756c2` | `0x145` | `0x804ea92` | `0x137` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x38,%esp
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x14>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
 cmpl   $0x0,0x14(%ebp)
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1e>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x12a>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x121>
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x125>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0x14(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x14(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d",0x8(%esp)
 movl   $0x4e3c,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf6>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf4>
+movl   $0x9b7,0x8(%esp)
+movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0x10(%ebp),%eax
-mov    (%eax),%esi
+mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0x14(%ebp),%eax
-mov    (%eax),%ebx
-movl   $0x9b7,0x8(%esp)
-movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveGuildWarPointList() update guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e3c,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x126>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11d>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
 nop
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x9,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x33>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x31>
 mov    $0x1,%eax
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveGuildWarPointList(int, unsigned int*, unsigned int*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21SaveGuildWarPointListEiPjS0_
          (CDBManager *this,int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  if ((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    local_14 = *(int **)(this + 0x20);
    for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
      if (param_2[local_10] != 0) {
        cVar3 = (**(code **)(*local_14 + 0x1c))
                          (local_14,0x4e3c,
                           "upDate guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d"
                           ,param_3[local_10],param_1,param_2[local_10]);
        if (cVar3 != '\x01') {
          uVar1 = param_2[local_10];
          uVar2 = param_3[local_10];
          CMyFileLog::CMyFileLog(local_20,"SaveGuildWarPointList",0x9b7);
          CMyFileLog::operator()
                    (local_20,"./log/DBQueryErr",
                     "CDBManager::SaveGuildWarPointList() update guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d"
                     ,uVar2,param_1,uVar1);
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e3c);
        if (local_15 != '\x01') {
          return 0;
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

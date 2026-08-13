# _ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly

`CDBManager::SaveGuildSkill(unsigned char, unsigned int, STGuildDBInfoOnly&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8072390` | `0x198` | `0x804e6fe` | `0x19c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,132 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x28,%eax
 mov    (%eax),%ecx
 mov    0x14(%ebp),%eax
-movzbl 0x44(%eax),%eax
+add    $0x44,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 mov    0x14(%ebp),%edx
-movzbl 0x44(%edx),%edx
+add    $0x44,%edx
+movzbl (%edx),%edx
 movzbl %dl,%ecx
 mov    0x14(%ebp),%edx
-movzwl 0x42(%edx),%edx
+add    $0x42,%edx
+movzwl (%edx),%edx
 movzwl %dx,%edx
 mov    0x10(%ebp),%ebx
 mov    %ebx,0x18(%esp)
 mov    %eax,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 movl   $"upDate guild_skill set remain_sp = %d, used_sp = %d, skill_slot = '%s' where guild_id = %d",0x8(%esp)
 movl   $0x4e55,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e55,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xd9>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe0>
 mov    $0x1,%eax
 jmp    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe5>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x18c>
+je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x190>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x28,%eax
 mov    (%eax),%ecx
 mov    0x14(%ebp),%eax
-movzbl 0x44(%eax),%eax
+add    $0x44,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 mov    0x14(%ebp),%edx
-movzbl 0x44(%edx),%edx
+add    $0x44,%edx
+movzbl (%edx),%edx
 movzbl %dl,%ecx
 mov    0x14(%ebp),%edx
-movzwl 0x42(%edx),%edx
+add    $0x42,%edx
+movzwl (%edx),%edx
 movzwl %dx,%edx
 mov    %eax,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_skill set guild_id= %d, remain_sp = %d, used_sp = %d, skill_slot = '%s'",0x8(%esp)
 movl   $0x4e59,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e59,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
 mov    $0x1,%eax
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveGuildSkill(unsigned char, unsigned int, STGuildDBInfoOnly&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly
          (CDBManager *this,uchar param_1,uint param_2,STGuildDBInfoOnly *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  piVar1 = *(int **)(this + 0x20);
  pcVar2 = *(code **)(*piVar1 + 0x1c);
  uVar5 = (**(code **)(*piVar1 + 0x28))(piVar1,0,param_3 + 0x45,(uint)(byte)param_3[0x44] * 5);
  (*pcVar2)(piVar1,0x4e55,
            "upDate guild_skill set remain_sp = %d, used_sp = %d, skill_slot = \'%s\' where guild_id = %d"
            ,*(undefined2 *)(param_3 + 0x42),param_3[0x44],uVar5,param_2);
  cVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e55);
  if (cVar4 == '\x01') {
    lVar6 = (**(code **)(*piVar1 + 0x74))(piVar1);
    if (lVar6 != 0) {
      bVar3 = false;
      goto LAB_08072475;
    }
  }
  bVar3 = true;
LAB_08072475:
  if (bVar3) {
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    uVar5 = (**(code **)(*piVar1 + 0x28))(piVar1,0,param_3 + 0x45,(uint)(byte)param_3[0x44] * 5);
    (*pcVar2)(piVar1,0x4e59,
              "inSert into guild_skill set guild_id= %d, remain_sp = %d, used_sp = %d, skill_slot = \'%s\'"
              ,param_2,*(undefined2 *)(param_3 + 0x42),param_3[0x44],uVar5);
    (**(code **)(*piVar1 + 0x20))(piVar1,0x4e59);
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

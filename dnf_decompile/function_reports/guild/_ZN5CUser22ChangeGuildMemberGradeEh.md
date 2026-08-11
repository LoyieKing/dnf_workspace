# _ZN5CUser22ChangeGuildMemberGradeEh

`CUser::ChangeGuildMemberGrade(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066dc0` | `0xb5` | `0x808942a` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x40,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x2c(%ebp)
-cmpb   $0x1,-0x2c(%ebp)
-je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x31>
-cmpb   $0x2,-0x2c(%ebp)
-je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x31>
+mov    %al,-0x1c(%ebp)
+cmpb   $0x1,-0x1c(%ebp)
+je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x34>
+cmpb   $0x2,-0x1c(%ebp)
+je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x34>
 mov    0x8(%ebp),%eax
-movzbl 0x5f(%eax),%eax
+add    $0x5f,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x31>
+je     <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x34>
 mov    0x8(%ebp),%eax
-movzbl 0x5f(%eax),%eax
+add    $0x5f,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x8e>
-movzbl -0x2c(%ebp),%edi
+jne    <T> <_ZN5CUser22ChangeGuildMemberGradeEh+0x91>
+movl   $0x183,0x8(%esp)
+movl   $"ChangeGuildMemberGrade",0x4(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x1c(%ebp),%esi
 mov    0x8(%ebp),%eax
-movzbl 0x5f(%eax),%eax
-movzbl %al,%esi
+add    $0x5f,%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-movl   $0x183,0x8(%esp)
-movl   $"ChangeGuildMemberGrade",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"char(%s), old(%d), new(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
-movzbl -0x2c(%ebp),%edx
-mov    %dl,0x5f(%eax)
+lea    0x5f(%eax),%edx
+movzbl -0x1c(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x4a,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo>
-add    $0x4c,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ChangeGuildMemberGrade(unsigned char) */

void __thiscall CUser::_ZN5CUser22ChangeGuildMemberGradeEh(CUser *this,uchar param_1)

{
  CUser CVar1;
  undefined4 uVar2;
  CMyFileLog local_24 [20];
  
  if ((((param_1 == '\x01') || (param_1 == '\x02')) || (this[0x5f] == (CUser)0x1)) ||
     (this[0x5f] == (CUser)0x2)) {
    CVar1 = this[0x5f];
    uVar2 = GetCharName(this);
    CMyFileLog::CMyFileLog(local_24,"ChangeGuildMemberGrade",0x183);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildModify","char(%s), old(%d), new(%d)",uVar2,(uint)(byte)CVar1,
               (uint)param_1);
  }
  this[0x5f] = (CUser)param_1;
  _ZN5CUser21SendGuildMemberDBInfoER18STGuildMemerDBInfo(this,(STGuildMemerDBInfo *)(this + 0x4a));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 299 行）：

```cpp
void CUser::ChangeGuildMemberGrade(unsigned char grade)
{
    if (grade == 1 || grade == 2 || *(unsigned char*)((char*)this + 0x5f) == 1 ||
        *(unsigned char*)((char*)this + 0x5f) == 2)
    {
        DNF_LOG_SCOPE_LINE(0x183, "./log/GuildModify", "char(%s), old(%d), new(%d)", GetCharName(),
            (unsigned int)*(unsigned char*)((char*)this + 0x5f), (unsigned int)grade);
    }
    *(unsigned char*)((char*)this + 0x5f) = grade;
    SendGuildMemberDBInfo(*(STGuildMemerDBInfo*)((char*)this + 0x4a));
}
```

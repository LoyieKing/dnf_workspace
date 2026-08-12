# _ZN14CMemberManager21NoticeLevelUpToLowersEjj

`CMemberManager::NoticeLevelUpToLowers(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a2c6` | `0xb8` | `0x8062540` | `0xbb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj+0xb2>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj+0xb5>
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj>
-movzbl %al,%eax
+mov    %al,-0xa(%ebp)
+movzbl -0xa(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21NoticeLevelUpToLowersEj>
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj>
-movzbl %al,%ebx
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%ebx
 movl   $0x180,0x8(%esp)
 movl   $&_ZZN14CMemberManager21NoticeLevelUpToLowersEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Member Level Up! Char Id(%d), Exp(%d), Level(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::NoticeLevelUpToLowers(unsigned int, unsigned int) */

void __thiscall
CMemberManager::_ZN14CMemberManager21NoticeLevelUpToLowersEjj
          (CMemberManager *this,uint param_1,uint param_2)

{
  uint uVar1;
  CMyFileLog local_18 [8];
  CMember *local_10;
  
  local_10 = (CMember *)_ZN14CMemberManager10FindMemberEj((uint)this);
  if (local_10 != (CMember *)0x0) {
    uVar1 = CMemberExpTbl::_ZN13CMemberExpTbl17GetMemberExpLevelEj
                      (*(CMemberExpTbl **)(this + 0x24),param_2);
    CMember::NoticeLevelUpToLowers(local_10,uVar1 & 0xff);
    uVar1 = CMemberExpTbl::_ZN13CMemberExpTbl17GetMemberExpLevelEj
                      (*(CMemberExpTbl **)(this + 0x24),param_2);
    CMyFileLog::CMyFileLog(local_18,"NoticeLevelUpToLowers",0x180);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/MemberModify","Member Level Up! Char Id(%d), Exp(%d), Level(%d)",
               param_1,param_2,uVar1 & 0xff);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 322 行）：

```cpp
void CMemberManager::NoticeLevelUpToLowers(unsigned int upperCharId, unsigned int exp)
{
    CMember* upper = FindMember(upperCharId);
    if (upper != 0)
    {
        unsigned char level = (unsigned char)m_memberExpTbl->GetMemberExpLevel(exp);
        upper->NoticeLevelUpToLowers(level);
        unsigned char level2 = (unsigned char)m_memberExpTbl->GetMemberExpLevel(exp);
        DNF_LOG_SCOPE_LINE(0x180,"./log/MemberModify", "Member Level Up! Char Id(%d), Exp(%d), Level(%d)",
            upperCharId, exp, (unsigned int)level2);
    }
}
```

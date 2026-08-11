# _ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh

`CMemberManager::GetMemberExpNextLevelNeedExpLevel(unsigned int&, unsigned int&, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a238` | `0x52` | `0x8062b4c` | `0x60` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh+0x40>
 mov    0xc(%ebp),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%eax
-mov    0x14(%ebp),%ecx
-mov    %ecx,0x10(%esp)
-mov    0x10(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-lea    -0xc(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    (%eax),%eax
+mov    0x14(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
+lea    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh>
 mov    0xc(%ebp),%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 sub    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x10(%ebp),%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 sub    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::GetMemberExpNextLevelNeedExpLevel(unsigned int&, unsigned int&, unsigned char&)
    */

void __thiscall
CMemberManager::_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh
          (CMemberManager *this,uint *param_1,uint *param_2,uchar *param_3)

{
  uint local_10 [3];
  
  CMemberExpTbl::_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh
            (*(CMemberExpTbl **)(this + 0x24),*param_1,local_10,param_2,param_3);
  *param_1 = *param_1 - local_10[0];
  *param_2 = *param_2 - local_10[0];
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h 等 299 个文件*

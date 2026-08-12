# _ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh

`CMemberExpTbl::GetMemberExpLevel(unsigned int, unsigned int&, unsigned int&, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806207e` | `0xa2` | `0x8061780` | `0x92` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x8(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
-movzbl %al,%eax
-sub    $0x1,%eax
-mov    %eax,-0x8(%ebp)
-movl   $0x1,-0x4(%ebp)
+mov    %al,-0x2(%ebp)
+movb   $0x1,-0x1(%ebp)
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x91>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x85>
+mov    -0x8(%ebp),%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
-mov    -0xc(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    0x14(%ebp),%eax
+mov    %edx,(%eax)
+mov    0x18(%ebp),%eax
+movb   $0x1,(%eax)
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x90>
+subb   $0x1,-0x2(%ebp)
+mov    -0x8(%ebp),%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x7d>
+mov    -0x8(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+jb     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x7d>
+mov    -0x8(%ebp),%eax
+mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,(%eax)
+mov    -0x8(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %edx,(%eax)
-mov    -0x4(%ebp),%eax
-mov    %eax,%edx
 mov    0x18(%ebp),%eax
+movzbl -0x1(%ebp),%edx
 mov    %dl,(%eax)
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0xa0>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-cmp    0xc(%ebp),%eax
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x89>
-mov    -0xc(%ebp),%eax
-add    $0x4,%eax
-mov    (%eax),%eax
-cmp    0xc(%ebp),%eax
-jb     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x89>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,(%eax)
-mov    -0xc(%ebp),%eax
-add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x14(%ebp),%eax
-mov    %edx,(%eax)
-mov    -0x4(%ebp),%eax
-mov    %eax,%edx
-mov    0x18(%ebp),%eax
-mov    %dl,(%eax)
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0xa0>
-addl   $0x1,-0x4(%ebp)
-addl   $0x4,-0xc(%ebp)
-cmpl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x90>
+addb   $0x1,-0x1(%ebp)
+addl   $0x4,-0x8(%ebp)
+cmpb   $0x0,-0x2(%ebp)
 setne  %al
-subl   $0x1,-0x8(%ebp)
 test   %al,%al
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x4f>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh+0x40>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::GetMemberExpLevel(unsigned int, unsigned int&, unsigned int&, unsigned char&) */

void __thiscall
CMemberExpTbl::_ZN13CMemberExpTbl17GetMemberExpLevelEjRjS0_Rh
          (CMemberExpTbl *this,uint param_1,uint *param_2,uint *param_3,uchar *param_4)

{
  uchar uVar1;
  CMemberExpTbl *local_10;
  uint local_c;
  
  local_10 = this + 8;
  local_c = (uint)(byte)this[4];
  uVar1 = '\x01';
  if (param_1 == 0) {
    *param_2 = *(uint *)local_10;
    *param_3 = *(uint *)(this + 0xc);
    *param_4 = '\x01';
  }
  else {
    while (local_c = local_c - 1, local_c != 0) {
      if ((*(uint *)local_10 < param_1) && (param_1 <= *(uint *)(local_10 + 4))) {
        *param_2 = *(uint *)local_10;
        *param_3 = *(uint *)(local_10 + 4);
        *param_4 = uVar1;
        return;
      }
      uVar1 = uVar1 + '\x01';
      local_10 = local_10 + 4;
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp, source/DNFServer/GameServer/Monitor/DNFMember.h, source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp, source/DNFServer/GameServer/Monitor/DNFMemberConfig.h, source/DNFServer/GameServer/Monitor/DNFTableBase.h, source/DNFServer/GameServer/Monitor/RawAccess.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h 等 299 个文件*

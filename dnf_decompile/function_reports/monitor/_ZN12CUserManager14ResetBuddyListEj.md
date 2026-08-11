# _ZN12CUserManager14ResetBuddyListEj

`CUserManager::ResetBuddyList(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807173c` | `0x39` | `0x808b31e` | `0x36` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12CUserManager14ResetBuddyListEj+0x36>
+je     <T> <_ZN12CUserManager14ResetBuddyListEj+0x34>
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14ResetBuddyListEb>
-jmp    <T> <_ZN12CUserManager14ResetBuddyListEj+0x37>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::ResetBuddyList(unsigned int) */

void CUserManager::_ZN12CUserManager14ResetBuddyListEj(uint param_1)

{
  CUser *this;
  
  this = (CUser *)FindUser_CharNo(param_1);
  if (this != (CUser *)0x0) {
    CUser::ResetBuddyList(this,true);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 154 行）：

```cpp
void CUserManager::ResetBuddyList(unsigned int charNo)
{
    CUser* user = FindUser_CharNo(charNo);
    if (user != 0)
    {
        user->ResetBuddyList(true);
    }
}
```

# _ZN12CUserManager15ResetMemberInfoEj

`CUserManager::ResetMemberInfo(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80716d0` | `0x31` | `0x808cf7e` | `0x2e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,16 @@
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
-je     <T> <_ZN12CUserManager15ResetMemberInfoEj+0x2e>
+je     <T> <_ZN12CUserManager15ResetMemberInfoEj+0x2c>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15ResetMemberInfoEv>
-jmp    <T> <_ZN12CUserManager15ResetMemberInfoEj+0x2f>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::ResetMemberInfo(unsigned int) */

void CUserManager::_ZN12CUserManager15ResetMemberInfoEj(uint param_1)

{
  CUser *this;
  
  this = (CUser *)FindUser_CharNo(param_1);
  if (this != (CUser *)0x0) {
    CUser::ResetMemberInfo(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 713 行）：

```cpp
void CUserManager::ResetMemberInfo(unsigned int charNo)
{
    CUser* user = FindUser_CharNo(charNo);
    if (user != 0)
    {
        user->ResetMemberInfo();
    }
}
```

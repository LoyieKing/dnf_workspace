# _ZN5CUser18SetGuildMemberMemoEPKc

`CUser::SetGuildMemberMemo(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066d4a` | `0x75` | `0x80892a6` | `0x77` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x4a,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
-cmpl   $0x14,-0xc(%ebp)
-jg     <T> <_ZN5CUser18SetGuildMemberMemoEPKc+0x56>
 mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x4a,%edx
+cmp    $0x14,%eax
+jg     <T> <_ZN5CUser18SetGuildMemberMemoEPKc+0x58>
+mov    0x8(%ebp),%eax
+lea    0x4a(%eax),%edx
+mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN5CUser18SetGuildMemberMemoEPKc+0x73>
+jmp    <T> <_ZN5CUser18SetGuildMemberMemoEPKc+0x75>
 mov    0x8(%ebp),%eax
 lea    0x4a(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetGuildMemberMemo(char const*) */

void __thiscall CUser::_ZN5CUser18SetGuildMemberMemoEPKc(CUser *this,char *param_1)

{
  size_t __n;
  
  memset(this + 0x4a,0,0x15);
  __n = strlen(param_1);
  if ((int)__n < 0x15) {
    memcpy(this + 0x4a,param_1,__n);
  }
  else {
    memcpy(this + 0x4a,param_1,0x14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 320 行）：

```cpp
void CUser::SetGuildMemberMemo(const char* memo)
{
    memset((char*)this + 0x4a, 0, 0x15);
    int n = (int)strlen(memo);
    if (n <= 0x14)
    {
        memcpy((char*)this + 0x4a, memo, n);
    }
    else
    {
        memcpy((char*)this + 0x4a, memo, 0x14);
    }
}
```

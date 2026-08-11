# _ZN6CGuild15SetGuildMessageEPc

`CGuild::SetGuildMessage(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091326` | `0x7d` | `0x8056fc6` | `0x7f` |

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
 add    $0x4d0a,%eax
 movl   $0x65,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild15SetGuildMessageEPc+0x5b>
 mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x4d0a,%edx
+cmp    $0x64,%eax
+jg     <T> <_ZN6CGuild15SetGuildMessageEPc+0x5d>
+mov    0x8(%ebp),%eax
+lea    0x4d0a(%eax),%edx
+mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild15SetGuildMessageEPc+0x7b>
+jmp    <T> <_ZN6CGuild15SetGuildMessageEPc+0x7d>
 mov    0x8(%ebp),%eax
 lea    0x4d0a(%eax),%edx
 movl   $0x64,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SetGuildMessage(char*) */

void __thiscall CGuild::_ZN6CGuild15SetGuildMessageEPc(CGuild *this,char *param_1)

{
  size_t __n;
  
  memset(this + 0x4d0a,0,0x65);
  __n = strlen(param_1);
  if ((int)__n < 0x65) {
    memcpy(this + 0x4d0a,param_1,__n);
  }
  else {
    memcpy(this + 0x4d0a,param_1,100);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1695 行）：

```cpp
void CGuild::SetGuildMessage(char* msg)
{
    memset((char*)this + 0x4d0a, 0, 0x65);
    size_t n = strlen(msg);
    if ((int)n < 0x65)
    {
        memcpy((char*)this + 0x4d0a, msg, n);
    }
    else
    {
        memcpy((char*)this + 0x4d0a, msg, 100);
    }
}
```

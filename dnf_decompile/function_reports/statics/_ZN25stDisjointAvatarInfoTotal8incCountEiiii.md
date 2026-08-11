# _ZN25stDisjointAvatarInfoTotal8incCountEiiii

`stDisjointAvatarInfoTotal::incCount(int, int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80756a6` | `0x9e` | `0x8065640` | `0x94` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x1c,%esp
+sub    $0x10,%esp
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25stDisjointAvatarInfoTotal14checkConditionEiii>
 test   %al,%al
-je     <T> <_ZN25stDisjointAvatarInfoTotal8incCountEiiii+0x96>
+je     <T> <_ZN25stDisjointAvatarInfoTotal8incCountEiiii+0x92>
 mov    0xc(%ebp),%edx
-mov    0x10(%ebp),%ebx
-mov    0x14(%ebp),%ecx
-mov    0x8(%ebp),%esi
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %ebx,%eax
+add    0x10(%ebp),%eax
 add    %eax,%eax
-add    %ecx,%eax
-mov    (%esi,%eax,4),%eax
-lea    0x1(%eax),%edi
-mov    0x8(%ebp),%esi
+mov    %eax,%ecx
+add    0x14(%ebp),%ecx
+mov    0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %ebx,%eax
+add    0x10(%ebp),%eax
 add    %eax,%eax
-add    %ecx,%eax
-mov    %edi,(%esi,%eax,4)
+mov    %eax,%edx
+add    0x14(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,(%eax,%ecx,4)
 mov    0xc(%ebp),%edx
-mov    0x10(%ebp),%esi
-mov    0xc(%ebp),%ecx
-mov    0x10(%ebp),%edi
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-add    %ecx,%eax
-add    %edi,%eax
-add    $0x34,%eax
-mov    0x8(%ebx,%eax,4),%eax
-mov    %eax,%ebx
-add    0x18(%ebp),%ebx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %esi,%eax
-add    $0x34,%eax
-mov    %ebx,0x8(%ecx,%eax,4)
-add    $0x1c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+add    0x10(%ebp),%eax
+lea    0x36(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    0x10(%ebp),%eax
+lea    0x36(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+add    0x18(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,(%eax,%ecx,4)
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* stDisjointAvatarInfoTotal::incCount(int, int, int, int) */

void __thiscall
stDisjointAvatarInfoTotal::_ZN25stDisjointAvatarInfoTotal8incCountEiiii
          (stDisjointAvatarInfoTotal *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  
  cVar1 = checkCondition(this,param_1,param_2,param_3);
  if (cVar1 != '\0') {
    *(int *)(this + ((param_1 * 9 + param_2) * 2 + param_3) * 4) =
         *(int *)(this + ((param_1 * 9 + param_2) * 2 + param_3) * 4) + 1;
    *(int *)(this + (param_1 * 9 + param_2 + 0x34) * 4 + 8) =
         *(int *)(this + (param_1 * 9 + param_2 + 0x34) * 4 + 8) + param_4;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 99 行）：

```cpp
void stDisjointAvatarInfoTotal::incCount(int a, int b, int c, int d)
{
    if (checkCondition(a, b, c))
    {
        m_data[(a * 9 + b) * 2 + c] += 1;
        m_data[a * 9 + b + 0x34 + 2] += d;
    }
}
```

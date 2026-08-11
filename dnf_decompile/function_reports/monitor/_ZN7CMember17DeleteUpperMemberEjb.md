# _ZN7CMember17DeleteUpperMemberEjb

`CMember::DeleteUpperMember(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809852c` | `0x50` | `0x8060cc6` | `0x4d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x6,%eax
+movl   $0x27,0x8(%esp)
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN14ST_MemberProxy5ResetEv>
+call   <T> <memset>
 cmpb   $0x0,-0xc(%ebp)
-je     <T> <_ZN7CMember17DeleteUpperMemberEjb+0x3b>
+je     <T> <_ZN7CMember17DeleteUpperMemberEjb+0x4b>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember19SetMemberDeleteTimeEj>
-movl   $"DELETE_UPPER_MEMBER",0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember22DebugPrintMemberMemberEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::DeleteUpperMember(unsigned int, bool) */

void __thiscall CMember::_ZN7CMember17DeleteUpperMemberEjb(CMember *this,uint param_1,bool param_2)

{
  uint uVar1;
  
  ST_MemberProxy::Reset((ST_MemberProxy *)(this + 6));
  if (param_2) {
    uVar1 = time((time_t *)0x0);
    SetMemberDeleteTime(this,uVar1);
  }
  DebugPrintMemberMember((char *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 521 行）：

```cpp
void CMember::DeleteUpperMember(unsigned int charNo, bool flag)
{
    memset((char*)this + 6, 0, 0x27);
    if (flag)
    {
        SetMemberDeleteTime(time(0));
    }
}
```

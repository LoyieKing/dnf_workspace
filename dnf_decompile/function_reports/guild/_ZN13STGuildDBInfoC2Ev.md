# _ZN13STGuildDBInfoC2Ev

`STGuildDBInfo::STGuildDBInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80929e2` | `0x43` | `0x80587c8` | `0xa6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildDBInfoOnlyC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xbd,%eax
 mov    %eax,%ebx
 mov    $0x12b,%esi
 jmp    <T> <_ZN13STGuildDBInfoC1Ev+0x32>
 mov    %ebx,(%esp)
 call   <T> <_ZN18STGuildMemberProxyC1Ev>
 add    $0x41,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN13STGuildDBInfoC1Ev+0x24>
-add    $0x10,%esp
+mov    0x8(%ebp),%eax
+movl   $0xbd,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN13STGuildDBInfoC1Ev+0x91>
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x6,%eax
+add    %edx,%eax
+add    $0xb0,%eax
+add    0x8(%ebp),%eax
+add    $0xd,%eax
+movl   $0x41,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x12b,-0xc(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN13STGuildDBInfoC1Ev+0x60>
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildDBInfo::STGuildDBInfo() */

void __thiscall STGuildDBInfo::_ZN13STGuildDBInfoC2Ev(STGuildDBInfo *this)

{
  STGuildMemberProxy *this_00;
  int iVar1;
  
  STGuildDBInfoOnly::STGuildDBInfoOnly((STGuildDBInfoOnly *)this);
  this_00 = (STGuildMemberProxy *)(this + 0xbd);
  for (iVar1 = 299; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildMemberProxy::STGuildMemberProxy(this_00);
    this_00 = this_00 + 0x41;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2303 行）：

```cpp
STGuildDBInfo::STGuildDBInfo()
{
    memset((void*)&m_info, 0, sizeof(m_info));
    for (int i = 0; i < 300; i++)
    {
        memset((void*)&m_members[i], 0, sizeof(m_members[i]));
    }
}
```

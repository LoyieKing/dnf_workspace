# _ZN17STGuildDBInfoOnlyC2Ev

`STGuildDBInfoOnly::STGuildDBInfoOnly()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092872` | `0x16f` | `0x8058556` | `0x80` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,88 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x17(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x1b(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1e(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x22(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x24(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x28(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x29(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x2d(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x42(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x44(%eax)
-mov    0x8(%ebp),%eax
-add    $0x45,%eax
-mov    %eax,%ebx
-mov    $0xf,%esi
-jmp    <T> <_ZN17STGuildDBInfoOnlyC1Ev+0x7b>
-mov    %ebx,(%esp)
-call   <T> <_ZN12STGuildSkillC1Ev>
-add    $0x5,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
-test   %al,%al
-jne    <T> <_ZN17STGuildDBInfoOnlyC1Ev+0x6d>
-mov    0x8(%ebp),%eax
-movb   $0x0,0x95(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x96(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x9a(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x9e(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x9f(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xa0(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xb9(%eax)
-mov    0x8(%ebp),%eax
-add    $0x2e,%eax
-movl   $0x14,0x8(%esp)
+movl   $0xbd,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN17STGuildDBInfoOnlyC1Ev+0x5f>
+mov    0x8(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x45,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,0x4(%esp)
+movl   $0x5,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN17STGuildDBInfoOnlyC1Ev+0x5b>
+mov    %eax,(%esp)
+call   <T> <_ZN12STGuildSkillC1Ev>
+addl   $0x1,-0xc(%ebp)
+cmpl   $0xe,-0xc(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN17STGuildDBInfoOnlyC1Ev+0x2a>
 mov    0x8(%ebp),%eax
-movl   $0x17,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
+lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
-movzbl 0x1c(%eax),%edx
-or     $0x1,%edx
-mov    %dl,0x1c(%eax)
-mov    0x8(%ebp),%eax
-movzbl 0x1c(%eax),%edx
-and    $0xfffffffd,%edx
-mov    %dl,0x1c(%eax)
-mov    0x8(%ebp),%eax
-add    $0x45,%eax
-movl   $0x50,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
-mov    0x8(%ebp),%eax
-add    $0xa4,%eax
-movl   $0x15,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+add    $0x1c,%eax
+movzbl (%eax),%eax
+or     $0x1,%eax
+mov    %al,(%edx)
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildDBInfoOnly::STGuildDBInfoOnly() */

void __thiscall STGuildDBInfoOnly::_ZN17STGuildDBInfoOnlyC2Ev(STGuildDBInfoOnly *this)

{
  STGuildSkill *this_00;
  int iVar1;
  
  *(undefined4 *)(this + 0x17) = 0;
  this[0x1b] = (STGuildDBInfoOnly)0x0;
  *(undefined4 *)(this + 0x1e) = 0;
  *(undefined2 *)(this + 0x22) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (STGuildDBInfoOnly)0x0;
  *(undefined4 *)(this + 0x29) = 0;
  this[0x2d] = (STGuildDBInfoOnly)0x0;
  *(undefined2 *)(this + 0x42) = 0;
  this[0x44] = (STGuildDBInfoOnly)0x0;
  this_00 = (STGuildSkill *)(this + 0x45);
  for (iVar1 = 0xf; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildSkill::STGuildSkill(this_00);
    this_00 = this_00 + 5;
  }
  this[0x95] = (STGuildDBInfoOnly)0x0;
  *(undefined4 *)(this + 0x96) = 0;
  *(undefined4 *)(this + 0x9a) = 0;
  this[0x9e] = (STGuildDBInfoOnly)0x0;
  this[0x9f] = (STGuildDBInfoOnly)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xb9) = 0;
  memset(this + 0x2e,0,0x14);
  memset(this,0,0x17);
  this[0x1c] = (STGuildDBInfoOnly)((byte)this[0x1c] | 1);
  this[0x1c] = (STGuildDBInfoOnly)((byte)this[0x1c] & 0xfd);
  memset(this + 0x45,0,0x50);
  memset(this + 0xa4,0,0x15);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2222 行）：

```cpp
STGuildDBInfoOnly::STGuildDBInfoOnly()
{
    memset(m_data, 0, sizeof(m_data));
    for (int i = 0; i < 15; i++)
    {
        new (m_data + 0x45 + i * 5) STGuildSkill;
    }
    *(unsigned char*)(m_data + 0x1c) |= 1;
}
```

# _ZN6CGuildC1Ej

`CGuild::CGuild(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808cc46` | `0x162` | `0x8052b9a` | `0x162` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x18(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x1c(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x1e(%eax)
-mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13STGuildDBInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x4d09,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildAgitDBInfoC1Ev>
 mov    0x8(%ebp),%eax
-movw   $0x0,0x4d92(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x4d94(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x4d96(%eax)
-mov    0x8(%ebp),%eax
 add    $0x4d98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
-mov    0x8(%ebp),%eax
-movb   $0x0,0x4db0(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4db4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x66c4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoardC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x18(%eax)
+mov    0x8(%ebp),%eax
+movw   $0x0,0x1c(%eax)
+mov    0x8(%ebp),%eax
+movw   $0x0,0x1e(%eax)
+mov    0x8(%ebp),%eax
+movw   $0x0,0x4d92(%eax)
+mov    0x8(%ebp),%eax
+movw   $0x0,0x4d94(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x4d96(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x4db0(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x12c,0x4d70(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x12c,0x4d72(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x12c,0x4d74(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 movl   $0x64,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x4d09,%eax
 movl   $0x1,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4db4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargoD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN6CGuildC1Ej+0x12d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4d98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN6CGuildC1Ej+0x147>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CGuild::CGuild(unsigned int) */

void __thiscall CGuild::_ZN6CGuildC1Ej(CGuild *this,uint param_1)

{
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)this);
  *(uint *)(this + 0x18) = param_1;
  *(undefined2 *)(this + 0x1c) = 0;
  *(undefined2 *)(this + 0x1e) = 0;
  STGuildDBInfo::_ZN13STGuildDBInfoC2Ev((STGuildDBInfo *)(this + 0x20));
  STGuildAgitDBInfo::_ZN17STGuildAgitDBInfoC2Ev((STGuildAgitDBInfo *)(this + 0x4d09));
  *(undefined2 *)(this + 0x4d92) = 0;
  *(undefined2 *)(this + 0x4d94) = 0;
  this[0x4d96] = (CGuild)0x0;
                    /* try { // try from 0808ccbf to 0808ccc3 has its CatchHandler @ 0808cd8d */
  std::
  map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
  ::map((map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
         *)(this + 0x4d98));
  this[0x4db0] = (CGuild)0x0;
                    /* try { // try from 0808ccd9 to 0808ccdd has its CatchHandler @ 0808cd73 */
  CGuildCargo::_ZN11CGuildCargoC2Ev((CGuildCargo *)(this + 0x4db4));
                    /* try { // try from 0808cce9 to 0808cced has its CatchHandler @ 0808cd59 */
  CGuildBoard::_ZN11CGuildBoardC2Ev((CGuildBoard *)(this + 0x66c4));
  *(undefined2 *)(this + 0x4d70) = 300;
  *(undefined2 *)(this + 0x4d72) = 300;
  *(undefined2 *)(this + 0x4d74) = 300;
  memset(this + 0x4d0a,0,100);
  memset(this + 0x4d09,0,1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 448 行）：

```cpp
CGuild::CGuild(unsigned int guildKey)
{
    m_guildKey = guildKey;
    m_field1c = 0;
    m_field1e = 0;
    m_field4d92 = 0;
    m_field4d94 = 0;
    m_field4d96 = 0;
    m_field4db0 = 0;
    m_field4d70 = 300;
    m_field4d72 = 300;
    m_field4d74 = 300;
    memset(m_field4d0a, 0, sizeof(m_field4d0a));
    memset((void*)&m_agitInfo, 0, sizeof(m_agitInfo));
}
```

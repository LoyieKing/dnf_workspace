# _ZN18STGuildCargoDBInfoC2Ev

`STGuildCargoDBInfo::STGuildCargoDBInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808982e` | `0x40` | `0x80910ce` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN18STGuildCargoDBInfoC1Ev+0x64>
+mov    0x8(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x35,%eax,%eax
+lea    (%edx,%eax,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x35,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN18STGuildCargoDBInfoC1Ev+0x60>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11DnfItemInfoC1Ev>
+jmp    <T> <_ZN18STGuildCargoDBInfoC1Ev+0x60>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x77,-0x1c(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN18STGuildCargoDBInfoC1Ev+0x12>
 mov    0x8(%ebp),%eax
-mov    %eax,%ebx
-mov    $0x77,%esi
-jmp    <T> <_ZN18STGuildCargoDBInfoC1Ev+0x22>
-mov    %ebx,(%esp)
-call   <T> <_ZN11DnfItemInfoC1Ev>
-add    $0x35,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
-test   %al,%al
-jne    <T> <_ZN18STGuildCargoDBInfoC1Ev+0x14>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x18d8(%eax)
-add    $0x10,%esp
+add    $0x18d8,%eax
+movl   $0x0,(%eax)
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildCargoDBInfo::STGuildCargoDBInfo() */

void __thiscall STGuildCargoDBInfo::_ZN18STGuildCargoDBInfoC2Ev(STGuildCargoDBInfo *this)

{
  STGuildCargoDBInfo *this_00;
  int iVar1;
  
  this_00 = this;
  for (iVar1 = 0x77; iVar1 != -1; iVar1 = iVar1 + -1) {
    DnfItemInfo::_ZN11DnfItemInfoC2Ev((DnfItemInfo *)this_00);
    this_00 = this_00 + 0x35;
  }
  *(undefined4 *)(this + 0x18d8) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 97 行）：

```cpp
STGuildCargoDBInfo::STGuildCargoDBInfo()
{
    for (int i = 0; i < 0x78; i++) { new ((char*)this + 0x0 + i * 0x35) DnfItemInfo; }
    *(unsigned int*)((char*)this + 0x18d8) = 0;
}
```

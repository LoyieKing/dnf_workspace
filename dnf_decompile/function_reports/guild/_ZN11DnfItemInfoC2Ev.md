# _ZN11DnfItemInfoC2Ev

`DnfItemInfo::DnfItemInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808975e` | `0x2f` | `0x80528cc` | `0x5b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x2b,%eax
+mov    %eax,0x4(%esp)
+movl   $0x1,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN11DnfItemInfoC1Ev+0x2a>
 mov    %eax,(%esp)
 call   <T> <_ZN19UpgradeSeparateInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x2c,%eax
+mov    %eax,0x4(%esp)
+movl   $0xc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN11DnfItemInfoC1Ev+0x4e>
 mov    %eax,(%esp)
 call   <T> <_ZN16ReservedCapacityC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfo5resetEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DnfItemInfo::DnfItemInfo() */

void __thiscall DnfItemInfo::_ZN11DnfItemInfoC2Ev(DnfItemInfo *this)

{
  UpgradeSeparateInfo::UpgradeSeparateInfo((UpgradeSeparateInfo *)(this + 0x2b));
  ReservedCapacity::ReservedCapacity((ReservedCapacity *)(this + 0x2c));
  _ZN11DnfItemInfo5resetEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 182 行）：

```cpp
DnfItemInfo::DnfItemInfo()
{
    new ((char*)this + 0x2b) UpgradeSeparateInfo;
    new ((char*)this + 0x2c) ReservedCapacity;
    reset();
}
```

# _ZN12RandomOption5resetEv

`RandomOption::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8089620` | `0x59` | `0x80527a2` | `0x59` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17RandomOptionField5resetEv>
 mov    0x8(%ebp),%eax
 add    $0x3,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17RandomOptionField5resetEv>
 mov    0x8(%ebp),%eax
 add    $0x6,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17RandomOptionField5resetEv>
 mov    0x8(%ebp),%eax
 add    $0x9,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16RandomOptionSeed5resetEv>
 mov    0x8(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17RandomOptionField5resetEv>
 mov    0x8(%ebp),%eax
 add    $0xd,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16RandomOptionSeed5resetEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RandomOption::reset() */

void __thiscall RandomOption::_ZN12RandomOption5resetEv(RandomOption *this)

{
  RandomOptionField::reset((RandomOptionField *)this);
  RandomOptionField::reset((RandomOptionField *)(this + 3));
  RandomOptionField::reset((RandomOptionField *)(this + 6));
  RandomOptionSeed::reset((RandomOptionSeed *)(this + 9));
  RandomOptionField::reset((RandomOptionField *)(this + 10));
  RandomOptionSeed::reset((RandomOptionSeed *)(this + 0xd));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 152 行）：

```cpp
void RandomOption::reset()
{
    ((RandomOptionField*)this)->reset();
    ((RandomOptionField*)((char*)this + 3))->reset();
    ((RandomOptionField*)((char*)this + 6))->reset();
    ((RandomOptionSeed*)((char*)this + 9))->reset();
    ((RandomOptionField*)((char*)this + 10))->reset();
    ((RandomOptionSeed*)((char*)this + 0xd))->reset();
}
```

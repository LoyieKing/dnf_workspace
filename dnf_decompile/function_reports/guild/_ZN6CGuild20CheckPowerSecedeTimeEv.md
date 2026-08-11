# _ZN6CGuild20CheckPowerSecedeTimeEv

`CGuild::CheckPowerSecedeTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80917bc` | `0x3f` | `0x805746c` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild20CheckPowerSecedeTimeEv+0x38>
+je     <T> <_ZN6CGuild20CheckPowerSecedeTimeEv+0x27>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild20CheckPowerSecedeTimeEv+0x44>
 mov    0x8(%ebp),%eax
-mov    0xb6(%eax),%eax
+add    $0xb6,%eax
+mov    0x4(%eax),%edx
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $0x1e,(%esp)
 call   <T> <_Z24CheckDayScheduleTimeOveril>
-jmp    <T> <_ZN6CGuild20CheckPowerSecedeTimeEv+0x3d>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::CheckPowerSecedeTime() */

undefined4 __thiscall CGuild::_ZN6CGuild20CheckPowerSecedeTimeEv(CGuild *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = _ZN6CGuild16IsSetGuildDBFlagEt(this,4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CheckDayScheduleTimeOver(0x1e,*(long *)(this + 0xb6));
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1810 行）：

```cpp
int CGuild::CheckPowerSecedeTime()
{
    if (!IsSetGuildDBFlag(4))
    {
        return 0;
    }
    return CheckDayScheduleTimeOver(0x1e, *(long long*)((char*)this + 0xb6));
}
```

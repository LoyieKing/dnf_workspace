# _ZN6CGuild12SetPowerSideEh

`CGuild::SetPowerSide(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8091780` | `0x3c` | `0x8057524` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0xc,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0xc(%ebp)
+mov    %al,-0x4(%ebp)
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN6CGuild12SetPowerSideEh+0x3a>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
 mov    0x8(%ebp),%eax
-movzbl -0xc(%ebp),%edx
+movzbl -0x4(%ebp),%edx
 mov    %dl,0xb5(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SetPowerSide(unsigned char) */

void __thiscall CGuild::_ZN6CGuild12SetPowerSideEh(CGuild *this,uchar param_1)

{
  char cVar1;
  
  cVar1 = IsSetGuildDBFlag(this,4);
  if (cVar1 != '\0') {
    this[0x4d96] = (CGuild)0x1;
    this[0xb5] = (CGuild)param_1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1863 行）：

```cpp
void CGuild::SetPowerSide(unsigned char side)
{
    if (IsSetGuildDBFlag(4))
    {
        m_field4d96 = 1;
        m_dbInfo.m_info.m_powerSide = side;
    }
}
```

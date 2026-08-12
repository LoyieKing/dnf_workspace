# _ZNK7CMember21GetUpperMember_CharIdEv

`CMember::GetUpperMember_CharId() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809810c` | `0x3c` | `0x806074e` | `0x3f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x35>
+jne    <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x1e>
+mov    $0x0,%eax
+jmp    <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x3d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember12IsThereUpperEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x2e>
+je     <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x37>
+mov    $0xffffffff,%eax
+jmp    <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x3d>
 mov    0x8(%ebp),%eax
 mov    0x6(%eax),%eax
-jmp    <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x3a>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZNK7CMember21GetUpperMember_CharIdEv+0x3a>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::GetUpperMember_CharId() const */

undefined4 __thiscall CMember::_ZNK7CMember21GetUpperMember_CharIdEv(CMember *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)(this + 4) & 4) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = _ZNK7CMember12IsThereUpperEv(this);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(this + 6);
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 298 行）：

```cpp
int CMember::GetUpperMember_CharId() const
{
    if ((m_flag & 4) != 0)
    {
        if (IsThereUpper() != 0)
        {
            return ((RA_INT<6>*)this)->v;
        }
        return 0xffffffff;
    }
    return 0;
}
```

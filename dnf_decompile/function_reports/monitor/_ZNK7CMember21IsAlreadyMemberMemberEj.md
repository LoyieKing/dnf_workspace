# _ZNK7CMember21IsAlreadyMemberMemberEj

`CMember::IsAlreadyMemberMember(unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098e84` | `0x4b` | `0x8060d68` | `0x3d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x8,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-cmp    0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x22>
+je     <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x24>
 mov    $0x1,%eax
-jmp    <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x49>
+jmp    <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x3b>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember15FindLowerMemberEj>
 test   %eax,%eax
 setne  %al
-test   %al,%al
-je     <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x44>
-mov    $0x1,%eax
-jmp    <T> <_ZNK7CMember21IsAlreadyMemberMemberEj+0x49>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IsAlreadyMemberMember(unsigned int) const */

undefined4 __thiscall CMember::_ZNK7CMember21IsAlreadyMemberMemberEj(CMember *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = _ZNK7CMember21GetUpperMember_CharIdEv(this);
  if (uVar1 == param_1) {
    uVar2 = 1;
  }
  else {
    iVar3 = _ZNK7CMember15FindLowerMemberEj(this,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 512 行）：

```cpp
char CMember::IsAlreadyMemberMember(unsigned int charNo) const
{
    if (GetUpperMember_CharId() == (int)charNo)
    {
        return 1;
    }
    return FindLowerMember(charNo) != 0;
}
```

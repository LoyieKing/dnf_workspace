# _ZNK18STAssertManagerKeyltERKS_

`STAssertManagerKey::operator<(STAssertManagerKey const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80767e4` | `0x72` | `0x8066cfa` | `0x7c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
-test   %eax,%eax
-je     <T> <_ZNK18STAssertManagerKeyltERKS_+0x23>
-mov    $0x1,%eax
-jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x70>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZNK18STAssertManagerKeyltERKS_+0x75>
 mov    0x8(%ebp),%eax
 movzwl 0x100(%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl 0x100(%eax),%eax
 cmp    %ax,%dx
-jae    <T> <_ZNK18STAssertManagerKeyltERKS_+0x43>
+jae    <T> <_ZNK18STAssertManagerKeyltERKS_+0x41>
 mov    $0x1,%eax
-jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x70>
+jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x7a>
 mov    0xc(%ebp),%eax
 lea    0x102(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x102,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
-test   %eax,%eax
-je     <T> <_ZNK18STAssertManagerKeyltERKS_+0x6b>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZNK18STAssertManagerKeyltERKS_+0x6e>
+mov    $0x0,%eax
+jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x7a>
 mov    $0x1,%eax
-jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x70>
-mov    $0x0,%eax
+jmp    <T> <_ZNK18STAssertManagerKeyltERKS_+0x7a>
+mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STAssertManagerKey::TEMPNAMEPLACEHOLDERVALUE(STAssertManagerKey const&) const */

undefined4 __thiscall
STAssertManagerKey::_ZNK18STAssertManagerKeyltERKS_
          (STAssertManagerKey *this,STAssertManagerKey *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp((char *)this,(char *)param_1);
  if (iVar1 == 0) {
    if (*(ushort *)(this + 0x100) < *(ushort *)(param_1 + 0x100)) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp((char *)(this + 0x102),(char *)(param_1 + 0x102));
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 795 行）：

```cpp
bool STAssertManagerKey::operator<(const STAssertManagerKey& other) const
{
    int r = strcmp(m_str0, other.m_str0);
    if (r == 0)
    {
        if (m_field100 < other.m_field100)
        {
            return true;
        }
        r = strcmp(m_str2, other.m_str2);
        if (r == 0)
        {
            return false;
        }
        return true;
    }
    return true;
}
```

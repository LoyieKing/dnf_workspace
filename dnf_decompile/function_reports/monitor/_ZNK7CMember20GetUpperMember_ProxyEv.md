# _ZNK7CMember20GetUpperMember_ProxyEv

`CMember::GetUpperMember_Proxy() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098148` | `0x3c` | `0x8060a14` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x35>
+je     <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x2d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember12IsThereUpperEv>
 test   %al,%al
-je     <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x2e>
+je     <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x2d>
+mov    $0x1,%eax
+jmp    <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x32>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x3e>
 mov    0x8(%ebp),%eax
 add    $0x6,%eax
-jmp    <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x3a>
-mov    $0x0,%eax
-jmp    <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x3a>
+jmp    <T> <_ZNK7CMember20GetUpperMember_ProxyEv+0x43>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::GetUpperMember_Proxy() const */

CMember * __thiscall CMember::_ZNK7CMember20GetUpperMember_ProxyEv(CMember *this)

{
  char cVar1;
  CMember *pCVar2;
  
  if ((*(ushort *)(this + 4) & 4) == 0) {
    pCVar2 = (CMember *)0x0;
  }
  else {
    cVar1 = _ZNK7CMember12IsThereUpperEv(this);
    if (cVar1 == '\0') {
      pCVar2 = (CMember *)0x0;
    }
    else {
      pCVar2 = this + 6;
    }
  }
  return pCVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 430 行）：

```cpp
unsigned int* CMember::GetUpperMember_Proxy()
{
    return (unsigned int*)((char*)this + 6);
}
```

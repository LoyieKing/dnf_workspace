# _ZN16CDNFProhibitUser20IsTimeOutConnectableEv

`CDNFProhibitUser::IsTimeOutConnectable()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806ccfa` | `0x33` | `0x807f244` | `0x35` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
+push   %ebx
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x4(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 test   %ax,%ax
-setle  %al
-test   %al,%al
-je     <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x2c>
+setle  %bl
+test   %bl,%bl
+je     <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x2d>
 mov    $0x1,%eax
-jmp    <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x31>
+jmp    <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x32>
 mov    $0x0,%eax
+pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDNFProhibitUser::IsTimeOutConnectable() */

bool __thiscall
CDNFProhibitUser::_ZN16CDNFProhibitUser20IsTimeOutConnectableEv(CDNFProhibitUser *this)

{
  *(short *)(this + 4) = *(short *)(this + 4) + -1;
  return *(short *)(this + 4) < 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFProhibitUser.cpp](source/DNFServer/GameServer/Monitor/DNFProhibitUser.cpp)（约第 58 行）：

```cpp
bool CDNFProhibitUser::IsTimeOutConnectable()
{
    m_remain = m_remain - 1;
    register bool b = ((short)m_remain <= 0);
    if (b)
    {
        return true;
    }
    return false;
}
```

# _ZN11CCashObject15GetBuddysObjectEPP6CBuddy

`CCashObject::GetBuddysObject(CBuddy**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a0642` | `0x70` | `0x804d528` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x14,%esp
-movl   $0x0,-0x4(%ebp)
-mov    -0x4(%ebp),%eax
+sub    $0x28,%esp
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x10>
+nop
+mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
-mov    -0x4(%ebp),%ecx
+mov    -0xc(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0xc(%edx,%ecx,4),%edx
 mov    %edx,(%eax)
-jmp    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x4c>
-addl   $0x1,-0x4(%ebp)
-cmpl   $0x1f,-0x4(%ebp)
-jle    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x37>
-movl   $0x20,-0x4(%ebp)
-jmp    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x60>
-mov    -0x4(%ebp),%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-mov    -0x4(%ebp),%ecx
-mov    0x8(%ebp),%edx
-mov    0xc(%edx,%ecx,4),%edx
-mov    %edx,(%eax)
-mov    -0x4(%ebp),%eax
+mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-setne  %al
-test   %al,%al
-jne    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x24>
+je     <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x47>
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x1f,-0xc(%ebp)
+jle    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0xf>
+movl   $0x20,-0xc(%ebp)
+jmp    <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy+0x48>
+nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject11ClearBuddysEv>
-mov    -0x4(%ebp),%eax
+mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::GetBuddysObject(CBuddy**) */

int __thiscall
CCashObject::_ZN11CCashObject15GetBuddysObjectEPP6CBuddy(CCashObject *this,CBuddy **param_1)

{
  int local_8;
  
  local_8 = 0;
  *param_1 = *(CBuddy **)(this + 0xc);
  do {
    if (param_1[local_8] == (CBuddy *)0x0) {
LAB_080a06a2:
      _ZN11CCashObject11ClearBuddysEv(this);
      return local_8;
    }
    local_8 = local_8 + 1;
    if (0x1f < local_8) {
      local_8 = 0x20;
      goto LAB_080a06a2;
    }
    param_1[local_8] = *(CBuddy **)(this + local_8 * 4 + 0xc);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/CashObject.cpp](source/DNFServer/GameServer/Monitor/CashObject.cpp)（约第 103 行）：

```cpp
int CCashObject::GetBuddysObject(CBuddy** buddies)
{
    int i = 0;
    for (;;)
    {
        buddies[i] = m_buddys[i];
        if (buddies[i] != 0)
        {
            i++;
            if (i <= 0x1f)
            {
                continue;
            }
            i = 0x20;
        }
        break;
    }
    ClearBuddys();
    return i;
}
```

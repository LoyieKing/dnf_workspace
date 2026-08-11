# _ZN6CGuild15ChangeGuildNameEPci

`CGuild::ChangeGuildName(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090f98` | `0x48` | `0x8056d1e` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild15ChangeGuildNameEPci+0x41>
+setne  %al
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN6CGuild15ChangeGuildNameEPci+0x44>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcpy>
 mov    0x10(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4d96(%eax)
-mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild15ChangeGuildNameEPci+0x46>
-mov    $0x0,%eax
+movzbl -0x9(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ChangeGuildName(char*, int) */

bool __thiscall CGuild::_ZN6CGuild15ChangeGuildNameEPci(CGuild *this,char *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = (*(ushort *)(this + 0x1c) & 4) != 0;
  if (bVar1) {
    strcpy((char *)(this + 0x20),param_1);
    this[0x4d96] = SUB41(param_2,0);
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1658 行）：

```cpp
bool CGuild::ChangeGuildName(char* name, int flag)
{
    bool ok = (m_field1c & 4) != 0;
    if (ok)
    {
        strcpy((char*)this + 0x20, name);
        m_field4d96 = (unsigned char)flag;
    }
    return ok;
}
```

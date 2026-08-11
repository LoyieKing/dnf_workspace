# _ZN5CUser21RecordCallMemberEnterEjt

`CUser::RecordCallMemberEnter(unsigned int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d5cc` | `0x3b` | `0x8089bde` | `0x3f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x4,%esp
+sub    $0x14,%esp
 mov    0x10(%ebp),%eax
-mov    %ax,-0x4(%ebp)
+mov    %ax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-test   %al,%al
-je     <T> <_ZN5CUser21RecordCallMemberEnterEjt+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN5CUser21RecordCallMemberEnterEjt+0x39>
+add    $0x1a,%eax
+movzbl (%eax),%eax
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+jne    <T> <_ZN5CUser21RecordCallMemberEnterEjt+0x36>
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x1c(%eax)
-movzwl -0x4(%ebp),%eax
-mov    %eax,%edx
+lea    0x1c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    %dl,0x1a(%eax)
-mov    $0x1,%eax
+lea    0x1a(%eax),%edx
+movzwl -0x14(%ebp),%eax
+mov    %al,(%edx)
+cmpb   $0x0,-0x1(%ebp)
+sete   %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::RecordCallMemberEnter(unsigned int, unsigned short) */

bool __thiscall CUser::_ZN5CUser21RecordCallMemberEnterEjt(CUser *this,uint param_1,ushort param_2)

{
  CUser CVar1;
  
  CVar1 = this[0x1a];
  if (CVar1 == (CUser)0x0) {
    *(uint *)(this + 0x1c) = param_1;
    this[0x1a] = SUB21(param_2,0);
  }
  return CVar1 == (CUser)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 552 行）：

```cpp
char CUser::RecordCallMemberEnter(unsigned int callerId, unsigned short count)
{
    char old = *(char*)((char*)this + 0x1a);
    if (old == 0)
    {
        *(unsigned int*)((char*)this + 0x1c) = callerId;
        *(char*)((char*)this + 0x1a) = (char)count;
    }
    return old == 0;
}
```

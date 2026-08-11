# _ZN10CBlackUser12SetBlackUserEPcj

`CBlackUser::SetBlackUser(char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e612` | `0x2b` | `0x804b6ca` | `0x2b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+movl   $0x1d,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
-movl   $0x1d,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x20(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBlackUser::SetBlackUser(char*, unsigned int) */

void __thiscall
CBlackUser::_ZN10CBlackUser12SetBlackUserEPcj(CBlackUser *this,char *param_1,uint param_2)

{
  memcpy(this,param_1,0x1d);
  *(uint *)(this + 0x20) = param_2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/BlackUser.cpp](source/DNFServer/GameServer/Guild/BlackUser.cpp)（约第 99 行）：

```cpp
void CBlackUser::SetBlackUser(char* name, unsigned int time)
{
    memcpy(m_data, name, 0x1d);
    m_time = time;
}
```

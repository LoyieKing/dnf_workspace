# _ZN7CMemberC1EjP14CMemberManager

`CMember::CMember(unsigned int, CMemberManager*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809804a` | `0x57` | `0x805f80e` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+add    $0x6,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14STMemberDBInfoC1Ev>
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-add    $0x6,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14STMemberDBInfoC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x1b4(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x1b8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1bc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c0(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::CMember(unsigned int, CMemberManager*) */

void __thiscall
CMember::_ZN7CMemberC1EjP14CMemberManager(CMember *this,uint param_1,CMemberManager *param_2)

{
  *(uint *)this = param_1;
  *(undefined2 *)(this + 4) = 0;
  STMemberDBInfo::STMemberDBInfo((STMemberDBInfo *)(this + 6));
  *(CMemberManager **)(this + 0x1b4) = param_2;
  this[0x1b8] = (CMember)0x1;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 40 行）：

```cpp
CMember::CMember(unsigned int key, CMemberManager* mgr)
{
    m_key = key;
    m_flag = 0;
    m_memberManager = mgr;
    m_state1b8 = 1;
    m_registerTime = 0;
    m_dayHourTime = 0;
}
```

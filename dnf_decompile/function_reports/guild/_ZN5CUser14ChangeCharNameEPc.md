# _ZN5CUser14ChangeCharNameEPc

`CUser::ChangeCharName(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067594` | `0x71` | `0x8089756` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser14ChangeCharNameEPc+0x2b>
+je     <T> <_ZN5CUser14ChangeCharNameEPc+0x56>
 mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetJobEv>
+movzbl 0x36(%eax),%eax
 test   %al,%al
-je     <T> <_ZN5CUser14ChangeCharNameEPc+0x2b>
-mov    $0x1,%eax
-jmp    <T> <_ZN5CUser14ChangeCharNameEPc+0x30>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN5CUser14ChangeCharNameEPc+0x6f>
+je     <T> <_ZN5CUser14ChangeCharNameEPc+0x56>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ChangeCharName(char*) */

void __thiscall CUser::_ZN5CUser14ChangeCharNameEPc(CUser *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = GetUniqCharNo(this);
  if (iVar3 != 0) {
    cVar2 = GetJob(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_080675c4;
    }
  }
  bVar1 = false;
LAB_080675c4:
  if (bVar1) {
    memset(this + 0x18,0,0x1e);
    memcpy(this + 0x18,param_1,0x1d);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 466 行）：

```cpp
void CUser::ChangeCharName(char* name)
{
    if (m_charNo != 0 && m_job != 0)
    {
        memset(m_charInfo, 0, 0x1e);
        memcpy(m_charInfo, name, 0x1d);
    }
}
```

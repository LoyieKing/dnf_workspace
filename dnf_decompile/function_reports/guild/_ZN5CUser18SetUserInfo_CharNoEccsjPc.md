# _ZN5CUser18SetUserInfo_CharNoEccsjPc

`CUser::SetUserInfo_CharNo(char, char, short, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066c7c` | `0x60` | `0x80892d2` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%ecx
 mov    0x10(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %cl,-0xc(%ebp)
 mov    %dl,-0x10(%ebp)
 mov    %ax,-0x14(%ebp)
+movzbl -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-movzbl -0xc(%ebp),%edx
 mov    %dl,0x36(%eax)
+movzbl -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
-movzbl -0x10(%ebp),%edx
 mov    %dl,0x37(%eax)
 mov    0x8(%ebp),%eax
-movzwl -0x14(%ebp),%edx
-mov    %dx,0x38(%eax)
+lea    0x38(%eax),%edx
+movzwl -0x14(%ebp),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetUserInfo_CharNo(char, char, short, unsigned int, char*) */

void __thiscall
CUser::_ZN5CUser18SetUserInfo_CharNoEccsjPc
          (CUser *this,char param_1,char param_2,short param_3,uint param_4,char *param_5)

{
  this[0x36] = (CUser)param_1;
  this[0x37] = (CUser)param_2;
  *(short *)(this + 0x38) = param_3;
  *(uint *)(this + 4) = param_4;
  memcpy(this + 0x18,param_5,0x1d);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 257 行）：

```cpp
void CUser::SetUserInfo_CharNo(char sex, char job, short flag, unsigned int charNo, char* name)
{
    m_job = (unsigned char)sex;
    m_growthType = (unsigned char)job;
    *(short*)((char*)this + 0x38) = flag;
    m_charNo = charNo;
    memcpy(m_charInfo, name, 0x1d);
}
```

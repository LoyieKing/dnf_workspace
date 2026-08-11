# _ZN5CUser18SetUserInfo_CharNoEccsjPc

`CUser::SetUserInfo_CharNo(char, char, short, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d502` | `0x7d` | `0x808922e` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%ecx
 mov    0x10(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %cl,-0xc(%ebp)
 mov    %dl,-0x10(%ebp)
 mov    %ax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0xc(%ebp),%edx
-mov    %dl,0x42(%eax)
+lea    0x42(%eax),%edx
+movzbl -0xc(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-movzbl -0x10(%ebp),%edx
-mov    %dl,0x43(%eax)
+lea    0x43(%eax),%edx
+movzbl -0x10(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-movzwl -0x14(%ebp),%edx
-mov    %dx,0x44(%eax)
+lea    0x44(%eax),%edx
+movzwl -0x14(%ebp),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x18(%ebp),%edx
-mov    %edx,0x4(%eax)
+lea    0x4(%eax),%edx
+mov    0x18(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 lea    0x6c(%eax),%edx
 movl   $0x1,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CBuddyHandle5resetEP5CUserb>
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
  this[0x42] = (CUser)param_1;
  this[0x43] = (CUser)param_2;
  *(short *)(this + 0x44) = param_3;
  *(uint *)(this + 4) = param_4;
  memcpy(this + 0x24,param_5,0x1d);
  CBuddyHandle::reset((CBuddyHandle *)(this + 0x6c),this,true);
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

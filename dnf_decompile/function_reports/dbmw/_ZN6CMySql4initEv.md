# _ZN6CMySql4initEv

`CMySql::init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808cfaa` | `0x17d` | `0x80c9354` | `0x15a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql14init_db_handleEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql4initEv+0x29>
+je     <T> <_ZN6CMySql4initEv+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4initEv+0x17b>
+jmp    <T> <_ZN6CMySql4initEv+0x158>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql19set_compress_optionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql4initEv+0x4c>
+je     <T> <_ZN6CMySql4initEv+0x3e>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4initEv+0x17b>
+jmp    <T> <_ZN6CMySql4initEv+0x158>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql27set_read_default_grp_optionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql4initEv+0x6f>
+je     <T> <_ZN6CMySql4initEv+0x5a>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4initEv+0x17b>
+jmp    <T> <_ZN6CMySql4initEv+0x158>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql23set_charset_name_optionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN6CMySql4initEv+0x76>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CMySql4initEv+0x158>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CMySql20set_reconnect_optionEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN6CMySql4initEv+0x92>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4initEv+0x17b>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CMySql20set_reconnect_optionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN6CMySql4initEv+0xb5>
-mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4initEv+0x17b>
+jmp    <T> <_ZN6CMySql4initEv+0x158>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 movl   $0x6001,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x42084(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x2c,%eax
 movl   $0x14,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 movl   $0x14,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0xcea,0x74(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::init() */

undefined4 __thiscall CMySql::_ZN6CMySql4initEv(CMySql *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = init_db_handle(this);
  if (cVar1 == '\x01') {
    cVar1 = set_compress_option(this);
    if (cVar1 == '\x01') {
      cVar1 = _ZN6CMySql27set_read_default_grp_optionEv(this);
      if (cVar1 == '\x01') {
        cVar1 = set_charset_name_option();
        if (cVar1 == '\x01') {
          cVar1 = set_reconnect_option();
          if (cVar1 == '\x01') {
            memset(this + 0x78,0,0x6001);
            *(undefined4 *)(this + 0x42084) = 0;
            *(undefined4 *)(this + 0x14) = 0;
            *(undefined4 *)(this + 0x18) = 0;
            memset(this + 0x1c,0,0x10);
            memset(this + 0x2c,0,0x14);
            memset(this + 0x54,0,0x1e);
            memset(this + 0x40,0,0x14);
            *(undefined4 *)(this + 0x74) = 0xcea;
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 45 行）：

```cpp
bool CMySql::init_db_handle()
{
    if (m_mysql)
        return 0;
    m_mysql = mysql_init(0);
    if (!m_mysql)
        return 0;
    return 1;
}
```

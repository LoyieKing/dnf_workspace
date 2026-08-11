# _ZN3nsl8TMsgCellILi131072EEC1Ev

`nsl::TMsgCell<131072>::TMsgCell()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80b7e50` | `0x50` | `0x80b79ee` | `0x50` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCellC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTVN3nsl8TMsgCellILi131072EEE+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movl   $&_ZL14gUnicodeBuffer+0x15dfc,0x8(%eax)
+movl   $&_ZL17g_szUnicodeBuffer+0x15dfc,0x8(%eax)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
-movl   $&_ZL14gUnicodeBuffer+0x15dfc,0x8(%esp)
+movl   $&_ZL17g_szUnicodeBuffer+0x15dfc,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void TMsgCell(TMsgCell<131072> * this) */

void __thiscall nsl::TMsgCell<131072>::_ZN3nsl8TMsgCellILi131072EEC1Ev(TMsgCell<131072> *this)

{
  CMsgCell::_ZN3nsl8CMsgCellC2Ev(&this->super_CMsgCell);
  (this->super_CMsgCell)._vptr_CMsgCell = (_func_int_varargs **)&PTR__TMsgCell_08162098;
  (this->super_CMsgCell).m_nBufLen = 0x20000;
  memset(this->m_bData,0,0x20000);
  (this->super_CMsgCell).m_bBuf = this->m_bData;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h](source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h)（约第 196 行）：

```cpp
    TMsgCell()
        throw()
    {
        m_nBufLen = BufSize;
        m_bBuf = m_bData;
    }
```

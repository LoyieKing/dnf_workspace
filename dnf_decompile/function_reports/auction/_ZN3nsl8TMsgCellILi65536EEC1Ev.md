# _ZN3nsl8TMsgCellILi65536EEC1Ev

`nsl::TMsgCell<65536>::TMsgCell()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x80b7e00` | `0x50` | `0x80b79a2` | `0x50` |

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
 movl   $&_ZTVN3nsl8TMsgCellILi65536EEE+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movl   $&_ZL14gUnicodeBuffer+0x5dfc,0x8(%eax)
+movl   $&_ZL17g_szUnicodeBuffer+0x5dfc,0x8(%eax)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
-movl   $&_ZL14gUnicodeBuffer+0x5dfc,0x8(%esp)
+movl   $&_ZL17g_szUnicodeBuffer+0x5dfc,0x8(%esp)
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

/* DWARF original prototype: void TMsgCell(TMsgCell<65536> * this) */

void __thiscall nsl::TMsgCell<65536>::_ZN3nsl8TMsgCellILi65536EEC1Ev(TMsgCell<65536> *this)

{
  CMsgCell::_ZN3nsl8CMsgCellC2Ev(&this->super_CMsgCell);
  (this->super_CMsgCell)._vptr_CMsgCell = (_func_int_varargs **)&PTR__TMsgCell_081620a8;
  (this->super_CMsgCell).m_nBufLen = 0x10000;
  memset(this->m_bData,0,0x10000);
  (this->super_CMsgCell).m_bBuf = this->m_bData;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/shared/common/include/TMsgCell.h](source/shared/common/include/TMsgCell.h)（约第 14 行）：

```cpp
    TMsgCell()
    {
        m_nBufLen = N;
        memset(buf, 0, N);
        m_bBuf = buf;
    }
```

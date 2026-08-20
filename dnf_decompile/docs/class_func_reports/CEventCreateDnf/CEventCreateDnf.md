# CEventCreateDnf

`_ZN15CEventCreateDnfC1Ev`

`CEventCreateDnf::CEventCreateDnf()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163aa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163aa4  _ZN15CEventCreateDnfC1Ev
#           CEventCreateDnf::CEventCreateDnf()
# range [0x08163aa4, 0x08163ae7]
08163aa4 +0x00:  push   %ebp
08163aa5 +0x01:  mov    %esp,%ebp
08163aa7 +0x03:  sub    $0x18,%esp
08163aaa +0x06:  mov    0x8(%ebp),%eax
08163aad +0x09:  mov    %eax,(%esp)
08163ab0 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08163ab5 +0x11:  mov    0x8(%ebp),%eax
08163ab8 +0x14:  movl   $&_ZTV15CEventCreateDnf+0x8,(%eax)
08163abe +0x1a:  mov    0x8(%ebp),%eax
08163ac1 +0x1d:  movl   $0x0,0xc(%eax)
08163ac8 +0x24:  mov    0x8(%ebp),%eax
08163acb +0x27:  movb   $0x0,0x10(%eax)
08163acf +0x2b:  mov    0x8(%ebp),%eax
08163ad2 +0x2e:  movb   $0x0,0x11(%eax)
08163ad6 +0x32:  mov    0x8(%ebp),%eax
08163ad9 +0x35:  movw   $0x0,0x12(%eax)
08163adf +0x3b:  mov    0x8(%ebp),%eax
08163ae2 +0x3e:  movb   $0x0,0x14(%eax)
08163ae6 +0x42:  leave
08163ae7 +0x43:  ret
```

## 反编译 C

```c
// CEventCreateDnf::CEventCreateDnf @ 0x8163aa4

/* CEventCreateDnf::CEventCreateDnf() */

void __thiscall CEventCreateDnf::CEventCreateDnf(CEventCreateDnf *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventCreateDnf_08b7cbc8;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CEventCreateDnf)0x0;
  this[0x11] = (CEventCreateDnf)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (CEventCreateDnf)0x0;
  return;
}
```

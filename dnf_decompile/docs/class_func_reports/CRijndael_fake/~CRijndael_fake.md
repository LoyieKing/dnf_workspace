# ~CRijndael_fake

`_ZN14CRijndael_fakeD1Ev`

`CRijndael_fake::~CRijndael_fake()`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b82c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b82c8  _ZN14CRijndael_fakeD1Ev
#           CRijndael_fake::~CRijndael_fake()
# range [0x080b82c8, 0x080b8321]
080b82c8 +0x00:  push   %ebp
080b82c9 +0x01:  mov    %esp,%ebp
080b82cb +0x03:  sub    $0x28,%esp
080b82ce +0x06:  mov    0x8(%ebp),%eax
080b82d1 +0x09:  movl   $&_ZTV14CRijndael_fake+0x8,(%eax)
080b82d7 +0x0f:  mov    0x8(%ebp),%eax
080b82da +0x12:  mov    0x4(%eax),%eax
080b82dd +0x15:  mov    %eax,-0x10(%ebp)
080b82e0 +0x18:  mov    0x8(%ebp),%eax
080b82e3 +0x1b:  mov    0x8(%eax),%edx
080b82e6 +0x1e:  mov    -0x10(%ebp),%eax
080b82e9 +0x21:  xor    %edx,%eax
080b82eb +0x23:  mov    %eax,-0x10(%ebp)
080b82ee +0x26:  lea    -0x10(%ebp),%eax
080b82f1 +0x29:  mov    (%eax),%eax
080b82f3 +0x2b:  mov    %eax,-0xc(%ebp)
080b82f6 +0x2e:  mov    -0xc(%ebp),%eax
080b82f9 +0x31:  mov    %eax,(%esp)
080b82fc +0x34:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b8301 +0x39:  mov    0x8(%ebp),%eax
080b8304 +0x3c:  movl   $0x0,0x4(%eax)
080b830b +0x43:  mov    $0x0,%eax
080b8310 +0x48:  test   %al,%al
080b8312 +0x4a:  je     080b831f <+0x57>
080b8314 +0x4c:  mov    0x8(%ebp),%eax
080b8317 +0x4f:  mov    %eax,(%esp)
080b831a +0x52:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b831f +0x57:  leave
080b8320 +0x58:  ret
080b8321 +0x59:  nop
```

## 反编译 C

```c
// CRijndael_fake::~CRijndael_fake @ 0x80b82c8

/* WARNING: Removing unreachable block (ram,0x080b8314) */
/* CRijndael_fake::~CRijndael_fake() */

void __thiscall CRijndael_fake::~CRijndael_fake(CRijndael_fake *this)

{
  *(undefined ***)this = &PTR__CRijndael_fake_08b22fa0;
  operator_delete((void *)(*(uint *)(this + 4) ^ *(uint *)(this + 8)));
  *(undefined4 *)(this + 4) = 0;
  return;
}
```

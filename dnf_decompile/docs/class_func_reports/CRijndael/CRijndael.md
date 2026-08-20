# CRijndael

`_ZN9CRijndaelC1Ev`

`CRijndael::CRijndael()`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b60ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b60ac  _ZN9CRijndaelC1Ev
#           CRijndael::CRijndael()
# range [0x080b60ac, 0x080b61d1]
080b60ac +0x000:  push   %ebp
080b60ad +0x001:  mov    %esp,%ebp
080b60af +0x003:  sub    $0x18,%esp
080b60b2 +0x006:  mov    0x8(%ebp),%eax
080b60b5 +0x009:  mov    %eax,(%esp)
080b60b8 +0x00c:  call   080b4294 <_ZN7IMethodC1Ev>  ; IMethod::IMethod()
080b60bd +0x011:  mov    0x8(%ebp),%eax
080b60c0 +0x014:  movl   $&_ZTV9CRijndael+0x8,(%eax)
080b60c6 +0x01a:  mov    0x8(%ebp),%eax
080b60c9 +0x01d:  add    $0x18,%eax
080b60cc +0x020:  movl   $0x20,0x8(%esp)
080b60d4 +0x028:  movl   $0x0,0x4(%esp)
080b60dc +0x030:  mov    %eax,(%esp)
080b60df +0x033:  call   0807dcc0 <_init+0x5b8>
080b60e4 +0x038:  mov    0x8(%ebp),%eax
080b60e7 +0x03b:  add    $0x38,%eax
080b60ea +0x03e:  movl   $0x1c0,0x8(%esp)
080b60f2 +0x046:  movl   $0x0,0x4(%esp)
080b60fa +0x04e:  mov    %eax,(%esp)
080b60fd +0x051:  call   0807dcc0 <_init+0x5b8>
080b6102 +0x056:  mov    0x8(%ebp),%eax
080b6105 +0x059:  add    $0x1f8,%eax
080b610a +0x05e:  movl   $0x1e0,0x8(%esp)
080b6112 +0x066:  movl   $0x0,0x4(%esp)
080b611a +0x06e:  mov    %eax,(%esp)
080b611d +0x071:  call   0807dcc0 <_init+0x5b8>
080b6122 +0x076:  mov    0x8(%ebp),%eax
080b6125 +0x079:  add    $0x3dc,%eax
080b612a +0x07e:  movl   $0x20,0x8(%esp)
080b6132 +0x086:  movl   $0x0,0x4(%esp)
080b613a +0x08e:  mov    %eax,(%esp)
080b613d +0x091:  call   0807dcc0 <_init+0x5b8>
080b6142 +0x096:  mov    0x8(%ebp),%eax
080b6145 +0x099:  add    $0x3fc,%eax
080b614a +0x09e:  movl   $0x20,0x8(%esp)
080b6152 +0x0a6:  movl   $0x0,0x4(%esp)
080b615a +0x0ae:  mov    %eax,(%esp)
080b615d +0x0b1:  call   0807dcc0 <_init+0x5b8>
080b6162 +0x0b6:  mov    0x8(%ebp),%eax
080b6165 +0x0b9:  add    $0x41c,%eax
080b616a +0x0be:  movl   $0x20,0x8(%esp)
080b6172 +0x0c6:  movl   $0x0,0x4(%esp)
080b617a +0x0ce:  mov    %eax,(%esp)
080b617d +0x0d1:  call   0807dcc0 <_init+0x5b8>
080b6182 +0x0d6:  mov    0x8(%ebp),%eax
080b6185 +0x0d9:  add    $0x43c,%eax
080b618a +0x0de:  movl   $0x20,0x8(%esp)
080b6192 +0x0e6:  movl   $0x0,0x4(%esp)
080b619a +0x0ee:  mov    %eax,(%esp)
080b619d +0x0f1:  call   0807dcc0 <_init+0x5b8>
080b61a2 +0x0f6:  mov    0x8(%ebp),%eax
080b61a5 +0x0f9:  add    $0x45c,%eax
080b61aa +0x0fe:  movl   $0x20,0x8(%esp)
080b61b2 +0x106:  movl   $0x0,0x4(%esp)
080b61ba +0x10e:  mov    %eax,(%esp)
080b61bd +0x111:  call   0807dcc0 <_init+0x5b8>
080b61c2 +0x116:  mov    0x8(%ebp),%eax
080b61c5 +0x119:  movl   $0x0,0x3d8(%eax)
080b61cf +0x123:  leave
080b61d0 +0x124:  ret
080b61d1 +0x125:  nop
```

## 反编译 C

```c
// CRijndael::CRijndael @ 0x80b60ac

/* CRijndael::CRijndael() */

void __thiscall CRijndael::CRijndael(CRijndael *this)

{
  IMethod::IMethod((IMethod *)this);
  *(undefined ***)this = &PTR__CRijndael_08b22f68;
  memset(this + 0x18,0,0x20);
  memset(this + 0x38,0,0x1c0);
  memset(this + 0x1f8,0,0x1e0);
  memset(this + 0x3dc,0,0x20);
  memset(this + 0x3fc,0,0x20);
  memset(this + 0x41c,0,0x20);
  memset(this + 0x43c,0,0x20);
  memset(this + 0x45c,0,0x20);
  *(undefined4 *)(this + 0x3d8) = 0;
  return;
}
```

# ResetChain

`_ZN9CRijndael10ResetChainEv`

`CRijndael::ResetChain()`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b6a54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b6a54  _ZN9CRijndael10ResetChainEv
#           CRijndael::ResetChain()
# range [0x080b6a54, 0x080b6a9d]
080b6a54 +0x00:  push   %ebp
080b6a55 +0x01:  mov    %esp,%ebp
080b6a57 +0x03:  sub    $0x18,%esp
080b6a5a +0x06:  mov    0x8(%ebp),%eax
080b6a5d +0x09:  movzbl 0x4(%eax),%eax
080b6a61 +0x0d:  xor    $0x1,%eax
080b6a64 +0x10:  test   %al,%al
080b6a66 +0x12:  je     080b6a6f <+0x1b>
080b6a68 +0x14:  mov    $0x70000005,%eax
080b6a6d +0x19:  jmp    080b6a9c <+0x48>
080b6a6f +0x1b:  mov    0x8(%ebp),%eax
080b6a72 +0x1e:  mov    0x8(%eax),%eax
080b6a75 +0x21:  mov    0x8(%ebp),%edx
080b6a78 +0x24:  lea    0x3dc(%edx),%ecx
080b6a7e +0x2a:  mov    0x8(%ebp),%edx
080b6a81 +0x2d:  add    $0x3fc,%edx
080b6a87 +0x33:  mov    %eax,0x8(%esp)
080b6a8b +0x37:  mov    %ecx,0x4(%esp)
080b6a8f +0x3b:  mov    %edx,(%esp)
080b6a92 +0x3e:  call   0807d8a0 <_init+0x198>
080b6a97 +0x43:  mov    $0x6fffffff,%eax
080b6a9c +0x48:  leave
080b6a9d +0x49:  ret
```

## 反编译 C

```c
// CRijndael::ResetChain @ 0x80b6a54

/* CRijndael::ResetChain() */

undefined4 __thiscall CRijndael::ResetChain(CRijndael *this)

{
  undefined4 uVar1;
  
  if (this[4] == (CRijndael)0x1) {
    memcpy(this + 0x3fc,this + 0x3dc,*(size_t *)(this + 8));
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```

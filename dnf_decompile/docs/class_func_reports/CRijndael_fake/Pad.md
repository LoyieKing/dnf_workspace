# Pad

`_ZN14CRijndael_fake3PadEPciPj`

`CRijndael_fake::Pad(char*, int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b84a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b84a6  _ZN14CRijndael_fake3PadEPciPj
#           CRijndael_fake::Pad(char*, int, unsigned int*)
# range [0x080b84a6, 0x080b851b]
080b84a6 +0x00:  push   %ebp
080b84a7 +0x01:  mov    %esp,%ebp
080b84a9 +0x03:  sub    $0x38,%esp
080b84ac +0x06:  mov    0x8(%ebp),%eax
080b84af +0x09:  mov    %eax,(%esp)
080b84b2 +0x0c:  call   080b851c <_ZNK14CRijndael_fake12GetBlockSizeEv>  ; CRijndael_fake::GetBlockSize() const
080b84b7 +0x11:  mov    %eax,-0x1c(%ebp)
080b84ba +0x14:  mov    0x10(%ebp),%edx
080b84bd +0x17:  mov    %edx,%eax
080b84bf +0x19:  sar    $0x1f,%edx
080b84c2 +0x1c:  idivl  -0x1c(%ebp)
080b84c5 +0x1f:  mov    %edx,-0x18(%ebp)
080b84c8 +0x22:  cmpl   $0x0,-0x18(%ebp)
080b84cc +0x26:  je     080b8517 <+0x71>
080b84ce +0x28:  mov    0x8(%ebp),%eax
080b84d1 +0x2b:  mov    %eax,(%esp)
080b84d4 +0x2e:  call   080b851c <_ZNK14CRijndael_fake12GetBlockSizeEv>  ; CRijndael_fake::GetBlockSize() const
080b84d9 +0x33:  sub    -0x18(%ebp),%eax
080b84dc +0x36:  mov    %eax,-0x14(%ebp)
080b84df +0x39:  mov    0x10(%ebp),%eax
080b84e2 +0x3c:  add    0xc(%ebp),%eax
080b84e5 +0x3f:  mov    %eax,-0x10(%ebp)
080b84e8 +0x42:  movl   $0x0,-0xc(%ebp)
080b84ef +0x49:  jmp    080b84ff <+0x59>
080b84f1 +0x4b:  mov    -0x10(%ebp),%eax
080b84f4 +0x4e:  movb   $0x0,(%eax)
080b84f7 +0x51:  addl   $0x1,-0xc(%ebp)
080b84fb +0x55:  addl   $0x1,-0x10(%ebp)
080b84ff +0x59:  mov    -0xc(%ebp),%eax
080b8502 +0x5c:  cmp    -0x14(%ebp),%eax
080b8505 +0x5f:  setl   %al
080b8508 +0x62:  test   %al,%al
080b850a +0x64:  jne    080b84f1 <+0x4b>
080b850c +0x66:  mov    -0x14(%ebp),%eax
080b850f +0x69:  mov    0x10(%ebp),%edx
080b8512 +0x6c:  lea    (%edx,%eax,1),%eax
080b8515 +0x6f:  jmp    080b851a <+0x74>
080b8517 +0x71:  mov    0x10(%ebp),%eax
080b851a +0x74:  leave
080b851b +0x75:  ret
```

## 反编译 C

```c
// CRijndael_fake::Pad @ 0x80b84a6

/* CRijndael_fake::Pad(char*, int, unsigned int*) */

uint * CRijndael_fake::Pad(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *local_14;
  int local_10;
  
  iVar1 = GetBlockSize();
  if ((int)param_3 % iVar1 != 0) {
    iVar2 = GetBlockSize();
    iVar2 = iVar2 - (int)param_3 % iVar1;
    local_14 = (undefined1 *)((int)param_3 + param_2);
    for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
      *local_14 = 0;
      local_14 = local_14 + 1;
    }
    param_3 = (uint *)((int)param_3 + iVar2);
  }
  return param_3;
}
```

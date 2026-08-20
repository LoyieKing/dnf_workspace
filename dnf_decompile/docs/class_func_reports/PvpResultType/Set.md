# Set

`_ZN13PvpResultType3SetERKS_`

`PvpResultType::Set(PvpResultType const&)`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d58e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d58e6  _ZN13PvpResultType3SetERKS_
#           PvpResultType::Set(PvpResultType const&)
# range [0x085d58e6, 0x085d5923]
085d58e6 +0x00:  push   %ebp
085d58e7 +0x01:  mov    %esp,%ebp
085d58e9 +0x03:  push   %edi
085d58ea +0x04:  push   %esi
085d58eb +0x05:  push   %ebx
085d58ec +0x06:  mov    0x8(%ebp),%edx
085d58ef +0x09:  mov    0xc(%ebp),%eax
085d58f2 +0x0c:  mov    %eax,%ebx
085d58f4 +0x0e:  mov    $0x21,%eax
085d58f9 +0x13:  mov    %edx,%edi
085d58fb +0x15:  mov    %ebx,%esi
085d58fd +0x17:  mov    %eax,%ecx
085d58ff +0x19:  rep movsl %ds:(%esi),%es:(%edi)
085d5901 +0x1b:  mov    0x8(%ebp),%eax
085d5904 +0x1e:  mov    0x8(%eax),%eax
085d5907 +0x21:  test   %eax,%eax
085d5909 +0x23:  jns    085d591f <+0x39>
085d590b +0x25:  mov    0x8(%ebp),%eax
085d590e +0x28:  movl   $0x0,0x8(%eax)
085d5915 +0x2f:  mov    0x8(%ebp),%eax
085d5918 +0x32:  movl   $0x0,0x14(%eax)
085d591f +0x39:  pop    %ebx
085d5920 +0x3a:  pop    %esi
085d5921 +0x3b:  pop    %edi
085d5922 +0x3c:  pop    %ebp
085d5923 +0x3d:  ret
```

## 反编译 C

```c
// PvpResultType::Set @ 0x85d58e6

/* PvpResultType::Set(PvpResultType const&) */

void __thiscall PvpResultType::Set(PvpResultType *this,PvpResultType *param_1)

{
  int iVar1;
  PvpResultType *pPVar2;
  
  pPVar2 = this;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pPVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pPVar2 = pPVar2 + 4;
  }
  if (*(int *)(this + 8) < 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}
```

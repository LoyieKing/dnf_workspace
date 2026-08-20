# Print

`_ZNK13TiXmlDocument5PrintEP8_IO_FILEi`

`TiXmlDocument::Print(_IO_FILE*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e0610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0610  _ZNK13TiXmlDocument5PrintEP8_IO_FILEi
#           TiXmlDocument::Print(_IO_FILE*, int) const
# range [0x087e0610, 0x087e068a]
087e0610 +0x00:  push   %ebp
087e0611 +0x01:  mov    %esp,%ebp
087e0613 +0x03:  push   %edi
087e0614 +0x04:  push   %esi
087e0615 +0x05:  push   %ebx
087e0616 +0x06:  sub    $0x1c,%esp
087e0619 +0x09:  mov    0xc(%ebp),%esi
087e061c +0x0c:  mov    0x10(%ebp),%edi
087e061f +0x0f:  test   %esi,%esi
087e0621 +0x11:  je     087e065f <+0x4f>
087e0623 +0x13:  mov    0x8(%ebp),%eax
087e0626 +0x16:  mov    0x18(%eax),%ebx
087e0629 +0x19:  test   %ebx,%ebx
087e062b +0x1b:  je     087e0657 <+0x47>
087e062d +0x1d:  lea    0x0(%esi),%esi
087e0630 +0x20:  mov    (%ebx),%eax
087e0632 +0x22:  mov    %ebx,(%esp)
087e0635 +0x25:  mov    %edi,0x8(%esp)
087e0639 +0x29:  mov    %esi,0x4(%esp)
087e063d +0x2d:  call   *0x8(%eax)
087e0640 +0x30:  mov    %esi,0x4(%esp)
087e0644 +0x34:  movl   $0xa,(%esp)
087e064b +0x3b:  call   0807e4c0 <_init+0xdb8>
087e0650 +0x40:  mov    0x28(%ebx),%ebx
087e0653 +0x43:  test   %ebx,%ebx
087e0655 +0x45:  jne    087e0630 <+0x20>
087e0657 +0x47:  add    $0x1c,%esp
087e065a +0x4a:  pop    %ebx
087e065b +0x4b:  pop    %esi
087e065c +0x4c:  pop    %edi
087e065d +0x4d:  pop    %ebp
087e065e +0x4e:  ret
087e065f +0x4f:  movl   $&_ZZNK13TiXmlDocument5PrintEP8_IO_FILEiE19__PRETTY_FUNCTION__,0xc(%esp)
087e0667 +0x57:  movl   $0x47b,0x8(%esp)
087e066f +0x5f:  movl   $"tinyxml.cpp",0x4(%esp)
087e0677 +0x67:  movl   $"cfile",(%esp)
087e067e +0x6e:  call   0807dc50 <_init+0x548>
087e0683 +0x73:  nop
087e0684 +0x74:  lea    0x0(%esi),%esi
087e068a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlDocument::Print @ 0x87e0610

/* TiXmlDocument::Print(_IO_FILE*, int) const */

void __thiscall TiXmlDocument::Print(TiXmlDocument *this,_IO_FILE *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (_IO_FILE *)0x0) {
    for (piVar1 = *(int **)(this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
      fputc(10,param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cfile","tinyxml.cpp",0x47b,"virtual void TiXmlDocument::Print(FILE*, int) const");
}
```

# Print

`_ZNK12TiXmlComment5PrintEP8_IO_FILEi`

`TiXmlComment::Print(_IO_FILE*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e0580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0580  _ZNK12TiXmlComment5PrintEP8_IO_FILEi
#           TiXmlComment::Print(_IO_FILE*, int) const
# range [0x087e0580, 0x087e060a]
087e0580 +0x00:  push   %ebp
087e0581 +0x01:  mov    %esp,%ebp
087e0583 +0x03:  push   %edi
087e0584 +0x04:  push   %esi
087e0585 +0x05:  push   %ebx
087e0586 +0x06:  sub    $0x2c,%esp
087e0589 +0x09:  mov    0xc(%ebp),%esi
087e058c +0x0c:  mov    0x8(%ebp),%eax
087e058f +0x0f:  mov    0x10(%ebp),%edi
087e0592 +0x12:  test   %esi,%esi
087e0594 +0x14:  mov    %eax,-0x1c(%ebp)
087e0597 +0x17:  je     087e05e6 <+0x66>
087e0599 +0x19:  xor    %ebx,%ebx
087e059b +0x1b:  test   %edi,%edi
087e059d +0x1d:  jle    087e05c7 <+0x47>
087e059f +0x1f:  nop
087e05a0 +0x20:  add    $0x1,%ebx
087e05a3 +0x23:  mov    %esi,0xc(%esp)
087e05a7 +0x27:  movl   $0x4,0x8(%esp)
087e05af +0x2f:  movl   $0x1,0x4(%esp)
087e05b7 +0x37:  movl   $"    ",(%esp)
087e05be +0x3e:  call   0807e320 <_init+0xc18>
087e05c3 +0x43:  cmp    %ebx,%edi
087e05c5 +0x45:  jg     087e05a0 <+0x20>
087e05c7 +0x47:  mov    -0x1c(%ebp),%edx
087e05ca +0x4a:  mov    0x20(%edx),%eax
087e05cd +0x4d:  mov    %esi,0x8(%ebp)
087e05d0 +0x50:  movl   $"<!--%s-->",0xc(%ebp)
087e05d7 +0x57:  mov    %eax,0x10(%ebp)
087e05da +0x5a:  add    $0x2c,%esp
087e05dd +0x5d:  pop    %ebx
087e05de +0x5e:  pop    %esi
087e05df +0x5f:  pop    %edi
087e05e0 +0x60:  pop    %ebp
087e05e1 +0x61:  jmp    0807da90 <_init+0x388>
087e05e6 +0x66:  movl   $&_ZZNK12TiXmlComment5PrintEP8_IO_FILEiE19__PRETTY_FUNCTION__,0xc(%esp)
087e05ee +0x6e:  movl   $0x513,0x8(%esp)
087e05f6 +0x76:  movl   $"tinyxml.cpp",0x4(%esp)
087e05fe +0x7e:  movl   $"cfile",(%esp)
087e0605 +0x85:  call   0807dc50 <_init+0x548>
087e060a +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlComment::Print @ 0x87e0580

/* TiXmlComment::Print(_IO_FILE*, int) const */

void __thiscall TiXmlComment::Print(TiXmlComment *this,_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (_IO_FILE *)0x0) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        iVar1 = iVar1 + 1;
        fwrite(&DAT_08de0e71,1,4,param_1);
      } while (iVar1 < param_2);
    }
    fprintf(param_1,"<!--%s-->");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cfile","tinyxml.cpp",0x513,"virtual void TiXmlComment::Print(FILE*, int) const");
}
```

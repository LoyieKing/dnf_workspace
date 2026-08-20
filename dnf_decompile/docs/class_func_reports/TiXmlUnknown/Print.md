# Print

`_ZNK12TiXmlUnknown5PrintEP8_IO_FILEi`

`TiXmlUnknown::Print(_IO_FILE*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlUnknown` | `0x087e0510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0510  _ZNK12TiXmlUnknown5PrintEP8_IO_FILEi
#           TiXmlUnknown::Print(_IO_FILE*, int) const
# range [0x087e0510, 0x087e0579]
087e0510 +0x00:  push   %ebp
087e0511 +0x01:  mov    %esp,%ebp
087e0513 +0x03:  push   %edi
087e0514 +0x04:  push   %esi
087e0515 +0x05:  push   %ebx
087e0516 +0x06:  sub    $0x2c,%esp
087e0519 +0x09:  mov    0x10(%ebp),%edi
087e051c +0x0c:  mov    0x8(%ebp),%eax
087e051f +0x0f:  mov    0xc(%ebp),%esi
087e0522 +0x12:  test   %edi,%edi
087e0524 +0x14:  mov    %eax,-0x1c(%ebp)
087e0527 +0x17:  jle    087e0557 <+0x47>
087e0529 +0x19:  xor    %ebx,%ebx
087e052b +0x1b:  nop
087e052c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e0530 +0x20:  add    $0x1,%ebx
087e0533 +0x23:  mov    %esi,0xc(%esp)
087e0537 +0x27:  movl   $0x4,0x8(%esp)
087e053f +0x2f:  movl   $0x1,0x4(%esp)
087e0547 +0x37:  movl   $"    ",(%esp)
087e054e +0x3e:  call   0807e320 <_init+0xc18>
087e0553 +0x43:  cmp    %ebx,%edi
087e0555 +0x45:  jg     087e0530 <+0x20>
087e0557 +0x47:  mov    -0x1c(%ebp),%edx
087e055a +0x4a:  mov    0x20(%edx),%eax
087e055d +0x4d:  mov    %esi,0x8(%ebp)
087e0560 +0x50:  movl   $"<%s>",0xc(%ebp)
087e0567 +0x57:  mov    %eax,0x10(%ebp)
087e056a +0x5a:  add    $0x2c,%esp
087e056d +0x5d:  pop    %ebx
087e056e +0x5e:  pop    %esi
087e056f +0x5f:  pop    %edi
087e0570 +0x60:  pop    %ebp
087e0571 +0x61:  jmp    0807da90 <_init+0x388>
087e0576 +0x66:  lea    0x0(%esi),%esi
087e0579 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlUnknown::Print @ 0x87e0510

/* TiXmlUnknown::Print(_IO_FILE*, int) const */

void __thiscall TiXmlUnknown::Print(TiXmlUnknown *this,_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      fwrite(&DAT_08de0e71,1,4,param_1);
    } while (iVar1 < param_2);
  }
  fprintf(param_1,"<%s>");
  return;
}
```

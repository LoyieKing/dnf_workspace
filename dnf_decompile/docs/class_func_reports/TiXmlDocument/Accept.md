# Accept

`_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor`

`TiXmlDocument::Accept(TiXmlVisitor*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087dffc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dffc0  _ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor
#           TiXmlDocument::Accept(TiXmlVisitor*) const
# range [0x087dffc0, 0x087e001a]
087dffc0 +0x00:  push   %ebp
087dffc1 +0x01:  mov    %esp,%ebp
087dffc3 +0x03:  push   %edi
087dffc4 +0x04:  push   %esi
087dffc5 +0x05:  push   %ebx
087dffc6 +0x06:  sub    $0x1c,%esp
087dffc9 +0x09:  mov    0xc(%ebp),%esi
087dffcc +0x0c:  mov    0x8(%ebp),%edi
087dffcf +0x0f:  mov    (%esi),%eax
087dffd1 +0x11:  mov    %edi,0x4(%esp)
087dffd5 +0x15:  mov    %esi,(%esp)
087dffd8 +0x18:  call   *0x8(%eax)
087dffdb +0x1b:  test   %al,%al
087dffdd +0x1d:  je     087dffff <+0x3f>
087dffdf +0x1f:  mov    0x18(%edi),%ebx
087dffe2 +0x22:  test   %ebx,%ebx
087dffe4 +0x24:  jne    087dffef <+0x2f>
087dffe6 +0x26:  jmp    087dffff <+0x3f>
087dffe8 +0x28:  mov    0x28(%ebx),%ebx
087dffeb +0x2b:  test   %ebx,%ebx
087dffed +0x2d:  je     087dffff <+0x3f>
087dffef +0x2f:  mov    (%ebx),%eax
087dfff1 +0x31:  mov    %esi,0x4(%esp)
087dfff5 +0x35:  mov    %ebx,(%esp)
087dfff8 +0x38:  call   *0x44(%eax)
087dfffb +0x3b:  test   %al,%al
087dfffd +0x3d:  jne    087dffe8 <+0x28>
087dffff +0x3f:  mov    (%esi),%eax
087e0001 +0x41:  mov    %edi,0xc(%ebp)
087e0004 +0x44:  mov    %esi,0x8(%ebp)
087e0007 +0x47:  mov    0xc(%eax),%eax
087e000a +0x4a:  add    $0x1c,%esp
087e000d +0x4d:  pop    %ebx
087e000e +0x4e:  pop    %esi
087e000f +0x4f:  pop    %edi
087e0010 +0x50:  pop    %ebp
087e0011 +0x51:  jmp    *%eax
087e0013 +0x53:  nop
087e0014 +0x54:  lea    0x0(%esi),%esi
087e001a +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlDocument::Accept @ 0x87dffc0

/* TiXmlDocument::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlDocument::Accept(TiXmlDocument *this,TiXmlVisitor *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(int *)param_1 + 8))(param_1,this);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(this + 0x18);
    while ((piVar1 != (int *)0x0 &&
           (cVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1), cVar2 != '\0'))) {
      piVar1 = (int *)piVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x087e0011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0xc))();
  return;
}
```

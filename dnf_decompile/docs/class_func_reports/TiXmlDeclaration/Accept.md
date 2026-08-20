# Accept

`_ZNK16TiXmlDeclaration6AcceptEP12TiXmlVisitor`

`TiXmlDeclaration::Accept(TiXmlVisitor*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e00c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e00c0  _ZNK16TiXmlDeclaration6AcceptEP12TiXmlVisitor
#           TiXmlDeclaration::Accept(TiXmlVisitor*) const
# range [0x087e00c0, 0x087e00da]
087e00c0 +0x00:  push   %ebp
087e00c1 +0x01:  mov    %esp,%ebp
087e00c3 +0x03:  sub    $0x8,%esp
087e00c6 +0x06:  mov    0xc(%ebp),%eax
087e00c9 +0x09:  mov    0x8(%ebp),%ecx
087e00cc +0x0c:  mov    (%eax),%edx
087e00ce +0x0e:  mov    %ecx,0xc(%ebp)
087e00d1 +0x11:  mov    %eax,0x8(%ebp)
087e00d4 +0x14:  mov    0x18(%edx),%eax
087e00d7 +0x17:  leave
087e00d8 +0x18:  jmp    *%eax
087e00da +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlDeclaration::Accept @ 0x87e00c0

/* TiXmlDeclaration::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlDeclaration::Accept(TiXmlDeclaration *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e00d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x18))();
  return;
}
```

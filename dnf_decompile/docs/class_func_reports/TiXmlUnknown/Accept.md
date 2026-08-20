# Accept

`_ZNK12TiXmlUnknown6AcceptEP12TiXmlVisitor`

`TiXmlUnknown::Accept(TiXmlVisitor*) const`

| 类 | 地址 |
|---|---|
| `TiXmlUnknown` | `0x087e00e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e00e0  _ZNK12TiXmlUnknown6AcceptEP12TiXmlVisitor
#           TiXmlUnknown::Accept(TiXmlVisitor*) const
# range [0x087e00e0, 0x087e00fa]
087e00e0 +0x00:  push   %ebp
087e00e1 +0x01:  mov    %esp,%ebp
087e00e3 +0x03:  sub    $0x8,%esp
087e00e6 +0x06:  mov    0xc(%ebp),%eax
087e00e9 +0x09:  mov    0x8(%ebp),%ecx
087e00ec +0x0c:  mov    (%eax),%edx
087e00ee +0x0e:  mov    %ecx,0xc(%ebp)
087e00f1 +0x11:  mov    %eax,0x8(%ebp)
087e00f4 +0x14:  mov    0x24(%edx),%eax
087e00f7 +0x17:  leave
087e00f8 +0x18:  jmp    *%eax
087e00fa +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlUnknown::Accept @ 0x87e00e0

/* TiXmlUnknown::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlUnknown::Accept(TiXmlUnknown *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e00f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x24))();
  return;
}
```

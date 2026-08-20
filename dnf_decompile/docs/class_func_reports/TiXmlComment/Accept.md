# Accept

`_ZNK12TiXmlComment6AcceptEP12TiXmlVisitor`

`TiXmlComment::Accept(TiXmlVisitor*) const`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e0080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0080  _ZNK12TiXmlComment6AcceptEP12TiXmlVisitor
#           TiXmlComment::Accept(TiXmlVisitor*) const
# range [0x087e0080, 0x087e009a]
087e0080 +0x00:  push   %ebp
087e0081 +0x01:  mov    %esp,%ebp
087e0083 +0x03:  sub    $0x8,%esp
087e0086 +0x06:  mov    0xc(%ebp),%eax
087e0089 +0x09:  mov    0x8(%ebp),%ecx
087e008c +0x0c:  mov    (%eax),%edx
087e008e +0x0e:  mov    %ecx,0xc(%ebp)
087e0091 +0x11:  mov    %eax,0x8(%ebp)
087e0094 +0x14:  mov    0x20(%edx),%eax
087e0097 +0x17:  leave
087e0098 +0x18:  jmp    *%eax
087e009a +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlComment::Accept @ 0x87e0080

/* TiXmlComment::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlComment::Accept(TiXmlComment *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e0098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x20))();
  return;
}
```

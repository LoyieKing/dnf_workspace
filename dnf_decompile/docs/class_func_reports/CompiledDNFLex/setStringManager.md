# setStringManager

`_ZN14CompiledDNFLex16setStringManagerEP19ScriptStringManagerb`

`CompiledDNFLex::setStringManager(ScriptStringManager*, bool)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0050  _ZN14CompiledDNFLex16setStringManagerEP19ScriptStringManagerb
#           CompiledDNFLex::setStringManager(ScriptStringManager*, bool)
# range [0x08ad0050, 0x08ad006a]
08ad0050 +0x00:  push   %ebp
08ad0051 +0x01:  mov    %esp,%ebp
08ad0053 +0x03:  mov    0x8(%ebp),%eax
08ad0056 +0x06:  mov    0x10(%ebp),%edx
08ad0059 +0x09:  mov    %dl,0xc(%eax)
08ad005c +0x0c:  mov    0xc(%ebp),%edx
08ad005f +0x0f:  mov    %edx,0x10(%eax)
08ad0062 +0x12:  pop    %ebp
08ad0063 +0x13:  ret
08ad0064 +0x14:  lea    0x0(%esi),%esi
08ad006a +0x1a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// CompiledDNFLex::setStringManager @ 0x8ad0050

/* DWARF original prototype: void setStringManager(CompiledDNFLex * this, ScriptStringManager *
   pStringManager, bool allowOwner) */

void __thiscall
CompiledDNFLex::setStringManager
          (CompiledDNFLex *this,ScriptStringManager *pStringManager,bool allowOwner)

{
  this->stringManagerDelete_ = allowOwner;
  this->stringManager_ = pStringManager;
  return;
}
```

# getCFloat

`_ZNK14CNRDScriptData9getCFloatEPKc`

`CNRDScriptData::getCFloat(char const*) const`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807ff62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807ff62  _ZNK14CNRDScriptData9getCFloatEPKc
#           CNRDScriptData::getCFloat(char const*) const
# range [0x0807ff62, 0x0807ff99]
0807ff62 +0x00:  push   %ebp
0807ff63 +0x01:  mov    %esp,%ebp
0807ff65 +0x03:  sub    $0x38,%esp
0807ff68 +0x06:  mov    0x8(%ebp),%eax
0807ff6b +0x09:  lea    0x64(%eax),%edx
0807ff6e +0x0c:  mov    0xc(%ebp),%eax
0807ff71 +0x0f:  mov    %eax,0x4(%esp)
0807ff75 +0x13:  mov    %edx,(%esp)
0807ff78 +0x16:  call   08080ede <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xf04>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xf04
0807ff7d +0x1b:  mov    %eax,-0xc(%ebp)
0807ff80 +0x1e:  cmpl   $0x0,-0xc(%ebp)
0807ff84 +0x22:  jne    0807ff8d <+0x2b>
0807ff86 +0x24:  mov    $0xbf800000,%eax
0807ff8b +0x29:  jmp    0807ff92 <+0x30>
0807ff8d +0x2b:  mov    -0xc(%ebp),%eax
0807ff90 +0x2e:  mov    (%eax),%eax
0807ff92 +0x30:  mov    %eax,-0x1c(%ebp)
0807ff95 +0x33:  flds   -0x1c(%ebp)
0807ff98 +0x36:  leave
0807ff99 +0x37:  ret
```

## 反编译 C

```c
// CNRDScriptData::getCFloat @ 0x807ff62

/* CNRDScriptData::getCFloat(char const*) const */

longdouble CNRDScriptData::getCFloat(char *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)StringUnorderedMap<CharStringHashTrait,float>::get(param_1 + 100);
  if (pfVar1 == (float *)0x0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = *pfVar1;
  }
  return (longdouble)fVar2;
}
```

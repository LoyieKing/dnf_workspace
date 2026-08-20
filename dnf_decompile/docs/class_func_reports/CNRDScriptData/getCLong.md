# getCLong

`_ZNK14CNRDScriptData8getCLongEPKc`

`CNRDScriptData::getCLong(char const*) const`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807ff30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807ff30  _ZNK14CNRDScriptData8getCLongEPKc
#           CNRDScriptData::getCLong(char const*) const
# range [0x0807ff30, 0x0807ff61]
0807ff30 +0x00:  push   %ebp
0807ff31 +0x01:  mov    %esp,%ebp
0807ff33 +0x03:  sub    $0x28,%esp
0807ff36 +0x06:  mov    0x8(%ebp),%eax
0807ff39 +0x09:  lea    0x44(%eax),%edx
0807ff3c +0x0c:  mov    0xc(%ebp),%eax
0807ff3f +0x0f:  mov    %eax,0x4(%esp)
0807ff43 +0x13:  mov    %edx,(%esp)
0807ff46 +0x16:  call   08080e7a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xea0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xea0
0807ff4b +0x1b:  mov    %eax,-0xc(%ebp)
0807ff4e +0x1e:  cmpl   $0x0,-0xc(%ebp)
0807ff52 +0x22:  jne    0807ff5b <+0x2b>
0807ff54 +0x24:  mov    $0xffffffff,%eax
0807ff59 +0x29:  jmp    0807ff60 <+0x30>
0807ff5b +0x2b:  mov    -0xc(%ebp),%eax
0807ff5e +0x2e:  mov    (%eax),%eax
0807ff60 +0x30:  leave
0807ff61 +0x31:  ret
```

## 反编译 C

```c
// CNRDScriptData::getCLong @ 0x807ff30

/* CNRDScriptData::getCLong(char const*) const */

undefined4 CNRDScriptData::getCLong(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1 + 0x44);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}
```

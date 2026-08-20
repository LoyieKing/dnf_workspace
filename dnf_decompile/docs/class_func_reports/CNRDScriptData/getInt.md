# getInt

`_ZNK14CNRDScriptData6getIntEPKc`

`CNRDScriptData::getInt(char const*) const`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fe8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fe8a  _ZNK14CNRDScriptData6getIntEPKc
#           CNRDScriptData::getInt(char const*) const
# range [0x0807fe8a, 0x0807febb]
0807fe8a +0x00:  push   %ebp
0807fe8b +0x01:  mov    %esp,%ebp
0807fe8d +0x03:  sub    $0x28,%esp
0807fe90 +0x06:  mov    0x8(%ebp),%eax
0807fe93 +0x09:  lea    0x4(%eax),%edx
0807fe96 +0x0c:  mov    0xc(%ebp),%eax
0807fe99 +0x0f:  mov    %eax,0x4(%esp)
0807fe9d +0x13:  mov    %edx,(%esp)
0807fea0 +0x16:  call   08080e7a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xea0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xea0
0807fea5 +0x1b:  mov    %eax,-0xc(%ebp)
0807fea8 +0x1e:  cmpl   $0x0,-0xc(%ebp)
0807feac +0x22:  jne    0807feb5 <+0x2b>
0807feae +0x24:  mov    $0xffffffff,%eax
0807feb3 +0x29:  jmp    0807feba <+0x30>
0807feb5 +0x2b:  mov    -0xc(%ebp),%eax
0807feb8 +0x2e:  mov    (%eax),%eax
0807feba +0x30:  leave
0807febb +0x31:  ret
```

## 反编译 C

```c
// CNRDScriptData::getInt @ 0x807fe8a

/* CNRDScriptData::getInt(char const*) const */

undefined4 CNRDScriptData::getInt(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}
```

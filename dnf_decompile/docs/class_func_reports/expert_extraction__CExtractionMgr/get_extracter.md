# get_extracter

`_ZN17expert_extraction14CExtractionMgr13get_extracterEj`

`expert_extraction::CExtractionMgr::get_extracter(unsigned int)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtractionMgr` | `0x084a3166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3166  _ZN17expert_extraction14CExtractionMgr13get_extracterEj
#           expert_extraction::CExtractionMgr::get_extracter(unsigned int)
# range [0x084a3166, 0x084a3181]
084a3166 +0x00:  push   %ebp
084a3167 +0x01:  mov    %esp,%ebp
084a3169 +0x03:  cmpl   $0x2,0xc(%ebp)
084a316d +0x07:  jbe    084a3176 <+0x10>
084a316f +0x09:  mov    $0x0,%eax
084a3174 +0x0e:  jmp    084a317f <+0x19>
084a3176 +0x10:  mov    0xc(%ebp),%edx
084a3179 +0x13:  mov    0x8(%ebp),%eax
084a317c +0x16:  mov    (%eax,%edx,4),%eax
084a317f +0x19:  pop    %ebp
084a3180 +0x1a:  ret
084a3181 +0x1b:  nop
```

## 反编译 C

```c
// expert_extraction::CExtractionMgr::get_extracter @ 0x84a3166

/* expert_extraction::CExtractionMgr::get_extracter(unsigned int) */

undefined4 __thiscall
expert_extraction::CExtractionMgr::get_extracter(CExtractionMgr *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

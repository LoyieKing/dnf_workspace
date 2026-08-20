# operator delete

`_ZN24CAdvertisementExposeInfodlEPvj`

`CAdvertisementExposeInfo::operator delete(void*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CAdvertisementExposeInfo` | `0x080fc9ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc9ac  _ZN24CAdvertisementExposeInfodlEPvj
#           CAdvertisementExposeInfo::operator delete(void*, unsigned int)
# range [0x080fc9ac, 0x080fc9cd]
080fc9ac +0x00:  push   %ebp
080fc9ad +0x01:  mov    %esp,%ebp
080fc9af +0x03:  sub    $0x18,%esp
080fc9b2 +0x06:  mov    0xc(%ebp),%eax
080fc9b5 +0x09:  mov    %eax,0x8(%esp)
080fc9b9 +0x0d:  mov    0x8(%ebp),%eax
080fc9bc +0x10:  mov    %eax,0x4(%esp)
080fc9c0 +0x14:  movl   $&_ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E,(%esp)
080fc9c7 +0x1b:  call   080fe188 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x4b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x4b4
080fc9cc +0x20:  leave
080fc9cd +0x21:  ret
```

## 反编译 C

```c
// CAdvertisementExposeInfo::operator @ 0x80fc9ac

/* CAdvertisementExposeInfo::operator delete(void*, unsigned int) */

void CAdvertisementExposeInfo::operator_delete(void *param_1,uint param_2)

{
  MemPool<CAdvertisementExposeInfo>::free
            ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_,param_1,param_2);
  return;
}
```

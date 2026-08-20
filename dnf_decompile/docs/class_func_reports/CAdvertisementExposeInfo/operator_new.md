# operator new

`_ZN24CAdvertisementExposeInfonwEj`

`CAdvertisementExposeInfo::operator new(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAdvertisementExposeInfo` | `0x080fc998` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc998  _ZN24CAdvertisementExposeInfonwEj
#           CAdvertisementExposeInfo::operator new(unsigned int)
# range [0x080fc998, 0x080fc9ab]
080fc998 +0x00:  push   %ebp
080fc999 +0x01:  mov    %esp,%ebp
080fc99b +0x03:  sub    $0x18,%esp
080fc99e +0x06:  movl   $&_ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E,(%esp)
080fc9a5 +0x0d:  call   080fe038 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x364>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x364
080fc9aa +0x12:  leave
080fc9ab +0x13:  ret
```

## 反编译 C

```c
// CAdvertisementExposeInfo::operator @ 0x80fc998

/* CAdvertisementExposeInfo::operator new(unsigned int) */

void * __thiscall
CAdvertisementExposeInfo::operator_new(CAdvertisementExposeInfo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)MemPool<CAdvertisementExposeInfo>::alloc
                             ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_);
  return pvVar1;
}
```

# operator delete

`_ZN24CAdvertisementExposeInfodlEPv`

`CAdvertisementExposeInfo::operator delete(void*)`

| 类 | 地址 |
|---|---|
| `CAdvertisementExposeInfo` | `0x080fc9ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc9ce  _ZN24CAdvertisementExposeInfodlEPv
#           CAdvertisementExposeInfo::operator delete(void*)
# range [0x080fc9ce, 0x080fc9e8]
080fc9ce +0x00:  push   %ebp
080fc9cf +0x01:  mov    %esp,%ebp
080fc9d1 +0x03:  sub    $0x18,%esp
080fc9d4 +0x06:  mov    0x8(%ebp),%eax
080fc9d7 +0x09:  mov    %eax,0x4(%esp)
080fc9db +0x0d:  movl   $&_ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E,(%esp)
080fc9e2 +0x14:  call   080fe1ce <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x4fa>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x4fa
080fc9e7 +0x19:  leave
080fc9e8 +0x1a:  ret
```

## 反编译 C

```c
// CAdvertisementExposeInfo::operator @ 0x80fc9ce

/* CAdvertisementExposeInfo::operator delete(void*) */

void __thiscall
CAdvertisementExposeInfo::operator_delete(CAdvertisementExposeInfo *this,void *param_1)

{
  MemPool<CAdvertisementExposeInfo>::free
            ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_,this);
  return;
}
```

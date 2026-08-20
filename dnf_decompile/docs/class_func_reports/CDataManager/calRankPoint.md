# calRankPoint

`_ZN12CDataManager12calRankPointEii`

`CDataManager::calRankPoint(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083639c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083639c4  _ZN12CDataManager12calRankPointEii
#           CDataManager::calRankPoint(int, int)
# range [0x083639c4, 0x083639d1]
083639c4 +0x00:  push   %ebp
083639c5 +0x01:  mov    %esp,%ebp
083639c7 +0x03:  mov    0x10(%ebp),%eax
083639ca +0x06:  mov    0xc(%ebp),%edx
083639cd +0x09:  lea    (%edx,%eax,1),%eax
083639d0 +0x0c:  pop    %ebp
083639d1 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::calRankPoint @ 0x83639c4

/* CDataManager::calRankPoint(int, int) */

int __thiscall CDataManager::calRankPoint(CDataManager *this,int param_1,int param_2)

{
  return param_1 + param_2;
}
```

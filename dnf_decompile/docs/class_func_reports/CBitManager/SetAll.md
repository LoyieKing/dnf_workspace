# SetAll

`_ZN11CBitManager6SetAllEiPh`

`CBitManager::SetAll(int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c0ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c0ce  _ZN11CBitManager6SetAllEiPh
#           CBitManager::SetAll(int, unsigned char*)
# range [0x0831c0ce, 0x0831c115]
0831c0ce +0x00:  push   %ebp
0831c0cf +0x01:  mov    %esp,%ebp
0831c0d1 +0x03:  sub    $0x10,%esp
0831c0d4 +0x06:  movl   $0x0,-0x4(%ebp)
0831c0db +0x0d:  movl   $0x0,-0x4(%ebp)
0831c0e2 +0x14:  jmp    0831c102 <+0x34>
0831c0e4 +0x16:  cmpl   $0x0,0xc(%ebp)
0831c0e8 +0x1a:  jne    0831c0f5 <+0x27>
0831c0ea +0x1c:  mov    -0x4(%ebp),%eax
0831c0ed +0x1f:  add    0x10(%ebp),%eax
0831c0f0 +0x22:  movb   $0x0,(%eax)
0831c0f3 +0x25:  jmp    0831c0fe <+0x30>
0831c0f5 +0x27:  mov    -0x4(%ebp),%eax
0831c0f8 +0x2a:  add    0x10(%ebp),%eax
0831c0fb +0x2d:  movb   $0xff,(%eax)
0831c0fe +0x30:  addl   $0x1,-0x4(%ebp)
0831c102 +0x34:  mov    0x8(%ebp),%eax
0831c105 +0x37:  mov    0x8(%eax),%eax
0831c108 +0x3a:  cmp    -0x4(%ebp),%eax
0831c10b +0x3d:  setg   %al
0831c10e +0x40:  test   %al,%al
0831c110 +0x42:  jne    0831c0e4 <+0x16>
0831c112 +0x44:  nop
0831c113 +0x45:  leave
0831c114 +0x46:  ret
0831c115 +0x47:  nop
```

## 反编译 C

```c
// CBitManager::SetAll @ 0x831c0ce

/* CBitManager::SetAll(int, unsigned char*) */

void __thiscall CBitManager::SetAll(CBitManager *this,int param_1,uchar *param_2)

{
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)(this + 8); local_8 = local_8 + 1) {
    if (param_1 == 0) {
      param_2[local_8] = '\0';
    }
    else {
      param_2[local_8] = 0xff;
    }
  }
  return;
}
```

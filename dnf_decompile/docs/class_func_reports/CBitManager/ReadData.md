# ReadData

`_ZN11CBitManager8ReadDataEPhi`

`CBitManager::ReadData(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c116  _ZN11CBitManager8ReadDataEPhi
#           CBitManager::ReadData(unsigned char*, int)
# range [0x0831c116, 0x0831c15f]
0831c116 +0x00:  push   %ebp
0831c117 +0x01:  mov    %esp,%ebp
0831c119 +0x03:  sub    $0x18,%esp
0831c11c +0x06:  mov    0x8(%ebp),%eax
0831c11f +0x09:  mov    0xc(%ebp),%edx
0831c122 +0x0c:  mov    %edx,(%eax)
0831c124 +0x0e:  mov    0x8(%ebp),%eax
0831c127 +0x11:  mov    0x10(%ebp),%edx
0831c12a +0x14:  mov    %edx,0x8(%eax)
0831c12d +0x17:  mov    0x10(%ebp),%eax
0831c130 +0x1a:  mov    %eax,(%esp)
0831c133 +0x1d:  call   0807df80 <_init+0x878>
0831c138 +0x22:  mov    %eax,%edx
0831c13a +0x24:  mov    0x8(%ebp),%eax
0831c13d +0x27:  mov    %edx,0x4(%eax)
0831c140 +0x2a:  mov    0x10(%ebp),%edx
0831c143 +0x2d:  mov    0x8(%ebp),%eax
0831c146 +0x30:  mov    0x4(%eax),%eax
0831c149 +0x33:  mov    %edx,0x8(%esp)
0831c14d +0x37:  movl   $0x0,0x4(%esp)
0831c155 +0x3f:  mov    %eax,(%esp)
0831c158 +0x42:  call   0807dcc0 <_init+0x5b8>
0831c15d +0x47:  leave
0831c15e +0x48:  ret
0831c15f +0x49:  nop
```

## 反编译 C

```c
// CBitManager::ReadData @ 0x831c116

/* CBitManager::ReadData(unsigned char*, int) */

void __thiscall CBitManager::ReadData(CBitManager *this,uchar *param_1,int param_2)

{
  void *pvVar1;
  
  *(uchar **)this = param_1;
  *(int *)(this + 8) = param_2;
  pvVar1 = malloc(param_2);
  *(void **)(this + 4) = pvVar1;
  memset(*(void **)(this + 4),0,param_2);
  return;
}
```

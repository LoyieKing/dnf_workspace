# generateNumber

`_ZN8WongWork21CGenerateRandomNumber14generateNumberEii`

`WongWork::CGenerateRandomNumber::generateNumber(int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGenerateRandomNumber` | `0x085334a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085334a4  _ZN8WongWork21CGenerateRandomNumber14generateNumberEii
#           WongWork::CGenerateRandomNumber::generateNumber(int, int)
# range [0x085334a4, 0x085334e9]
085334a4 +0x00:  push   %ebp
085334a5 +0x01:  mov    %esp,%ebp
085334a7 +0x03:  sub    $0x28,%esp
085334aa +0x06:  mov    0x8(%ebp),%eax
085334ad +0x09:  mov    0x4(%eax),%eax
085334b0 +0x0c:  cmp    0xc(%ebp),%eax
085334b3 +0x0f:  jge    085334c2 <+0x1e>
085334b5 +0x11:  mov    0x10(%ebp),%eax
085334b8 +0x14:  mov    %eax,(%esp)
085334bb +0x17:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085334c0 +0x1c:  jmp    085334e7 <+0x43>
085334c2 +0x1e:  mov    0x10(%ebp),%eax
085334c5 +0x21:  mov    %eax,-0xc(%ebp)
085334c8 +0x24:  mov    0x8(%ebp),%eax
085334cb +0x27:  mov    (%eax),%edx
085334cd +0x29:  mov    0xc(%ebp),%eax
085334d0 +0x2c:  imul   $0x9c8,%eax,%eax
085334d6 +0x32:  add    %eax,%edx
085334d8 +0x34:  lea    -0xc(%ebp),%eax
085334db +0x37:  mov    %eax,0x4(%esp)
085334df +0x3b:  mov    %edx,(%esp)
085334e2 +0x3e:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085334e7 +0x43:  leave
085334e8 +0x44:  ret
085334e9 +0x45:  nop
```

## 反编译 C

```c
// WongWork::CGenerateRandomNumber::generateNumber @ 0x85334a4

/* WongWork::CGenerateRandomNumber::generateNumber(int, int) */

void __thiscall
WongWork::CGenerateRandomNumber::generateNumber(CGenerateRandomNumber *this,int param_1,int param_2)

{
  ulong local_10 [3];
  
  if (*(int *)(this + 4) < param_1) {
    get_rand_int(param_2);
  }
  else {
    local_10[0] = param_2;
    CMTRand::randInt((CMTRand *)(*(int *)this + param_1 * 0x9c8),local_10);
  }
  return;
}
```

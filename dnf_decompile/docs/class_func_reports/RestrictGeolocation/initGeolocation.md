# initGeolocation

`_ZN19RestrictGeolocation15initGeolocationEv`

`RestrictGeolocation::initGeolocation()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170a46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170a46  _ZN19RestrictGeolocation15initGeolocationEv
#           RestrictGeolocation::initGeolocation()
# range [0x08170a46, 0x08170a87]
08170a46 +0x00:  push   %ebp
08170a47 +0x01:  mov    %esp,%ebp
08170a49 +0x03:  sub    $0x18,%esp
08170a4c +0x06:  mov    0x8(%ebp),%eax
08170a4f +0x09:  mov    (%eax),%eax
08170a51 +0x0b:  test   %eax,%eax
08170a53 +0x0d:  jne    08170a76 <+0x30>
08170a55 +0x0f:  movl   $0x0,(%esp)
08170a5c +0x16:  call   0807df30 <_init+0x828>
08170a61 +0x1b:  mov    0x8(%ebp),%edx
08170a64 +0x1e:  mov    %eax,(%edx)
08170a66 +0x20:  mov    0x8(%ebp),%eax
08170a69 +0x23:  mov    (%eax),%eax
08170a6b +0x25:  test   %eax,%eax
08170a6d +0x27:  jne    08170a76 <+0x30>
08170a6f +0x29:  mov    $0x0,%eax
08170a74 +0x2e:  jmp    08170a86 <+0x40>
08170a76 +0x30:  mov    0x8(%ebp),%eax
08170a79 +0x33:  mov    %eax,(%esp)
08170a7c +0x36:  call   08170fec <_ZN19RestrictGeolocation8loadDataEv>  ; RestrictGeolocation::loadData()
08170a81 +0x3b:  mov    $0x1,%eax
08170a86 +0x40:  leave
08170a87 +0x41:  ret
```

## 反编译 C

```c
// RestrictGeolocation::initGeolocation @ 0x8170a46

/* RestrictGeolocation::initGeolocation() */

undefined4 __thiscall RestrictGeolocation::initGeolocation(RestrictGeolocation *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = GeoIP_new(0);
    *(undefined4 *)this = uVar1;
    if (*(int *)this == 0) {
      return 0;
    }
  }
  loadData(this);
  return 1;
}
```

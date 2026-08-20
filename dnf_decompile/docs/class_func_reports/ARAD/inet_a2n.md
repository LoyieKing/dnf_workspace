# inet_a2n

`_ZN4ARAD8inet_a2nEPKc`

`ARAD::inet_a2n(char const*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x08197b71` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197b71  _ZN4ARAD8inet_a2nEPKc
#           ARAD::inet_a2n(char const*)
# range [0x08197b71, 0x08197ba3]
08197b71 +0x00:  push   %ebp
08197b72 +0x01:  mov    %esp,%ebp
08197b74 +0x03:  sub    $0x28,%esp
08197b77 +0x06:  cmpl   $0x0,0x8(%ebp)
08197b7b +0x0a:  jne    08197b84 <+0x13>
08197b7d +0x0c:  mov    $0x0,%eax
08197b82 +0x11:  jmp    08197ba2 <+0x31>
08197b84 +0x13:  mov    0x8(%ebp),%eax
08197b87 +0x16:  mov    %eax,(%esp)
08197b8a +0x19:  call   0807e530 <_init+0xe28>
08197b8f +0x1e:  mov    %eax,-0xc(%ebp)
08197b92 +0x21:  cmpl   $0xffffffff,-0xc(%ebp)
08197b96 +0x25:  jne    08197b9f <+0x2e>
08197b98 +0x27:  mov    $0x0,%eax
08197b9d +0x2c:  jmp    08197ba2 <+0x31>
08197b9f +0x2e:  mov    -0xc(%ebp),%eax
08197ba2 +0x31:  leave
08197ba3 +0x32:  ret
```

## 反编译 C

```c
// ARAD::inet_a2n @ 0x8197b71

/* ARAD::inet_a2n(char const*) */

in_addr_t ARAD::inet_a2n(char *param_1)

{
  in_addr_t iVar1;
  
  if (param_1 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = inet_addr(param_1);
    if (iVar1 == 0xffffffff) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
```

# NextCharacMoneyLog

`_ZN5CUser18NextCharacMoneyLogEi`

`CUser::NextCharacMoneyLog(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f1c0  _ZN5CUser18NextCharacMoneyLogEi
#           CUser::NextCharacMoneyLog(int)
# range [0x0868f1c0, 0x0868f265]
0868f1c0 +0x00:  push   %ebp
0868f1c1 +0x01:  mov    %esp,%ebp
0868f1c3 +0x03:  sub    $0x78,%esp
0868f1c6 +0x06:  mov    0x8(%ebp),%eax
0868f1c9 +0x09:  mov    0x796c8(%eax),%edx
0868f1cf +0x0f:  mov    0x8(%ebp),%ecx
0868f1d2 +0x12:  mov    %edx,%eax
0868f1d4 +0x14:  add    %eax,%eax
0868f1d6 +0x16:  add    %edx,%eax
0868f1d8 +0x18:  shl    $0x2,%eax
0868f1db +0x1b:  lea    (%ecx,%eax,1),%eax
0868f1de +0x1e:  add    $0x7967c,%eax
0868f1e3 +0x23:  mov    (%eax),%eax
0868f1e5 +0x25:  test   %eax,%eax
0868f1e7 +0x27:  je     0868f263 <+0xa3>
0868f1e9 +0x29:  lea    -0x34(%ebp),%eax
0868f1ec +0x2c:  mov    %eax,0x4(%esp)
0868f1f0 +0x30:  lea    0xc(%ebp),%eax
0868f1f3 +0x33:  mov    %eax,(%esp)
0868f1f6 +0x36:  call   0807e360 <_init+0xc58>
0868f1fb +0x3b:  mov    0x8(%ebp),%eax
0868f1fe +0x3e:  mov    0x796c8(%eax),%edx
0868f204 +0x44:  mov    %edx,%eax
0868f206 +0x46:  add    %eax,%eax
0868f208 +0x48:  add    %edx,%eax
0868f20a +0x4a:  shl    $0x2,%eax
0868f20d +0x4d:  add    $0x79670,%eax
0868f212 +0x52:  add    0x8(%ebp),%eax
0868f215 +0x55:  lea    0xc(%eax),%edx
0868f218 +0x58:  lea    -0x60(%ebp),%eax
0868f21b +0x5b:  mov    %eax,0x4(%esp)
0868f21f +0x5f:  mov    %edx,(%esp)
0868f222 +0x62:  call   0807e360 <_init+0xc58>
0868f227 +0x67:  mov    -0x28(%ebp),%edx
0868f22a +0x6a:  mov    -0x54(%ebp),%eax
0868f22d +0x6d:  cmp    %eax,%edx
0868f22f +0x6f:  je     0868f264 <+0xa4>
0868f231 +0x71:  mov    0x8(%ebp),%eax
0868f234 +0x74:  mov    0x796c8(%eax),%eax
0868f23a +0x7a:  lea    0x1(%eax),%edx
0868f23d +0x7d:  mov    0x8(%ebp),%eax
0868f240 +0x80:  mov    %edx,0x796c8(%eax)
0868f246 +0x86:  mov    0x8(%ebp),%eax
0868f249 +0x89:  mov    0x796c8(%eax),%eax
0868f24f +0x8f:  cmp    $0x6,%eax
0868f252 +0x92:  jle    0868f264 <+0xa4>
0868f254 +0x94:  mov    0x8(%ebp),%eax
0868f257 +0x97:  movl   $0x6,0x796c8(%eax)
0868f261 +0xa1:  jmp    0868f264 <+0xa4>
0868f263 +0xa3:  nop
0868f264 +0xa4:  leave
0868f265 +0xa5:  ret
```

## 反编译 C

```c
// CUser::NextCharacMoneyLog @ 0x868f1c0

/* CUser::NextCharacMoneyLog(int) */

void CUser::NextCharacMoneyLog(int param_1)

{
  tm local_64;
  tm local_38;
  
  if (*(int *)(param_1 + *(int *)(param_1 + 0x796c8) * 0xc + 0x7967c) != 0) {
    localtime_r((time_t *)&stack0x00000008,&local_38);
    localtime_r((time_t *)(*(int *)(param_1 + 0x796c8) * 0xc + param_1 + 0x7967c),&local_64);
    if ((local_38.tm_mday != local_64.tm_mday) &&
       (*(int *)(param_1 + 0x796c8) = *(int *)(param_1 + 0x796c8) + 1,
       6 < *(int *)(param_1 + 0x796c8))) {
      *(undefined4 *)(param_1 + 0x796c8) = 6;
    }
  }
  return;
}
```

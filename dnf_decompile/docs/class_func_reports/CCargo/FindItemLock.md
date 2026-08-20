# FindItemLock

`_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi`

`CCargo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c836` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c836  _ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi
#           CCargo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
# range [0x0850c836, 0x0850c8a7]
0850c836 +0x00:  push   %ebp
0850c837 +0x01:  mov    %esp,%ebp
0850c839 +0x03:  sub    $0x28,%esp
0850c83c +0x06:  mov    0xc(%ebp),%eax
0850c83f +0x09:  mov    %al,-0xc(%ebp)
0850c842 +0x0c:  mov    0x10(%ebp),%eax
0850c845 +0x0f:  movl   $0x2,(%eax)
0850c84b +0x15:  mov    0x14(%ebp),%eax
0850c84e +0x18:  movl   $0x0,(%eax)
0850c854 +0x1e:  jmp    0850c890 <+0x5a>
0850c856 +0x20:  mov    0x8(%ebp),%eax
0850c859 +0x23:  mov    0x4(%eax),%edx
0850c85c +0x26:  mov    0x14(%ebp),%eax
0850c85f +0x29:  mov    (%eax),%eax
0850c861 +0x2b:  imul   $0x3d,%eax,%eax
0850c864 +0x2e:  lea    (%edx,%eax,1),%eax
0850c867 +0x31:  add    $0x11,%eax
0850c86a +0x34:  mov    %eax,(%esp)
0850c86d +0x37:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
0850c872 +0x3c:  cmp    -0xc(%ebp),%al
0850c875 +0x3f:  sete   %al
0850c878 +0x42:  test   %al,%al
0850c87a +0x44:  je     0850c883 <+0x4d>
0850c87c +0x46:  mov    $0x1,%eax
0850c881 +0x4b:  jmp    0850c8a6 <+0x70>
0850c883 +0x4d:  mov    0x14(%ebp),%eax
0850c886 +0x50:  mov    (%eax),%eax
0850c888 +0x52:  lea    0x1(%eax),%edx
0850c88b +0x55:  mov    0x14(%ebp),%eax
0850c88e +0x58:  mov    %edx,(%eax)
0850c890 +0x5a:  mov    0x14(%ebp),%eax
0850c893 +0x5d:  mov    (%eax),%eax
0850c895 +0x5f:  cmp    $0x97,%eax
0850c89a +0x64:  setle  %al
0850c89d +0x67:  test   %al,%al
0850c89f +0x69:  jne    0850c856 <+0x20>
0850c8a1 +0x6b:  mov    $0x0,%eax
0850c8a6 +0x70:  leave
0850c8a7 +0x71:  ret
```

## 反编译 C

```c
// CCargo::FindItemLock @ 0x850c836

/* CCargo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CCargo::FindItemLock(CCargo *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  
  *(undefined4 *)param_2 = 2;
  *param_3 = 0;
  while( true ) {
    if (0x97 < *param_3) {
      return 0;
    }
    uVar1 = stAmplifyOption_t::GetLock
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + *param_3 * 0x3d + 0x11));
    if (uVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}
```

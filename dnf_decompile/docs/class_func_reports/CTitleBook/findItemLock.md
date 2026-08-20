# findItemLock

`_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi`

`CTitleBook::findItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641124  _ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi
#           CTitleBook::findItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
# range [0x08641124, 0x086411b9]
08641124 +0x00:  push   %ebp
08641125 +0x01:  mov    %esp,%ebp
08641127 +0x03:  sub    $0x38,%esp
0864112a +0x06:  mov    0xc(%ebp),%eax
0864112d +0x09:  mov    %al,-0x1c(%ebp)
08641130 +0x0c:  movl   $0x0,-0x10(%ebp)
08641137 +0x13:  jmp    086411a8 <+0x84>
08641139 +0x15:  movl   $0x0,-0xc(%ebp)
08641140 +0x1c:  jmp    08641190 <+0x6c>
08641142 +0x1e:  mov    -0x10(%ebp),%edx
08641145 +0x21:  mov    0x8(%ebp),%eax
08641148 +0x24:  add    $0x1ad0,%edx
0864114e +0x2a:  mov    0x8(%eax,%edx,4),%edx
08641152 +0x2e:  mov    -0xc(%ebp),%eax
08641155 +0x31:  imul   $0x3d,%eax,%eax
08641158 +0x34:  lea    (%edx,%eax,1),%eax
0864115b +0x37:  add    $0x11,%eax
0864115e +0x3a:  mov    %eax,(%esp)
08641161 +0x3d:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08641166 +0x42:  cmp    -0x1c(%ebp),%al
08641169 +0x45:  sete   %al
0864116c +0x48:  test   %al,%al
0864116e +0x4a:  je     0864118c <+0x68>
08641170 +0x4c:  mov    -0x10(%ebp),%eax
08641173 +0x4f:  add    $0x13,%eax
08641176 +0x52:  mov    %eax,%edx
08641178 +0x54:  mov    0x10(%ebp),%eax
0864117b +0x57:  mov    %edx,(%eax)
0864117d +0x59:  mov    0x14(%ebp),%eax
08641180 +0x5c:  mov    -0xc(%ebp),%edx
08641183 +0x5f:  mov    %edx,(%eax)
08641185 +0x61:  mov    $0x1,%eax
0864118a +0x66:  jmp    086411b8 <+0x94>
0864118c +0x68:  addl   $0x1,-0xc(%ebp)
08641190 +0x6c:  mov    -0x10(%ebp),%eax
08641193 +0x6f:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
0864119a +0x76:  cmp    -0xc(%ebp),%eax
0864119d +0x79:  setg   %al
086411a0 +0x7c:  test   %al,%al
086411a2 +0x7e:  jne    08641142 <+0x1e>
086411a4 +0x80:  addl   $0x1,-0x10(%ebp)
086411a8 +0x84:  cmpl   $0x3,-0x10(%ebp)
086411ac +0x88:  setle  %al
086411af +0x8b:  test   %al,%al
086411b1 +0x8d:  jne    08641139 <+0x15>
086411b3 +0x8f:  mov    $0x0,%eax
086411b8 +0x94:  leave
086411b9 +0x95:  ret
```

## 反编译 C

```c
// CTitleBook::findItemLock @ 0x8641124

/* CTitleBook::findItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CTitleBook::findItemLock(CTitleBook *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    for (local_10 = 0; local_10 < *(int *)(::TITLE_BOOK_MAX + local_14 * 4); local_10 = local_10 + 1
        ) {
      uVar1 = stAmplifyOption_t::GetLock
                        ((stAmplifyOption_t *)
                         (*(int *)(this + (local_14 + 0x1ad0) * 4 + 8) + local_10 * 0x3d + 0x11));
      if (uVar1 == param_1) {
        *(int *)param_2 = local_14 + 0x13;
        *param_3 = local_10;
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```

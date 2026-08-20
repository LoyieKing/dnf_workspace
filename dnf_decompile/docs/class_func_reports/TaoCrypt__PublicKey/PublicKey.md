# PublicKey

`_ZN8TaoCrypt9PublicKeyC1EPKhj`

`TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PublicKey` | `0x08753f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753f40  _ZN8TaoCrypt9PublicKeyC1EPKhj
#           TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int)
# range [0x08753f40, 0x08753f9a]
08753f40 +0x00:  push   %ebp
08753f41 +0x01:  mov    %esp,%ebp
08753f43 +0x03:  sub    $0x18,%esp
08753f46 +0x06:  mov    0x10(%ebp),%eax
08753f49 +0x09:  mov    %esi,-0x4(%ebp)
08753f4c +0x0c:  mov    0x8(%ebp),%esi
08753f4f +0x0f:  mov    %ebx,-0x8(%ebp)
08753f52 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08753f57 +0x17:  add    $0xc18c41,%ebx
08753f5d +0x1d:  test   %eax,%eax
08753f5f +0x1f:  movl   $0x0,(%esi)
08753f65 +0x25:  movl   $0x0,0x4(%esi)
08753f6c +0x2c:  je     08753f89 <+0x49>
08753f6e +0x2e:  mov    %eax,0x4(%esp)
08753f72 +0x32:  mov    %esi,(%esp)
08753f75 +0x35:  call   08753e50 <_ZN8TaoCrypt9PublicKey7SetSizeEj>  ; TaoCrypt::PublicKey::SetSize(unsigned int)
08753f7a +0x3a:  mov    0xc(%ebp),%eax
08753f7d +0x3d:  mov    %esi,(%esp)
08753f80 +0x40:  mov    %eax,0x4(%esp)
08753f84 +0x44:  call   08753ca0 <_ZN8TaoCrypt9PublicKey6SetKeyEPKh>  ; TaoCrypt::PublicKey::SetKey(unsigned char const*)
08753f89 +0x49:  mov    -0x8(%ebp),%ebx
08753f8c +0x4c:  mov    -0x4(%ebp),%esi
08753f8f +0x4f:  mov    %ebp,%esp
08753f91 +0x51:  pop    %ebp
08753f92 +0x52:  ret
08753f93 +0x53:  nop
08753f94 +0x54:  lea    0x0(%esi),%esi
08753f9a +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::PublicKey::PublicKey @ 0x8753f40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::PublicKey::PublicKey(PublicKey *this,uchar *param_1,uint param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (param_2 != 0) {
    SetSize(this,param_2);
    SetKey(this,param_1);
  }
  return;
}
```

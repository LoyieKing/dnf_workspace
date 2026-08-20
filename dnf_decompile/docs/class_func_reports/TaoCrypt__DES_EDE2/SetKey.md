# SetKey

`_ZN8TaoCrypt8DES_EDE26SetKeyEPKhjNS_9CipherDirE`

`TaoCrypt::DES_EDE2::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE2` | `0x087a7d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a7d70  _ZN8TaoCrypt8DES_EDE26SetKeyEPKhjNS_9CipherDirE
#           TaoCrypt::DES_EDE2::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
# range [0x087a7d70, 0x087a7dec]
087a7d70 +0x00:  push   %ebp
087a7d71 +0x01:  mov    %esp,%ebp
087a7d73 +0x03:  sub    $0x38,%esp
087a7d76 +0x06:  mov    %ebx,-0xc(%ebp)
087a7d79 +0x09:  mov    0x10(%ebp),%eax
087a7d7c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a7d81 +0x11:  add    $0xbc4e17,%ebx
087a7d87 +0x17:  mov    0x14(%ebp),%edx
087a7d8a +0x1a:  mov    %esi,-0x8(%ebp)
087a7d8d +0x1d:  mov    0x8(%ebp),%esi
087a7d90 +0x20:  mov    %edi,-0x4(%ebp)
087a7d93 +0x23:  mov    0xc(%ebp),%edi
087a7d96 +0x26:  mov    %eax,0x8(%esp)
087a7d9a +0x2a:  mov    %edx,0xc(%esp)
087a7d9e +0x2e:  lea    0x38(%esi),%ecx
087a7da1 +0x31:  mov    %edi,0x4(%esp)
087a7da5 +0x35:  mov    %ecx,(%esp)
087a7da8 +0x38:  mov    %eax,-0x1c(%ebp)
087a7dab +0x3b:  mov    %edx,-0x20(%ebp)
087a7dae +0x3e:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7db3 +0x43:  mov    -0x20(%ebp),%edx
087a7db6 +0x46:  mov    -0x1c(%ebp),%eax
087a7db9 +0x49:  test   %edx,%edx
087a7dbb +0x4b:  sete   %dl
087a7dbe +0x4e:  add    $0x8,%edi
087a7dc1 +0x51:  movzbl %dl,%edx
087a7dc4 +0x54:  add    $0xb8,%esi
087a7dca +0x5a:  mov    %edi,0x4(%esp)
087a7dce +0x5e:  mov    %esi,(%esp)
087a7dd1 +0x61:  mov    %edx,0xc(%esp)
087a7dd5 +0x65:  mov    %eax,0x8(%esp)
087a7dd9 +0x69:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7dde +0x6e:  mov    -0xc(%ebp),%ebx
087a7de1 +0x71:  mov    -0x8(%ebp),%esi
087a7de4 +0x74:  mov    -0x4(%ebp),%edi
087a7de7 +0x77:  mov    %ebp,%esp
087a7de9 +0x79:  pop    %ebp
087a7dea +0x7a:  ret
087a7deb +0x7b:  nop
087a7dec +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DES_EDE2::SetKey @ 0x87a7d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE2::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::DES_EDE2::SetKey(DES_EDE2 *this,int param_1,undefined4 param_2,int param_4)

{
  BasicDES::SetKey((BasicDES *)(this + 0x38),param_1,param_2,param_4);
  BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,param_4 == 0);
  return;
}
```

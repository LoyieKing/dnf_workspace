# SetSize

`_ZN8TaoCrypt9PublicKey7SetSizeEj`

`TaoCrypt::PublicKey::SetSize(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PublicKey` | `0x08753e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753e50  _ZN8TaoCrypt9PublicKey7SetSizeEj
#           TaoCrypt::PublicKey::SetSize(unsigned int)
# range [0x08753e50, 0x08753e8c]
08753e50 +0x00:  push   %ebp
08753e51 +0x01:  mov    %esp,%ebp
08753e53 +0x03:  sub    $0x18,%esp
08753e56 +0x06:  mov    %esi,-0x4(%ebp)
08753e59 +0x09:  mov    0xc(%ebp),%eax
08753e5c +0x0c:  mov    0x8(%ebp),%esi
08753e5f +0x0f:  mov    %ebx,-0x8(%ebp)
08753e62 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08753e67 +0x17:  add    $0xc18d31,%ebx
08753e6d +0x1d:  mov    %eax,0x4(%esi)
08753e70 +0x20:  movb   $0x0,0x4(%esp)
08753e75 +0x25:  mov    0x4(%esi),%eax
08753e78 +0x28:  mov    %eax,(%esp)
08753e7b +0x2b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08753e80 +0x30:  mov    %eax,(%esi)
08753e82 +0x32:  mov    -0x8(%ebp),%ebx
08753e85 +0x35:  mov    -0x4(%ebp),%esi
08753e88 +0x38:  mov    %ebp,%esp
08753e8a +0x3a:  pop    %ebp
08753e8b +0x3b:  ret
08753e8c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PublicKey::SetSize @ 0x8753e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::SetSize(unsigned int) */

void __thiscall TaoCrypt::PublicKey::SetSize(PublicKey *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)(this + 4) = param_1;
  pvVar1 = operator_new__(*(undefined4 *)(this + 4),0);
  *(void **)this = pvVar1;
  return;
}
```

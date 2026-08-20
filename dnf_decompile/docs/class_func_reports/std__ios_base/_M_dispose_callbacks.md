# _M_dispose_callbacks

`_ZNSt8ios_base20_M_dispose_callbacksEv`

`std::ios_base::_M_dispose_callbacks()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08726db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726db0  _ZNSt8ios_base20_M_dispose_callbacksEv
#           std::ios_base::_M_dispose_callbacks()
# range [0x08726db0, 0x08726e1f]
08726db0 +0x00:  push   %ebp
08726db1 +0x01:  mov    %esp,%ebp
08726db3 +0x03:  push   %edi
08726db4 +0x04:  push   %esi
08726db5 +0x05:  push   %ebx
08726db6 +0x06:  sub    $0x2c,%esp
08726db9 +0x09:  mov    0x8(%ebp),%edi
08726dbc +0x0c:  mov    0x18(%edi),%eax
08726dbf +0x0f:  test   %eax,%eax
08726dc1 +0x11:  je     08726df8 <+0x48>
08726dc3 +0x13:  mov    $&data#bb92cc41(.plt),%ebx
08726dc8 +0x18:  mov    $0xffffffff,%esi
08726dcd +0x1d:  lea    0x0(%esi),%esi
08726dd0 +0x20:  test   %ebx,%ebx
08726dd2 +0x22:  je     08726e07 <+0x57>
08726dd4 +0x24:  mov    %esi,%edx
08726dd6 +0x26:  lock xadd %edx,0xc(%eax)
08726ddb +0x2b:  test   %edx,%edx
08726ddd +0x2d:  jne    08726df8 <+0x48>
08726ddf +0x2f:  mov    (%eax),%edx
08726de1 +0x31:  mov    %eax,(%esp)
08726de4 +0x34:  mov    %edx,-0x1c(%ebp)
08726de7 +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08726dec +0x3c:  mov    -0x1c(%ebp),%eax
08726def +0x3f:  test   %eax,%eax
08726df1 +0x41:  jne    08726dd0 <+0x20>
08726df3 +0x43:  nop
08726df4 +0x44:  lea    0x0(%esi,%eiz,1),%esi
08726df8 +0x48:  movl   $0x0,0x18(%edi)
08726dff +0x4f:  add    $0x2c,%esp
08726e02 +0x52:  pop    %ebx
08726e03 +0x53:  pop    %esi
08726e04 +0x54:  pop    %edi
08726e05 +0x55:  pop    %ebp
08726e06 +0x56:  ret
08726e07 +0x57:  mov    0xc(%eax),%edx
08726e0a +0x5a:  lea    -0x1(%edx),%ecx
08726e0d +0x5d:  mov    %ecx,0xc(%eax)
08726e10 +0x60:  jmp    08726ddb <+0x2b>
08726e12 +0x62:  nop
08726e13 +0x63:  nop
08726e14 +0x64:  nop
08726e15 +0x65:  nop
08726e16 +0x66:  nop
08726e17 +0x67:  nop
08726e18 +0x68:  nop
08726e19 +0x69:  nop
08726e1a +0x6a:  nop
08726e1b +0x6b:  nop
08726e1c +0x6c:  nop
08726e1d +0x6d:  nop
08726e1e +0x6e:  nop
08726e1f +0x6f:  nop
```

## 反编译 C

```c
// std::ios_base::_M_dispose_callbacks @ 0x8726db0

/* WARNING: Removing unreachable block (ram,0x08726e07) */
/* std::ios_base::_M_dispose_callbacks() */

void __thiscall std::ios_base::_M_dispose_callbacks(ios_base *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 0x18);
  while (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 3;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 0) break;
    puVar3 = (undefined4 *)*puVar4;
    operator_delete(puVar4);
    puVar4 = puVar3;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```

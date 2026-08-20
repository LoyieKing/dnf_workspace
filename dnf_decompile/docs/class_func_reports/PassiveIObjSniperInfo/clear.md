# clear

`_ZN21PassiveIObjSniperInfo5clearEv`

`PassiveIObjSniperInfo::clear()`

| 类 | 地址 |
|---|---|
| `PassiveIObjSniperInfo` | `0x08a3afc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3afc0  _ZN21PassiveIObjSniperInfo5clearEv
#           PassiveIObjSniperInfo::clear()
# range [0x08a3afc0, 0x08a3b0ac]
08a3afc0 +0x00:  push   %ebp
08a3afc1 +0x01:  mov    %esp,%ebp
08a3afc3 +0x03:  sub    $0x28,%esp
08a3afc6 +0x06:  mov    0x8(%ebp),%eax
08a3afc9 +0x09:  mov    %eax,(%esp)
08a3afcc +0x0c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3afd1 +0x11:  mov    0x8(%ebp),%eax
08a3afd4 +0x14:  add    $0xc,%eax
08a3afd7 +0x17:  mov    %eax,(%esp)
08a3afda +0x1a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3afdf +0x1f:  mov    0x8(%ebp),%eax
08a3afe2 +0x22:  add    $0x18,%eax
08a3afe5 +0x25:  mov    %eax,(%esp)
08a3afe8 +0x28:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3afed +0x2d:  mov    0x8(%ebp),%eax
08a3aff0 +0x30:  add    $0x24,%eax
08a3aff3 +0x33:  mov    %eax,(%esp)
08a3aff6 +0x36:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3affb +0x3b:  mov    0x8(%ebp),%eax
08a3affe +0x3e:  movl   $0x0,0x30(%eax)
08a3b005 +0x45:  mov    0x8(%ebp),%eax
08a3b008 +0x48:  movl   $0x0,0x34(%eax)
08a3b00f +0x4f:  mov    0x8(%ebp),%eax
08a3b012 +0x52:  movb   $0x0,0x38(%eax)
08a3b016 +0x56:  mov    0x8(%ebp),%eax
08a3b019 +0x59:  movb   $0x0,0x40(%eax)
08a3b01d +0x5d:  mov    0x8(%ebp),%eax
08a3b020 +0x60:  movl   $0x0,0x3c(%eax)
08a3b027 +0x67:  movl   $0x0,-0x10(%ebp)
08a3b02e +0x6e:  jmp    08a3b045 <+0x85>
08a3b030 +0x70:  mov    -0x10(%ebp),%edx
08a3b033 +0x73:  mov    0x8(%ebp),%eax
08a3b036 +0x76:  add    $0x10,%edx
08a3b039 +0x79:  movl   $0x0,0x4(%eax,%edx,4)
08a3b041 +0x81:  addl   $0x1,-0x10(%ebp)
08a3b045 +0x85:  cmpl   $0x5,-0x10(%ebp)
08a3b049 +0x89:  setle  %al
08a3b04c +0x8c:  test   %al,%al
08a3b04e +0x8e:  jne    08a3b030 <+0x70>
08a3b050 +0x90:  movl   $0x0,-0xc(%ebp)
08a3b057 +0x97:  jmp    08a3b06e <+0xae>
08a3b059 +0x99:  mov    -0xc(%ebp),%edx
08a3b05c +0x9c:  mov    0x8(%ebp),%eax
08a3b05f +0x9f:  add    $0x1c,%edx
08a3b062 +0xa2:  movl   $0x0,0x4(%eax,%edx,4)
08a3b06a +0xaa:  addl   $0x1,-0xc(%ebp)
08a3b06e +0xae:  cmpl   $0x2,-0xc(%ebp)
08a3b072 +0xb2:  setle  %al
08a3b075 +0xb5:  test   %al,%al
08a3b077 +0xb7:  jne    08a3b059 <+0x99>
08a3b079 +0xb9:  mov    0x8(%ebp),%eax
08a3b07c +0xbc:  movl   $0x0,0x5c(%eax)
08a3b083 +0xc3:  mov    0x8(%ebp),%eax
08a3b086 +0xc6:  movl   $0x0,0x60(%eax)
08a3b08d +0xcd:  mov    0x8(%ebp),%eax
08a3b090 +0xd0:  movl   $0x0,0x64(%eax)
08a3b097 +0xd7:  mov    0x8(%ebp),%eax
08a3b09a +0xda:  movl   $0x0,0x6c(%eax)
08a3b0a1 +0xe1:  mov    0x8(%ebp),%eax
08a3b0a4 +0xe4:  movl   $0x0,0x70(%eax)
08a3b0ab +0xeb:  leave
08a3b0ac +0xec:  ret
```

## 反编译 C

```c
// PassiveIObjSniperInfo::clear @ 0x8a3afc0

/* PassiveIObjSniperInfo::clear() */

void __thiscall PassiveIObjSniperInfo::clear(PassiveIObjSniperInfo *this)

{
  int local_14;
  int local_10;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x18));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x24));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (PassiveIObjSniperInfo)0x0;
  this[0x40] = (PassiveIObjSniperInfo)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x10) * 4 + 4) = 0;
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x1c) * 4 + 4) = 0;
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}
```

# getItemCheckFlag

`_ZNK15CItemDictionary16getItemCheckFlagEjj`

`CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811da32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811da32  _ZNK15CItemDictionary16getItemCheckFlagEjj
#           CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const
# range [0x0811da32, 0x0811daed]
0811da32 +0x00:  push   %ebp
0811da33 +0x01:  mov    %esp,%ebp
0811da35 +0x03:  push   %ebx
0811da36 +0x04:  sub    $0x44,%esp
0811da39 +0x07:  mov    0x10(%ebp),%eax
0811da3c +0x0a:  shr    $0x3,%eax
0811da3f +0x0d:  mov    %eax,-0x14(%ebp)
0811da42 +0x10:  mov    0x10(%ebp),%eax
0811da45 +0x13:  and    $0x7,%eax
0811da48 +0x16:  mov    %eax,-0x10(%ebp)
0811da4b +0x19:  cmpl   $0x0,-0x14(%ebp)
0811da4f +0x1d:  js     0811da66 <+0x34>
0811da51 +0x1f:  cmpl   $0x1387,-0x14(%ebp)
0811da58 +0x26:  jg     0811da66 <+0x34>
0811da5a +0x28:  cmpl   $0x0,-0x10(%ebp)
0811da5e +0x2c:  js     0811da66 <+0x34>
0811da60 +0x2e:  cmpl   $0x7,-0x10(%ebp)
0811da64 +0x32:  jle    0811dab5 <+0x83>
0811da66 +0x34:  mov    -0x10(%ebp),%eax
0811da69 +0x37:  mov    %eax,0x20(%esp)
0811da6d +0x3b:  mov    -0x14(%ebp),%eax
0811da70 +0x3e:  mov    %eax,0x1c(%esp)
0811da74 +0x42:  mov    0x10(%ebp),%eax
0811da77 +0x45:  mov    %eax,0x18(%esp)
0811da7b +0x49:  mov    0xc(%ebp),%eax
0811da7e +0x4c:  mov    %eax,0x14(%esp)
0811da82 +0x50:  movl   $"getItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",0x10(%esp)
0811da8a +0x58:  movl   $0x7d,0xc(%esp)
0811da92 +0x60:  movl   $&_ZZNK15CItemDictionary16getItemCheckFlagEjjE19__PRETTY_FUNCTION__,0x8(%esp)
0811da9a +0x68:  movl   $"ItemDictionary.cpp",0x4(%esp)
0811daa2 +0x70:  movl   $0x1,(%esp)
0811daa9 +0x77:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0811daae +0x7c:  mov    $0x1,%eax
0811dab3 +0x81:  jmp    0811dae8 <+0xb6>
0811dab5 +0x83:  mov    -0x14(%ebp),%eax
0811dab8 +0x86:  mov    0x8(%ebp),%edx
0811dabb +0x89:  movzbl 0x5(%edx,%eax,1),%eax
0811dac0 +0x8e:  mov    %al,-0x9(%ebp)
0811dac3 +0x91:  movzbl -0x9(%ebp),%edx
0811dac7 +0x95:  mov    -0x10(%ebp),%eax
0811daca +0x98:  mov    %edx,%ebx
0811dacc +0x9a:  mov    %eax,%ecx
0811dace +0x9c:  sar    %cl,%ebx
0811dad0 +0x9e:  mov    %ebx,%eax
0811dad2 +0xa0:  and    $0x1,%eax
0811dad5 +0xa3:  xor    $0x1,%eax
0811dad8 +0xa6:  test   %al,%al
0811dada +0xa8:  je     0811dae3 <+0xb1>
0811dadc +0xaa:  mov    $0x0,%eax
0811dae1 +0xaf:  jmp    0811dae8 <+0xb6>
0811dae3 +0xb1:  mov    $0x1,%eax
0811dae8 +0xb6:  add    $0x44,%esp
0811daeb +0xb9:  pop    %ebx
0811daec +0xba:  pop    %ebp
0811daed +0xbb:  ret
```

## 反编译 C

```c
// CItemDictionary::getItemCheckFlag @ 0x811da32

/* CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const */

undefined4 __thiscall
CItemDictionary::getItemCheckFlag(CItemDictionary *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 >> 3;
  uVar2 = param_2 & 7;
  if ((uVar1 < 5000) && (uVar2 < 8)) {
    if (((byte)((int)(uint)(byte)this[uVar1 + 5] >> (sbyte)uVar2) & 1) == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"ItemDictionary.cpp",
               "bool CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const",0x7d,
               "getItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",param_1,param_2,
               uVar1,uVar2);
    uVar3 = 1;
  }
  return uVar3;
}
```

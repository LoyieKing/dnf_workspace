# GetProtectionType

`_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION`

`CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x082880dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082880dc  _ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION
#           CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION)
# range [0x082880dc, 0x0828813f]
082880dc +0x00:  push   %ebp
082880dd +0x01:  mov    %esp,%ebp
082880df +0x03:  sub    $0x28,%esp
082880e2 +0x06:  mov    0x8(%ebp),%edx
082880e5 +0x09:  lea    -0x10(%ebp),%eax
082880e8 +0x0c:  lea    0xc(%ebp),%ecx
082880eb +0x0f:  mov    %ecx,0x8(%esp)
082880ef +0x13:  mov    %edx,0x4(%esp)
082880f3 +0x17:  mov    %eax,(%esp)
082880f6 +0x1a:  call   08288e8e <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x2d>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x2d
082880fb +0x1f:  sub    $0x4,%esp
082880fe +0x22:  mov    0x8(%ebp),%edx
08288101 +0x25:  lea    -0xc(%ebp),%eax
08288104 +0x28:  mov    %edx,0x4(%esp)
08288108 +0x2c:  mov    %eax,(%esp)
0828810b +0x2f:  call   08288eba <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x59>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x59
08288110 +0x34:  sub    $0x4,%esp
08288113 +0x37:  lea    -0xc(%ebp),%eax
08288116 +0x3a:  mov    %eax,0x4(%esp)
0828811a +0x3e:  lea    -0x10(%ebp),%eax
0828811d +0x41:  mov    %eax,(%esp)
08288120 +0x44:  call   08288ee0 <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x7f>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x7f
08288125 +0x49:  test   %al,%al
08288127 +0x4b:  je     08288139 <+0x5d>
08288129 +0x4d:  lea    -0x10(%ebp),%eax
0828812c +0x50:  mov    %eax,(%esp)
0828812f +0x53:  call   08288ef4 <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x93>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x93
08288134 +0x58:  mov    0x4(%eax),%eax
08288137 +0x5b:  jmp    0828813e <+0x62>
08288139 +0x5d:  mov    $0x0,%eax
0828813e +0x62:  leave
0828813f +0x63:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::GetProtectionType @ 0x82880dc

/* CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION) */

undefined4 CSecu_ProtectionField::GetProtectionType(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>> local_14 [4];
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  local_10 [12];
  
  std::
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  ::find(local_14);
  std::
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

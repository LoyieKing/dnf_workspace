# CheckMonsterKill

`_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh`

`CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d0ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d0ea  _ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh
#           CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned char)
# range [0x0854d0ea, 0x0854d183]
0854d0ea +0x00:  push   %ebp
0854d0eb +0x01:  mov    %esp,%ebp
0854d0ed +0x03:  push   %ebx
0854d0ee +0x04:  sub    $0x34,%esp
0854d0f1 +0x07:  mov    0x14(%ebp),%eax
0854d0f4 +0x0a:  mov    %al,-0x1c(%ebp)
0854d0f7 +0x0d:  lea    -0x10(%ebp),%eax
0854d0fa +0x10:  lea    0x10(%ebp),%edx
0854d0fd +0x13:  mov    %edx,0x8(%esp)
0854d101 +0x17:  mov    0xc(%ebp),%edx
0854d104 +0x1a:  mov    %edx,0x4(%esp)
0854d108 +0x1e:  mov    %eax,(%esp)
0854d10b +0x21:  call   0854d6b4 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x1ae>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x1ae
0854d110 +0x26:  sub    $0x4,%esp
0854d113 +0x29:  lea    -0xc(%ebp),%eax
0854d116 +0x2c:  mov    0xc(%ebp),%edx
0854d119 +0x2f:  mov    %edx,0x4(%esp)
0854d11d +0x33:  mov    %eax,(%esp)
0854d120 +0x36:  call   0854d61a <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x114>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x114
0854d125 +0x3b:  sub    $0x4,%esp
0854d128 +0x3e:  lea    -0xc(%ebp),%eax
0854d12b +0x41:  mov    %eax,0x4(%esp)
0854d12f +0x45:  lea    -0x10(%ebp),%eax
0854d132 +0x48:  mov    %eax,(%esp)
0854d135 +0x4b:  call   0854d640 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x13a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x13a
0854d13a +0x50:  test   %al,%al
0854d13c +0x52:  je     0854d179 <+0x8f>
0854d13e +0x54:  lea    -0x10(%ebp),%eax
0854d141 +0x57:  mov    %eax,(%esp)
0854d144 +0x5a:  call   0854d692 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x18c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x18c
0854d149 +0x5f:  movzbl 0x4(%eax),%ebx
0854d14d +0x63:  movzbl -0x1c(%ebp),%eax
0854d151 +0x67:  mov    %eax,0x4(%esp)
0854d155 +0x6b:  mov    0x8(%ebp),%eax
0854d158 +0x6e:  mov    %eax,(%esp)
0854d15b +0x71:  call   0854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>  ; CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char)
0854d160 +0x76:  and    %ebx,%eax
0854d162 +0x78:  test   %al,%al
0854d164 +0x7a:  setne  %al
0854d167 +0x7d:  test   %al,%al
0854d169 +0x7f:  je     0854d172 <+0x88>
0854d16b +0x81:  mov    $0x1,%eax
0854d170 +0x86:  jmp    0854d17e <+0x94>
0854d172 +0x88:  mov    $0x0,%eax
0854d177 +0x8d:  jmp    0854d17e <+0x94>
0854d179 +0x8f:  mov    $0x0,%eax
0854d17e +0x94:  mov    -0x4(%ebp),%ebx
0854d181 +0x97:  leave
0854d182 +0x98:  ret
0854d183 +0x99:  nop
```

## 反编译 C

```c
// CKillMonsterInfo::CheckMonsterKill @ 0x854d0ea

/* CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned
   char) */

undefined4 __thiscall
CKillMonsterInfo::CheckMonsterKill(CKillMonsterInfo *this,map *param_1,uint param_2,uchar param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> local_14 [4];
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_10 [8];
  
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator->
                      (local_14);
    bVar1 = *(byte *)(iVar4 + 4);
    bVar3 = GetDungeonDifficultyFlag(this,param_3);
    if ((bVar3 & bVar1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```

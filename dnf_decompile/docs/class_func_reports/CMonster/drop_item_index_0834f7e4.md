# drop_item_index

`_ZNK8CMonster15drop_item_indexEji`

`CMonster::drop_item_index(unsigned int, int) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f7e4  _ZNK8CMonster15drop_item_indexEji
#           CMonster::drop_item_index(unsigned int, int) const
# range [0x0834f7e4, 0x0834f849]
0834f7e4 +0x00:  push   %ebp
0834f7e5 +0x01:  mov    %esp,%ebp
0834f7e7 +0x03:  push   %ebx
0834f7e8 +0x04:  sub    $0x14,%esp
0834f7eb +0x07:  mov    0x8(%ebp),%eax
0834f7ee +0x0a:  add    $0x3c,%eax
0834f7f1 +0x0d:  mov    %eax,(%esp)
0834f7f4 +0x10:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0834f7f9 +0x15:  xor    $0x1,%eax
0834f7fc +0x18:  test   %al,%al
0834f7fe +0x1a:  je     0834f822 <+0x3e>
0834f800 +0x1c:  mov    0x8(%ebp),%eax
0834f803 +0x1f:  lea    0x3c(%eax),%ebx
0834f806 +0x22:  mov    0x8(%ebp),%eax
0834f809 +0x25:  mov    0x38(%eax),%eax
0834f80c +0x28:  mov    %eax,(%esp)
0834f80f +0x2b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834f814 +0x30:  mov    %ebx,0x4(%esp)
0834f818 +0x34:  mov    %eax,(%esp)
0834f81b +0x37:  call   08349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>  ; _drop_item_index(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0834f820 +0x3c:  jmp    0834f843 <+0x5f>
0834f822 +0x3e:  mov    0xc(%ebp),%edx
0834f825 +0x41:  mov    %edx,%eax
0834f827 +0x43:  add    %eax,%eax
0834f829 +0x45:  add    %edx,%eax
0834f82b +0x47:  shl    $0x2,%eax
0834f82e +0x4a:  add    0x8(%ebp),%eax
0834f831 +0x4d:  add    $0x8,%eax
0834f834 +0x50:  mov    %eax,0x4(%esp)
0834f838 +0x54:  mov    0x10(%ebp),%eax
0834f83b +0x57:  mov    %eax,(%esp)
0834f83e +0x5a:  call   08349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>  ; _drop_item_index(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0834f843 +0x5f:  add    $0x14,%esp
0834f846 +0x62:  pop    %ebx
0834f847 +0x63:  pop    %ebp
0834f848 +0x64:  ret
0834f849 +0x65:  nop
```

## 反编译 C

```c
// CMonster::drop_item_index @ 0x834f7e4

/* CMonster::drop_item_index(unsigned int, int) const */

void __thiscall CMonster::drop_item_index(CMonster *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar1 == '\x01') {
    _drop_item_index(param_2,(vector *)(this + param_1 * 0xc + 8));
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + 0x38));
    _drop_item_index(iVar2,(vector *)(this + 0x3c));
  }
  return;
}
```

# drop_item_index

`_ZNK8CMonster15drop_item_indexEj`

`CMonster::drop_item_index(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f776` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f776  _ZNK8CMonster15drop_item_indexEj
#           CMonster::drop_item_index(unsigned int) const
# range [0x0834f776, 0x0834f7e3]
0834f776 +0x00:  push   %ebp
0834f777 +0x01:  mov    %esp,%ebp
0834f779 +0x03:  push   %ebx
0834f77a +0x04:  sub    $0x14,%esp
0834f77d +0x07:  mov    0x8(%ebp),%eax
0834f780 +0x0a:  add    $0x3c,%eax
0834f783 +0x0d:  mov    %eax,(%esp)
0834f786 +0x10:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0834f78b +0x15:  xor    $0x1,%eax
0834f78e +0x18:  test   %al,%al
0834f790 +0x1a:  je     0834f7b4 <+0x3e>
0834f792 +0x1c:  mov    0x8(%ebp),%eax
0834f795 +0x1f:  lea    0x3c(%eax),%ebx
0834f798 +0x22:  mov    0x8(%ebp),%eax
0834f79b +0x25:  mov    0x38(%eax),%eax
0834f79e +0x28:  mov    %eax,(%esp)
0834f7a1 +0x2b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834f7a6 +0x30:  mov    %ebx,0x4(%esp)
0834f7aa +0x34:  mov    %eax,(%esp)
0834f7ad +0x37:  call   08349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>  ; _drop_item_index(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0834f7b2 +0x3c:  jmp    0834f7de <+0x68>
0834f7b4 +0x3e:  mov    0xc(%ebp),%edx
0834f7b7 +0x41:  mov    %edx,%eax
0834f7b9 +0x43:  add    %eax,%eax
0834f7bb +0x45:  add    %edx,%eax
0834f7bd +0x47:  shl    $0x2,%eax
0834f7c0 +0x4a:  add    0x8(%ebp),%eax
0834f7c3 +0x4d:  lea    0x8(%eax),%ebx
0834f7c6 +0x50:  movl   $0x2710,(%esp)
0834f7cd +0x57:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834f7d2 +0x5c:  mov    %ebx,0x4(%esp)
0834f7d6 +0x60:  mov    %eax,(%esp)
0834f7d9 +0x63:  call   08349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>  ; _drop_item_index(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0834f7de +0x68:  add    $0x14,%esp
0834f7e1 +0x6b:  pop    %ebx
0834f7e2 +0x6c:  pop    %ebp
0834f7e3 +0x6d:  ret
```

## 反编译 C

```c
// CMonster::drop_item_index @ 0x834f776

/* CMonster::drop_item_index(unsigned int) const */

void __thiscall CMonster::drop_item_index(CMonster *this,uint param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar1 == '\x01') {
    iVar2 = get_rand_int(10000);
    _drop_item_index(iVar2,(vector *)(this + param_1 * 0xc + 8));
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + 0x38));
    _drop_item_index(iVar2,(vector *)(this + 0x3c));
  }
  return;
}
```

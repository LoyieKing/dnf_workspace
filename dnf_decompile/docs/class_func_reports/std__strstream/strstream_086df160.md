# strstream

`_ZNSt9strstreamC2Ev`

`std::strstream::strstream()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086df160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df160  _ZNSt9strstreamC2Ev
#           std::strstream::strstream()
# range [0x086df160, 0x086df25f]
086df160 +0x00:  push   %ebp
086df161 +0x01:  mov    %esp,%ebp
086df163 +0x03:  push   %edi
086df164 +0x04:  push   %esi
086df165 +0x05:  push   %ebx
086df166 +0x06:  sub    $0x2c,%esp
086df169 +0x09:  mov    0xc(%ebp),%esi
086df16c +0x0c:  mov    0x8(%ebp),%ebx
086df16f +0x0f:  mov    0x8(%esi),%eax
086df172 +0x12:  lea    0x4(%esi),%edi
086df175 +0x15:  mov    0xc(%esi),%edx
086df178 +0x18:  mov    %eax,(%ebx)
086df17a +0x1a:  mov    -0xc(%eax),%eax
086df17d +0x1d:  movl   $0x0,0x4(%ebx)
086df184 +0x24:  mov    %edx,(%ebx,%eax,1)
086df187 +0x27:  movl   $0x0,0x4(%esp)
086df18f +0x2f:  mov    (%ebx),%eax
086df191 +0x31:  mov    -0xc(%eax),%eax
086df194 +0x34:  lea    (%ebx,%eax,1),%eax
086df197 +0x37:  mov    %eax,(%esp)
086df19a +0x3a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df19f +0x3f:  mov    0xc(%edi),%edx
086df1a2 +0x42:  lea    0x8(%ebx),%eax
086df1a5 +0x45:  mov    0x10(%edi),%ecx
086df1a8 +0x48:  mov    %edx,0x8(%ebx)
086df1ab +0x4b:  mov    -0xc(%edx),%edx
086df1ae +0x4e:  mov    %ecx,0x8(%ebx,%edx,1)
086df1b2 +0x52:  movl   $0x0,0x4(%esp)
086df1ba +0x5a:  mov    0x8(%ebx),%edx
086df1bd +0x5d:  add    -0xc(%edx),%eax
086df1c0 +0x60:  mov    %eax,(%esp)
086df1c3 +0x63:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df1c8 +0x68:  mov    0x4(%esi),%eax
086df1cb +0x6b:  mov    0x14(%edi),%edx
086df1ce +0x6e:  mov    -0xc(%eax),%eax
086df1d1 +0x71:  mov    %edx,(%ebx,%eax,1)
086df1d4 +0x74:  mov    (%esi),%eax
086df1d6 +0x76:  mov    0x20(%esi),%edx
086df1d9 +0x79:  mov    %eax,(%ebx)
086df1db +0x7b:  mov    -0xc(%eax),%eax
086df1de +0x7e:  mov    %edx,(%ebx,%eax,1)
086df1e1 +0x81:  mov    0x24(%esi),%eax
086df1e4 +0x84:  lea    0xc(%ebx),%esi
086df1e7 +0x87:  mov    %eax,0x8(%ebx)
086df1ea +0x8a:  movl   $0x0,0x4(%esp)
086df1f2 +0x92:  mov    %esi,(%esp)
086df1f5 +0x95:  call   086ddb90 <_ZNSt12strstreambufC1Ei>  ; std::strstreambuf::strstreambuf(int)
086df1fa +0x9a:  mov    %esi,0x4(%esp)
086df1fe +0x9e:  mov    (%ebx),%eax
086df200 +0xa0:  mov    -0xc(%eax),%eax
086df203 +0xa3:  lea    (%ebx,%eax,1),%eax
086df206 +0xa6:  mov    %eax,(%esp)
086df209 +0xa9:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df20e +0xae:  add    $0x2c,%esp
086df211 +0xb1:  pop    %ebx
086df212 +0xb2:  pop    %esi
086df213 +0xb3:  pop    %edi
086df214 +0xb4:  pop    %ebp
086df215 +0xb5:  ret
086df216 +0xb6:  mov    %eax,(%esp)
086df219 +0xb9:  call   08ae3750 <_Unwind_Resume>
086df21e +0xbe:  mov    %eax,-0x1c(%ebp)
086df221 +0xc1:  mov    %esi,(%esp)
086df224 +0xc4:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086df229 +0xc9:  mov    -0x1c(%ebp),%eax
086df22c +0xcc:  mov    %eax,-0x1c(%ebp)
086df22f +0xcf:  mov    %edi,0x4(%esp)
086df233 +0xd3:  mov    %ebx,(%esp)
086df236 +0xd6:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086df23b +0xdb:  mov    -0x1c(%ebp),%eax
086df23e +0xde:  jmp    086df216 <+0xb6>
086df240 +0xe0:  jmp    086df22c <+0xcc>
086df242 +0xe2:  mov    0x8(%esi),%edx
086df245 +0xe5:  mov    0xc(%esi),%ecx
086df248 +0xe8:  mov    %edx,(%ebx)
086df24a +0xea:  mov    -0xc(%edx),%edx
086df24d +0xed:  movl   $0x0,0x4(%ebx)
086df254 +0xf4:  mov    %ecx,(%ebx,%edx,1)
086df257 +0xf7:  jmp    086df216 <+0xb6>
086df259 +0xf9:  nop
086df25a +0xfa:  nop
086df25b +0xfb:  nop
086df25c +0xfc:  nop
086df25d +0xfd:  nop
086df25e +0xfe:  nop
086df25f +0xff:  nop
```

## 反编译 C

```c
// std::strstream::strstream @ 0x86df160

/* std::strstream::strstream() */

void __thiscall std::strstream::strstream(strstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = in_stack_00000008[2];
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
                    /* try { // try from 086df19a to 086df19e has its CatchHandler @ 086df216 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = in_stack_00000008[4];
  iVar2 = in_stack_00000008[5];
  *(int *)(this + 8) = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc) + 8) = iVar2;
                    /* try { // try from 086df1c3 to 086df1c7 has its CatchHandler @ 086df242 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(int *)(this + *(int *)(in_stack_00000008[1] + -0xc)) = in_stack_00000008[6];
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[8];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  *(int *)(this + 8) = in_stack_00000008[9];
                    /* try { // try from 086df1f5 to 086df1f9 has its CatchHandler @ 086df240 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),0);
                    /* try { // try from 086df209 to 086df20d has its CatchHandler @ 086df21e */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 0xc));
  return;
}
```
